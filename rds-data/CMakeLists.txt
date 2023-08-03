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

set(public_header_dir ${CMAKE_CURRENT_SOURCE_DIR}/../include)

set(rds-data_public_header 
	include/alibabacloud/rds-data/Rds_dataClient.h
	include/alibabacloud/rds-data/Rds_dataExport.h )

set(rds-data_public_header_model 
	include/alibabacloud/rds-data/model/BatchExecuteStatementRequest.h
	include/alibabacloud/rds-data/model/BatchExecuteStatementResult.h
	include/alibabacloud/rds-data/model/BeginTransactionRequest.h
	include/alibabacloud/rds-data/model/BeginTransactionResult.h
	include/alibabacloud/rds-data/model/CommitTransactionRequest.h
	include/alibabacloud/rds-data/model/CommitTransactionResult.h
	include/alibabacloud/rds-data/model/DeleteRequest.h
	include/alibabacloud/rds-data/model/DeleteResult.h
	include/alibabacloud/rds-data/model/ExecuteStatementRequest.h
	include/alibabacloud/rds-data/model/ExecuteStatementResult.h
	include/alibabacloud/rds-data/model/InsertRequest.h
	include/alibabacloud/rds-data/model/InsertResult.h
	include/alibabacloud/rds-data/model/InsertListRequest.h
	include/alibabacloud/rds-data/model/InsertListResult.h
	include/alibabacloud/rds-data/model/RollbackTransactionRequest.h
	include/alibabacloud/rds-data/model/RollbackTransactionResult.h
	include/alibabacloud/rds-data/model/SelectRequest.h
	include/alibabacloud/rds-data/model/SelectResult.h
	include/alibabacloud/rds-data/model/UpdateRequest.h
	include/alibabacloud/rds-data/model/UpdateResult.h )

set(rds-data_src 
	src/Rds-dataClient.cc
	src/model/BatchExecuteStatementRequest.cc
	src/model/BatchExecuteStatementResult.cc
	src/model/BeginTransactionRequest.cc
	src/model/BeginTransactionResult.cc
	src/model/CommitTransactionRequest.cc
	src/model/CommitTransactionResult.cc
	src/model/DeleteRequest.cc
	src/model/DeleteResult.cc
	src/model/ExecuteStatementRequest.cc
	src/model/ExecuteStatementResult.cc
	src/model/InsertRequest.cc
	src/model/InsertResult.cc
	src/model/InsertListRequest.cc
	src/model/InsertListResult.cc
	src/model/RollbackTransactionRequest.cc
	src/model/RollbackTransactionResult.cc
	src/model/SelectRequest.cc
	src/model/SelectResult.cc
	src/model/UpdateRequest.cc
	src/model/UpdateResult.cc )

add_library(rds-data ${LIB_TYPE}
	${rds-data_public_header}
	${rds-data_public_header_model}
	${rds-data_src})

set_target_properties(rds-data
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}rds-data
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(rds-data
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_RDS_DATA_LIBRARY)
endif()

target_include_directories(rds-data
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(rds-data
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(rds-data
		jsoncpp)
	target_include_directories(rds-data
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(rds-data
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(rds-data
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(rds-data
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(rds-data
		jsoncpp)
endif()

install(FILES ${rds-data_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/rds-data)
install(FILES ${rds-data_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/rds-data/model)
install(TARGETS rds-data
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)