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

#include <alibabacloud/dataworks-public/model/GetMetaTableLineageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetMetaTableLineageResult::GetMetaTableLineageResult() :
	ServiceResult()
{}

GetMetaTableLineageResult::GetMetaTableLineageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMetaTableLineageResult::~GetMetaTableLineageResult()
{}

void GetMetaTableLineageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["NextPrimaryKey"].isNull())
		data_.nextPrimaryKey = dataNode["NextPrimaryKey"].asString();
	if(!dataNode["HasNext"].isNull())
		data_.hasNext = dataNode["HasNext"].asString() == "true";
	auto allDataEntityListNode = dataNode["DataEntityList"]["DataEntityListItem"];
	for (auto dataNodeDataEntityListDataEntityListItem : allDataEntityListNode)
	{
		Data::DataEntityListItem dataEntityListItemObject;
		if(!dataNodeDataEntityListDataEntityListItem["TableName"].isNull())
			dataEntityListItemObject.tableName = dataNodeDataEntityListDataEntityListItem["TableName"].asString();
		if(!dataNodeDataEntityListDataEntityListItem["TableGuid"].isNull())
			dataEntityListItemObject.tableGuid = dataNodeDataEntityListDataEntityListItem["TableGuid"].asString();
		if(!dataNodeDataEntityListDataEntityListItem["CreateTimestamp"].isNull())
			dataEntityListItemObject.createTimestamp = std::stol(dataNodeDataEntityListDataEntityListItem["CreateTimestamp"].asString());
		if(!dataNodeDataEntityListDataEntityListItem["DatabaseName"].isNull())
			dataEntityListItemObject.databaseName = dataNodeDataEntityListDataEntityListItem["DatabaseName"].asString();
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

int GetMetaTableLineageResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetMetaTableLineageResult::Data GetMetaTableLineageResult::getData()const
{
	return data_;
}

std::string GetMetaTableLineageResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetMetaTableLineageResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetMetaTableLineageResult::getSuccess()const
{
	return success_;
}

