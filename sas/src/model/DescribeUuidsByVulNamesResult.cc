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

#include <alibabacloud/sas/model/DescribeUuidsByVulNamesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeUuidsByVulNamesResult::DescribeUuidsByVulNamesResult() :
	ServiceResult()
{}

DescribeUuidsByVulNamesResult::DescribeUuidsByVulNamesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUuidsByVulNamesResult::~DescribeUuidsByVulNamesResult()
{}

void DescribeUuidsByVulNamesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMachineInfoStatisticsNode = value["MachineInfoStatistics"]["MachineInfoStatistic"];
	for (auto valueMachineInfoStatisticsMachineInfoStatistic : allMachineInfoStatisticsNode)
	{
		MachineInfoStatistic machineInfoStatisticsObject;
		if(!valueMachineInfoStatisticsMachineInfoStatistic["Uuid"].isNull())
			machineInfoStatisticsObject.uuid = valueMachineInfoStatisticsMachineInfoStatistic["Uuid"].asString();
		if(!valueMachineInfoStatisticsMachineInfoStatistic["MachineIp"].isNull())
			machineInfoStatisticsObject.machineIp = valueMachineInfoStatisticsMachineInfoStatistic["MachineIp"].asString();
		if(!valueMachineInfoStatisticsMachineInfoStatistic["Os"].isNull())
			machineInfoStatisticsObject.os = valueMachineInfoStatisticsMachineInfoStatistic["Os"].asString();
		if(!valueMachineInfoStatisticsMachineInfoStatistic["MachineName"].isNull())
			machineInfoStatisticsObject.machineName = valueMachineInfoStatisticsMachineInfoStatistic["MachineName"].asString();
		if(!valueMachineInfoStatisticsMachineInfoStatistic["MachineInstanceId"].isNull())
			machineInfoStatisticsObject.machineInstanceId = valueMachineInfoStatisticsMachineInfoStatistic["MachineInstanceId"].asString();
		if(!valueMachineInfoStatisticsMachineInfoStatistic["RegionId"].isNull())
			machineInfoStatisticsObject.regionId = valueMachineInfoStatisticsMachineInfoStatistic["RegionId"].asString();
		machineInfoStatistics_.push_back(machineInfoStatisticsObject);
	}
	if(!value["VulCount"].isNull())
		vulCount_ = std::stoi(value["VulCount"].asString());

}

std::vector<DescribeUuidsByVulNamesResult::MachineInfoStatistic> DescribeUuidsByVulNamesResult::getMachineInfoStatistics()const
{
	return machineInfoStatistics_;
}

int DescribeUuidsByVulNamesResult::getVulCount()const
{
	return vulCount_;
}

