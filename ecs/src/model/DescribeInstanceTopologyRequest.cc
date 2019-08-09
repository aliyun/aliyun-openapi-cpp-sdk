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

#include <alibabacloud/ecs/model/DescribeInstanceTopologyRequest.h>

using AlibabaCloud::Ecs::Model::DescribeInstanceTopologyRequest;

DescribeInstanceTopologyRequest::DescribeInstanceTopologyRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeInstanceTopology")
{}

DescribeInstanceTopologyRequest::~DescribeInstanceTopologyRequest()
{}

std::string DescribeInstanceTopologyRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeInstanceTopologyRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

long DescribeInstanceTopologyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeInstanceTopologyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeInstanceTopologyRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeInstanceTopologyRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeInstanceTopologyRequest::getRegionId()const
{
	return regionId_;
}

void DescribeInstanceTopologyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeInstanceTopologyRequest::getInstanceIds()const
{
	return instanceIds_;
}

void DescribeInstanceTopologyRequest::setInstanceIds(const std::string& instanceIds)
{
	instanceIds_ = instanceIds;
	setCoreParameter("InstanceIds", instanceIds);
}

long DescribeInstanceTopologyRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeInstanceTopologyRequest::setOwnerId(long ownerId)
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

#include <alibabacloud/ecs/model/DescribeInstanceTopologyRequest.h>

using AlibabaCloud::Ecs::Model::DescribeInstanceTopologyRequest;

DescribeInstanceTopologyRequest::DescribeInstanceTopologyRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeInstanceTopology")
{}

DescribeInstanceTopologyRequest::~DescribeInstanceTopologyRequest()
{}

std::string DescribeInstanceTopologyRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeInstanceTopologyRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

long DescribeInstanceTopologyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeInstanceTopologyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeInstanceTopologyRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeInstanceTopologyRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeInstanceTopologyRequest::getRegionId()const
{
	return regionId_;
}

void DescribeInstanceTopologyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeInstanceTopologyRequest::getInstanceIds()const
{
	return instanceIds_;
}

void DescribeInstanceTopologyRequest::setInstanceIds(const std::string& instanceIds)
{
	instanceIds_ = instanceIds;
	setCoreParameter("InstanceIds", instanceIds);
}

long DescribeInstanceTopologyRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeInstanceTopologyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

>>>>>>> master
