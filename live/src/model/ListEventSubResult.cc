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

#include <alibabacloud/live/model/ListEventSubResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

ListEventSubResult::ListEventSubResult() :
	ServiceResult()
{}

ListEventSubResult::ListEventSubResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEventSubResult::~ListEventSubResult()
{}

void ListEventSubResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSubscribersNode = value["Subscribers"]["data"];
	for (auto valueSubscribersdata : allSubscribersNode)
	{
		Data subscribersObject;
		if(!valueSubscribersdata["SubId"].isNull())
			subscribersObject.subId = valueSubscribersdata["SubId"].asString();
		if(!valueSubscribersdata["ChannelId"].isNull())
			subscribersObject.channelId = valueSubscribersdata["ChannelId"].asString();
		if(!valueSubscribersdata["CallbackUrl"].isNull())
			subscribersObject.callbackUrl = valueSubscribersdata["CallbackUrl"].asString();
		if(!valueSubscribersdata["CreateTime"].isNull())
			subscribersObject.createTime = valueSubscribersdata["CreateTime"].asString();
		if(!valueSubscribersdata["ModifyTime"].isNull())
			subscribersObject.modifyTime = valueSubscribersdata["ModifyTime"].asString();
		if(!valueSubscribersdata["Roles"].isNull())
			subscribersObject.roles = std::stoi(valueSubscribersdata["Roles"].asString());
		auto allEvents = value["Events"]["events"];
		for (auto value : allEvents)
			subscribersObject.events.push_back(value.asString());
		auto allUsers = value["Users"]["users"];
		for (auto value : allUsers)
			subscribersObject.users.push_back(value.asString());
		subscribers_.push_back(subscribersObject);
	}

}

std::vector<ListEventSubResult::Data> ListEventSubResult::getSubscribers()const
{
	return subscribers_;
}

