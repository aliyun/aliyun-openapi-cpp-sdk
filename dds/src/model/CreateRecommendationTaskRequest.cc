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

#include <alibabacloud/dds/model/CreateRecommendationTaskRequest.h>

using AlibabaCloud::Dds::Model::CreateRecommendationTaskRequest;

CreateRecommendationTaskRequest::CreateRecommendationTaskRequest() :
	RpcServiceRequest("dds", "2015-12-01", "CreateRecommendationTask")
{
	setMethod(HttpRequest::Method::Post);
}

CreateRecommendationTaskRequest::~CreateRecommendationTaskRequest()
{}

long CreateRecommendationTaskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateRecommendationTaskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateRecommendationTaskRequest::getStartTime()const
{
	return startTime_;
}

void CreateRecommendationTaskRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string CreateRecommendationTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateRecommendationTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateRecommendationTaskRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateRecommendationTaskRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string CreateRecommendationTaskRequest::getNodeId()const
{
	return nodeId_;
}

void CreateRecommendationTaskRequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setParameter("NodeId", nodeId);
}

std::string CreateRecommendationTaskRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateRecommendationTaskRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateRecommendationTaskRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateRecommendationTaskRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateRecommendationTaskRequest::getEndTime()const
{
	return endTime_;
}

void CreateRecommendationTaskRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long CreateRecommendationTaskRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateRecommendationTaskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateRecommendationTaskRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateRecommendationTaskRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

