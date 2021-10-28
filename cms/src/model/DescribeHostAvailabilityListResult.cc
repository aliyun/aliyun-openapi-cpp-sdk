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

#include <alibabacloud/cms/model/DescribeHostAvailabilityListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeHostAvailabilityListResult::DescribeHostAvailabilityListResult() :
	ServiceResult()
{}

DescribeHostAvailabilityListResult::DescribeHostAvailabilityListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeHostAvailabilityListResult::~DescribeHostAvailabilityListResult()
{}

void DescribeHostAvailabilityListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTaskListNode = value["TaskList"]["NodeTaskConfig"];
	for (auto valueTaskListNodeTaskConfig : allTaskListNode)
	{
		NodeTaskConfig taskListObject;
		if(!valueTaskListNodeTaskConfig["TaskType"].isNull())
			taskListObject.taskType = valueTaskListNodeTaskConfig["TaskType"].asString();
		if(!valueTaskListNodeTaskConfig["GroupName"].isNull())
			taskListObject.groupName = valueTaskListNodeTaskConfig["GroupName"].asString();
		if(!valueTaskListNodeTaskConfig["GroupId"].isNull())
			taskListObject.groupId = std::stol(valueTaskListNodeTaskConfig["GroupId"].asString());
		if(!valueTaskListNodeTaskConfig["TaskName"].isNull())
			taskListObject.taskName = valueTaskListNodeTaskConfig["TaskName"].asString();
		if(!valueTaskListNodeTaskConfig["Disabled"].isNull())
			taskListObject.disabled = valueTaskListNodeTaskConfig["Disabled"].asString() == "true";
		if(!valueTaskListNodeTaskConfig["TaskScope"].isNull())
			taskListObject.taskScope = valueTaskListNodeTaskConfig["TaskScope"].asString();
		if(!valueTaskListNodeTaskConfig["Id"].isNull())
			taskListObject.id = std::stol(valueTaskListNodeTaskConfig["Id"].asString());
		auto taskOptionNode = value["TaskOption"];
		if(!taskOptionNode["HttpMethod"].isNull())
			taskListObject.taskOption.httpMethod = taskOptionNode["HttpMethod"].asString();
		if(!taskOptionNode["Interval"].isNull())
			taskListObject.taskOption.interval = std::stoi(taskOptionNode["Interval"].asString());
		if(!taskOptionNode["HttpURI"].isNull())
			taskListObject.taskOption.httpURI = taskOptionNode["HttpURI"].asString();
		if(!taskOptionNode["TelnetOrPingHost"].isNull())
			taskListObject.taskOption.telnetOrPingHost = taskOptionNode["TelnetOrPingHost"].asString();
		if(!taskOptionNode["HttpResponseCharset"].isNull())
			taskListObject.taskOption.httpResponseCharset = taskOptionNode["HttpResponseCharset"].asString();
		if(!taskOptionNode["HttpPostContent"].isNull())
			taskListObject.taskOption.httpPostContent = taskOptionNode["HttpPostContent"].asString();
		if(!taskOptionNode["HttpNegative"].isNull())
			taskListObject.taskOption.httpNegative = taskOptionNode["HttpNegative"].asString() == "true";
		if(!taskOptionNode["HttpKeyword"].isNull())
			taskListObject.taskOption.httpKeyword = taskOptionNode["HttpKeyword"].asString();
		auto alertConfigNode = value["AlertConfig"];
		if(!alertConfigNode["SilenceTime"].isNull())
			taskListObject.alertConfig.silenceTime = std::stoi(alertConfigNode["SilenceTime"].asString());
		if(!alertConfigNode["EndTime"].isNull())
			taskListObject.alertConfig.endTime = std::stoi(alertConfigNode["EndTime"].asString());
		if(!alertConfigNode["StartTime"].isNull())
			taskListObject.alertConfig.startTime = std::stoi(alertConfigNode["StartTime"].asString());
		if(!alertConfigNode["WebHook"].isNull())
			taskListObject.alertConfig.webHook = alertConfigNode["WebHook"].asString();
		if(!alertConfigNode["NotifyType"].isNull())
			taskListObject.alertConfig.notifyType = std::stoi(alertConfigNode["NotifyType"].asString());
		auto allEscalationListNode = alertConfigNode["EscalationList"]["escalationListItem"];
		for (auto alertConfigNodeEscalationListescalationListItem : allEscalationListNode)
		{
			NodeTaskConfig::AlertConfig::EscalationListItem escalationListItemObject;
			if(!alertConfigNodeEscalationListescalationListItem["Value"].isNull())
				escalationListItemObject.value = alertConfigNodeEscalationListescalationListItem["Value"].asString();
			if(!alertConfigNodeEscalationListescalationListItem["MetricName"].isNull())
				escalationListItemObject.metricName = alertConfigNodeEscalationListescalationListItem["MetricName"].asString();
			if(!alertConfigNodeEscalationListescalationListItem["Operator"].isNull())
				escalationListItemObject._operator = alertConfigNodeEscalationListescalationListItem["Operator"].asString();
			if(!alertConfigNodeEscalationListescalationListItem["Times"].isNull())
				escalationListItemObject.times = alertConfigNodeEscalationListescalationListItem["Times"].asString();
			if(!alertConfigNodeEscalationListescalationListItem["Aggregate"].isNull())
				escalationListItemObject.aggregate = alertConfigNodeEscalationListescalationListItem["Aggregate"].asString();
			taskListObject.alertConfig.escalationList.push_back(escalationListItemObject);
		}
		auto allInstances = value["Instances"]["Instance"];
		for (auto value : allInstances)
			taskListObject.instances.push_back(value.asString());
		taskList_.push_back(taskListObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeHostAvailabilityListResult::getMessage()const
{
	return message_;
}

std::vector<DescribeHostAvailabilityListResult::NodeTaskConfig> DescribeHostAvailabilityListResult::getTaskList()const
{
	return taskList_;
}

int DescribeHostAvailabilityListResult::getTotal()const
{
	return total_;
}

std::string DescribeHostAvailabilityListResult::getCode()const
{
	return code_;
}

bool DescribeHostAvailabilityListResult::getSuccess()const
{
	return success_;
}

