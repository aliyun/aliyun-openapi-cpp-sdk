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

#include <alibabacloud/imm/model/GetPornBatchDetectJobRequest.h>

using AlibabaCloud::Imm::Model::GetPornBatchDetectJobRequest;

GetPornBatchDetectJobRequest::GetPornBatchDetectJobRequest() :
	RpcServiceRequest("imm", "2017-09-06", "GetPornBatchDetectJob")
{}

GetPornBatchDetectJobRequest::~GetPornBatchDetectJobRequest()
{}

std::string GetPornBatchDetectJobRequest::getProject()const
{
	return project_;
}

void GetPornBatchDetectJobRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string GetPornBatchDetectJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetPornBatchDetectJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string GetPornBatchDetectJobRequest::getJobId()const
{
	return jobId_;
}

void GetPornBatchDetectJobRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setCoreParameter("JobId", jobId);
}

