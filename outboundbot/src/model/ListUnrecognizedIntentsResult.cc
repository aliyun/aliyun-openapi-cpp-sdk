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

#include <alibabacloud/outboundbot/model/ListUnrecognizedIntentsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

ListUnrecognizedIntentsResult::ListUnrecognizedIntentsResult() :
	ServiceResult()
{}

ListUnrecognizedIntentsResult::ListUnrecognizedIntentsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUnrecognizedIntentsResult::~ListUnrecognizedIntentsResult()
{}

void ListUnrecognizedIntentsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto unrecognizedIntentsNode = value["UnrecognizedIntents"];
	if(!unrecognizedIntentsNode["TotalCount"].isNull())
		unrecognizedIntents_.totalCount = std::stoi(unrecognizedIntentsNode["TotalCount"].asString());
	if(!unrecognizedIntentsNode["PageNumber"].isNull())
		unrecognizedIntents_.pageNumber = std::stoi(unrecognizedIntentsNode["PageNumber"].asString());
	if(!unrecognizedIntentsNode["PageSize"].isNull())
		unrecognizedIntents_.pageSize = std::stoi(unrecognizedIntentsNode["PageSize"].asString());
	auto allListNode = unrecognizedIntentsNode["List"]["UnrecognizedIntent"];
	for (auto unrecognizedIntentsNodeListUnrecognizedIntent : allListNode)
	{
		UnrecognizedIntents::UnrecognizedIntent unrecognizedIntentObject;
		if(!unrecognizedIntentsNodeListUnrecognizedIntent["Question"].isNull())
			unrecognizedIntentObject.question = unrecognizedIntentsNodeListUnrecognizedIntent["Question"].asString();
		if(!unrecognizedIntentsNodeListUnrecognizedIntent["NodeId"].isNull())
			unrecognizedIntentObject.nodeId = unrecognizedIntentsNodeListUnrecognizedIntent["NodeId"].asString();
		if(!unrecognizedIntentsNodeListUnrecognizedIntent["TotalCount"].isNull())
			unrecognizedIntentObject.totalCount = std::stoi(unrecognizedIntentsNodeListUnrecognizedIntent["TotalCount"].asString());
		if(!unrecognizedIntentsNodeListUnrecognizedIntent["UnrecognizedCount"].isNull())
			unrecognizedIntentObject.unrecognizedCount = std::stoi(unrecognizedIntentsNodeListUnrecognizedIntent["UnrecognizedCount"].asString());
		if(!unrecognizedIntentsNodeListUnrecognizedIntent["UnrecognizedPercentage"].isNull())
			unrecognizedIntentObject.unrecognizedPercentage = std::stoi(unrecognizedIntentsNodeListUnrecognizedIntent["UnrecognizedPercentage"].asString());
		unrecognizedIntents_.list.push_back(unrecognizedIntentObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string ListUnrecognizedIntentsResult::getMessage()const
{
	return message_;
}

int ListUnrecognizedIntentsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListUnrecognizedIntentsResult::UnrecognizedIntents ListUnrecognizedIntentsResult::getUnrecognizedIntents()const
{
	return unrecognizedIntents_;
}

std::string ListUnrecognizedIntentsResult::getCode()const
{
	return code_;
}

bool ListUnrecognizedIntentsResult::getSuccess()const
{
	return success_;
}

