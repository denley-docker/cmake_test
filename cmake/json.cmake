include(FetchContent)

FetchContent_Declare(json
  GIT_REPOSITORY https://github.com/nlohmann/json.git
  GIT_TAG v3.10.2
  SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/vendor/json
)
FetchContent_MakeAvailable(json)
