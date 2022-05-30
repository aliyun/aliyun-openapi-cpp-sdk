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

#include <alibabacloud/dataworks-public/model/GetMetaCategoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetMetaCategoryResult::GetMetaCategoryResult() :
	ServiceResult()
{}

GetMetaCategoryResult::GetMetaCategoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMetaCategoryResult::~GetMetaCategoryResult()
{}

void GetMetaCategoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNum"].isNull())
		data_.pageNum = std::stoi(dataNode["PageNum"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	auto allDataEntityListNode = dataNode["DataEntityList"]["DataEntityListItem"];
	for (auto dataNodeDataEntityListDataEntityListItem : allDataEntityListNode)
	{
		Data::DataEntityListItem dataEntityListItemObject;
		if(!dataNodeDataEntityListDataEntityListItem["Depth"].isNull())
			dataEntityListItemObject.depth = std::stoi(dataNodeDataEntityListDataEntityListItem["Depth"].asString());
		if(!dataNodeDataEntityListDataEntityListItem["Comment"].isNull())
			dataEntityListItemObject.comment = dataNodeDataEntityListDataEntityListItem["Comment"].asString();
		if(!dataNodeDataEntityListDataEntityListItem["ModifiedTime"].isNull())
			dataEntityListItemObject.modifiedTime = std::stol(dataNodeDataEntityListDataEntityListItem["ModifiedTime"].asString());
		if(!dataNodeDataEntityListDataEntityListItem["CreateTime"].isNull())
			dataEntityListItemObject.createTime = std::stol(dataNodeDataEntityListDataEntityListItem["CreateTime"].asString());
		if(!dataNodeDataEntityListDataEntityListItem["CategoryId"].isNull())
			dataEntityListItemObject.categoryId = std::stol(dataNodeDataEntityListDataEntityListItem["CategoryId"].asString());
		if(!dataNodeDataEntityListDataEntityListItem["LastOperatorId"].isNull())
			dataEntityListItemObject.lastOperatorId = dataNodeDataEntityListDataEntityListItem["LastOperatorId"].asString();
		if(!dataNodeDataEntityListDataEntityListItem["Name"].isNull())
			dataEntityListItemObject.name = dataNodeDataEntityListDataEntityListItem["Name"].asString();
		if(!dataNodeDataEntityListDataEntityListItem["ParentCategoryId"].isNull())
			dataEntityListItemObject.parentCategoryId = std::stol(dataNodeDataEntityListDataEntityListItem["ParentCategoryId"].asString());
		if(!dataNodeDataEntityListDataEntityListItem["OwnerId"].isNull())
			dataEntityListItemObject.ownerId = dataNodeDataEntityListDataEntityListItem["OwnerId"].asString();
		data_.dataEntityList.push_back(dataEntityListItemObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

int GetMetaCategoryResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetMetaCategoryResult::Data GetMetaCategoryResult::getData()const
{
	return data_;
}

std::string GetMetaCategoryResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetMetaCategoryResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetMetaCategoryResult::getSuccess()const
{
	return success_;
}

