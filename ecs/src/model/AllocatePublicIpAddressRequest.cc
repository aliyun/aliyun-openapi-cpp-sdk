<<<<<<< HEAD
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

#include <alibabacloud/ecs/model/AllocatePublicIpAddressRequest.h>

using AlibabaCloud::Ecs::Model::AllocatePublicIpAddressRequest;

AllocatePublicIpAddressRequest::AllocatePublicIpAddressRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "AllocatePublicIpAddress")
{}

AllocatePublicIpAddressRequest::~AllocatePublicIpAddressRequest()
{}

std::string AllocatePublicIpAddressRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void AllocatePublicIpAddressRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string AllocatePublicIpAddressRequest::getIpAddress()const
{
	return ipAddress_;
}

void AllocatePublicIpAddressRequest::setIpAddress(const std::string& ipAddress)
{
	ipAddress_ = ipAddress;
	setCoreParameter("IpAddress", ipAddress);
}

long AllocatePublicIpAddressRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AllocatePublicIpAddressRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AllocatePublicIpAddressRequest::getInstanceId()const
{
	return instanceId_;
}

void AllocatePublicIpAddressRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string AllocatePublicIpAddressRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AllocatePublicIpAddressRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AllocatePublicIpAddressRequest::getVlanId()const
{
	return vlanId_;
}

void AllocatePublicIpAddressRequest::setVlanId(const std::string& vlanId)
{
	vlanId_ = vlanId;
	setCoreParameter("VlanId", vlanId);
}

std::string AllocatePublicIpAddressRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AllocatePublicIpAddressRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long AllocatePublicIpAddressRequest::getOwnerId()const
{
	return ownerId_;
}

void AllocatePublicIpAddressRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

=======
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

#include <alibabacloud/ecs/model/AllocatePublicIpAddressRequest.h>

using AlibabaCloud::Ecs::Model::AllocatePublicIpAddressRequest;

AllocatePublicIpAddressRequest::AllocatePublicIpAddressRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "AllocatePublicIpAddress")
{}

AllocatePublicIpAddressRequest::~AllocatePublicIpAddressRequest()
{}

std::string AllocatePublicIpAddressRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void AllocatePublicIpAddressRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string AllocatePublicIpAddressRequest::getIpAddress()const
{
	return ipAddress_;
}

void AllocatePublicIpAddressRequest::setIpAddress(const std::string& ipAddress)
{
	ipAddress_ = ipAddress;
	setCoreParameter("IpAddress", ipAddress);
}

long AllocatePublicIpAddressRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AllocatePublicIpAddressRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AllocatePublicIpAddressRequest::getInstanceId()const
{
	return instanceId_;
}

void AllocatePublicIpAddressRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string AllocatePublicIpAddressRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AllocatePublicIpAddressRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AllocatePublicIpAddressRequest::getVlanId()const
{
	return vlanId_;
}

void AllocatePublicIpAddressRequest::setVlanId(const std::string& vlanId)
{
	vlanId_ = vlanId;
	setCoreParameter("VlanId", vlanId);
}

std::string AllocatePublicIpAddressRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AllocatePublicIpAddressRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long AllocatePublicIpAddressRequest::getOwnerId()const
{
	return ownerId_;
}

void AllocatePublicIpAddressRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

>>>>>>> master
