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

#include <alibabacloud/foas/model/DeleteQueueRequest.h>

using AlibabaCloud::Foas::Model::DeleteQueueRequest;

DeleteQueueRequest::DeleteQueueRequest() :
	RoaServiceRequest("foas", "2018-11-11")
{
	setResourcePath("/api/v2/clusters/[clusterId]/queue");
	setMethod(HttpRequest::Method::Delete);
}

DeleteQueueRequest::~DeleteQueueRequest()
{}

std::string DeleteQueueRequest::getQueueName()const
{
	return queueName_;
}

void DeleteQueueRequest::setQueueName(const std::string& queueName)
{
	queueName_ = queueName;
	setParameter("QueueName", queueName);
}

std::string DeleteQueueRequest::getRegionId()const
{
	return regionId_;
}

void DeleteQueueRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setHeader("RegionId", regionId);
}

std::string DeleteQueueRequest::getClusterId()const
{
	return clusterId_;
}

void DeleteQueueRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

