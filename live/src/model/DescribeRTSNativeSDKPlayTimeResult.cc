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

#include <alibabacloud/live/model/DescribeRTSNativeSDKPlayTimeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeRTSNativeSDKPlayTimeResult::DescribeRTSNativeSDKPlayTimeResult() :
	ServiceResult()
{}

DescribeRTSNativeSDKPlayTimeResult::DescribeRTSNativeSDKPlayTimeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRTSNativeSDKPlayTimeResult::~DescribeRTSNativeSDKPlayTimeResult()
{}

void DescribeRTSNativeSDKPlayTimeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPlayTimeDataNode = value["PlayTimeData"]["Data"];
	for (auto valuePlayTimeDataData : allPlayTimeDataNode)
	{
		Data playTimeDataObject;
		if(!valuePlayTimeDataData["PlayTime"].isNull())
			playTimeDataObject.playTime = valuePlayTimeDataData["PlayTime"].asString();
		if(!valuePlayTimeDataData["StallTime"].isNull())
			playTimeDataObject.stallTime = valuePlayTimeDataData["StallTime"].asString();
		if(!valuePlayTimeDataData["TimeStamp"].isNull())
			playTimeDataObject.timeStamp = valuePlayTimeDataData["TimeStamp"].asString();
		playTimeData_.push_back(playTimeDataObject);
	}
	if(!value["DataInterval"].isNull())
		dataInterval_ = value["DataInterval"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();

}

std::string DescribeRTSNativeSDKPlayTimeResult::getEndTime()const
{
	return endTime_;
}

std::vector<DescribeRTSNativeSDKPlayTimeResult::Data> DescribeRTSNativeSDKPlayTimeResult::getPlayTimeData()const
{
	return playTimeData_;
}

std::string DescribeRTSNativeSDKPlayTimeResult::getDataInterval()const
{
	return dataInterval_;
}

std::string DescribeRTSNativeSDKPlayTimeResult::getStartTime()const
{
	return startTime_;
}

