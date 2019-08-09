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

#include <alibabacloud/rtc/model/DescribeRtcChannelCntDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rtc;
using namespace AlibabaCloud::Rtc::Model;

DescribeRtcChannelCntDataResult::DescribeRtcChannelCntDataResult() :
	ServiceResult()
{}

DescribeRtcChannelCntDataResult::DescribeRtcChannelCntDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRtcChannelCntDataResult::~DescribeRtcChannelCntDataResult()
{}

void DescribeRtcChannelCntDataResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allChannelCntDataPerInterval = value["ChannelCntDataPerInterval"]["ChannelCntModule"];
	for (auto value : allChannelCntDataPerInterval)
	{
		ChannelCntModule channelCntDataPerIntervalObject;
		if(!value["TimeStamp"].isNull())
			channelCntDataPerIntervalObject.timeStamp = value["TimeStamp"].asString();
		if(!value["ActiveChannelCnt"].isNull())
			channelCntDataPerIntervalObject.activeChannelCnt = std::stol(value["ActiveChannelCnt"].asString());
		channelCntDataPerInterval_.push_back(channelCntDataPerIntervalObject);
	}

}

std::vector<DescribeRtcChannelCntDataResult::ChannelCntModule> DescribeRtcChannelCntDataResult::getChannelCntDataPerInterval()const
{
	return channelCntDataPerInterval_;
}

