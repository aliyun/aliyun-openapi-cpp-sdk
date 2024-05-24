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

#include <alibabacloud/live/model/DescribeRTSNativeSDKFirstFrameCostResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeRTSNativeSDKFirstFrameCostResult::DescribeRTSNativeSDKFirstFrameCostResult() :
	ServiceResult()
{}

DescribeRTSNativeSDKFirstFrameCostResult::DescribeRTSNativeSDKFirstFrameCostResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRTSNativeSDKFirstFrameCostResult::~DescribeRTSNativeSDKFirstFrameCostResult()
{}

void DescribeRTSNativeSDKFirstFrameCostResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFirstFrameCostDataNode = value["FirstFrameCostData"]["Data"];
	for (auto valueFirstFrameCostDataData : allFirstFrameCostDataNode)
	{
		Data firstFrameCostDataObject;
		if(!valueFirstFrameCostDataData["Connected"].isNull())
			firstFrameCostDataObject.connected = valueFirstFrameCostDataData["Connected"].asString();
		if(!valueFirstFrameCostDataData["FinishGetStreamInfo"].isNull())
			firstFrameCostDataObject.finishGetStreamInfo = valueFirstFrameCostDataData["FinishGetStreamInfo"].asString();
		if(!valueFirstFrameCostDataData["FirstFrameComplete"].isNull())
			firstFrameCostDataObject.firstFrameComplete = valueFirstFrameCostDataData["FirstFrameComplete"].asString();
		if(!valueFirstFrameCostDataData["FirstPacket"].isNull())
			firstFrameCostDataObject.firstPacket = valueFirstFrameCostDataData["FirstPacket"].asString();
		if(!valueFirstFrameCostDataData["Initialized"].isNull())
			firstFrameCostDataObject.initialized = valueFirstFrameCostDataData["Initialized"].asString();
		if(!valueFirstFrameCostDataData["TimeStamp"].isNull())
			firstFrameCostDataObject.timeStamp = valueFirstFrameCostDataData["TimeStamp"].asString();
		firstFrameCostData_.push_back(firstFrameCostDataObject);
	}
	if(!value["DataInterval"].isNull())
		dataInterval_ = value["DataInterval"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();

}

std::string DescribeRTSNativeSDKFirstFrameCostResult::getEndTime()const
{
	return endTime_;
}

std::vector<DescribeRTSNativeSDKFirstFrameCostResult::Data> DescribeRTSNativeSDKFirstFrameCostResult::getFirstFrameCostData()const
{
	return firstFrameCostData_;
}

std::string DescribeRTSNativeSDKFirstFrameCostResult::getDataInterval()const
{
	return dataInterval_;
}

std::string DescribeRTSNativeSDKFirstFrameCostResult::getStartTime()const
{
	return startTime_;
}

