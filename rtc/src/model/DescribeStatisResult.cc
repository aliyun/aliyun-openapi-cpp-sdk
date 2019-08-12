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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allStatisInfos = value["StatisInfos"]["StatisInfo"];
	for (auto value : allStatisInfos)
	{
		StatisInfo statisInfosObject;
		if(!value["Time"].isNull())
			statisInfosObject.time = value["Time"].asString();
		auto allDuration = value["Duration"]["DurationItem"];
		for (auto value : allDuration)
		{
			StatisInfo::DurationItem durationObject;
			if(!value["TotalDuration"].isNull())
				durationObject.totalDuration = std::stof(value["TotalDuration"].asString());
			if(!value["AudioDuration"].isNull())
				durationObject.audioDuration = std::stof(value["AudioDuration"].asString());
			if(!value["SdDuration"].isNull())
				durationObject.sdDuration = std::stof(value["SdDuration"].asString());
			if(!value["HdDuration"].isNull())
				durationObject.hdDuration = std::stof(value["HdDuration"].asString());
			if(!value["FhdDuration"].isNull())
				durationObject.fhdDuration = std::stof(value["FhdDuration"].asString());
			statisInfosObject.duration.push_back(durationObject);
		}
		auto allUserStatis = value["UserStatis"]["UserStatisItem"];
		for (auto value : allUserStatis)
		{
			StatisInfo::UserStatisItem userStatisObject;
			if(!value["ActiveUserCnt"].isNull())
				userStatisObject.activeUserCnt = std::stol(value["ActiveUserCnt"].asString());
			if(!value["ConSessionPeak"].isNull())
				userStatisObject.conSessionPeak = std::stol(value["ConSessionPeak"].asString());
			if(!value["ConSessionPeakTime"].isNull())
				userStatisObject.conSessionPeakTime = value["ConSessionPeakTime"].asString();
			statisInfosObject.userStatis.push_back(userStatisObject);
		}
		auto allChannelStatis = value["ChannelStatis"]["ChannelStatisItem"];
		for (auto value : allChannelStatis)
		{
			StatisInfo::ChannelStatisItem channelStatisObject;
			if(!value["AccChannelCnt"].isNull())
				channelStatisObject.accChannelCnt = std::stol(value["AccChannelCnt"].asString());
			if(!value["ConChannelPeak"].isNull())
				channelStatisObject.conChannelPeak = std::stol(value["ConChannelPeak"].asString());
			if(!value["ConChannelPeakTime"].isNull())
				channelStatisObject.conChannelPeakTime = value["ConChannelPeakTime"].asString();
			statisInfosObject.channelStatis.push_back(channelStatisObject);
		}
		statisInfos_.push_back(statisInfosObject);
	}

}

std::vector<DescribeStatisResult::StatisInfo> DescribeStatisResult::getStatisInfos()const
{
	return statisInfos_;
}

