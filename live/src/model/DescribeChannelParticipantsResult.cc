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

#include <alibabacloud/live/model/DescribeChannelParticipantsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeChannelParticipantsResult::DescribeChannelParticipantsResult() :
	ServiceResult()
{}

DescribeChannelParticipantsResult::DescribeChannelParticipantsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeChannelParticipantsResult::~DescribeChannelParticipantsResult()
{}

void DescribeChannelParticipantsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUserList = value["UserList"]["Users"];
	for (const auto &item : allUserList)
		userList_.push_back(item.asString());
	if(!value["Times"].isNull())
		times_ = std::stol(value["Times"].asString());
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stoi(value["TotalNum"].asString());
	if(!value["TotalPage"].isNull())
		totalPage_ = std::stoi(value["TotalPage"].asString());

}

int DescribeChannelParticipantsResult::getTotalNum()const
{
	return totalNum_;
}

int DescribeChannelParticipantsResult::getTotalPage()const
{
	return totalPage_;
}

long DescribeChannelParticipantsResult::getTimes()const
{
	return times_;
}

std::vector<std::string> DescribeChannelParticipantsResult::getUserList()const
{
	return userList_;
}

