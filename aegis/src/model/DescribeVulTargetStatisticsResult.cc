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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allTargetStats = value["TargetStats"]["TargetStat"];
	for (auto value : allTargetStats)
	{
		TargetStat targetStatsObject;
		if(!value["VulType"].isNull())
			targetStatsObject.vulType = value["VulType"].asString();
		if(!value["UuidCount"].isNull())
			targetStatsObject.uuidCount = value["UuidCount"].asString();
		if(!value["TotalCount"].isNull())
			targetStatsObject.totalCount = value["TotalCount"].asString();
		auto allTargets = value["Targets"]["Target"];
		for (auto value : allTargets)
		{
			TargetStat::Target targetsObject;
			if(!value["Target"].isNull())
				targetsObject.target = value["Target"].asString();
			if(!value["TargetType"].isNull())
				targetsObject.targetType = value["TargetType"].asString();
			if(!value["Flag"].isNull())
				targetsObject.flag = value["Flag"].asString();
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

