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

#include <alibabacloud/emr/model/UpdateETLJobRequest.h>

using AlibabaCloud::Emr::Model::UpdateETLJobRequest;

UpdateETLJobRequest::UpdateETLJobRequest() :
	RpcServiceRequest("emr", "2016-04-08", "UpdateETLJob")
{}

UpdateETLJobRequest::~UpdateETLJobRequest()
{}

long UpdateETLJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateETLJobRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string UpdateETLJobRequest::getClusterConfig()const
{
	return clusterConfig_;
}

void UpdateETLJobRequest::setClusterConfig(const std::string& clusterConfig)
{
	clusterConfig_ = clusterConfig;
	setCoreParameter("ClusterConfig", clusterConfig);
}

std::vector<UpdateETLJobRequest::TriggerRule> UpdateETLJobRequest::getTriggerRule()const
{
	return triggerRule_;
}

void UpdateETLJobRequest::setTriggerRule(const std::vector<TriggerRule>& triggerRule)
{
	triggerRule_ = triggerRule;
	int i = 0;
	for(int i = 0; i!= triggerRule.size(); i++)	{
		auto obj = triggerRule.at(i);
		std::string str ="TriggerRule."+ std::to_string(i);
		setCoreParameter(str + ".CronExpr", std::to_string(obj.cronExpr));
		setCoreParameter(str + ".EndTime", obj.endTime);
		setCoreParameter(str + ".StartTime", obj.startTime);
		setCoreParameter(str + ".Enabled", obj.enabled ? "true" : "false");
	}
}

std::string UpdateETLJobRequest::getAlertConfig()const
{
	return alertConfig_;
}

void UpdateETLJobRequest::setAlertConfig(const std::string& alertConfig)
{
	alertConfig_ = alertConfig;
	setCoreParameter("AlertConfig", alertConfig);
}

std::string UpdateETLJobRequest::getDescription()const
{
	return description_;
}

void UpdateETLJobRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

bool UpdateETLJobRequest::getCheck()const
{
	return check_;
}

void UpdateETLJobRequest::setCheck(bool check)
{
	check_ = check;
	setCoreParameter("Check", check);
}

std::string UpdateETLJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateETLJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::vector<UpdateETLJobRequest::StageConnection> UpdateETLJobRequest::getStageConnection()const
{
	return stageConnection_;
}

void UpdateETLJobRequest::setStageConnection(const std::vector<StageConnection>& stageConnection)
{
	stageConnection_ = stageConnection;
	int i = 0;
	for(int i = 0; i!= stageConnection.size(); i++)	{
		auto obj = stageConnection.at(i);
		std::string str ="StageConnection."+ std::to_string(i);
		setCoreParameter(str + ".Port", std::to_string(obj.port));
		setCoreParameter(str + ".From", std::to_string(obj.from));
		setCoreParameter(str + ".To", std::to_string(obj.to));
	}
}

std::vector<UpdateETLJobRequest::Stage> UpdateETLJobRequest::getStage()const
{
	return stage_;
}

void UpdateETLJobRequest::setStage(const std::vector<Stage>& stage)
{
	stage_ = stage;
	int i = 0;
	for(int i = 0; i!= stage.size(); i++)	{
		auto obj = stage.at(i);
		std::string str ="Stage."+ std::to_string(i);
		setCoreParameter(str + ".StageName", std::to_string(obj.stageName));
		setCoreParameter(str + ".StageConf", std::to_string(obj.stageConf));
		setCoreParameter(str + ".StageType", std::to_string(obj.stageType));
		setCoreParameter(str + ".StagePlugin", std::to_string(obj.stagePlugin));
	}
}

std::string UpdateETLJobRequest::getRegionId()const
{
	return regionId_;
}

void UpdateETLJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string UpdateETLJobRequest::getName()const
{
	return name_;
}

void UpdateETLJobRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string UpdateETLJobRequest::getId()const
{
	return id_;
}

void UpdateETLJobRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

