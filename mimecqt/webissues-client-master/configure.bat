@echo off

set prefix="C:\Program Files\WebIssues Client\1.0"
set config=release
set syssqlite=no
set msvc=no
set incdir=
set libdir=

if exist .\webissues.pro goto arg_loop

echo *** ERROR: cannot find project file in current directory.
goto end

:arg_loop
if "%1" == "" goto arg_done
if "%1" == "-prefix" goto arg_prefix
if "%1" == "-debug" goto arg_debug
if "%1" == "-system-sqlite" goto arg_syssqlite
if "%1" == "-msvc" goto arg_msvc
if "%1" == "-I" goto arg_incdir
if "%1" == "-L" goto arg_libdir
if "%1" == "-help" goto show_usage
if "%1" == "--help" goto show_usage
if "%1" == "/?" goto show_usage

echo *** ERROR: Unrecognized option '%1'
goto show_usage

:arg_prefix
set prefix=%2
shift
goto arg_next

:arg_debug
set config=debug
goto arg_next

:arg_syssqlite
set syssqlite=yes
goto arg_next

:arg_msvc
set msvc=yes
goto arg_next

:arg_incdir
set incdir="QMAKE_INCDIR += %2"
shift
goto arg_next

:arg_libdir
set libdir="QMAKE_LIBDIR += %2"
shift
goto arg_next

:arg_next
shift
goto arg_loop

:show_usage
echo Usage: configure [-prefix DIR] [-debug] [-system-sqlite] [-msvc]
echo                  [-I DIRS] [-L DIRS]
echo.
echo Options:
echo.
echo   -prefix DIR    Set the instalation directory to DIR
echo                    (default: C:\Program Files\WebIssues Client\1.0)
echo   -debug         Build with debugging symbols
echo   -system-sqlite Use system SQLite library
echo   -msvc          Generate Visual Studio solution
echo   -I DIRS        Specify additional include directories
echo   -L DIRS        Specify additional library directories
goto end

:arg_done

echo Testing for qmake...

set QMAKE=

qmake -v >nul 2>nul
if errorlevel 1 goto test_qtdir
set QMAKE=qmake
goto qmake_found

:test_qtdir
if "%QTDIR%" == "" goto no_qmake
"%QTDIR%\bin\qmake" -v >nul 2>nul
if errorlevel 1 goto no_qmake
set QMAKE=%QTDIR%\bin\qmake
goto qmake_found

:no_qmake
echo *** ERROR: Cannot find 'qmake' in your PATH.
goto end

:qmake_found

echo Writing configuration file...

echo # this file was generated by configure.bat >config.pri
echo CONFIG += %config% >>config.pri
echo PREFIX = %prefix:\=\\% >>config.pri

if "%syssqlite%" == "yes" echo CONFIG += system-sqlite >>config.pri

if "%msvc%" == "yes" goto gen_msvc

echo Generating Makefiles...

"%QMAKE%" -recursive %incdir% %libdir%
if errorlevel 1 goto qmake_failed
echo.
echo Configure finished. Run 'make' or 'nmake' now.
goto end

:gen_msvc

echo Generating Visual Studio solution...

"%QMAKE%" -tp vc -recursive %incdir% %libdir%
if errorlevel 1 goto qmake_failed
echo.
echo Configure finished.
goto end

:qmake_failed
echo *** ERROR: Running 'qmake' failed.

:end
