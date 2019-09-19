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

#include <alibabacloud/aegis/model/DescribeVulTargetStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeVulTargetStatisticsResult::DescribeVulTargetStatisticsResult() :
	ServiceResult()
{}

DescribeVulTargetStatisticsResult::DescribeVulTargetStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVulTargetStatisticsResult::~DescribeVulTargetStatisticsResult()
{}

void DescribeVulTargetStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTargetStatsNode = value["TargetStats"]["TargetStat"];
	for (auto valueTargetStatsTargetStat : allTargetStatsNode)
	{
		TargetStat targetStatsObject;
		if(!valueTargetStatsTargetStat["VulType"].isNull())
			targetStatsObject.vulType = valueTargetStatsTargetStat["VulType"].asString();
		if(!valueTargetStatsTargetStat["UuidCount"].isNull())
			targetStatsObject.uuidCount = valueTargetStatsTargetStat["UuidCount"].asString();
		if(!valueTargetStatsTargetStat["TotalCount"].isNull())
			targetStatsObject.totalCount = valueTargetStatsTargetStat["TotalCount"].asString();
		auto allTargetsNode = allTargetStatsNode["Targets"]["Target"];
		for (auto allTargetStatsNodeTargetsTarget : allTargetsNode)
		{
			TargetStat::Target targetsObject;
			if(!allTargetStatsNodeTargetsTarget["Target"].isNull())
				targetsObject.target = allTargetStatsNodeTargetsTarget["Target"].asString();
			if(!allTargetStatsNodeTargetsTarget["TargetType"].isNull())
				targetsObject.targetType = allTargetStatsNodeTargetsTarget["TargetType"].asString();
			if(!allTargetStatsNodeTargetsTarget["Flag"].isNull())
				targetsObject.flag = allTargetStatsNodeTargetsTarget["Flag"].asString();
			targetStatsObject.targets.push_back(targetsObject);
		}
		targetStats_.push_back(targetStatsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeVulTargetStatisticsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeVulTargetStatisticsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeVulTargetStatisticsResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeVulTargetStatisticsResult::TargetStat> DescribeVulTargetStatisticsResult::getTargetStats()const
{
	return targetStats_;
}

