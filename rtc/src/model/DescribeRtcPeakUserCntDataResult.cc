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

#include <alibabacloud/rtc/model/DescribeRtcPeakUserCntDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rtc;
using namespace AlibabaCloud::Rtc::Model;

DescribeRtcPeakUserCntDataResult::DescribeRtcPeakUserCntDataResult() :
	ServiceResult()
{}

DescribeRtcPeakUserCntDataResult::DescribeRtcPeakUserCntDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRtcPeakUserCntDataResult::~DescribeRtcPeakUserCntDataResult()
{}

void DescribeRtcPeakUserCntDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPeakUserCntDataPerInterval = value["PeakUserCntDataPerInterval"]["PeakUserCntModule"];
	for (auto value : allPeakUserCntDataPerInterval)
	{
		PeakUserCntModule peakUserCntDataPerIntervalObject;
		if(!value["TimeStamp"].isNull())
			peakUserCntDataPerIntervalObject.timeStamp = value["TimeStamp"].asString();
		if(!value["ActiveUserPeak"].isNull())
			peakUserCntDataPerIntervalObject.activeUserPeak = std::stol(value["ActiveUserPeak"].asString());
		if(!value["ActiveUserPeakTime"].isNull())
			peakUserCntDataPerIntervalObject.activeUserPeakTime = value["ActiveUserPeakTime"].asString();
		peakUserCntDataPerInterval_.push_back(peakUserCntDataPerIntervalObject);
	}

}

std::vector<DescribeRtcPeakUserCntDataResult::PeakUserCntModule> DescribeRtcPeakUserCntDataResult::getPeakUserCntDataPerInterval()const
{
	return peakUserCntDataPerInterval_;
}

