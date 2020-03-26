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

#include <alibabacloud/foas/model/UpdateQueueRequest.h>

using AlibabaCloud::Foas::Model::UpdateQueueRequest;

UpdateQueueRequest::UpdateQueueRequest() :
	RoaServiceRequest("foas", "2018-11-11")
{
	setResourcePath("/api/v2/clusters/[clusterId]/queue");
	setMethod(HttpRequest::Method::Put);
}

UpdateQueueRequest::~UpdateQueueRequest()
{}

std::string UpdateQueueRequest::getQueueName()const
{
	return queueName_;
}

void UpdateQueueRequest::setQueueName(const std::string& queueName)
{
	queueName_ = queueName;
	setBodyParameter("QueueName", queueName);
}

std::string UpdateQueueRequest::getRegionId()const
{
	return regionId_;
}

void UpdateQueueRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setHeader("RegionId", regionId);
}

int UpdateQueueRequest::getMaxMemMB()const
{
	return maxMemMB_;
}

void UpdateQueueRequest::setMaxMemMB(int maxMemMB)
{
	maxMemMB_ = maxMemMB;
	setBodyParameter("MaxMemMB", std::to_string(maxMemMB));
}

std::string UpdateQueueRequest::getClusterId()const
{
	return clusterId_;
}

void UpdateQueueRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int UpdateQueueRequest::getGpu()const
{
	return gpu_;
}

void UpdateQueueRequest::setGpu(int gpu)
{
	gpu_ = gpu;
	setBodyParameter("Gpu", std::to_string(gpu));
}

int UpdateQueueRequest::getMaxVcore()const
{
	return maxVcore_;
}

void UpdateQueueRequest::setMaxVcore(int maxVcore)
{
	maxVcore_ = maxVcore;
	setBodyParameter("MaxVcore", std::to_string(maxVcore));
}

