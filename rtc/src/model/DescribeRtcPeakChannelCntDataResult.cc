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

#include <alibabacloud/rtc/model/DescribeRtcPeakChannelCntDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rtc;
using namespace AlibabaCloud::Rtc::Model;

DescribeRtcPeakChannelCntDataResult::DescribeRtcPeakChannelCntDataResult() :
	ServiceResult()
{}

DescribeRtcPeakChannelCntDataResult::DescribeRtcPeakChannelCntDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRtcPeakChannelCntDataResult::~DescribeRtcPeakChannelCntDataResult()
{}

void DescribeRtcPeakChannelCntDataResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allPeakChannelCntDataPerInterval = value["PeakChannelCntDataPerInterval"]["PeakChannelCntModule"];
	for (auto value : allPeakChannelCntDataPerInterval)
	{
		PeakChannelCntModule peakChannelCntDataPerIntervalObject;
		if(!value["TimeStamp"].isNull())
			peakChannelCntDataPerIntervalObject.timeStamp = value["TimeStamp"].asString();
		if(!value["ActiveChannelPeak"].isNull())
			peakChannelCntDataPerIntervalObject.activeChannelPeak = std::stol(value["ActiveChannelPeak"].asString());
		if(!value["ActiveChannelPeakTime"].isNull())
			peakChannelCntDataPerIntervalObject.activeChannelPeakTime = value["ActiveChannelPeakTime"].asString();
		peakChannelCntDataPerInterval_.push_back(peakChannelCntDataPerIntervalObject);
	}

}

std::vector<DescribeRtcPeakChannelCntDataResult::PeakChannelCntModule> DescribeRtcPeakChannelCntDataResult::getPeakChannelCntDataPerInterval()const
{
	return peakChannelCntDataPerInterval_;
}

