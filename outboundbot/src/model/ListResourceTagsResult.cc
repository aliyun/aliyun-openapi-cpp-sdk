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

#include <alibabacloud/outboundbot/model/ListResourceTagsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

ListResourceTagsResult::ListResourceTagsResult() :
	ServiceResult()
{}

ListResourceTagsResult::ListResourceTagsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListResourceTagsResult::~ListResourceTagsResult()
{}

void ListResourceTagsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resourceTagsNode = value["ResourceTags"];
	if(!resourceTagsNode["PageNumber"].isNull())
		resourceTags_.pageNumber = std::stoi(resourceTagsNode["PageNumber"].asString());
	if(!resourceTagsNode["PageSize"].isNull())
		resourceTags_.pageSize = std::stoi(resourceTagsNode["PageSize"].asString());
	if(!resourceTagsNode["TotalCount"].isNull())
		resourceTags_.totalCount = std::stoi(resourceTagsNode["TotalCount"].asString());
	auto allListNode = resourceTagsNode["List"]["ResourceTag"];
	for (auto resourceTagsNodeListResourceTag : allListNode)
	{
		ResourceTags::ResourceTag resourceTagObject;
		if(!resourceTagsNodeListResourceTag["Key"].isNull())
			resourceTagObject.key = resourceTagsNodeListResourceTag["Key"].asString();
		if(!resourceTagsNodeListResourceTag["Value"].isNull())
			resourceTagObject.value = resourceTagsNodeListResourceTag["Value"].asString();
		resourceTags_.list.push_back(resourceTagObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListResourceTagsResult::getMessage()const
{
	return message_;
}

ListResourceTagsResult::ResourceTags ListResourceTagsResult::getResourceTags()const
{
	return resourceTags_;
}

int ListResourceTagsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListResourceTagsResult::getCode()const
{
	return code_;
}

bool ListResourceTagsResult::getSuccess()const
{
	return success_;
}

