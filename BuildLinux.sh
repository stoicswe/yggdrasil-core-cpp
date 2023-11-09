buildType=${1:-"debug"}
buildMake=${2:-false}
if [ "${buildType}" == "debug" ]
then
  if [ -d "./cmake-build-debug" ]
  then
    rm -rf ./cmake-build-debug
    mkdir ./cmake-build-debug
    conan install . -s build_type=Debug --output-folder=cmake-build-debug
    #cd ./cmake-build-debug
  else
    echo "Debug build clean."
  fi
  else
  if [ -d "./cmake-build-release" ]
  then
    rm -rf ./cmake-build-release
    mkdir ./cmake-build-release
    conan install . -s build_type=Release --output-folder=cmake-build-release
    cd ./cmake-build-release
  else
    echo "Release build clean."
  fi
fi
#conan profile new default --detect
#conan profile update settings.compiler.libcxx=libstdc++11 default
#conan install .. --build=missing
if [ $buildMake == true ]
then
  cmake .. -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release
  cmake --build . --config "${buildType}"
  echo "Done."
else
  echo "Done."
fi