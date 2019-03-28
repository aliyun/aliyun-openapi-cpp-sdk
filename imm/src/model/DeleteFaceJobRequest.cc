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

#include <alibabacloud/imm/model/DeleteFaceJobRequest.h>

using AlibabaCloud::Imm::Model::DeleteFaceJobRequest;

DeleteFaceJobRequest::DeleteFaceJobRequest() :
	RpcServiceRequest("imm", "2017-09-06", "DeleteFaceJob")
{}

DeleteFaceJobRequest::~DeleteFaceJobRequest()
{}

std::string DeleteFaceJobRequest::getJobId()const
{
	return jobId_;
}

void DeleteFaceJobRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

std::string DeleteFaceJobRequest::getRegionId()const
{
	return regionId_;
}

void DeleteFaceJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteFaceJobRequest::getProject()const
{
	return project_;
}

void DeleteFaceJobRequest::setProject(const std::string& project)
{
	project_ = project;
	setParameter("Project", project);
}

std::string DeleteFaceJobRequest::getClearIndexData()const
{
	return clearIndexData_;
}

void DeleteFaceJobRequest::setClearIndexData(const std::string& clearIndexData)
{
	clearIndexData_ = clearIndexData;
	setParameter("ClearIndexData", clearIndexData);
}

std::string DeleteFaceJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteFaceJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

