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

#include <alibabacloud/cms/model/DescribeGroupMonitoringAgentProcessResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeGroupMonitoringAgentProcessResult::DescribeGroupMonitoringAgentProcessResult() :
	ServiceResult()
{}

DescribeGroupMonitoringAgentProcessResult::DescribeGroupMonitoringAgentProcessResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGroupMonitoringAgentProcessResult::~DescribeGroupMonitoringAgentProcessResult()
{}

void DescribeGroupMonitoringAgentProcessResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allProcessesNode = value["Processes"]["Process"];
	for (auto valueProcessesProcess : allProcessesNode)
	{
		Process processesObject;
		if(!valueProcessesProcess["ProcessName"].isNull())
			processesObject.processName = valueProcessesProcess["ProcessName"].asString();
		if(!valueProcessesProcess["MatchExpressFilterRelation"].isNull())
			processesObject.matchExpressFilterRelation = valueProcessesProcess["MatchExpressFilterRelation"].asString();
		if(!valueProcessesProcess["GroupId"].isNull())
			processesObject.groupId = valueProcessesProcess["GroupId"].asString();
		if(!valueProcessesProcess["Id"].isNull())
			processesObject.id = valueProcessesProcess["Id"].asString();
		auto allMatchExpressNode = valueProcessesProcess["MatchExpress"]["MatchExpressItem"];
		for (auto valueProcessesProcessMatchExpressMatchExpressItem : allMatchExpressNode)
		{
			Process::MatchExpressItem matchExpressObject;
			if(!valueProcessesProcessMatchExpressMatchExpressItem["Value"].isNull())
				matchExpressObject.value = valueProcessesProcessMatchExpressMatchExpressItem["Value"].asString();
			if(!valueProcessesProcessMatchExpressMatchExpressItem["Name"].isNull())
				matchExpressObject.name = valueProcessesProcessMatchExpressMatchExpressItem["Name"].asString();
			if(!valueProcessesProcessMatchExpressMatchExpressItem["Function"].isNull())
				matchExpressObject.function = valueProcessesProcessMatchExpressMatchExpressItem["Function"].asString();
			processesObject.matchExpress.push_back(matchExpressObject);
		}
		auto allAlertConfigNode = valueProcessesProcess["AlertConfig"]["AlertConfigItem"];
		for (auto valueProcessesProcessAlertConfigAlertConfigItem : allAlertConfigNode)
		{
			Process::AlertConfigItem alertConfigObject;
			if(!valueProcessesProcessAlertConfigAlertConfigItem["ComparisonOperator"].isNull())
				alertConfigObject.comparisonOperator = valueProcessesProcessAlertConfigAlertConfigItem["ComparisonOperator"].asString();
			if(!valueProcessesProcessAlertConfigAlertConfigItem["SilenceTime"].isNull())
				alertConfigObject.silenceTime = valueProcessesProcessAlertConfigAlertConfigItem["SilenceTime"].asString();
			if(!valueProcessesProcessAlertConfigAlertConfigItem["Webhook"].isNull())
				alertConfigObject.webhook = valueProcessesProcessAlertConfigAlertConfigItem["Webhook"].asString();
			if(!valueProcessesProcessAlertConfigAlertConfigItem["Times"].isNull())
				alertConfigObject.times = valueProcessesProcessAlertConfigAlertConfigItem["Times"].asString();
			if(!valueProcessesProcessAlertConfigAlertConfigItem["EscalationsLevel"].isNull())
				alertConfigObject.escalationsLevel = valueProcessesProcessAlertConfigAlertConfigItem["EscalationsLevel"].asString();
			if(!valueProcessesProcessAlertConfigAlertConfigItem["NoEffectiveInterval"].isNull())
				alertConfigObject.noEffectiveInterval = valueProcessesProcessAlertConfigAlertConfigItem["NoEffectiveInterval"].asString();
			if(!valueProcessesProcessAlertConfigAlertConfigItem["EffectiveInterval"].isNull())
				alertConfigObject.effectiveInterval = valueProcessesProcessAlertConfigAlertConfigItem["EffectiveInterval"].asString();
			if(!valueProcessesProcessAlertConfigAlertConfigItem["Threshold"].isNull())
				alertConfigObject.threshold = valueProcessesProcessAlertConfigAlertConfigItem["Threshold"].asString();
			if(!valueProcessesProcessAlertConfigAlertConfigItem["Statistics"].isNull())
				alertConfigObject.statistics = valueProcessesProcessAlertConfigAlertConfigItem["Statistics"].asString();
			processesObject.alertConfig.push_back(alertConfigObject);
		}
		processes_.push_back(processesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();
	if(!value["Total"].isNull())
		total_ = value["Total"].asString();

}

std::string DescribeGroupMonitoringAgentProcessResult::getMessage()const
{
	return message_;
}

std::string DescribeGroupMonitoringAgentProcessResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeGroupMonitoringAgentProcessResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeGroupMonitoringAgentProcessResult::getTotal()const
{
	return total_;
}

std::vector<DescribeGroupMonitoringAgentProcessResult::Process> DescribeGroupMonitoringAgentProcessResult::getProcesses()const
{
	return processes_;
}

std::string DescribeGroupMonitoringAgentProcessResult::getCode()const
{
	return code_;
}

bool DescribeGroupMonitoringAgentProcessResult::getSuccess()const
{
	return success_;
}

