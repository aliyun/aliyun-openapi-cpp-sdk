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

#include <alibabacloud/emr/model/MigrateJobsRequest.h>

using AlibabaCloud::Emr::Model::MigrateJobsRequest;

MigrateJobsRequest::MigrateJobsRequest() :
	RpcServiceRequest("emr", "2016-04-08", "MigrateJobs")
{}

MigrateJobsRequest::~MigrateJobsRequest()
{}

long MigrateJobsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void MigrateJobsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string MigrateJobsRequest::getProjectName()const
{
	return projectName_;
}

void MigrateJobsRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setCoreParameter("ProjectName", projectName);
}

std::string MigrateJobsRequest::getRegionId()const
{
	return regionId_;
}

void MigrateJobsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string MigrateJobsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MigrateJobsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

