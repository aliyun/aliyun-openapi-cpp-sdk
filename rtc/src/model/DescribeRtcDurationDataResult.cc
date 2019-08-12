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

#include <alibabacloud/rtc/model/DescribeRtcDurationDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rtc;
using namespace AlibabaCloud::Rtc::Model;

DescribeRtcDurationDataResult::DescribeRtcDurationDataResult() :
	ServiceResult()
{}

DescribeRtcDurationDataResult::DescribeRtcDurationDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRtcDurationDataResult::~DescribeRtcDurationDataResult()
{}

void DescribeRtcDurationDataResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allDurationDataPerInterval = value["DurationDataPerInterval"]["DurationModule"];
	for (auto value : allDurationDataPerInterval)
	{
		DurationModule durationDataPerIntervalObject;
		if(!value["TimeStamp"].isNull())
			durationDataPerIntervalObject.timeStamp = value["TimeStamp"].asString();
		if(!value["TotalDuration"].isNull())
			durationDataPerIntervalObject.totalDuration = std::stol(value["TotalDuration"].asString());
		if(!value["AudioDuration"].isNull())
			durationDataPerIntervalObject.audioDuration = std::stol(value["AudioDuration"].asString());
		if(!value["V360Duration"].isNull())
			durationDataPerIntervalObject.v360Duration = std::stol(value["V360Duration"].asString());
		if(!value["V720Duration"].isNull())
			durationDataPerIntervalObject.v720Duration = std::stol(value["V720Duration"].asString());
		if(!value["V1080Duration"].isNull())
			durationDataPerIntervalObject.v1080Duration = std::stol(value["V1080Duration"].asString());
		if(!value["ContentDuration"].isNull())
			durationDataPerIntervalObject.contentDuration = std::stol(value["ContentDuration"].asString());
		durationDataPerInterval_.push_back(durationDataPerIntervalObject);
	}

}

std::vector<DescribeRtcDurationDataResult::DurationModule> DescribeRtcDurationDataResult::getDurationDataPerInterval()const
{
	return durationDataPerInterval_;
}

