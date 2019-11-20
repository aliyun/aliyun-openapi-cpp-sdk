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

#include <alibabacloud/rds/model/DescribeParametersRequest.h>

using AlibabaCloud::Rds::Model::DescribeParametersRequest;

DescribeParametersRequest::DescribeParametersRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeParameters")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeParametersRequest::~DescribeParametersRequest()
{}

long DescribeParametersRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeParametersRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeParametersRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeParametersRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeParametersRequest::getClientToken()const
{
	return clientToken_;
}

void DescribeParametersRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string DescribeParametersRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeParametersRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeParametersRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeParametersRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeParametersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeParametersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeParametersRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeParametersRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

