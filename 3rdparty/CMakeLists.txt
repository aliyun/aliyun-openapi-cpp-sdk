#
# Copyright 2009-2017 Alibaba Cloud All rights reserved.
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
#      http://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

if(CMAKE_HOST_WIN32)
	ExternalProject_Add(jsoncpp
		URL https://github.com/open-source-parsers/jsoncpp/archive/0.10.5.tar.gz
		CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=<INSTALL_DIR>
			-DJSONCPP_WITH_TESTS=OFF
			-DJSONCPP_WITH_POST_BUILD_UNITTEST=OFF
			-DJSONCPP_WITH_WARNING_AS_ERROR=OFF
			-DJSONCPP_WITH_PKGCONFIG_SUPPORT=OFF
			-DJSONCPP_WITH_CMAKE_PACKAGE=OFF
			-DBUILD_SHARED_LIBS=OFF
			-DBUILD_STATIC_LIBS=ON
		)

ExternalProject_Add(curl
	URL https://github.com/curl/curl/releases/download/curl-7_55_1/curl-7.55.1.tar.gz
	CMAKE_ARGS -DBUILD_CURL_EXE=OFF
		-DBUILD_TESTING=OFF
		-DCMAKE_INSTALL_PREFIX=<INSTALL_DIR>
		-DCMAKE_USE_WINSSL=ON
		-DCURL_STATICLIB=ON
		-DENABLE_MANUAL=OFF
		-DHTTP_ONLY=ON
	)
endif()

ExternalProject_Add(catch
	URL https://github.com/catchorg/Catch2/releases/download/v2.0.1/catch.hpp
	TIMEOUT 10
	DOWNLOAD_NO_EXTRACT 1
	CONFIGURE_COMMAND ""
	BUILD_COMMAND ""
	INSTALL_COMMAND
		${CMAKE_COMMAND} -E copy_if_different <DOWNLOADED_FILE> <INSTALL_DIR>
	)
