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

#include <alibabacloud/dataworks-public/model/GetMetaTableChangeLogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetMetaTableChangeLogResult::GetMetaTableChangeLogResult() :
	ServiceResult()
{}

GetMetaTableChangeLogResult::GetMetaTableChangeLogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMetaTableChangeLogResult::~GetMetaTableChangeLogResult()
{}

void GetMetaTableChangeLogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	auto allDataEntityListNode = dataNode["DataEntityList"]["DataEntityListItem"];
	for (auto dataNodeDataEntityListDataEntityListItem : allDataEntityListNode)
	{
		Data::DataEntityListItem dataEntityListItemObject;
		if(!dataNodeDataEntityListDataEntityListItem["ObjectType"].isNull())
			dataEntityListItemObject.objectType = dataNodeDataEntityListDataEntityListItem["ObjectType"].asString();
		if(!dataNodeDataEntityListDataEntityListItem["ModifiedTime"].isNull())
			dataEntityListItemObject.modifiedTime = std::stol(dataNodeDataEntityListDataEntityListItem["ModifiedTime"].asString());
		if(!dataNodeDataEntityListDataEntityListItem["CreateTime"].isNull())
			dataEntityListItemObject.createTime = std::stol(dataNodeDataEntityListDataEntityListItem["CreateTime"].asString());
		if(!dataNodeDataEntityListDataEntityListItem["ChangeContent"].isNull())
			dataEntityListItemObject.changeContent = dataNodeDataEntityListDataEntityListItem["ChangeContent"].asString();
		if(!dataNodeDataEntityListDataEntityListItem["Operator"].isNull())
			dataEntityListItemObject._operator = dataNodeDataEntityListDataEntityListItem["Operator"].asString();
		if(!dataNodeDataEntityListDataEntityListItem["ChangeType"].isNull())
			dataEntityListItemObject.changeType = dataNodeDataEntityListDataEntityListItem["ChangeType"].asString();
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

int GetMetaTableChangeLogResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetMetaTableChangeLogResult::Data GetMetaTableChangeLogResult::getData()const
{
	return data_;
}

std::string GetMetaTableChangeLogResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetMetaTableChangeLogResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetMetaTableChangeLogResult::getSuccess()const
{
	return success_;
}

