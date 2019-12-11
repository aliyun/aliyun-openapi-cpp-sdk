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

#include <alibabacloud/cms/model/CreateGroupMonitoringAgentProcessRequest.h>

using AlibabaCloud::Cms::Model::CreateGroupMonitoringAgentProcessRequest;

CreateGroupMonitoringAgentProcessRequest::CreateGroupMonitoringAgentProcessRequest() :
	RpcServiceRequest("cms", "2019-01-01", "CreateGroupMonitoringAgentProcess")
{
	setMethod(HttpRequest::Method::Post);
}

CreateGroupMonitoringAgentProcessRequest::~CreateGroupMonitoringAgentProcessRequest()
{}

std::vector<CreateGroupMonitoringAgentProcessRequest::AlertConfig> CreateGroupMonitoringAgentProcessRequest::getAlertConfig()const
{
	return alertConfig_;
}

void CreateGroupMonitoringAgentProcessRequest::setAlertConfig(const std::vector<AlertConfig>& alertConfig)
{
	alertConfig_ = alertConfig;
	for(int dep1 = 0; dep1!= alertConfig.size(); dep1++) {
		auto alertConfigObj = alertConfig.at(dep1);
		std::string alertConfigObjStr = "AlertConfig." + std::to_string(dep1);
		setCoreParameter(alertConfigObjStr + ".Times", alertConfigObj.times);
		setCoreParameter(alertConfigObjStr + ".NoEffectiveInterval", alertConfigObj.noEffectiveInterval);
		setCoreParameter(alertConfigObjStr + ".Webhook", alertConfigObj.webhook);
		setCoreParameter(alertConfigObjStr + ".SilenceTime", alertConfigObj.silenceTime);
		setCoreParameter(alertConfigObjStr + ".Threshold", alertConfigObj.threshold);
		setCoreParameter(alertConfigObjStr + ".EffectiveInterval", alertConfigObj.effectiveInterval);
		setCoreParameter(alertConfigObjStr + ".ComparisonOperator", alertConfigObj.comparisonOperator);
		setCoreParameter(alertConfigObjStr + ".EscalationsLevel", alertConfigObj.escalationsLevel);
		setCoreParameter(alertConfigObjStr + ".Statistics", alertConfigObj.statistics);
	}
}

std::string CreateGroupMonitoringAgentProcessRequest::getGroupId()const
{
	return groupId_;
}

void CreateGroupMonitoringAgentProcessRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::string CreateGroupMonitoringAgentProcessRequest::getProcessName()const
{
	return processName_;
}

void CreateGroupMonitoringAgentProcessRequest::setProcessName(const std::string& processName)
{
	processName_ = processName;
	setCoreParameter("ProcessName", processName);
}

std::string CreateGroupMonitoringAgentProcessRequest::getMatchExpressFilterRelation()const
{
	return matchExpressFilterRelation_;
}

void CreateGroupMonitoringAgentProcessRequest::setMatchExpressFilterRelation(const std::string& matchExpressFilterRelation)
{
	matchExpressFilterRelation_ = matchExpressFilterRelation;
	setCoreParameter("MatchExpressFilterRelation", matchExpressFilterRelation);
}

std::vector<CreateGroupMonitoringAgentProcessRequest::MatchExpress> CreateGroupMonitoringAgentProcessRequest::getMatchExpress()const
{
	return matchExpress_;
}

void CreateGroupMonitoringAgentProcessRequest::setMatchExpress(const std::vector<MatchExpress>& matchExpress)
{
	matchExpress_ = matchExpress;
	for(int dep1 = 0; dep1!= matchExpress.size(); dep1++) {
		auto matchExpressObj = matchExpress.at(dep1);
		std::string matchExpressObjStr = "MatchExpress." + std::to_string(dep1);
		setCoreParameter(matchExpressObjStr + ".Function", matchExpressObj.function);
		setCoreParameter(matchExpressObjStr + ".Name", matchExpressObj.name);
		setCoreParameter(matchExpressObjStr + ".Value", matchExpressObj.value);
	}
}

