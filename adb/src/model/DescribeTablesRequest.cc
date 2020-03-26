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

#include <alibabacloud/adb/model/DescribeTablesRequest.h>

using AlibabaCloud::Adb::Model::DescribeTablesRequest;

DescribeTablesRequest::DescribeTablesRequest() :
	RpcServiceRequest("adb", "2019-03-15", "DescribeTables")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeTablesRequest::~DescribeTablesRequest()
{}

long DescribeTablesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeTablesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeTablesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeTablesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeTablesRequest::getSchemaName()const
{
	return schemaName_;
}

void DescribeTablesRequest::setSchemaName(const std::string& schemaName)
{
	schemaName_ = schemaName;
	setParameter("SchemaName", schemaName);
}

std::string DescribeTablesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeTablesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeTablesRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void DescribeTablesRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string DescribeTablesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeTablesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeTablesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeTablesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

