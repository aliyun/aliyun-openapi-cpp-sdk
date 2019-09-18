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

#include <alibabacloud/rtc/model/DescribeRtcChannelUserListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rtc;
using namespace AlibabaCloud::Rtc::Model;

DescribeRtcChannelUserListResult::DescribeRtcChannelUserListResult() :
	ServiceResult()
{}

DescribeRtcChannelUserListResult::DescribeRtcChannelUserListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRtcChannelUserListResult::~DescribeRtcChannelUserListResult()
{}

void DescribeRtcChannelUserListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUserList = value["UserList"]["UserListItem"];
	for (auto value : allUserList)
	{
		UserListItem userListObject;
		if(!value["ChannelId"].isNull())
			userListObject.channelId = value["ChannelId"].asString();
		if(!value["UserId"].isNull())
			userListObject.userId = value["UserId"].asString();
		if(!value["StartTime"].isNull())
			userListObject.startTime = value["StartTime"].asString();
		if(!value["EndTime"].isNull())
			userListObject.endTime = value["EndTime"].asString();
		if(!value["ServiceArea"].isNull())
			userListObject.serviceArea = value["ServiceArea"].asString();
		if(!value["SubAudio"].isNull())
			userListObject.subAudio = std::stoi(value["SubAudio"].asString());
		if(!value["PubAudio"].isNull())
			userListObject.pubAudio = std::stoi(value["PubAudio"].asString());
		if(!value["SubVideo360"].isNull())
			userListObject.subVideo360 = std::stoi(value["SubVideo360"].asString());
		if(!value["PubVideo360"].isNull())
			userListObject.pubVideo360 = std::stoi(value["PubVideo360"].asString());
		if(!value["SubVideo720"].isNull())
			userListObject.subVideo720 = std::stoi(value["SubVideo720"].asString());
		if(!value["PubVideo720"].isNull())
			userListObject.pubVideo720 = std::stoi(value["PubVideo720"].asString());
		if(!value["SubVideo1080"].isNull())
			userListObject.subVideo1080 = std::stoi(value["SubVideo1080"].asString());
		if(!value["PubVideo1080"].isNull())
			userListObject.pubVideo1080 = std::stoi(value["PubVideo1080"].asString());
		if(!value["SubContent"].isNull())
			userListObject.subContent = std::stoi(value["SubContent"].asString());
		if(!value["PubContent"].isNull())
			userListObject.pubContent = std::stoi(value["PubContent"].asString());
		userList_.push_back(userListObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNo"].isNull())
		pageNo_ = std::stol(value["PageNo"].asString());
	if(!value["TotalCnt"].isNull())
		totalCnt_ = std::stol(value["TotalCnt"].asString());

}

long DescribeRtcChannelUserListResult::getPageSize()const
{
	return pageSize_;
}

long DescribeRtcChannelUserListResult::getTotalCnt()const
{
	return totalCnt_;
}

long DescribeRtcChannelUserListResult::getPageNo()const
{
	return pageNo_;
}

std::vector<DescribeRtcChannelUserListResult::UserListItem> DescribeRtcChannelUserListResult::getUserList()const
{
	return userList_;
}

