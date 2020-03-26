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

#include <alibabacloud/chatbot/model/QueryBotsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Chatbot;
using namespace AlibabaCloud::Chatbot::Model;

QueryBotsResult::QueryBotsResult() :
	ServiceResult()
{}

QueryBotsResult::QueryBotsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryBotsResult::~QueryBotsResult()
{}

void QueryBotsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBotsNode = value["Bots"]["Bot"];
	for (auto valueBotsBot : allBotsNode)
	{
		Bot botsObject;
		if(!valueBotsBot["Name"].isNull())
			botsObject.name = valueBotsBot["Name"].asString();
		if(!valueBotsBot["Introduction"].isNull())
			botsObject.introduction = valueBotsBot["Introduction"].asString();
		if(!valueBotsBot["TimeZone"].isNull())
			botsObject.timeZone = valueBotsBot["TimeZone"].asString();
		if(!valueBotsBot["LanguageCode"].isNull())
			botsObject.languageCode = valueBotsBot["LanguageCode"].asString();
		if(!valueBotsBot["Avatar"].isNull())
			botsObject.avatar = valueBotsBot["Avatar"].asString();
		if(!valueBotsBot["CreateTime"].isNull())
			botsObject.createTime = valueBotsBot["CreateTime"].asString();
		if(!valueBotsBot["InstanceId"].isNull())
			botsObject.instanceId = valueBotsBot["InstanceId"].asString();
		bots_.push_back(botsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int QueryBotsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<QueryBotsResult::Bot> QueryBotsResult::getBots()const
{
	return bots_;
}

int QueryBotsResult::getPageSize()const
{
	return pageSize_;
}

int QueryBotsResult::getPageNumber()const
{
	return pageNumber_;
}

