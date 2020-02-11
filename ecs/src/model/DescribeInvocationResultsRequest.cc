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

#include <alibabacloud/ecs/model/DescribeInvocationResultsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeInvocationResultsRequest;

DescribeInvocationResultsRequest::DescribeInvocationResultsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeInvocationResults")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeInvocationResultsRequest::~DescribeInvocationResultsRequest()
{}

long DescribeInvocationResultsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeInvocationResultsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeInvocationResultsRequest::getCommandId()const
{
	return commandId_;
}

void DescribeInvocationResultsRequest::setCommandId(const std::string& commandId)
{
	commandId_ = commandId;
	setParameter("CommandId", commandId);
}

long DescribeInvocationResultsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeInvocationResultsRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeInvocationResultsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeInvocationResultsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

long DescribeInvocationResultsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeInvocationResultsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeInvocationResultsRequest::getInvokeId()const
{
	return invokeId_;
}

void DescribeInvocationResultsRequest::setInvokeId(const std::string& invokeId)
{
	invokeId_ = invokeId;
	setParameter("InvokeId", invokeId);
}

std::string DescribeInvocationResultsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeInvocationResultsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeInvocationResultsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeInvocationResultsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeInvocationResultsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeInvocationResultsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeInvocationResultsRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeInvocationResultsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeInvocationResultsRequest::getInvokeRecordStatus()const
{
	return invokeRecordStatus_;
}

void DescribeInvocationResultsRequest::setInvokeRecordStatus(const std::string& invokeRecordStatus)
{
	invokeRecordStatus_ = invokeRecordStatus;
	setParameter("InvokeRecordStatus", invokeRecordStatus);
}

bool DescribeInvocationResultsRequest::getIncludeHistory()const
{
	return includeHistory_;
}

void DescribeInvocationResultsRequest::setIncludeHistory(bool includeHistory)
{
	includeHistory_ = includeHistory;
	setParameter("IncludeHistory", includeHistory ? "true" : "false");
}

