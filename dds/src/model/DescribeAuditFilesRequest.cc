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

#include <alibabacloud/dds/model/DescribeAuditFilesRequest.h>

using AlibabaCloud::Dds::Model::DescribeAuditFilesRequest;

DescribeAuditFilesRequest::DescribeAuditFilesRequest() :
	RpcServiceRequest("dds", "2015-12-01", "DescribeAuditFiles")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeAuditFilesRequest::~DescribeAuditFilesRequest()
{}

long DescribeAuditFilesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeAuditFilesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeAuditFilesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeAuditFilesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeAuditFilesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeAuditFilesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeAuditFilesRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeAuditFilesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

int DescribeAuditFilesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAuditFilesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeAuditFilesRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeAuditFilesRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeAuditFilesRequest::getNodeId()const
{
	return nodeId_;
}

void DescribeAuditFilesRequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setCoreParameter("NodeId", nodeId);
}

std::string DescribeAuditFilesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeAuditFilesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeAuditFilesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeAuditFilesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeAuditFilesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeAuditFilesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

