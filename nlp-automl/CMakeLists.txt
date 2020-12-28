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

set(nlp-automl_public_header 
	include/alibabacloud/nlp-automl/Nlp_automlClient.h
	include/alibabacloud/nlp-automl/Nlp_automlExport.h )

set(nlp-automl_public_header_model 
	include/alibabacloud/nlp-automl/model/AddMTInterveneWordRequest.h
	include/alibabacloud/nlp-automl/model/AddMTInterveneWordResult.h
	include/alibabacloud/nlp-automl/model/AddMtIntervenePackageRequest.h
	include/alibabacloud/nlp-automl/model/AddMtIntervenePackageResult.h
	include/alibabacloud/nlp-automl/model/BindIntervenePackageAndModelRequest.h
	include/alibabacloud/nlp-automl/model/BindIntervenePackageAndModelResult.h
	include/alibabacloud/nlp-automl/model/CreateAsyncPredictRequest.h
	include/alibabacloud/nlp-automl/model/CreateAsyncPredictResult.h
	include/alibabacloud/nlp-automl/model/CreateDatasetRequest.h
	include/alibabacloud/nlp-automl/model/CreateDatasetResult.h
	include/alibabacloud/nlp-automl/model/CreateDatasetRecordRequest.h
	include/alibabacloud/nlp-automl/model/CreateDatasetRecordResult.h
	include/alibabacloud/nlp-automl/model/CreateModelRequest.h
	include/alibabacloud/nlp-automl/model/CreateModelResult.h
	include/alibabacloud/nlp-automl/model/CreateProjectRequest.h
	include/alibabacloud/nlp-automl/model/CreateProjectResult.h
	include/alibabacloud/nlp-automl/model/DeleteModelRequest.h
	include/alibabacloud/nlp-automl/model/DeleteModelResult.h
	include/alibabacloud/nlp-automl/model/DeployModelRequest.h
	include/alibabacloud/nlp-automl/model/DeployModelResult.h
	include/alibabacloud/nlp-automl/model/GetAsyncPredictRequest.h
	include/alibabacloud/nlp-automl/model/GetAsyncPredictResult.h
	include/alibabacloud/nlp-automl/model/GetModelRequest.h
	include/alibabacloud/nlp-automl/model/GetModelResult.h
	include/alibabacloud/nlp-automl/model/GetPredictDocRequest.h
	include/alibabacloud/nlp-automl/model/GetPredictDocResult.h
	include/alibabacloud/nlp-automl/model/GetPredictResultRequest.h
	include/alibabacloud/nlp-automl/model/GetPredictResultResult.h
	include/alibabacloud/nlp-automl/model/InvokeActionRequest.h
	include/alibabacloud/nlp-automl/model/InvokeActionResult.h
	include/alibabacloud/nlp-automl/model/ListDatasetRequest.h
	include/alibabacloud/nlp-automl/model/ListDatasetResult.h
	include/alibabacloud/nlp-automl/model/ListModelsRequest.h
	include/alibabacloud/nlp-automl/model/ListModelsResult.h
	include/alibabacloud/nlp-automl/model/PredictMTModelRequest.h
	include/alibabacloud/nlp-automl/model/PredictMTModelResult.h
	include/alibabacloud/nlp-automl/model/PredictMTModelByDocRequest.h
	include/alibabacloud/nlp-automl/model/PredictMTModelByDocResult.h
	include/alibabacloud/nlp-automl/model/RunContactReviewRequest.h
	include/alibabacloud/nlp-automl/model/RunContactReviewResult.h
	include/alibabacloud/nlp-automl/model/RunPreTrainServiceRequest.h
	include/alibabacloud/nlp-automl/model/RunPreTrainServiceResult.h
	include/alibabacloud/nlp-automl/model/RunSmartCallServiceRequest.h
	include/alibabacloud/nlp-automl/model/RunSmartCallServiceResult.h )

set(nlp-automl_src 
	src/Nlp-automlClient.cc
	src/model/AddMTInterveneWordRequest.cc
	src/model/AddMTInterveneWordResult.cc
	src/model/AddMtIntervenePackageRequest.cc
	src/model/AddMtIntervenePackageResult.cc
	src/model/BindIntervenePackageAndModelRequest.cc
	src/model/BindIntervenePackageAndModelResult.cc
	src/model/CreateAsyncPredictRequest.cc
	src/model/CreateAsyncPredictResult.cc
	src/model/CreateDatasetRequest.cc
	src/model/CreateDatasetResult.cc
	src/model/CreateDatasetRecordRequest.cc
	src/model/CreateDatasetRecordResult.cc
	src/model/CreateModelRequest.cc
	src/model/CreateModelResult.cc
	src/model/CreateProjectRequest.cc
	src/model/CreateProjectResult.cc
	src/model/DeleteModelRequest.cc
	src/model/DeleteModelResult.cc
	src/model/DeployModelRequest.cc
	src/model/DeployModelResult.cc
	src/model/GetAsyncPredictRequest.cc
	src/model/GetAsyncPredictResult.cc
	src/model/GetModelRequest.cc
	src/model/GetModelResult.cc
	src/model/GetPredictDocRequest.cc
	src/model/GetPredictDocResult.cc
	src/model/GetPredictResultRequest.cc
	src/model/GetPredictResultResult.cc
	src/model/InvokeActionRequest.cc
	src/model/InvokeActionResult.cc
	src/model/ListDatasetRequest.cc
	src/model/ListDatasetResult.cc
	src/model/ListModelsRequest.cc
	src/model/ListModelsResult.cc
	src/model/PredictMTModelRequest.cc
	src/model/PredictMTModelResult.cc
	src/model/PredictMTModelByDocRequest.cc
	src/model/PredictMTModelByDocResult.cc
	src/model/RunContactReviewRequest.cc
	src/model/RunContactReviewResult.cc
	src/model/RunPreTrainServiceRequest.cc
	src/model/RunPreTrainServiceResult.cc
	src/model/RunSmartCallServiceRequest.cc
	src/model/RunSmartCallServiceResult.cc )

add_library(nlp-automl ${LIB_TYPE}
	${nlp-automl_public_header}
	${nlp-automl_public_header_model}
	${nlp-automl_src})

set_target_properties(nlp-automl
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}nlp-automl
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(nlp-automl
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_NLP_AUTOML_LIBRARY)
endif()

target_include_directories(nlp-automl
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(nlp-automl
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(nlp-automl
		jsoncpp)
	target_include_directories(nlp-automl
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(nlp-automl
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(nlp-automl
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(nlp-automl
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(nlp-automl
		jsoncpp)
endif()

install(FILES ${nlp-automl_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/nlp-automl)
install(FILES ${nlp-automl_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/nlp-automl/model)
install(TARGETS nlp-automl
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)