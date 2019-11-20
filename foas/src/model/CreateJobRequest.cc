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

#include <alibabacloud/foas/model/CreateJobRequest.h>

using AlibabaCloud::Foas::Model::CreateJobRequest;

CreateJobRequest::CreateJobRequest() :
	RoaServiceRequest("foas", "2018-11-11")
{
	setResourcePath("/api/v2/projects/[projectName]/jobs");
	setMethod(HttpRequest::Method::Post);
}

CreateJobRequest::~CreateJobRequest()
{}

std::string CreateJobRequest::getQueueName()const
{
	return queueName_;
}

void CreateJobRequest::setQueueName(const std::string& queueName)
{
	queueName_ = queueName;
	setCoreParameter("QueueName", queueName);
}

std::string CreateJobRequest::getProjectName()const
{
	return projectName_;
}

void CreateJobRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setCoreParameter("ProjectName", projectName);
}

std::string CreateJobRequest::getCode()const
{
	return code_;
}

void CreateJobRequest::setCode(const std::string& code)
{
	code_ = code;
	setCoreParameter("Code", code);
}

std::string CreateJobRequest::getDescription()const
{
	return description_;
}

void CreateJobRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateJobRequest::getEngineVersion()const
{
	return engineVersion_;
}

void CreateJobRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setCoreParameter("EngineVersion", engineVersion);
}

std::string CreateJobRequest::getClusterId()const
{
	return clusterId_;
}

void CreateJobRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string CreateJobRequest::getPackages()const
{
	return packages_;
}

void CreateJobRequest::setPackages(const std::string& packages)
{
	packages_ = packages;
	setCoreParameter("Packages", packages);
}

std::string CreateJobRequest::getJobType()const
{
	return jobType_;
}

void CreateJobRequest::setJobType(const std::string& jobType)
{
	jobType_ = jobType;
	setCoreParameter("JobType", jobType);
}

std::string CreateJobRequest::getApiType()const
{
	return apiType_;
}

void CreateJobRequest::setApiType(const std::string& apiType)
{
	apiType_ = apiType;
	setCoreParameter("ApiType", apiType);
}

long CreateJobRequest::getFolderId()const
{
	return folderId_;
}

void CreateJobRequest::setFolderId(long folderId)
{
	folderId_ = folderId;
	setCoreParameter("FolderId", std::to_string(folderId));
}

std::string CreateJobRequest::getRegionId()const
{
	return regionId_;
}

void CreateJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateJobRequest::getPlanJson()const
{
	return planJson_;
}

void CreateJobRequest::setPlanJson(const std::string& planJson)
{
	planJson_ = planJson;
	setCoreParameter("PlanJson", planJson);
}

std::string CreateJobRequest::getProperties()const
{
	return properties_;
}

void CreateJobRequest::setProperties(const std::string& properties)
{
	properties_ = properties;
	setCoreParameter("Properties", properties);
}

std::string CreateJobRequest::getJobName()const
{
	return jobName_;
}

void CreateJobRequest::setJobName(const std::string& jobName)
{
	jobName_ = jobName;
	setCoreParameter("JobName", jobName);
}

