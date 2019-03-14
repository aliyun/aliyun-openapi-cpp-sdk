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
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
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
		setParameter(str + ".Port", obj.port);
		setParameter(str + ".From", obj.from);
		setParameter(str + ".To", obj.to);
	}
}

std::string UpdateETLJobRequest::getClusterConfig()const
{
	return clusterConfig_;
}

void UpdateETLJobRequest::setClusterConfig(const std::string& clusterConfig)
{
	clusterConfig_ = clusterConfig;
	setParameter("ClusterConfig", clusterConfig);
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
		setParameter(str + ".CronExpr", obj.cronExpr);
		setParameter(str + ".EndTime", std::to_string(obj.endTime));
		setParameter(str + ".StartTime", std::to_string(obj.startTime));
		setParameter(str + ".Enabled", std::to_string(obj.enabled));
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
		setParameter(str + ".StageName", obj.stageName);
		setParameter(str + ".StageConf", obj.stageConf);
		setParameter(str + ".StageType", obj.stageType);
		setParameter(str + ".StagePlugin", obj.stagePlugin);
	}
}

std::string UpdateETLJobRequest::getRegionId()const
{
	return regionId_;
}

void UpdateETLJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string UpdateETLJobRequest::getAlertConfig()const
{
	return alertConfig_;
}

void UpdateETLJobRequest::setAlertConfig(const std::string& alertConfig)
{
	alertConfig_ = alertConfig;
	setParameter("AlertConfig", alertConfig);
}

std::string UpdateETLJobRequest::getName()const
{
	return name_;
}

void UpdateETLJobRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string UpdateETLJobRequest::getDescription()const
{
	return description_;
}

void UpdateETLJobRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string UpdateETLJobRequest::getId()const
{
	return id_;
}

void UpdateETLJobRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

bool UpdateETLJobRequest::getCheck()const
{
	return check_;
}

void UpdateETLJobRequest::setCheck(bool check)
{
	check_ = check;
	setParameter("Check", std::to_string(check));
}

std::string UpdateETLJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateETLJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

