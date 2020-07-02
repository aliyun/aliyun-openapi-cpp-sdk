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

#include <alibabacloud/dataworks-public/model/GetMetaColumnLineageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetMetaColumnLineageResult::GetMetaColumnLineageResult() :
	ServiceResult()
{}

GetMetaColumnLineageResult::GetMetaColumnLineageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMetaColumnLineageResult::~GetMetaColumnLineageResult()
{}

void GetMetaColumnLineageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	if(!dataNode["PageNum"].isNull())
		data_.pageNum = std::stoi(dataNode["PageNum"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	auto allDataEntityListNode = dataNode["DataEntityList"]["DataEntityListItem"];
	for (auto dataNodeDataEntityListDataEntityListItem : allDataEntityListNode)
	{
		Data::DataEntityListItem dataEntityListItemObject;
		if(!dataNodeDataEntityListDataEntityListItem["ColumnName"].isNull())
			dataEntityListItemObject.columnName = dataNodeDataEntityListDataEntityListItem["ColumnName"].asString();
		if(!dataNodeDataEntityListDataEntityListItem["ColumnGuid"].isNull())
			dataEntityListItemObject.columnGuid = dataNodeDataEntityListDataEntityListItem["ColumnGuid"].asString();
		data_.dataEntityList.push_back(dataEntityListItemObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int GetMetaColumnLineageResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetMetaColumnLineageResult::Data GetMetaColumnLineageResult::getData()const
{
	return data_;
}

std::string GetMetaColumnLineageResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetMetaColumnLineageResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetMetaColumnLineageResult::getSuccess()const
{
	return success_;
}

