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

#include <alibabacloud/imm/model/ListImageJobsRequest.h>

using AlibabaCloud::Imm::Model::ListImageJobsRequest;

ListImageJobsRequest::ListImageJobsRequest() :
	RpcServiceRequest("imm", "2017-09-06", "ListImageJobs")
{}

ListImageJobsRequest::~ListImageJobsRequest()
{}

int ListImageJobsRequest::getMaxKeys()const
{
	return maxKeys_;
}

void ListImageJobsRequest::setMaxKeys(int maxKeys)
{
	maxKeys_ = maxKeys;
	setCoreParameter("MaxKeys", std::to_string(maxKeys));
}

std::string ListImageJobsRequest::getRegionId()const
{
	return regionId_;
}

void ListImageJobsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ListImageJobsRequest::getMarker()const
{
	return marker_;
}

void ListImageJobsRequest::setMarker(const std::string& marker)
{
	marker_ = marker;
	setCoreParameter("Marker", marker);
}

std::string ListImageJobsRequest::getProject()const
{
	return project_;
}

void ListImageJobsRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string ListImageJobsRequest::getJobType()const
{
	return jobType_;
}

void ListImageJobsRequest::setJobType(const std::string& jobType)
{
	jobType_ = jobType;
	setCoreParameter("JobType", jobType);
}

std::string ListImageJobsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListImageJobsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

