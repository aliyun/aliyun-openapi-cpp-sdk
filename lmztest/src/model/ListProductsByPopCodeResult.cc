/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/lmztest/model/ListProductsByPopCodeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LmzTest;
using namespace AlibabaCloud::LmzTest::Model;

ListProductsByPopCodeResult::ListProductsByPopCodeResult() :
	ServiceResult()
{}

ListProductsByPopCodeResult::ListProductsByPopCodeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListProductsByPopCodeResult::~ListProductsByPopCodeResult()
{}

void ListProductsByPopCodeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		auto uniqueKeyDTONode = value["UniqueKeyDTO"];
		if(!uniqueKeyDTONode["NamespaceCode"].isNull())
			resultObject.uniqueKeyDTO.namespaceCode = uniqueKeyDTONode["NamespaceCode"].asString();
		auto nameSpaceExtDTONode = value["NameSpaceExtDTO"];
		auto allBusinessOwnerListNode = nameSpaceExtDTONode["BusinessOwnerList"]["BusinessOwnerListItem"];
		for (auto nameSpaceExtDTONodeBusinessOwnerListBusinessOwnerListItem : allBusinessOwnerListNode)
		{
			ResultItem::NameSpaceExtDTO::BusinessOwnerListItem businessOwnerListItemObject;
			if(!nameSpaceExtDTONodeBusinessOwnerListBusinessOwnerListItem["BucId"].isNull())
				businessOwnerListItemObject.bucId = nameSpaceExtDTONodeBusinessOwnerListBusinessOwnerListItem["BucId"].asString();
			if(!nameSpaceExtDTONodeBusinessOwnerListBusinessOwnerListItem["Name"].isNull())
				businessOwnerListItemObject.name = nameSpaceExtDTONodeBusinessOwnerListBusinessOwnerListItem["Name"].asString();
			if(!nameSpaceExtDTONodeBusinessOwnerListBusinessOwnerListItem["Id"].isNull())
				businessOwnerListItemObject.id = nameSpaceExtDTONodeBusinessOwnerListBusinessOwnerListItem["Id"].asString();
			resultObject.nameSpaceExtDTO.businessOwnerList.push_back(businessOwnerListItemObject);
		}
		auto allTechniqueOwnerListNode = nameSpaceExtDTONode["TechniqueOwnerList"]["TechniqueOwnerListItem"];
		for (auto nameSpaceExtDTONodeTechniqueOwnerListTechniqueOwnerListItem : allTechniqueOwnerListNode)
		{
			ResultItem::NameSpaceExtDTO::TechniqueOwnerListItem techniqueOwnerListItemObject;
			if(!nameSpaceExtDTONodeTechniqueOwnerListTechniqueOwnerListItem["BucId"].isNull())
				techniqueOwnerListItemObject.bucId = nameSpaceExtDTONodeTechniqueOwnerListTechniqueOwnerListItem["BucId"].asString();
			if(!nameSpaceExtDTONodeTechniqueOwnerListTechniqueOwnerListItem["Name"].isNull())
				techniqueOwnerListItemObject.name = nameSpaceExtDTONodeTechniqueOwnerListTechniqueOwnerListItem["Name"].asString();
			if(!nameSpaceExtDTONodeTechniqueOwnerListTechniqueOwnerListItem["Id"].isNull())
				techniqueOwnerListItemObject.id = nameSpaceExtDTONodeTechniqueOwnerListTechniqueOwnerListItem["Id"].asString();
			resultObject.nameSpaceExtDTO.techniqueOwnerList.push_back(techniqueOwnerListItemObject);
		}
		result_.push_back(resultObject);
	}
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();
	if(!value["ErrorDetailMessage"].isNull())
		errorDetailMessage_ = value["ErrorDetailMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string ListProductsByPopCodeResult::getErrorDetailMessage()const
{
	return errorDetailMessage_;
}

std::string ListProductsByPopCodeResult::getTraceId()const
{
	return traceId_;
}

std::string ListProductsByPopCodeResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListProductsByPopCodeResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListProductsByPopCodeResult::getSuccess()const
{
	return success_;
}

std::vector<ListProductsByPopCodeResult::ResultItem> ListProductsByPopCodeResult::getResult()const
{
	return result_;
}

