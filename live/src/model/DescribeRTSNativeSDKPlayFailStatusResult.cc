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

#include <alibabacloud/live/model/DescribeRTSNativeSDKPlayFailStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeRTSNativeSDKPlayFailStatusResult::DescribeRTSNativeSDKPlayFailStatusResult() :
	ServiceResult()
{}

DescribeRTSNativeSDKPlayFailStatusResult::DescribeRTSNativeSDKPlayFailStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRTSNativeSDKPlayFailStatusResult::~DescribeRTSNativeSDKPlayFailStatusResult()
{}

void DescribeRTSNativeSDKPlayFailStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPlayFailStatusNode = value["PlayFailStatus"]["Data"];
	for (auto valuePlayFailStatusData : allPlayFailStatusNode)
	{
		Data playFailStatusObject;
		if(!valuePlayFailStatusData["TimeStamp"].isNull())
			playFailStatusObject.timeStamp = valuePlayFailStatusData["TimeStamp"].asString();
		if(!valuePlayFailStatusData["V20001"].isNull())
			playFailStatusObject.v20001 = valuePlayFailStatusData["V20001"].asString();
		if(!valuePlayFailStatusData["V20002"].isNull())
			playFailStatusObject.v20002 = valuePlayFailStatusData["V20002"].asString();
		if(!valuePlayFailStatusData["V20011"].isNull())
			playFailStatusObject.v20011 = valuePlayFailStatusData["V20011"].asString();
		if(!valuePlayFailStatusData["V20012"].isNull())
			playFailStatusObject.v20012 = valuePlayFailStatusData["V20012"].asString();
		if(!valuePlayFailStatusData["V20013"].isNull())
			playFailStatusObject.v20013 = valuePlayFailStatusData["V20013"].asString();
		if(!valuePlayFailStatusData["V20052"].isNull())
			playFailStatusObject.v20052 = valuePlayFailStatusData["V20052"].asString();
		playFailStatus_.push_back(playFailStatusObject);
	}
	if(!value["DataInterval"].isNull())
		dataInterval_ = value["DataInterval"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();

}

std::vector<DescribeRTSNativeSDKPlayFailStatusResult::Data> DescribeRTSNativeSDKPlayFailStatusResult::getPlayFailStatus()const
{
	return playFailStatus_;
}

std::string DescribeRTSNativeSDKPlayFailStatusResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeRTSNativeSDKPlayFailStatusResult::getDataInterval()const
{
	return dataInterval_;
}

std::string DescribeRTSNativeSDKPlayFailStatusResult::getStartTime()const
{
	return startTime_;
}

