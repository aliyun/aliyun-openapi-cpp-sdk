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

#include <alibabacloud/aegis/model/DescribeVulMachineListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeVulMachineListResult::DescribeVulMachineListResult() :
	ServiceResult()
{}

DescribeVulMachineListResult::DescribeVulMachineListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVulMachineListResult::~DescribeVulMachineListResult()
{}

void DescribeVulMachineListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMachineStatisticsNode = value["MachineStatistics"]["MachineStatistic"];
	for (auto valueMachineStatisticsMachineStatistic : allMachineStatisticsNode)
	{
		MachineStatistic machineStatisticsObject;
		if(!valueMachineStatisticsMachineStatistic["Uuid"].isNull())
			machineStatisticsObject.uuid = valueMachineStatisticsMachineStatistic["Uuid"].asString();
		if(!valueMachineStatisticsMachineStatistic["CveNum"].isNull())
			machineStatisticsObject.cveNum = std::stoi(valueMachineStatisticsMachineStatistic["CveNum"].asString());
		if(!valueMachineStatisticsMachineStatistic["EmgNum"].isNull())
			machineStatisticsObject.emgNum = std::stoi(valueMachineStatisticsMachineStatistic["EmgNum"].asString());
		if(!valueMachineStatisticsMachineStatistic["SysNum"].isNull())
			machineStatisticsObject.sysNum = std::stoi(valueMachineStatisticsMachineStatistic["SysNum"].asString());
		if(!valueMachineStatisticsMachineStatistic["CmsNum"].isNull())
			machineStatisticsObject.cmsNum = std::stoi(valueMachineStatisticsMachineStatistic["CmsNum"].asString());
		if(!valueMachineStatisticsMachineStatistic["CmsDealedTotalNum"].isNull())
			machineStatisticsObject.cmsDealedTotalNum = std::stoi(valueMachineStatisticsMachineStatistic["CmsDealedTotalNum"].asString());
		if(!valueMachineStatisticsMachineStatistic["VulDealedTotalNum"].isNull())
			machineStatisticsObject.vulDealedTotalNum = std::stoi(valueMachineStatisticsMachineStatistic["VulDealedTotalNum"].asString());
		if(!valueMachineStatisticsMachineStatistic["VulAsapSum"].isNull())
			machineStatisticsObject.vulAsapSum = std::stoi(valueMachineStatisticsMachineStatistic["VulAsapSum"].asString());
		if(!valueMachineStatisticsMachineStatistic["VulLaterSum"].isNull())
			machineStatisticsObject.vulLaterSum = std::stoi(valueMachineStatisticsMachineStatistic["VulLaterSum"].asString());
		if(!valueMachineStatisticsMachineStatistic["VulNntfSum"].isNull())
			machineStatisticsObject.vulNntfSum = std::stoi(valueMachineStatisticsMachineStatistic["VulNntfSum"].asString());
		if(!valueMachineStatisticsMachineStatistic["VulSeriousTotal"].isNull())
			machineStatisticsObject.vulSeriousTotal = std::stoi(valueMachineStatisticsMachineStatistic["VulSeriousTotal"].asString());
		if(!valueMachineStatisticsMachineStatistic["VulHighTotal"].isNull())
			machineStatisticsObject.vulHighTotal = std::stoi(valueMachineStatisticsMachineStatistic["VulHighTotal"].asString());
		if(!valueMachineStatisticsMachineStatistic["VulMediumTotal"].isNull())
			machineStatisticsObject.vulMediumTotal = std::stoi(valueMachineStatisticsMachineStatistic["VulMediumTotal"].asString());
		if(!valueMachineStatisticsMachineStatistic["VulLowTotal"].isNull())
			machineStatisticsObject.vulLowTotal = std::stoi(valueMachineStatisticsMachineStatistic["VulLowTotal"].asString());
		machineStatistics_.push_back(machineStatisticsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeVulMachineListResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeVulMachineListResult::MachineStatistic> DescribeVulMachineListResult::getMachineStatistics()const
{
	return machineStatistics_;
}

