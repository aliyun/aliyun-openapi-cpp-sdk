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

#include <alibabacloud/cms/model/CreateHostAvailabilityRequest.h>

using AlibabaCloud::Cms::Model::CreateHostAvailabilityRequest;

CreateHostAvailabilityRequest::CreateHostAvailabilityRequest() :
	RpcServiceRequest("cms", "2019-01-01", "CreateHostAvailability")
{
	setMethod(HttpRequest::Method::Post);
}

CreateHostAvailabilityRequest::~CreateHostAvailabilityRequest()
{}

std::string CreateHostAvailabilityRequest::getTaskOptionHttpMethod()const
{
	return taskOptionHttpMethod_;
}

void CreateHostAvailabilityRequest::setTaskOptionHttpMethod(const std::string& taskOptionHttpMethod)
{
	taskOptionHttpMethod_ = taskOptionHttpMethod;
	setCoreParameter("TaskOptionHttpMethod", taskOptionHttpMethod);
}

std::vector<CreateHostAvailabilityRequest::AlertConfigEscalationList> CreateHostAvailabilityRequest::getAlertConfigEscalationList()const
{
	return alertConfigEscalationList_;
}

void CreateHostAvailabilityRequest::setAlertConfigEscalationList(const std::vector<AlertConfigEscalationList>& alertConfigEscalationList)
{
	alertConfigEscalationList_ = alertConfigEscalationList;
	for(int dep1 = 0; dep1!= alertConfigEscalationList.size(); dep1++) {
		auto alertConfigEscalationListObj = alertConfigEscalationList.at(dep1);
		std::string alertConfigEscalationListObjStr = "AlertConfigEscalationList." + std::to_string(dep1);
		setCoreParameter(alertConfigEscalationListObjStr + ".Times", std::to_string(alertConfigEscalationListObj.times));
		setCoreParameter(alertConfigEscalationListObjStr + ".MetricName", alertConfigEscalationListObj.metricName);
		setCoreParameter(alertConfigEscalationListObjStr + ".Value", alertConfigEscalationListObj.value);
		setCoreParameter(alertConfigEscalationListObjStr + "._Operator", alertConfigEscalationListObj._operator);
		setCoreParameter(alertConfigEscalationListObjStr + ".Aggregate", alertConfigEscalationListObj.aggregate);
	}
}

std::string CreateHostAvailabilityRequest::getTaskName()const
{
	return taskName_;
}

void CreateHostAvailabilityRequest::setTaskName(const std::string& taskName)
{
	taskName_ = taskName;
	setCoreParameter("TaskName", taskName);
}

int CreateHostAvailabilityRequest::getAlertConfigSilenceTime()const
{
	return alertConfigSilenceTime_;
}

void CreateHostAvailabilityRequest::setAlertConfigSilenceTime(int alertConfigSilenceTime)
{
	alertConfigSilenceTime_ = alertConfigSilenceTime;
	setCoreParameter("AlertConfigSilenceTime", std::to_string(alertConfigSilenceTime));
}

std::string CreateHostAvailabilityRequest::getTaskOptionHttpResponseCharset()const
{
	return taskOptionHttpResponseCharset_;
}

void CreateHostAvailabilityRequest::setTaskOptionHttpResponseCharset(const std::string& taskOptionHttpResponseCharset)
{
	taskOptionHttpResponseCharset_ = taskOptionHttpResponseCharset;
	setCoreParameter("TaskOptionHttpResponseCharset", taskOptionHttpResponseCharset);
}

bool CreateHostAvailabilityRequest::getTaskOptionHttpNegative()const
{
	return taskOptionHttpNegative_;
}

void CreateHostAvailabilityRequest::setTaskOptionHttpNegative(bool taskOptionHttpNegative)
{
	taskOptionHttpNegative_ = taskOptionHttpNegative;
	setCoreParameter("TaskOptionHttpNegative", taskOptionHttpNegative ? "true" : "false");
}

int CreateHostAvailabilityRequest::getAlertConfigNotifyType()const
{
	return alertConfigNotifyType_;
}

void CreateHostAvailabilityRequest::setAlertConfigNotifyType(int alertConfigNotifyType)
{
	alertConfigNotifyType_ = alertConfigNotifyType;
	setCoreParameter("AlertConfigNotifyType", std::to_string(alertConfigNotifyType));
}

std::string CreateHostAvailabilityRequest::getTaskOptionTelnetOrPingHost()const
{
	return taskOptionTelnetOrPingHost_;
}

void CreateHostAvailabilityRequest::setTaskOptionTelnetOrPingHost(const std::string& taskOptionTelnetOrPingHost)
{
	taskOptionTelnetOrPingHost_ = taskOptionTelnetOrPingHost;
	setCoreParameter("TaskOptionTelnetOrPingHost", taskOptionTelnetOrPingHost);
}

std::string CreateHostAvailabilityRequest::getTaskOptionHttpResponseMatchContent()const
{
	return taskOptionHttpResponseMatchContent_;
}

void CreateHostAvailabilityRequest::setTaskOptionHttpResponseMatchContent(const std::string& taskOptionHttpResponseMatchContent)
{
	taskOptionHttpResponseMatchContent_ = taskOptionHttpResponseMatchContent;
	setCoreParameter("TaskOptionHttpResponseMatchContent", taskOptionHttpResponseMatchContent);
}

std::vector<std::string> CreateHostAvailabilityRequest::getInstanceList()const
{
	return instanceList_;
}

void CreateHostAvailabilityRequest::setInstanceList(const std::vector<std::string>& instanceList)
{
	instanceList_ = instanceList;
	for(int dep1 = 0; dep1!= instanceList.size(); dep1++) {
		setCoreParameter("InstanceList."+ std::to_string(dep1), instanceList.at(dep1));
	}
}

std::string CreateHostAvailabilityRequest::getTaskType()const
{
	return taskType_;
}

void CreateHostAvailabilityRequest::setTaskType(const std::string& taskType)
{
	taskType_ = taskType;
	setCoreParameter("TaskType", taskType);
}

long CreateHostAvailabilityRequest::getGroupId()const
{
	return groupId_;
}

void CreateHostAvailabilityRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", std::to_string(groupId));
}

int CreateHostAvailabilityRequest::getAlertConfigEndTime()const
{
	return alertConfigEndTime_;
}

void CreateHostAvailabilityRequest::setAlertConfigEndTime(int alertConfigEndTime)
{
	alertConfigEndTime_ = alertConfigEndTime;
	setCoreParameter("AlertConfigEndTime", std::to_string(alertConfigEndTime));
}

std::string CreateHostAvailabilityRequest::getTaskOptionHttpURI()const
{
	return taskOptionHttpURI_;
}

void CreateHostAvailabilityRequest::setTaskOptionHttpURI(const std::string& taskOptionHttpURI)
{
	taskOptionHttpURI_ = taskOptionHttpURI;
	setCoreParameter("TaskOptionHttpURI", taskOptionHttpURI);
}

std::string CreateHostAvailabilityRequest::getTaskScope()const
{
	return taskScope_;
}

void CreateHostAvailabilityRequest::setTaskScope(const std::string& taskScope)
{
	taskScope_ = taskScope;
	setCoreParameter("TaskScope", taskScope);
}

int CreateHostAvailabilityRequest::getAlertConfigStartTime()const
{
	return alertConfigStartTime_;
}

void CreateHostAvailabilityRequest::setAlertConfigStartTime(int alertConfigStartTime)
{
	alertConfigStartTime_ = alertConfigStartTime;
	setCoreParameter("AlertConfigStartTime", std::to_string(alertConfigStartTime));
}

std::string CreateHostAvailabilityRequest::getAlertConfigWebHook()const
{
	return alertConfigWebHook_;
}

void CreateHostAvailabilityRequest::setAlertConfigWebHook(const std::string& alertConfigWebHook)
{
	alertConfigWebHook_ = alertConfigWebHook;
	setCoreParameter("AlertConfigWebHook", alertConfigWebHook);
}

