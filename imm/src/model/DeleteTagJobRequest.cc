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

#include <alibabacloud/imm/model/DeleteTagJobRequest.h>

using AlibabaCloud::Imm::Model::DeleteTagJobRequest;

DeleteTagJobRequest::DeleteTagJobRequest() :
	RpcServiceRequest("imm", "2017-09-06", "DeleteTagJob")
{}

DeleteTagJobRequest::~DeleteTagJobRequest()
{}

std::string DeleteTagJobRequest::getJobId()const
{
	return jobId_;
}

void DeleteTagJobRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setCoreParameter("JobId", jobId);
}

std::string DeleteTagJobRequest::getRegionId()const
{
	return regionId_;
}

void DeleteTagJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteTagJobRequest::getProject()const
{
	return project_;
}

void DeleteTagJobRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string DeleteTagJobRequest::getClearIndexData()const
{
	return clearIndexData_;
}

void DeleteTagJobRequest::setClearIndexData(const std::string& clearIndexData)
{
	clearIndexData_ = clearIndexData;
	setCoreParameter("ClearIndexData", clearIndexData);
}

std::string DeleteTagJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteTagJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

