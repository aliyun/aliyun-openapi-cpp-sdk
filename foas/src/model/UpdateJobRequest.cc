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

#include <alibabacloud/foas/model/UpdateJobRequest.h>

using AlibabaCloud::Foas::Model::UpdateJobRequest;

UpdateJobRequest::UpdateJobRequest() :
	RoaServiceRequest("foas", "2018-11-11")
{}

UpdateJobRequest::~UpdateJobRequest()
{}

std::string UpdateJobRequest::getQueueName()const
{
	return queueName_;
}

void UpdateJobRequest::setQueueName(const std::string& queueName)
{
	queueName_ = queueName;
	setCoreParameter("QueueName", queueName);
}

std::string UpdateJobRequest::getProjectName()const
{
	return projectName_;
}

void UpdateJobRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setCoreParameter("ProjectName", projectName);
}

std::string UpdateJobRequest::getCode()const
{
	return code_;
}

void UpdateJobRequest::setCode(const std::string& code)
{
	code_ = code;
	setCoreParameter("Code", code);
}

std::string UpdateJobRequest::getRegionId()const
{
	return regionId_;
}

void UpdateJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string UpdateJobRequest::getDescription()const
{
	return description_;
}

void UpdateJobRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string UpdateJobRequest::getPlanJson()const
{
	return planJson_;
}

void UpdateJobRequest::setPlanJson(const std::string& planJson)
{
	planJson_ = planJson;
	setCoreParameter("PlanJson", planJson);
}

std::string UpdateJobRequest::getEngineVersion()const
{
	return engineVersion_;
}

void UpdateJobRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setCoreParameter("EngineVersion", engineVersion);
}

std::string UpdateJobRequest::getClusterId()const
{
	return clusterId_;
}

void UpdateJobRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string UpdateJobRequest::getPackages()const
{
	return packages_;
}

void UpdateJobRequest::setPackages(const std::string& packages)
{
	packages_ = packages;
	setCoreParameter("Packages", packages);
}

long UpdateJobRequest::getFolderId()const
{
	return folderId_;
}

void UpdateJobRequest::setFolderId(long folderId)
{
	folderId_ = folderId;
	setCoreParameter("FolderId", std::to_string(folderId));
}

std::string UpdateJobRequest::getProperties()const
{
	return properties_;
}

void UpdateJobRequest::setProperties(const std::string& properties)
{
	properties_ = properties;
	setCoreParameter("Properties", properties);
}

std::string UpdateJobRequest::getJobName()const
{
	return jobName_;
}

void UpdateJobRequest::setJobName(const std::string& jobName)
{
	jobName_ = jobName;
	setCoreParameter("JobName", jobName);
}

