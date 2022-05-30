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

#include <alibabacloud/dataworks-public/model/ListUsageForResourceGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListUsageForResourceGroupResult::ListUsageForResourceGroupResult() :
	ServiceResult()
{}

ListUsageForResourceGroupResult::ListUsageForResourceGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUsageForResourceGroupResult::~ListUsageForResourceGroupResult()
{}

void ListUsageForResourceGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["PopUsageForResourceGroupDto"];
	for (auto valueDataPopUsageForResourceGroupDto : allDataNode)
	{
		PopUsageForResourceGroupDto dataObject;
		if(!valueDataPopUsageForResourceGroupDto["Usage"].isNull())
			dataObject.usage = valueDataPopUsageForResourceGroupDto["Usage"].asString();
		if(!valueDataPopUsageForResourceGroupDto["RecodeTime"].isNull())
			dataObject.recodeTime = std::stol(valueDataPopUsageForResourceGroupDto["RecodeTime"].asString());
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

int ListUsageForResourceGroupResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListUsageForResourceGroupResult::PopUsageForResourceGroupDto> ListUsageForResourceGroupResult::getData()const
{
	return data_;
}

std::string ListUsageForResourceGroupResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListUsageForResourceGroupResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListUsageForResourceGroupResult::getSuccess()const
{
	return success_;
}

