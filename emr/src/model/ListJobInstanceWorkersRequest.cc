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

#include <alibabacloud/emr/model/ListJobInstanceWorkersRequest.h>

using AlibabaCloud::Emr::Model::ListJobInstanceWorkersRequest;

ListJobInstanceWorkersRequest::ListJobInstanceWorkersRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListJobInstanceWorkers")
{}

ListJobInstanceWorkersRequest::~ListJobInstanceWorkersRequest()
{}

long ListJobInstanceWorkersRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListJobInstanceWorkersRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ListJobInstanceWorkersRequest::getRegionId()const
{
	return regionId_;
}

void ListJobInstanceWorkersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ListJobInstanceWorkersRequest::getJobInstanceId()const
{
	return jobInstanceId_;
}

void ListJobInstanceWorkersRequest::setJobInstanceId(const std::string& jobInstanceId)
{
	jobInstanceId_ = jobInstanceId;
	setCoreParameter("JobInstanceId", std::to_string(jobInstanceId));
}

std::string ListJobInstanceWorkersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListJobInstanceWorkersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

