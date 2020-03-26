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

set(chatbot_public_header 
	include/alibabacloud/chatbot/ChatbotClient.h
	include/alibabacloud/chatbot/ChatbotExport.h )

set(chatbot_public_header_model 
	include/alibabacloud/chatbot/model/ActivatePerspectiveRequest.h
	include/alibabacloud/chatbot/model/ActivatePerspectiveResult.h
	include/alibabacloud/chatbot/model/AddSynonymRequest.h
	include/alibabacloud/chatbot/model/AddSynonymResult.h
	include/alibabacloud/chatbot/model/AppendEntityMemberRequest.h
	include/alibabacloud/chatbot/model/AppendEntityMemberResult.h
	include/alibabacloud/chatbot/model/ChatRequest.h
	include/alibabacloud/chatbot/model/ChatResult.h
	include/alibabacloud/chatbot/model/CreateBotRequest.h
	include/alibabacloud/chatbot/model/CreateBotResult.h
	include/alibabacloud/chatbot/model/CreateCategoryRequest.h
	include/alibabacloud/chatbot/model/CreateCategoryResult.h
	include/alibabacloud/chatbot/model/CreateCoreWordRequest.h
	include/alibabacloud/chatbot/model/CreateCoreWordResult.h
	include/alibabacloud/chatbot/model/CreateDialogRequest.h
	include/alibabacloud/chatbot/model/CreateDialogResult.h
	include/alibabacloud/chatbot/model/CreateEntityRequest.h
	include/alibabacloud/chatbot/model/CreateEntityResult.h
	include/alibabacloud/chatbot/model/CreateIntentRequest.h
	include/alibabacloud/chatbot/model/CreateIntentResult.h
	include/alibabacloud/chatbot/model/CreateKnowledgeRequest.h
	include/alibabacloud/chatbot/model/CreateKnowledgeResult.h
	include/alibabacloud/chatbot/model/CreatePerspectiveRequest.h
	include/alibabacloud/chatbot/model/CreatePerspectiveResult.h
	include/alibabacloud/chatbot/model/DeleteBotRequest.h
	include/alibabacloud/chatbot/model/DeleteBotResult.h
	include/alibabacloud/chatbot/model/DeleteCategoryRequest.h
	include/alibabacloud/chatbot/model/DeleteCategoryResult.h
	include/alibabacloud/chatbot/model/DeleteCoreWordRequest.h
	include/alibabacloud/chatbot/model/DeleteCoreWordResult.h
	include/alibabacloud/chatbot/model/DeleteDialogRequest.h
	include/alibabacloud/chatbot/model/DeleteDialogResult.h
	include/alibabacloud/chatbot/model/DeleteEntityRequest.h
	include/alibabacloud/chatbot/model/DeleteEntityResult.h
	include/alibabacloud/chatbot/model/DeleteIntentRequest.h
	include/alibabacloud/chatbot/model/DeleteIntentResult.h
	include/alibabacloud/chatbot/model/DeleteKnowledgeRequest.h
	include/alibabacloud/chatbot/model/DeleteKnowledgeResult.h
	include/alibabacloud/chatbot/model/DescribeBotRequest.h
	include/alibabacloud/chatbot/model/DescribeBotResult.h
	include/alibabacloud/chatbot/model/DescribeCategoryRequest.h
	include/alibabacloud/chatbot/model/DescribeCategoryResult.h
	include/alibabacloud/chatbot/model/DescribeCoreWordRequest.h
	include/alibabacloud/chatbot/model/DescribeCoreWordResult.h
	include/alibabacloud/chatbot/model/DescribeDialogRequest.h
	include/alibabacloud/chatbot/model/DescribeDialogResult.h
	include/alibabacloud/chatbot/model/DescribeDialogFlowRequest.h
	include/alibabacloud/chatbot/model/DescribeDialogFlowResult.h
	include/alibabacloud/chatbot/model/DescribeEntitiesRequest.h
	include/alibabacloud/chatbot/model/DescribeEntitiesResult.h
	include/alibabacloud/chatbot/model/DescribeIntentRequest.h
	include/alibabacloud/chatbot/model/DescribeIntentResult.h
	include/alibabacloud/chatbot/model/DescribeKnowledgeRequest.h
	include/alibabacloud/chatbot/model/DescribeKnowledgeResult.h
	include/alibabacloud/chatbot/model/DescribePerspectiveRequest.h
	include/alibabacloud/chatbot/model/DescribePerspectiveResult.h
	include/alibabacloud/chatbot/model/DisableDialogFlowRequest.h
	include/alibabacloud/chatbot/model/DisableDialogFlowResult.h
	include/alibabacloud/chatbot/model/DisableKnowledgeRequest.h
	include/alibabacloud/chatbot/model/DisableKnowledgeResult.h
	include/alibabacloud/chatbot/model/FeedbackRequest.h
	include/alibabacloud/chatbot/model/FeedbackResult.h
	include/alibabacloud/chatbot/model/LinkBotCategoryRequest.h
	include/alibabacloud/chatbot/model/LinkBotCategoryResult.h
	include/alibabacloud/chatbot/model/MoveKnowledgeCategoryRequest.h
	include/alibabacloud/chatbot/model/MoveKnowledgeCategoryResult.h
	include/alibabacloud/chatbot/model/PublishDialogFlowRequest.h
	include/alibabacloud/chatbot/model/PublishDialogFlowResult.h
	include/alibabacloud/chatbot/model/PublishKnowledgeRequest.h
	include/alibabacloud/chatbot/model/PublishKnowledgeResult.h
	include/alibabacloud/chatbot/model/QueryBotsRequest.h
	include/alibabacloud/chatbot/model/QueryBotsResult.h
	include/alibabacloud/chatbot/model/QueryCategoriesRequest.h
	include/alibabacloud/chatbot/model/QueryCategoriesResult.h
	include/alibabacloud/chatbot/model/QueryCoreWordsRequest.h
	include/alibabacloud/chatbot/model/QueryCoreWordsResult.h
	include/alibabacloud/chatbot/model/QueryDialogsRequest.h
	include/alibabacloud/chatbot/model/QueryDialogsResult.h
	include/alibabacloud/chatbot/model/QueryEntitiesRequest.h
	include/alibabacloud/chatbot/model/QueryEntitiesResult.h
	include/alibabacloud/chatbot/model/QueryIntentsRequest.h
	include/alibabacloud/chatbot/model/QueryIntentsResult.h
	include/alibabacloud/chatbot/model/QueryKnowledgesRequest.h
	include/alibabacloud/chatbot/model/QueryKnowledgesResult.h
	include/alibabacloud/chatbot/model/QueryPerspectivesRequest.h
	include/alibabacloud/chatbot/model/QueryPerspectivesResult.h
	include/alibabacloud/chatbot/model/QuerySystemEntitiesRequest.h
	include/alibabacloud/chatbot/model/QuerySystemEntitiesResult.h
	include/alibabacloud/chatbot/model/RemoveEntityMemberRequest.h
	include/alibabacloud/chatbot/model/RemoveEntityMemberResult.h
	include/alibabacloud/chatbot/model/RemoveSynonymRequest.h
	include/alibabacloud/chatbot/model/RemoveSynonymResult.h
	include/alibabacloud/chatbot/model/TestDialogFlowRequest.h
	include/alibabacloud/chatbot/model/TestDialogFlowResult.h
	include/alibabacloud/chatbot/model/UpdateCategoryRequest.h
	include/alibabacloud/chatbot/model/UpdateCategoryResult.h
	include/alibabacloud/chatbot/model/UpdateCoreWordRequest.h
	include/alibabacloud/chatbot/model/UpdateCoreWordResult.h
	include/alibabacloud/chatbot/model/UpdateDialogRequest.h
	include/alibabacloud/chatbot/model/UpdateDialogResult.h
	include/alibabacloud/chatbot/model/UpdateDialogFlowRequest.h
	include/alibabacloud/chatbot/model/UpdateDialogFlowResult.h
	include/alibabacloud/chatbot/model/UpdateEntityRequest.h
	include/alibabacloud/chatbot/model/UpdateEntityResult.h
	include/alibabacloud/chatbot/model/UpdateIntentRequest.h
	include/alibabacloud/chatbot/model/UpdateIntentResult.h
	include/alibabacloud/chatbot/model/UpdateKnowledgeRequest.h
	include/alibabacloud/chatbot/model/UpdateKnowledgeResult.h
	include/alibabacloud/chatbot/model/UpdatePerspectiveRequest.h
	include/alibabacloud/chatbot/model/UpdatePerspectiveResult.h )

set(chatbot_src 
	src/ChatbotClient.cc
	src/model/ActivatePerspectiveRequest.cc
	src/model/ActivatePerspectiveResult.cc
	src/model/AddSynonymRequest.cc
	src/model/AddSynonymResult.cc
	src/model/AppendEntityMemberRequest.cc
	src/model/AppendEntityMemberResult.cc
	src/model/ChatRequest.cc
	src/model/ChatResult.cc
	src/model/CreateBotRequest.cc
	src/model/CreateBotResult.cc
	src/model/CreateCategoryRequest.cc
	src/model/CreateCategoryResult.cc
	src/model/CreateCoreWordRequest.cc
	src/model/CreateCoreWordResult.cc
	src/model/CreateDialogRequest.cc
	src/model/CreateDialogResult.cc
	src/model/CreateEntityRequest.cc
	src/model/CreateEntityResult.cc
	src/model/CreateIntentRequest.cc
	src/model/CreateIntentResult.cc
	src/model/CreateKnowledgeRequest.cc
	src/model/CreateKnowledgeResult.cc
	src/model/CreatePerspectiveRequest.cc
	src/model/CreatePerspectiveResult.cc
	src/model/DeleteBotRequest.cc
	src/model/DeleteBotResult.cc
	src/model/DeleteCategoryRequest.cc
	src/model/DeleteCategoryResult.cc
	src/model/DeleteCoreWordRequest.cc
	src/model/DeleteCoreWordResult.cc
	src/model/DeleteDialogRequest.cc
	src/model/DeleteDialogResult.cc
	src/model/DeleteEntityRequest.cc
	src/model/DeleteEntityResult.cc
	src/model/DeleteIntentRequest.cc
	src/model/DeleteIntentResult.cc
	src/model/DeleteKnowledgeRequest.cc
	src/model/DeleteKnowledgeResult.cc
	src/model/DescribeBotRequest.cc
	src/model/DescribeBotResult.cc
	src/model/DescribeCategoryRequest.cc
	src/model/DescribeCategoryResult.cc
	src/model/DescribeCoreWordRequest.cc
	src/model/DescribeCoreWordResult.cc
	src/model/DescribeDialogRequest.cc
	src/model/DescribeDialogResult.cc
	src/model/DescribeDialogFlowRequest.cc
	src/model/DescribeDialogFlowResult.cc
	src/model/DescribeEntitiesRequest.cc
	src/model/DescribeEntitiesResult.cc
	src/model/DescribeIntentRequest.cc
	src/model/DescribeIntentResult.cc
	src/model/DescribeKnowledgeRequest.cc
	src/model/DescribeKnowledgeResult.cc
	src/model/DescribePerspectiveRequest.cc
	src/model/DescribePerspectiveResult.cc
	src/model/DisableDialogFlowRequest.cc
	src/model/DisableDialogFlowResult.cc
	src/model/DisableKnowledgeRequest.cc
	src/model/DisableKnowledgeResult.cc
	src/model/FeedbackRequest.cc
	src/model/FeedbackResult.cc
	src/model/LinkBotCategoryRequest.cc
	src/model/LinkBotCategoryResult.cc
	src/model/MoveKnowledgeCategoryRequest.cc
	src/model/MoveKnowledgeCategoryResult.cc
	src/model/PublishDialogFlowRequest.cc
	src/model/PublishDialogFlowResult.cc
	src/model/PublishKnowledgeRequest.cc
	src/model/PublishKnowledgeResult.cc
	src/model/QueryBotsRequest.cc
	src/model/QueryBotsResult.cc
	src/model/QueryCategoriesRequest.cc
	src/model/QueryCategoriesResult.cc
	src/model/QueryCoreWordsRequest.cc
	src/model/QueryCoreWordsResult.cc
	src/model/QueryDialogsRequest.cc
	src/model/QueryDialogsResult.cc
	src/model/QueryEntitiesRequest.cc
	src/model/QueryEntitiesResult.cc
	src/model/QueryIntentsRequest.cc
	src/model/QueryIntentsResult.cc
	src/model/QueryKnowledgesRequest.cc
	src/model/QueryKnowledgesResult.cc
	src/model/QueryPerspectivesRequest.cc
	src/model/QueryPerspectivesResult.cc
	src/model/QuerySystemEntitiesRequest.cc
	src/model/QuerySystemEntitiesResult.cc
	src/model/RemoveEntityMemberRequest.cc
	src/model/RemoveEntityMemberResult.cc
	src/model/RemoveSynonymRequest.cc
	src/model/RemoveSynonymResult.cc
	src/model/TestDialogFlowRequest.cc
	src/model/TestDialogFlowResult.cc
	src/model/UpdateCategoryRequest.cc
	src/model/UpdateCategoryResult.cc
	src/model/UpdateCoreWordRequest.cc
	src/model/UpdateCoreWordResult.cc
	src/model/UpdateDialogRequest.cc
	src/model/UpdateDialogResult.cc
	src/model/UpdateDialogFlowRequest.cc
	src/model/UpdateDialogFlowResult.cc
	src/model/UpdateEntityRequest.cc
	src/model/UpdateEntityResult.cc
	src/model/UpdateIntentRequest.cc
	src/model/UpdateIntentResult.cc
	src/model/UpdateKnowledgeRequest.cc
	src/model/UpdateKnowledgeResult.cc
	src/model/UpdatePerspectiveRequest.cc
	src/model/UpdatePerspectiveResult.cc )

add_library(chatbot ${LIB_TYPE}
	${chatbot_public_header}
	${chatbot_public_header_model}
	${chatbot_src})

set_target_properties(chatbot
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}chatbot
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(chatbot
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_CHATBOT_LIBRARY)
endif()

target_include_directories(chatbot
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(chatbot
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(chatbot
		jsoncpp)
	target_include_directories(chatbot
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(chatbot
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(chatbot
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(chatbot
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(chatbot
		jsoncpp)
endif()

install(FILES ${chatbot_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/chatbot)
install(FILES ${chatbot_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/chatbot/model)
install(TARGETS chatbot
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)