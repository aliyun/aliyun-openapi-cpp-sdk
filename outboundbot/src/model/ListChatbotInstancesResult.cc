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

#include <alibabacloud/outboundbot/model/ListChatbotInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

ListChatbotInstancesResult::ListChatbotInstancesResult() :
	ServiceResult()
{}

ListChatbotInstancesResult::ListChatbotInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListChatbotInstancesResult::~ListChatbotInstancesResult()
{}

void ListChatbotInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBotsNode = value["Bots"]["Bot"];
	for (auto valueBotsBot : allBotsNode)
	{
		Bot botsObject;
		if(!valueBotsBot["Introduction"].isNull())
			botsObject.introduction = valueBotsBot["Introduction"].asString();
		if(!valueBotsBot["Avatar"].isNull())
			botsObject.avatar = valueBotsBot["Avatar"].asString();
		if(!valueBotsBot["TimeZone"].isNull())
			botsObject.timeZone = valueBotsBot["TimeZone"].asString();
		if(!valueBotsBot["CreateTime"].isNull())
			botsObject.createTime = valueBotsBot["CreateTime"].asString();
		if(!valueBotsBot["LanguageCode"].isNull())
			botsObject.languageCode = valueBotsBot["LanguageCode"].asString();
		if(!valueBotsBot["InstanceId"].isNull())
			botsObject.instanceId = valueBotsBot["InstanceId"].asString();
		if(!valueBotsBot["Name"].isNull())
			botsObject.name = valueBotsBot["Name"].asString();
		bots_.push_back(botsObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListChatbotInstancesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListChatbotInstancesResult::Bot> ListChatbotInstancesResult::getBots()const
{
	return bots_;
}

std::string ListChatbotInstancesResult::getMessage()const
{
	return message_;
}

long ListChatbotInstancesResult::getPageSize()const
{
	return pageSize_;
}

long ListChatbotInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

int ListChatbotInstancesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListChatbotInstancesResult::getCode()const
{
	return code_;
}

bool ListChatbotInstancesResult::getSuccess()const
{
	return success_;
}

