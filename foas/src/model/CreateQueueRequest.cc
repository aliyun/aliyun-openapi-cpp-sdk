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

#include <alibabacloud/foas/model/CreateQueueRequest.h>

using AlibabaCloud::Foas::Model::CreateQueueRequest;

CreateQueueRequest::CreateQueueRequest() :
	RoaServiceRequest("foas", "2018-11-11")
{
	setResourcePath("/api/v2/clusters/[clusterId]/queue");
	setMethod(HttpRequest::Method::Post);
}

CreateQueueRequest::~CreateQueueRequest()
{}

std::string CreateQueueRequest::getQueueName()const
{
	return queueName_;
}

void CreateQueueRequest::setQueueName(const std::string& queueName)
{
	queueName_ = queueName;
	setBodyParameter("QueueName", queueName);
}

std::string CreateQueueRequest::getRegionId()const
{
	return regionId_;
}

void CreateQueueRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setHeader("RegionId", regionId);
}

int CreateQueueRequest::getMaxMemMB()const
{
	return maxMemMB_;
}

void CreateQueueRequest::setMaxMemMB(int maxMemMB)
{
	maxMemMB_ = maxMemMB;
	setBodyParameter("MaxMemMB", std::to_string(maxMemMB));
}

std::string CreateQueueRequest::getClusterId()const
{
	return clusterId_;
}

void CreateQueueRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int CreateQueueRequest::getGpu()const
{
	return gpu_;
}

void CreateQueueRequest::setGpu(int gpu)
{
	gpu_ = gpu;
	setBodyParameter("Gpu", std::to_string(gpu));
}

int CreateQueueRequest::getMaxVcore()const
{
	return maxVcore_;
}

void CreateQueueRequest::setMaxVcore(int maxVcore)
{
	maxVcore_ = maxVcore;
	setBodyParameter("MaxVcore", std::to_string(maxVcore));
}

