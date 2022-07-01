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

#include <alibabacloud/ddoscoo/model/DescribeInstanceStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeInstanceStatisticsResult::DescribeInstanceStatisticsResult() :
	ServiceResult()
{}

DescribeInstanceStatisticsResult::DescribeInstanceStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceStatisticsResult::~DescribeInstanceStatisticsResult()
{}

void DescribeInstanceStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceStatisticsNode = value["InstanceStatistics"]["InstanceStatistic"];
	for (auto valueInstanceStatisticsInstanceStatistic : allInstanceStatisticsNode)
	{
		InstanceStatistic instanceStatisticsObject;
		if(!valueInstanceStatisticsInstanceStatistic["DomainUsage"].isNull())
			instanceStatisticsObject.domainUsage = std::stoi(valueInstanceStatisticsInstanceStatistic["DomainUsage"].asString());
		if(!valueInstanceStatisticsInstanceStatistic["DefenseCountUsage"].isNull())
			instanceStatisticsObject.defenseCountUsage = std::stoi(valueInstanceStatisticsInstanceStatistic["DefenseCountUsage"].asString());
		if(!valueInstanceStatisticsInstanceStatistic["InstanceId"].isNull())
			instanceStatisticsObject.instanceId = valueInstanceStatisticsInstanceStatistic["InstanceId"].asString();
		if(!valueInstanceStatisticsInstanceStatistic["SiteUsage"].isNull())
			instanceStatisticsObject.siteUsage = std::stoi(valueInstanceStatisticsInstanceStatistic["SiteUsage"].asString());
		if(!valueInstanceStatisticsInstanceStatistic["PortUsage"].isNull())
			instanceStatisticsObject.portUsage = std::stoi(valueInstanceStatisticsInstanceStatistic["PortUsage"].asString());
		instanceStatistics_.push_back(instanceStatisticsObject);
	}

}

std::vector<DescribeInstanceStatisticsResult::InstanceStatistic> DescribeInstanceStatisticsResult::getInstanceStatistics()const
{
	return instanceStatistics_;
}

