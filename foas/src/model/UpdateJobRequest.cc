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
{
	setResourcePath("/api/v2/projects/[projectName]/jobs/[jobName]");
	setMethod(HttpRequest::Method::Put);
}

UpdateJobRequest::~UpdateJobRequest()
{}

std::string UpdateJobRequest::getQueueName()const
{
	return queueName_;
}

void UpdateJobRequest::setQueueName(const std::string& queueName)
{
	queueName_ = queueName;
	setBodyParameter("QueueName", queueName);
}

std::string UpdateJobRequest::getProjectName()const
{
	return projectName_;
}

void UpdateJobRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setParameter("ProjectName", projectName);
}

std::string UpdateJobRequest::getCode()const
{
	return code_;
}

void UpdateJobRequest::setCode(const std::string& code)
{
	code_ = code;
	setBodyParameter("Code", code);
}

std::string UpdateJobRequest::getRegionId()const
{
	return regionId_;
}

void UpdateJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setHeader("RegionId", regionId);
}

std::string UpdateJobRequest::getDescription()const
{
	return description_;
}

void UpdateJobRequest::setDescription(const std::string& description)
{
	description_ = description;
	setBodyParameter("Description", description);
}

std::string UpdateJobRequest::getPlanJson()const
{
	return planJson_;
}

void UpdateJobRequest::setPlanJson(const std::string& planJson)
{
	planJson_ = planJson;
	setBodyParameter("PlanJson", planJson);
}

std::string UpdateJobRequest::getEngineVersion()const
{
	return engineVersion_;
}

void UpdateJobRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setBodyParameter("EngineVersion", engineVersion);
}

std::string UpdateJobRequest::getClusterId()const
{
	return clusterId_;
}

void UpdateJobRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setBodyParameter("ClusterId", clusterId);
}

std::string UpdateJobRequest::getPackages()const
{
	return packages_;
}

void UpdateJobRequest::setPackages(const std::string& packages)
{
	packages_ = packages;
	setBodyParameter("Packages", packages);
}

long UpdateJobRequest::getFolderId()const
{
	return folderId_;
}

void UpdateJobRequest::setFolderId(long folderId)
{
	folderId_ = folderId;
	setBodyParameter("FolderId", std::to_string(folderId));
}

std::string UpdateJobRequest::getProperties()const
{
	return properties_;
}

void UpdateJobRequest::setProperties(const std::string& properties)
{
	properties_ = properties;
	setBodyParameter("Properties", properties);
}

std::string UpdateJobRequest::getJobName()const
{
	return jobName_;
}

void UpdateJobRequest::setJobName(const std::string& jobName)
{
	jobName_ = jobName;
	setParameter("JobName", jobName);
}

