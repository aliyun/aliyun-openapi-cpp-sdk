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

#include <alibabacloud/sas/model/DescribeContainerStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeContainerStatisticsResult::DescribeContainerStatisticsResult() :
	ServiceResult()
{}

DescribeContainerStatisticsResult::DescribeContainerStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeContainerStatisticsResult::~DescribeContainerStatisticsResult()
{}

void DescribeContainerStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalNode"].isNull())
		data_.totalNode = std::stoi(dataNode["TotalNode"].asString());
	if(!dataNode["RemindAlarmCount"].isNull())
		data_.remindAlarmCount = std::stoi(dataNode["RemindAlarmCount"].asString());
	if(!dataNode["TotalAlarmCount"].isNull())
		data_.totalAlarmCount = std::stoi(dataNode["TotalAlarmCount"].asString());
	if(!dataNode["SuspiciousAlarmCount"].isNull())
		data_.suspiciousAlarmCount = std::stoi(dataNode["SuspiciousAlarmCount"].asString());
	if(!dataNode["SeriousAlarmCount"].isNull())
		data_.seriousAlarmCount = std::stoi(dataNode["SeriousAlarmCount"].asString());
	if(!dataNode["hasRiskNode"].isNull())
		data_.hasRiskNode = std::stoi(dataNode["hasRiskNode"].asString());

}

DescribeContainerStatisticsResult::Data DescribeContainerStatisticsResult::getData()const
{
	return data_;
}

