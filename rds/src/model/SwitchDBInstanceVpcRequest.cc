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

#include <alibabacloud/rds/model/SwitchDBInstanceVpcRequest.h>

using AlibabaCloud::Rds::Model::SwitchDBInstanceVpcRequest;

SwitchDBInstanceVpcRequest::SwitchDBInstanceVpcRequest() :
	RpcServiceRequest("rds", "2014-08-15", "SwitchDBInstanceVpc")
{
	setMethod(HttpRequest::Method::Post);
}

SwitchDBInstanceVpcRequest::~SwitchDBInstanceVpcRequest()
{}

long SwitchDBInstanceVpcRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SwitchDBInstanceVpcRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SwitchDBInstanceVpcRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SwitchDBInstanceVpcRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SwitchDBInstanceVpcRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void SwitchDBInstanceVpcRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string SwitchDBInstanceVpcRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SwitchDBInstanceVpcRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SwitchDBInstanceVpcRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SwitchDBInstanceVpcRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long SwitchDBInstanceVpcRequest::getOwnerId()const
{
	return ownerId_;
}

void SwitchDBInstanceVpcRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string SwitchDBInstanceVpcRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void SwitchDBInstanceVpcRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

std::string SwitchDBInstanceVpcRequest::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

void SwitchDBInstanceVpcRequest::setPrivateIpAddress(const std::string& privateIpAddress)
{
	privateIpAddress_ = privateIpAddress;
	setCoreParameter("PrivateIpAddress", privateIpAddress);
}

std::string SwitchDBInstanceVpcRequest::getVPCId()const
{
	return vPCId_;
}

void SwitchDBInstanceVpcRequest::setVPCId(const std::string& vPCId)
{
	vPCId_ = vPCId;
	setCoreParameter("VPCId", vPCId);
}

