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

#include <alibabacloud/ecs/model/DescribeCommandsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeCommandsRequest;

DescribeCommandsRequest::DescribeCommandsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeCommands")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeCommandsRequest::~DescribeCommandsRequest()
{}

long DescribeCommandsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeCommandsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeCommandsRequest::getDescription()const
{
	return description_;
}

void DescribeCommandsRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string DescribeCommandsRequest::getType()const
{
	return type_;
}

void DescribeCommandsRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string DescribeCommandsRequest::getCommandId()const
{
	return commandId_;
}

void DescribeCommandsRequest::setCommandId(const std::string& commandId)
{
	commandId_ = commandId;
	setParameter("CommandId", commandId);
}

long DescribeCommandsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeCommandsRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeCommandsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeCommandsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeCommandsRequest::getContentEncoding()const
{
	return contentEncoding_;
}

void DescribeCommandsRequest::setContentEncoding(const std::string& contentEncoding)
{
	contentEncoding_ = contentEncoding;
	setParameter("ContentEncoding", contentEncoding);
}

long DescribeCommandsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeCommandsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeCommandsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeCommandsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeCommandsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeCommandsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeCommandsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeCommandsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeCommandsRequest::getName()const
{
	return name_;
}

void DescribeCommandsRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

