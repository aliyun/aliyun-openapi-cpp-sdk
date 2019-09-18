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

#include <alibabacloud/rtc/model/DescribeRealTimeRecordDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rtc;
using namespace AlibabaCloud::Rtc::Model;

DescribeRealTimeRecordDetailResult::DescribeRealTimeRecordDetailResult() :
	ServiceResult()
{}

DescribeRealTimeRecordDetailResult::DescribeRealTimeRecordDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRealTimeRecordDetailResult::~DescribeRealTimeRecordDetailResult()
{}

void DescribeRealTimeRecordDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRecordDetailInfos = value["RecordDetailInfos"]["RecordDetailInfo"];
	for (auto value : allRecordDetailInfos)
	{
		RecordDetailInfo recordDetailInfosObject;
		if(!value["Uid"].isNull())
			recordDetailInfosObject.uid = value["Uid"].asString();
		if(!value["StartTime"].isNull())
			recordDetailInfosObject.startTime = value["StartTime"].asString();
		if(!value["DeviceType"].isNull())
			recordDetailInfosObject.deviceType = value["DeviceType"].asString();
		if(!value["SDKVersion"].isNull())
			recordDetailInfosObject.sDKVersion = value["SDKVersion"].asString();
		recordDetailInfos_.push_back(recordDetailInfosObject);
	}

}

std::vector<DescribeRealTimeRecordDetailResult::RecordDetailInfo> DescribeRealTimeRecordDetailResult::getRecordDetailInfos()const
{
	return recordDetailInfos_;
}

