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

#include <alibabacloud/drds/model/DescribeRdsPerformanceSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeRdsPerformanceSummaryResult::DescribeRdsPerformanceSummaryResult() :
	ServiceResult()
{}

DescribeRdsPerformanceSummaryResult::DescribeRdsPerformanceSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRdsPerformanceSummaryResult::~DescribeRdsPerformanceSummaryResult()
{}

void DescribeRdsPerformanceSummaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRdsPerformanceInfosNode = value["RdsPerformanceInfos"]["RdsPerformanceInfo"];
	for (auto valueRdsPerformanceInfosRdsPerformanceInfo : allRdsPerformanceInfosNode)
	{
		RdsPerformanceInfo rdsPerformanceInfosObject;
		if(!valueRdsPerformanceInfosRdsPerformanceInfo["Cpu"].isNull())
			rdsPerformanceInfosObject.cpu = std::stof(valueRdsPerformanceInfosRdsPerformanceInfo["Cpu"].asString());
		if(!valueRdsPerformanceInfosRdsPerformanceInfo["ActiveSessions"].isNull())
			rdsPerformanceInfosObject.activeSessions = std::stoi(valueRdsPerformanceInfosRdsPerformanceInfo["ActiveSessions"].asString());
		if(!valueRdsPerformanceInfosRdsPerformanceInfo["TotalSessions"].isNull())
			rdsPerformanceInfosObject.totalSessions = std::stoi(valueRdsPerformanceInfosRdsPerformanceInfo["TotalSessions"].asString());
		if(!valueRdsPerformanceInfosRdsPerformanceInfo["RdsId"].isNull())
			rdsPerformanceInfosObject.rdsId = valueRdsPerformanceInfosRdsPerformanceInfo["RdsId"].asString();
		if(!valueRdsPerformanceInfosRdsPerformanceInfo["Iops"].isNull())
			rdsPerformanceInfosObject.iops = std::stof(valueRdsPerformanceInfosRdsPerformanceInfo["Iops"].asString());
		if(!valueRdsPerformanceInfosRdsPerformanceInfo["SpaceUsage"].isNull())
			rdsPerformanceInfosObject.spaceUsage = std::stol(valueRdsPerformanceInfosRdsPerformanceInfo["SpaceUsage"].asString());
		rdsPerformanceInfos_.push_back(rdsPerformanceInfosObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeRdsPerformanceSummaryResult::RdsPerformanceInfo> DescribeRdsPerformanceSummaryResult::getRdsPerformanceInfos()const
{
	return rdsPerformanceInfos_;
}

bool DescribeRdsPerformanceSummaryResult::getSuccess()const
{
	return success_;
}

