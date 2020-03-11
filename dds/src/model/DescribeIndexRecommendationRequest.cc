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

#include <alibabacloud/dds/model/DescribeIndexRecommendationRequest.h>

using AlibabaCloud::Dds::Model::DescribeIndexRecommendationRequest;

DescribeIndexRecommendationRequest::DescribeIndexRecommendationRequest() :
	RpcServiceRequest("dds", "2015-12-01", "DescribeIndexRecommendation")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeIndexRecommendationRequest::~DescribeIndexRecommendationRequest()
{}

long DescribeIndexRecommendationRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeIndexRecommendationRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeIndexRecommendationRequest::getStartTime()const
{
	return startTime_;
}

void DescribeIndexRecommendationRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

int DescribeIndexRecommendationRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeIndexRecommendationRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeIndexRecommendationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeIndexRecommendationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeIndexRecommendationRequest::getDatabase()const
{
	return database_;
}

void DescribeIndexRecommendationRequest::setDatabase(const std::string& database)
{
	database_ = database;
	setParameter("Database", database);
}

std::string DescribeIndexRecommendationRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeIndexRecommendationRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

int DescribeIndexRecommendationRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeIndexRecommendationRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeIndexRecommendationRequest::getNodeId()const
{
	return nodeId_;
}

void DescribeIndexRecommendationRequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setParameter("NodeId", nodeId);
}

std::string DescribeIndexRecommendationRequest::getTaskId()const
{
	return taskId_;
}

void DescribeIndexRecommendationRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setParameter("TaskId", taskId);
}

std::string DescribeIndexRecommendationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeIndexRecommendationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeIndexRecommendationRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeIndexRecommendationRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeIndexRecommendationRequest::getEndTime()const
{
	return endTime_;
}

void DescribeIndexRecommendationRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeIndexRecommendationRequest::getCollection()const
{
	return collection_;
}

void DescribeIndexRecommendationRequest::setCollection(const std::string& collection)
{
	collection_ = collection;
	setParameter("Collection", collection);
}

std::string DescribeIndexRecommendationRequest::getOperationType()const
{
	return operationType_;
}

void DescribeIndexRecommendationRequest::setOperationType(const std::string& operationType)
{
	operationType_ = operationType;
	setParameter("OperationType", operationType);
}

long DescribeIndexRecommendationRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeIndexRecommendationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeIndexRecommendationRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeIndexRecommendationRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

