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

#include <alibabacloud/live/model/DescribeLiveMessageGroupBandResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveMessageGroupBandResult::DescribeLiveMessageGroupBandResult() :
	ServiceResult()
{}

DescribeLiveMessageGroupBandResult::DescribeLiveMessageGroupBandResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveMessageGroupBandResult::~DescribeLiveMessageGroupBandResult()
{}

void DescribeLiveMessageGroupBandResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBannedUserList = value["BannedUserList"]["BannedUsers"];
	for (const auto &item : allBannedUserList)
		bannedUserList_.push_back(item.asString());
	auto allUnbannedUserList = value["UnbannedUserList"]["UnbannedUsers"];
	for (const auto &item : allUnbannedUserList)
		unbannedUserList_.push_back(item.asString());
	if(!value["GroupId"].isNull())
		groupId_ = value["GroupId"].asString();
	if(!value["IsbannedAll"].isNull())
		isbannedAll_ = value["IsbannedAll"].asString() == "true";

}

bool DescribeLiveMessageGroupBandResult::getIsbannedAll()const
{
	return isbannedAll_;
}

std::vector<std::string> DescribeLiveMessageGroupBandResult::getBannedUserList()const
{
	return bannedUserList_;
}

std::vector<std::string> DescribeLiveMessageGroupBandResult::getUnbannedUserList()const
{
	return unbannedUserList_;
}

std::string DescribeLiveMessageGroupBandResult::getGroupId()const
{
	return groupId_;
}

