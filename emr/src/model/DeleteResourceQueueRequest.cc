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

#include <alibabacloud/emr/model/DeleteResourceQueueRequest.h>

using AlibabaCloud::Emr::Model::DeleteResourceQueueRequest;

DeleteResourceQueueRequest::DeleteResourceQueueRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DeleteResourceQueue")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteResourceQueueRequest::~DeleteResourceQueueRequest()
{}

long DeleteResourceQueueRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteResourceQueueRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteResourceQueueRequest::getClusterId()const
{
	return clusterId_;
}

void DeleteResourceQueueRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string DeleteResourceQueueRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteResourceQueueRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeleteResourceQueueRequest::getResourceQueueId()const
{
	return resourceQueueId_;
}

void DeleteResourceQueueRequest::setResourceQueueId(const std::string& resourceQueueId)
{
	resourceQueueId_ = resourceQueueId;
	setParameter("ResourceQueueId", resourceQueueId);
}

std::string DeleteResourceQueueRequest::getRegionId()const
{
	return regionId_;
}

void DeleteResourceQueueRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

