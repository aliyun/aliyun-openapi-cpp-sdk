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
	auto allMachineStatistics = value["MachineStatistics"]["MachineStatistic"];
	for (auto value : allMachineStatistics)
	{
		MachineStatistic machineStatisticsObject;
		if(!value["Uuid"].isNull())
			machineStatisticsObject.uuid = value["Uuid"].asString();
		if(!value["CveNum"].isNull())
			machineStatisticsObject.cveNum = std::stoi(value["CveNum"].asString());
		if(!value["EmgNum"].isNull())
			machineStatisticsObject.emgNum = std::stoi(value["EmgNum"].asString());
		if(!value["SysNum"].isNull())
			machineStatisticsObject.sysNum = std::stoi(value["SysNum"].asString());
		if(!value["CmsNum"].isNull())
			machineStatisticsObject.cmsNum = std::stoi(value["CmsNum"].asString());
		if(!value["CmsDealedTotalNum"].isNull())
			machineStatisticsObject.cmsDealedTotalNum = std::stoi(value["CmsDealedTotalNum"].asString());
		if(!value["VulDealedTotalNum"].isNull())
			machineStatisticsObject.vulDealedTotalNum = std::stoi(value["VulDealedTotalNum"].asString());
		if(!value["VulAsapSum"].isNull())
			machineStatisticsObject.vulAsapSum = std::stoi(value["VulAsapSum"].asString());
		if(!value["VulLaterSum"].isNull())
			machineStatisticsObject.vulLaterSum = std::stoi(value["VulLaterSum"].asString());
		if(!value["VulNntfSum"].isNull())
			machineStatisticsObject.vulNntfSum = std::stoi(value["VulNntfSum"].asString());
		if(!value["VulSeriousTotal"].isNull())
			machineStatisticsObject.vulSeriousTotal = std::stoi(value["VulSeriousTotal"].asString());
		if(!value["VulHighTotal"].isNull())
			machineStatisticsObject.vulHighTotal = std::stoi(value["VulHighTotal"].asString());
		if(!value["VulMediumTotal"].isNull())
			machineStatisticsObject.vulMediumTotal = std::stoi(value["VulMediumTotal"].asString());
		if(!value["VulLowTotal"].isNull())
			machineStatisticsObject.vulLowTotal = std::stoi(value["VulLowTotal"].asString());
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

