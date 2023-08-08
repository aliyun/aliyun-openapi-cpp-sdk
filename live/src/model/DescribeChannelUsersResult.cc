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

#include <alibabacloud/live/model/DescribeChannelUsersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeChannelUsersResult::DescribeChannelUsersResult() :
	ServiceResult()
{}

DescribeChannelUsersResult::DescribeChannelUsersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeChannelUsersResult::~DescribeChannelUsersResult()
{}

void DescribeChannelUsersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInteractiveUserList = value["InteractiveUserList"]["InteractiveUser"];
	for (const auto &item : allInteractiveUserList)
		interactiveUserList_.push_back(item.asString());
	auto allLiveUserList = value["LiveUserList"]["LiveUser"];
	for (const auto &item : allLiveUserList)
		liveUserList_.push_back(item.asString());
	if(!value["Timestamp"].isNull())
		timestamp_ = std::stol(value["Timestamp"].asString());
	if(!value["IsChannelExists"].isNull())
		isChannelExists_ = value["IsChannelExists"].asString() == "true";
	if(!value["InteractiveUserNumber"].isNull())
		interactiveUserNumber_ = std::stoi(value["InteractiveUserNumber"].asString());
	if(!value["LiveUserNumber"].isNull())
		liveUserNumber_ = std::stoi(value["LiveUserNumber"].asString());

}

std::vector<std::string> DescribeChannelUsersResult::getInteractiveUserList()const
{
	return interactiveUserList_;
}

int DescribeChannelUsersResult::getInteractiveUserNumber()const
{
	return interactiveUserNumber_;
}

bool DescribeChannelUsersResult::getIsChannelExists()const
{
	return isChannelExists_;
}

std::vector<std::string> DescribeChannelUsersResult::getLiveUserList()const
{
	return liveUserList_;
}

long DescribeChannelUsersResult::getTimestamp()const
{
	return timestamp_;
}

int DescribeChannelUsersResult::getLiveUserNumber()const
{
	return liveUserNumber_;
}

