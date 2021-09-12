# fetchcontent重点来了
#-------------------------------------------------------------------
include(FetchContent)

fetchcontent_declare(spdlog	#库名字
	GIT_REPOSITORY https://github.com/gabime/spdlog.git	# 仓库地址
	GIT_TAG v1.8.2 # 库版本
	SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/vendor/spdlog # 指定库下载地址
)
fetchcontent_makeavailable(spdlog)
