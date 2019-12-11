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
		if(!valueProcessesProcess["Id"].isNull())
			processesObject.id = valueProcessesProcess["Id"].asString();
		if(!valueProcessesProcess["GroupId"].isNull())
			processesObject.groupId = valueProcessesProcess["GroupId"].asString();
		if(!valueProcessesProcess["ProcessName"].isNull())
			processesObject.processName = valueProcessesProcess["ProcessName"].asString();
		if(!valueProcessesProcess["MatchExpressFilterRelation"].isNull())
			processesObject.matchExpressFilterRelation = valueProcessesProcess["MatchExpressFilterRelation"].asString();
		auto allMatchExpressNode = allProcessesNode["MatchExpress"]["MatchExpressItem"];
		for (auto allProcessesNodeMatchExpressMatchExpressItem : allMatchExpressNode)
		{
			Process::MatchExpressItem matchExpressObject;
			if(!allProcessesNodeMatchExpressMatchExpressItem["Name"].isNull())
				matchExpressObject.name = allProcessesNodeMatchExpressMatchExpressItem["Name"].asString();
			if(!allProcessesNodeMatchExpressMatchExpressItem["Function"].isNull())
				matchExpressObject.function = allProcessesNodeMatchExpressMatchExpressItem["Function"].asString();
			if(!allProcessesNodeMatchExpressMatchExpressItem["Value"].isNull())
				matchExpressObject.value = allProcessesNodeMatchExpressMatchExpressItem["Value"].asString();
			processesObject.matchExpress.push_back(matchExpressObject);
		}
		auto allAlertConfigNode = allProcessesNode["AlertConfig"]["AlertConfigItem"];
		for (auto allProcessesNodeAlertConfigAlertConfigItem : allAlertConfigNode)
		{
			Process::AlertConfigItem alertConfigObject;
			if(!allProcessesNodeAlertConfigAlertConfigItem["EffectiveInterval"].isNull())
				alertConfigObject.effectiveInterval = allProcessesNodeAlertConfigAlertConfigItem["EffectiveInterval"].asString();
			if(!allProcessesNodeAlertConfigAlertConfigItem["NoEffectiveInterval"].isNull())
				alertConfigObject.noEffectiveInterval = allProcessesNodeAlertConfigAlertConfigItem["NoEffectiveInterval"].asString();
			if(!allProcessesNodeAlertConfigAlertConfigItem["SilenceTime"].isNull())
				alertConfigObject.silenceTime = allProcessesNodeAlertConfigAlertConfigItem["SilenceTime"].asString();
			if(!allProcessesNodeAlertConfigAlertConfigItem["Webhook"].isNull())
				alertConfigObject.webhook = allProcessesNodeAlertConfigAlertConfigItem["Webhook"].asString();
			if(!allProcessesNodeAlertConfigAlertConfigItem["EscalationsLevel"].isNull())
				alertConfigObject.escalationsLevel = allProcessesNodeAlertConfigAlertConfigItem["EscalationsLevel"].asString();
			if(!allProcessesNodeAlertConfigAlertConfigItem["ComparisonOperator"].isNull())
				alertConfigObject.comparisonOperator = allProcessesNodeAlertConfigAlertConfigItem["ComparisonOperator"].asString();
			if(!allProcessesNodeAlertConfigAlertConfigItem["Statistics"].isNull())
				alertConfigObject.statistics = allProcessesNodeAlertConfigAlertConfigItem["Statistics"].asString();
			if(!allProcessesNodeAlertConfigAlertConfigItem["Threshold"].isNull())
				alertConfigObject.threshold = allProcessesNodeAlertConfigAlertConfigItem["Threshold"].asString();
			if(!allProcessesNodeAlertConfigAlertConfigItem["Times"].isNull())
				alertConfigObject.times = allProcessesNodeAlertConfigAlertConfigItem["Times"].asString();
			processesObject.alertConfig.push_back(alertConfigObject);
		}
		processes_.push_back(processesObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeGroupMonitoringAgentProcessResult::getMessage()const
{
	return message_;
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

