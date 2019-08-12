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

#include <alibabacloud/imm/model/DeletePornBatchDetectJobRequest.h>

using AlibabaCloud::Imm::Model::DeletePornBatchDetectJobRequest;

DeletePornBatchDetectJobRequest::DeletePornBatchDetectJobRequest() :
	RpcServiceRequest("imm", "2017-09-06", "DeletePornBatchDetectJob")
{}

DeletePornBatchDetectJobRequest::~DeletePornBatchDetectJobRequest()
{}

std::string DeletePornBatchDetectJobRequest::getJobId()const
{
	return jobId_;
}

void DeletePornBatchDetectJobRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setCoreParameter("JobId", std::to_string(jobId));
}

std::string DeletePornBatchDetectJobRequest::getRegionId()const
{
	return regionId_;
}

void DeletePornBatchDetectJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DeletePornBatchDetectJobRequest::getProject()const
{
	return project_;
}

void DeletePornBatchDetectJobRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", std::to_string(project));
}

std::string DeletePornBatchDetectJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeletePornBatchDetectJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

