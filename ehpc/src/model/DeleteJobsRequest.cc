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

#include <alibabacloud/ehpc/model/DeleteJobsRequest.h>

using AlibabaCloud::EHPC::Model::DeleteJobsRequest;

DeleteJobsRequest::DeleteJobsRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "DeleteJobs")
{
	setMethod(HttpRequest::Method::Get);
}

DeleteJobsRequest::~DeleteJobsRequest()
{}

std::string DeleteJobsRequest::getJobs()const
{
	return jobs_;
}

void DeleteJobsRequest::setJobs(const std::string& jobs)
{
	jobs_ = jobs;
	setParameter("Jobs", jobs);
}

std::string DeleteJobsRequest::getClusterId()const
{
	return clusterId_;
}

void DeleteJobsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string DeleteJobsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteJobsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

