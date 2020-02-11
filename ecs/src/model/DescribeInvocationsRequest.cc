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

#include <alibabacloud/ecs/model/DescribeInvocationsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeInvocationsRequest;

DescribeInvocationsRequest::DescribeInvocationsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeInvocations")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeInvocationsRequest::~DescribeInvocationsRequest()
{}

long DescribeInvocationsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeInvocationsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeInvocationsRequest::getInvokeStatus()const
{
	return invokeStatus_;
}

void DescribeInvocationsRequest::setInvokeStatus(const std::string& invokeStatus)
{
	invokeStatus_ = invokeStatus;
	setParameter("InvokeStatus", invokeStatus);
}

bool DescribeInvocationsRequest::getIncludeOutput()const
{
	return includeOutput_;
}

void DescribeInvocationsRequest::setIncludeOutput(bool includeOutput)
{
	includeOutput_ = includeOutput;
	setParameter("IncludeOutput", includeOutput ? "true" : "false");
}

std::string DescribeInvocationsRequest::getCommandId()const
{
	return commandId_;
}

void DescribeInvocationsRequest::setCommandId(const std::string& commandId)
{
	commandId_ = commandId;
	setParameter("CommandId", commandId);
}

long DescribeInvocationsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeInvocationsRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeInvocationsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeInvocationsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeInvocationsRequest::getContentEncoding()const
{
	return contentEncoding_;
}

void DescribeInvocationsRequest::setContentEncoding(const std::string& contentEncoding)
{
	contentEncoding_ = contentEncoding;
	setParameter("ContentEncoding", contentEncoding);
}

long DescribeInvocationsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeInvocationsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeInvocationsRequest::getInvokeId()const
{
	return invokeId_;
}

void DescribeInvocationsRequest::setInvokeId(const std::string& invokeId)
{
	invokeId_ = invokeId;
	setParameter("InvokeId", invokeId);
}

bool DescribeInvocationsRequest::getTimed()const
{
	return timed_;
}

void DescribeInvocationsRequest::setTimed(bool timed)
{
	timed_ = timed;
	setParameter("Timed", timed ? "true" : "false");
}

std::string DescribeInvocationsRequest::getCommandName()const
{
	return commandName_;
}

void DescribeInvocationsRequest::setCommandName(const std::string& commandName)
{
	commandName_ = commandName;
	setParameter("CommandName", commandName);
}

std::string DescribeInvocationsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeInvocationsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeInvocationsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeInvocationsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeInvocationsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeInvocationsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeInvocationsRequest::getCommandType()const
{
	return commandType_;
}

void DescribeInvocationsRequest::setCommandType(const std::string& commandType)
{
	commandType_ = commandType;
	setParameter("CommandType", commandType);
}

std::string DescribeInvocationsRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeInvocationsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

