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

#include <alibabacloud/dataworks-public/model/ListNodeIOResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListNodeIOResult::ListNodeIOResult() :
	ServiceResult()
{}

ListNodeIOResult::ListNodeIOResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNodeIOResult::~ListNodeIOResult()
{}

void ListNodeIOResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["TableName"].isNull())
			dataObject.tableName = valueDataDataItem["TableName"].asString();
		if(!valueDataDataItem["Data"].isNull())
			dataObject.data = valueDataDataItem["Data"].asString();
		if(!valueDataDataItem["NodeId"].isNull())
			dataObject.nodeId = std::stol(valueDataDataItem["NodeId"].asString());
		data_.push_back(dataObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int ListNodeIOResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListNodeIOResult::DataItem> ListNodeIOResult::getData()const
{
	return data_;
}

std::string ListNodeIOResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListNodeIOResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListNodeIOResult::getSuccess()const
{
	return success_;
}

