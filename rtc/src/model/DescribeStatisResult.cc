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

#include <alibabacloud/rtc/model/DescribeStatisResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rtc;
using namespace AlibabaCloud::Rtc::Model;

DescribeStatisResult::DescribeStatisResult() :
	ServiceResult()
{}

DescribeStatisResult::DescribeStatisResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeStatisResult::~DescribeStatisResult()
{}

void DescribeStatisResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStatisInfosNode = value["StatisInfos"]["StatisInfo"];
	for (auto valueStatisInfosStatisInfo : allStatisInfosNode)
	{
		StatisInfo statisInfosObject;
		if(!valueStatisInfosStatisInfo["Time"].isNull())
			statisInfosObject.time = valueStatisInfosStatisInfo["Time"].asString();
		auto allDurationNode = allStatisInfosNode["Duration"]["DurationItem"];
		for (auto allStatisInfosNodeDurationDurationItem : allDurationNode)
		{
			StatisInfo::DurationItem durationObject;
			if(!allStatisInfosNodeDurationDurationItem["TotalDuration"].isNull())
				durationObject.totalDuration = std::stof(allStatisInfosNodeDurationDurationItem["TotalDuration"].asString());
			if(!allStatisInfosNodeDurationDurationItem["AudioDuration"].isNull())
				durationObject.audioDuration = std::stof(allStatisInfosNodeDurationDurationItem["AudioDuration"].asString());
			if(!allStatisInfosNodeDurationDurationItem["SdDuration"].isNull())
				durationObject.sdDuration = std::stof(allStatisInfosNodeDurationDurationItem["SdDuration"].asString());
			if(!allStatisInfosNodeDurationDurationItem["HdDuration"].isNull())
				durationObject.hdDuration = std::stof(allStatisInfosNodeDurationDurationItem["HdDuration"].asString());
			if(!allStatisInfosNodeDurationDurationItem["FhdDuration"].isNull())
				durationObject.fhdDuration = std::stof(allStatisInfosNodeDurationDurationItem["FhdDuration"].asString());
			statisInfosObject.duration.push_back(durationObject);
		}
		auto allUserStatisNode = allStatisInfosNode["UserStatis"]["UserStatisItem"];
		for (auto allStatisInfosNodeUserStatisUserStatisItem : allUserStatisNode)
		{
			StatisInfo::UserStatisItem userStatisObject;
			if(!allStatisInfosNodeUserStatisUserStatisItem["ActiveUserCnt"].isNull())
				userStatisObject.activeUserCnt = std::stol(allStatisInfosNodeUserStatisUserStatisItem["ActiveUserCnt"].asString());
			if(!allStatisInfosNodeUserStatisUserStatisItem["ConSessionPeak"].isNull())
				userStatisObject.conSessionPeak = std::stol(allStatisInfosNodeUserStatisUserStatisItem["ConSessionPeak"].asString());
			if(!allStatisInfosNodeUserStatisUserStatisItem["ConSessionPeakTime"].isNull())
				userStatisObject.conSessionPeakTime = allStatisInfosNodeUserStatisUserStatisItem["ConSessionPeakTime"].asString();
			statisInfosObject.userStatis.push_back(userStatisObject);
		}
		auto allChannelStatisNode = allStatisInfosNode["ChannelStatis"]["ChannelStatisItem"];
		for (auto allStatisInfosNodeChannelStatisChannelStatisItem : allChannelStatisNode)
		{
			StatisInfo::ChannelStatisItem channelStatisObject;
			if(!allStatisInfosNodeChannelStatisChannelStatisItem["AccChannelCnt"].isNull())
				channelStatisObject.accChannelCnt = std::stol(allStatisInfosNodeChannelStatisChannelStatisItem["AccChannelCnt"].asString());
			if(!allStatisInfosNodeChannelStatisChannelStatisItem["ConChannelPeak"].isNull())
				channelStatisObject.conChannelPeak = std::stol(allStatisInfosNodeChannelStatisChannelStatisItem["ConChannelPeak"].asString());
			if(!allStatisInfosNodeChannelStatisChannelStatisItem["ConChannelPeakTime"].isNull())
				channelStatisObject.conChannelPeakTime = allStatisInfosNodeChannelStatisChannelStatisItem["ConChannelPeakTime"].asString();
			statisInfosObject.channelStatis.push_back(channelStatisObject);
		}
		statisInfos_.push_back(statisInfosObject);
	}

}

std::vector<DescribeStatisResult::StatisInfo> DescribeStatisResult::getStatisInfos()const
{
	return statisInfos_;
}

