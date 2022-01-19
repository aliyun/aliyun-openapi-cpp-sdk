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

#include <alibabacloud/mse/model/ListClusterConnectionTypesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ListClusterConnectionTypesResult::ListClusterConnectionTypesResult() :
	ServiceResult()
{}

ListClusterConnectionTypesResult::ListClusterConnectionTypesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClusterConnectionTypesResult::~ListClusterConnectionTypesResult()
{}

void ListClusterConnectionTypesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Code"].isNull())
			dataObject.code = valueDataDataItem["Code"].asString();
		if(!valueDataDataItem["ShowName"].isNull())
			dataObject.showName = valueDataDataItem["ShowName"].asString();
		data_.push_back(dataObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();

}

std::string ListClusterConnectionTypesResult::getMessage()const
{
	return message_;
}

int ListClusterConnectionTypesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListClusterConnectionTypesResult::DataItem> ListClusterConnectionTypesResult::getData()const
{
	return data_;
}

std::string ListClusterConnectionTypesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListClusterConnectionTypesResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

int ListClusterConnectionTypesResult::getCode()const
{
	return code_;
}

bool ListClusterConnectionTypesResult::getSuccess()const
{
	return success_;
}

