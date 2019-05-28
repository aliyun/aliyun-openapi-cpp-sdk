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

#include <alibabacloud/rds/model/DescribeCloudDbExpertServiceRequest.h>

using AlibabaCloud::Rds::Model::DescribeCloudDbExpertServiceRequest;

DescribeCloudDbExpertServiceRequest::DescribeCloudDbExpertServiceRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeCloudDbExpertService")
{}

DescribeCloudDbExpertServiceRequest::~DescribeCloudDbExpertServiceRequest()
{}

std::string DescribeCloudDbExpertServiceRequest::getServiceRequestParam()const
{
	return serviceRequestParam_;
}

void DescribeCloudDbExpertServiceRequest::setServiceRequestParam(const std::string& serviceRequestParam)
{
	serviceRequestParam_ = serviceRequestParam;
	setCoreParameter("ServiceRequestParam", serviceRequestParam);
}

long DescribeCloudDbExpertServiceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeCloudDbExpertServiceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeCloudDbExpertServiceRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeCloudDbExpertServiceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeCloudDbExpertServiceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeCloudDbExpertServiceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeCloudDbExpertServiceRequest::getRegionId()const
{
	return regionId_;
}

void DescribeCloudDbExpertServiceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeCloudDbExpertServiceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeCloudDbExpertServiceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeCloudDbExpertServiceRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeCloudDbExpertServiceRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

long DescribeCloudDbExpertServiceRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeCloudDbExpertServiceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeCloudDbExpertServiceRequest::getServiceRequestType()const
{
	return serviceRequestType_;
}

void DescribeCloudDbExpertServiceRequest::setServiceRequestType(const std::string& serviceRequestType)
{
	serviceRequestType_ = serviceRequestType;
	setCoreParameter("ServiceRequestType", serviceRequestType);
}

std::string DescribeCloudDbExpertServiceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeCloudDbExpertServiceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

