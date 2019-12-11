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

#include <alibabacloud/cms/model/ModifyGroupMonitoringAgentProcessRequest.h>

using AlibabaCloud::Cms::Model::ModifyGroupMonitoringAgentProcessRequest;

ModifyGroupMonitoringAgentProcessRequest::ModifyGroupMonitoringAgentProcessRequest() :
	RpcServiceRequest("cms", "2019-01-01", "ModifyGroupMonitoringAgentProcess")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyGroupMonitoringAgentProcessRequest::~ModifyGroupMonitoringAgentProcessRequest()
{}

std::vector<ModifyGroupMonitoringAgentProcessRequest::AlertConfig> ModifyGroupMonitoringAgentProcessRequest::getAlertConfig()const
{
	return alertConfig_;
}

void ModifyGroupMonitoringAgentProcessRequest::setAlertConfig(const std::vector<AlertConfig>& alertConfig)
{
	alertConfig_ = alertConfig;
	for(int dep1 = 0; dep1!= alertConfig.size(); dep1++) {
		auto alertConfigObj = alertConfig.at(dep1);
		std::string alertConfigObjStr = "AlertConfig." + std::to_string(dep1);
		setCoreParameter(alertConfigObjStr + ".Times", alertConfigObj.times);
		setCoreParameter(alertConfigObjStr + ".NoEffectiveInterval", alertConfigObj.noEffectiveInterval);
		setCoreParameter(alertConfigObjStr + ".SilenceTime", alertConfigObj.silenceTime);
		setCoreParameter(alertConfigObjStr + ".Threshold", alertConfigObj.threshold);
		setCoreParameter(alertConfigObjStr + ".EffectiveInterval", alertConfigObj.effectiveInterval);
		setCoreParameter(alertConfigObjStr + ".ComparisonOperator", alertConfigObj.comparisonOperator);
		setCoreParameter(alertConfigObjStr + ".EscalationsLevel", alertConfigObj.escalationsLevel);
		setCoreParameter(alertConfigObjStr + ".Statistics", alertConfigObj.statistics);
	}
}

std::string ModifyGroupMonitoringAgentProcessRequest::getGroupId()const
{
	return groupId_;
}

void ModifyGroupMonitoringAgentProcessRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::string ModifyGroupMonitoringAgentProcessRequest::getMatchExpressFilterRelation()const
{
	return matchExpressFilterRelation_;
}

void ModifyGroupMonitoringAgentProcessRequest::setMatchExpressFilterRelation(const std::string& matchExpressFilterRelation)
{
	matchExpressFilterRelation_ = matchExpressFilterRelation;
	setCoreParameter("MatchExpressFilterRelation", matchExpressFilterRelation);
}

std::string ModifyGroupMonitoringAgentProcessRequest::getId()const
{
	return id_;
}

void ModifyGroupMonitoringAgentProcessRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

