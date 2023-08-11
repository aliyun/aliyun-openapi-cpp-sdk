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

#include <alibabacloud/datalake/model/GetLifecycleRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DataLake;
using namespace AlibabaCloud::DataLake::Model;

GetLifecycleRuleResult::GetLifecycleRuleResult() :
	ServiceResult()
{}

GetLifecycleRuleResult::GetLifecycleRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetLifecycleRuleResult::~GetLifecycleRuleResult()
{}

void GetLifecycleRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["BizId"].isNull())
		data_.bizId = dataNode["BizId"].asString();
	if(!dataNode["GmtCreate"].isNull())
		data_.gmtCreate = dataNode["GmtCreate"].asString();
	if(!dataNode["GmtModified"].isNull())
		data_.gmtModified = dataNode["GmtModified"].asString();
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["ResourceType"].isNull())
		data_.resourceType = dataNode["ResourceType"].asString();
	if(!dataNode["BindCount"].isNull())
		data_.bindCount = std::stoi(dataNode["BindCount"].asString());
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["RuleType"].isNull())
		data_.ruleType = dataNode["RuleType"].asString();
	if(!dataNode["Config"].isNull())
		data_.config = dataNode["Config"].asString();
	if(!dataNode["IaDays"].isNull())
		data_.iaDays = std::stoi(dataNode["IaDays"].asString());
	if(!dataNode["ArchiveDays"].isNull())
		data_.archiveDays = std::stoi(dataNode["ArchiveDays"].asString());
	if(!dataNode["ColdArchiveDays"].isNull())
		data_.coldArchiveDays = std::stoi(dataNode["ColdArchiveDays"].asString());
	if(!dataNode["ScheduleStatus"].isNull())
		data_.scheduleStatus = dataNode["ScheduleStatus"].asString();
	if(!dataNode["WorkflowId"].isNull())
		data_.workflowId = dataNode["WorkflowId"].asString();
	if(!dataNode["CatalogId"].isNull())
		data_.catalogId = dataNode["CatalogId"].asString();
	auto workflowNode = dataNode["Workflow"];
	if(!workflowNode["LatestInstanceId"].isNull())
		data_.workflow.latestInstanceId = workflowNode["LatestInstanceId"].asString();
	if(!workflowNode["LatestInstanceStatus"].isNull())
		data_.workflow.latestInstanceStatus = workflowNode["LatestInstanceStatus"].asString();
	if(!workflowNode["LatestStartTime"].isNull())
		data_.workflow.latestStartTime = workflowNode["LatestStartTime"].asString();
	if(!workflowNode["LatestEndTime"].isNull())
		data_.workflow.latestEndTime = workflowNode["LatestEndTime"].asString();
	auto workflowInstanceNode = dataNode["WorkflowInstance"];
	if(!workflowInstanceNode["DlfWorkflowId"].isNull())
		data_.workflowInstance.dlfWorkflowId = workflowInstanceNode["DlfWorkflowId"].asString();
	if(!workflowInstanceNode["ExternalInstanceId"].isNull())
		data_.workflowInstance.externalInstanceId = workflowInstanceNode["ExternalInstanceId"].asString();
	if(!workflowInstanceNode["StartTime"].isNull())
		data_.workflowInstance.startTime = std::stol(workflowInstanceNode["StartTime"].asString());
	if(!workflowInstanceNode["EndTime"].isNull())
		data_.workflowInstance.endTime = std::stol(workflowInstanceNode["EndTime"].asString());
	if(!workflowInstanceNode["Status"].isNull())
		data_.workflowInstance.status = workflowInstanceNode["Status"].asString();
	if(!workflowInstanceNode["BatchProgress"].isNull())
		data_.workflowInstance.batchProgress = std::stoi(workflowInstanceNode["BatchProgress"].asString());
	auto allRuntimeLogsNode = workflowInstanceNode["RuntimeLogs"]["RuntimeLogsItem"];
	for (auto workflowInstanceNodeRuntimeLogsRuntimeLogsItem : allRuntimeLogsNode)
	{
		Data::WorkflowInstance::RuntimeLogsItem runtimeLogsItemObject;
		if(!workflowInstanceNodeRuntimeLogsRuntimeLogsItem["GmtCreate"].isNull())
			runtimeLogsItemObject.gmtCreate = workflowInstanceNodeRuntimeLogsRuntimeLogsItem["GmtCreate"].asString();
		if(!workflowInstanceNodeRuntimeLogsRuntimeLogsItem["InstanceId"].isNull())
			runtimeLogsItemObject.instanceId = workflowInstanceNodeRuntimeLogsRuntimeLogsItem["InstanceId"].asString();
		if(!workflowInstanceNodeRuntimeLogsRuntimeLogsItem["BizTime"].isNull())
			runtimeLogsItemObject.bizTime = workflowInstanceNodeRuntimeLogsRuntimeLogsItem["BizTime"].asString();
		if(!workflowInstanceNodeRuntimeLogsRuntimeLogsItem["LogType"].isNull())
			runtimeLogsItemObject.logType = workflowInstanceNodeRuntimeLogsRuntimeLogsItem["LogType"].asString();
		if(!workflowInstanceNodeRuntimeLogsRuntimeLogsItem["LogId"].isNull())
			runtimeLogsItemObject.logId = workflowInstanceNodeRuntimeLogsRuntimeLogsItem["LogId"].asString();
		if(!workflowInstanceNodeRuntimeLogsRuntimeLogsItem["LogSummary"].isNull())
			runtimeLogsItemObject.logSummary = workflowInstanceNodeRuntimeLogsRuntimeLogsItem["LogSummary"].asString();
		if(!workflowInstanceNodeRuntimeLogsRuntimeLogsItem["LogContent"].isNull())
			runtimeLogsItemObject.logContent = workflowInstanceNodeRuntimeLogsRuntimeLogsItem["LogContent"].asString();
		data_.workflowInstance.runtimeLogs.push_back(runtimeLogsItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetLifecycleRuleResult::Data GetLifecycleRuleResult::getData()const
{
	return data_;
}

bool GetLifecycleRuleResult::getSuccess()const
{
	return success_;
}

