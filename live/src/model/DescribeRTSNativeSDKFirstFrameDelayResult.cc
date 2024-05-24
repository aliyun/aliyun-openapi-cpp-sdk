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

#include <alibabacloud/live/model/DescribeRTSNativeSDKFirstFrameDelayResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeRTSNativeSDKFirstFrameDelayResult::DescribeRTSNativeSDKFirstFrameDelayResult() :
	ServiceResult()
{}

DescribeRTSNativeSDKFirstFrameDelayResult::DescribeRTSNativeSDKFirstFrameDelayResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRTSNativeSDKFirstFrameDelayResult::~DescribeRTSNativeSDKFirstFrameDelayResult()
{}

void DescribeRTSNativeSDKFirstFrameDelayResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFrameDelayDataNode = value["FrameDelayData"]["Data"];
	for (auto valueFrameDelayDataData : allFrameDelayDataNode)
	{
		Data frameDelayDataObject;
		if(!valueFrameDelayDataData["FrameDelay"].isNull())
			frameDelayDataObject.frameDelay = valueFrameDelayDataData["FrameDelay"].asString();
		if(!valueFrameDelayDataData["TimeStamp"].isNull())
			frameDelayDataObject.timeStamp = valueFrameDelayDataData["TimeStamp"].asString();
		frameDelayData_.push_back(frameDelayDataObject);
	}
	if(!value["DataInterval"].isNull())
		dataInterval_ = value["DataInterval"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();

}

std::string DescribeRTSNativeSDKFirstFrameDelayResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeRTSNativeSDKFirstFrameDelayResult::getDataInterval()const
{
	return dataInterval_;
}

std::string DescribeRTSNativeSDKFirstFrameDelayResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribeRTSNativeSDKFirstFrameDelayResult::Data> DescribeRTSNativeSDKFirstFrameDelayResult::getFrameDelayData()const
{
	return frameDelayData_;
}

