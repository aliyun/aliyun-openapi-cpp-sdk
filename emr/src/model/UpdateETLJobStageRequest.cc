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

#include <alibabacloud/emr/model/UpdateETLJobStageRequest.h>

using AlibabaCloud::Emr::Model::UpdateETLJobStageRequest;

UpdateETLJobStageRequest::UpdateETLJobStageRequest() :
	RpcServiceRequest("emr", "2016-04-08", "UpdateETLJobStage")
{}

UpdateETLJobStageRequest::~UpdateETLJobStageRequest()
{}

std::string UpdateETLJobStageRequest::getStageName()const
{
	return stageName_;
}

void UpdateETLJobStageRequest::setStageName(const std::string& stageName)
{
	stageName_ = stageName;
	setCoreParameter("StageName", stageName);
}

std::string UpdateETLJobStageRequest::getStageConf()const
{
	return stageConf_;
}

void UpdateETLJobStageRequest::setStageConf(const std::string& stageConf)
{
	stageConf_ = stageConf;
	setCoreParameter("StageConf", stageConf);
}

long UpdateETLJobStageRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateETLJobStageRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UpdateETLJobStageRequest::getStageType()const
{
	return stageType_;
}

void UpdateETLJobStageRequest::setStageType(const std::string& stageType)
{
	stageType_ = stageType;
	setCoreParameter("StageType", stageType);
}

std::string UpdateETLJobStageRequest::getRegionId()const
{
	return regionId_;
}

void UpdateETLJobStageRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string UpdateETLJobStageRequest::getEtlJobId()const
{
	return etlJobId_;
}

void UpdateETLJobStageRequest::setEtlJobId(const std::string& etlJobId)
{
	etlJobId_ = etlJobId;
	setCoreParameter("EtlJobId", etlJobId);
}

std::string UpdateETLJobStageRequest::getStagePlugin()const
{
	return stagePlugin_;
}

void UpdateETLJobStageRequest::setStagePlugin(const std::string& stagePlugin)
{
	stagePlugin_ = stagePlugin;
	setCoreParameter("StagePlugin", stagePlugin);
}

std::string UpdateETLJobStageRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateETLJobStageRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

