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

#include <alibabacloud/live/model/DescribeRTSNativeSDKVvDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeRTSNativeSDKVvDataResult::DescribeRTSNativeSDKVvDataResult() :
	ServiceResult()
{}

DescribeRTSNativeSDKVvDataResult::DescribeRTSNativeSDKVvDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRTSNativeSDKVvDataResult::~DescribeRTSNativeSDKVvDataResult()
{}

void DescribeRTSNativeSDKVvDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVvDataNode = value["VvData"]["Data"];
	for (auto valueVvDataData : allVvDataNode)
	{
		Data vvDataObject;
		if(!valueVvDataData["TimeStamp"].isNull())
			vvDataObject.timeStamp = valueVvDataData["TimeStamp"].asString();
		if(!valueVvDataData["VvSuccess"].isNull())
			vvDataObject.vvSuccess = valueVvDataData["VvSuccess"].asString();
		if(!valueVvDataData["VvTotal"].isNull())
			vvDataObject.vvTotal = valueVvDataData["VvTotal"].asString();
		vvData_.push_back(vvDataObject);
	}
	if(!value["DataInterval"].isNull())
		dataInterval_ = value["DataInterval"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();

}

std::string DescribeRTSNativeSDKVvDataResult::getEndTime()const
{
	return endTime_;
}

std::vector<DescribeRTSNativeSDKVvDataResult::Data> DescribeRTSNativeSDKVvDataResult::getVvData()const
{
	return vvData_;
}

std::string DescribeRTSNativeSDKVvDataResult::getDataInterval()const
{
	return dataInterval_;
}

std::string DescribeRTSNativeSDKVvDataResult::getStartTime()const
{
	return startTime_;
}

