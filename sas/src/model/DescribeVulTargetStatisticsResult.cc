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

#include <alibabacloud/sas/model/DescribeVulTargetStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

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
		if(!valueTargetStatsTargetStat["TotalCount"].isNull())
			targetStatsObject.totalCount = std::stoi(valueTargetStatsTargetStat["TotalCount"].asString());
		if(!valueTargetStatsTargetStat["UuidCount"].isNull())
			targetStatsObject.uuidCount = std::stoi(valueTargetStatsTargetStat["UuidCount"].asString());
		auto allTargetsNode = valueTargetStatsTargetStat["Targets"]["Target"];
		for (auto valueTargetStatsTargetStatTargetsTarget : allTargetsNode)
		{
			TargetStat::Target targetsObject;
			if(!valueTargetStatsTargetStatTargetsTarget["Flag"].isNull())
				targetsObject.flag = valueTargetStatsTargetStatTargetsTarget["Flag"].asString();
			if(!valueTargetStatsTargetStatTargetsTarget["Target"].isNull())
				targetsObject.target = valueTargetStatsTargetStatTargetsTarget["Target"].asString();
			if(!valueTargetStatsTargetStatTargetsTarget["TargetType"].isNull())
				targetsObject.targetType = valueTargetStatsTargetStatTargetsTarget["TargetType"].asString();
			targetStatsObject.targets.push_back(targetsObject);
		}
		targetStats_.push_back(targetStatsObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
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

