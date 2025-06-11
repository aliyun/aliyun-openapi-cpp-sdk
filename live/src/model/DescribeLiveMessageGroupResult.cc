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

#include <alibabacloud/live/model/DescribeLiveMessageGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveMessageGroupResult::DescribeLiveMessageGroupResult() :
	ServiceResult()
{}

DescribeLiveMessageGroupResult::DescribeLiveMessageGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveMessageGroupResult::~DescribeLiveMessageGroupResult()
{}

void DescribeLiveMessageGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAdminList = value["AdminList"]["Admins"];
	for (const auto &item : allAdminList)
		adminList_.push_back(item.asString());
	if(!value["GroupId"].isNull())
		groupId_ = value["GroupId"].asString();
	if(!value["CreatorId"].isNull())
		creatorId_ = value["CreatorId"].asString();
	if(!value["Createtime"].isNull())
		createtime_ = std::stol(value["Createtime"].asString());
	if(!value["GroupName"].isNull())
		groupName_ = value["GroupName"].asString();
	if(!value["GroupInfo"].isNull())
		groupInfo_ = value["GroupInfo"].asString();
	if(!value["Delete"].isNull())
		_delete_ = value["Delete"].asString() == "true";
	if(!value["TotalTimes"].isNull())
		totalTimes_ = std::stol(value["TotalTimes"].asString());
	if(!value["OnlineUserCounts"].isNull())
		onlineUserCounts_ = std::stol(value["OnlineUserCounts"].asString());
	if(!value["MsgAmount"].isNull())
		msgAmount_ = value["MsgAmount"].asString();
	if(!value["Deletatime"].isNull())
		deletatime_ = std::stol(value["Deletatime"].asString());
	if(!value["Deletor"].isNull())
		deletor_ = value["Deletor"].asString();
	if(!value["SuperLargeGroup"].isNull())
		superLargeGroup_ = value["SuperLargeGroup"].asString() == "true";

}

std::string DescribeLiveMessageGroupResult::getGroupName()const
{
	return groupName_;
}

long DescribeLiveMessageGroupResult::getDeletatime()const
{
	return deletatime_;
}

bool DescribeLiveMessageGroupResult::getSuperLargeGroup()const
{
	return superLargeGroup_;
}

long DescribeLiveMessageGroupResult::getTotalTimes()const
{
	return totalTimes_;
}

std::string DescribeLiveMessageGroupResult::getMsgAmount()const
{
	return msgAmount_;
}

std::string DescribeLiveMessageGroupResult::getGroupInfo()const
{
	return groupInfo_;
}

std::string DescribeLiveMessageGroupResult::getCreatorId()const
{
	return creatorId_;
}

long DescribeLiveMessageGroupResult::getOnlineUserCounts()const
{
	return onlineUserCounts_;
}

std::string DescribeLiveMessageGroupResult::getGroupId()const
{
	return groupId_;
}

std::vector<std::string> DescribeLiveMessageGroupResult::getAdminList()const
{
	return adminList_;
}

bool DescribeLiveMessageGroupResult::get_Delete()const
{
	return _delete_;
}

long DescribeLiveMessageGroupResult::getCreatetime()const
{
	return createtime_;
}

std::string DescribeLiveMessageGroupResult::getDeletor()const
{
	return deletor_;
}

