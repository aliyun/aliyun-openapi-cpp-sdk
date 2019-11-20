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

#include <alibabacloud/ecs/model/DescribeCloudAssistantStatusRequest.h>

using AlibabaCloud::Ecs::Model::DescribeCloudAssistantStatusRequest;

DescribeCloudAssistantStatusRequest::DescribeCloudAssistantStatusRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeCloudAssistantStatus")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeCloudAssistantStatusRequest::~DescribeCloudAssistantStatusRequest()
{}

long DescribeCloudAssistantStatusRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeCloudAssistantStatusRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeCloudAssistantStatusRequest::getRegionId()const
{
	return regionId_;
}

void DescribeCloudAssistantStatusRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeCloudAssistantStatusRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeCloudAssistantStatusRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeCloudAssistantStatusRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeCloudAssistantStatusRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeCloudAssistantStatusRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeCloudAssistantStatusRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::vector<std::string> DescribeCloudAssistantStatusRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeCloudAssistantStatusRequest::setInstanceId(const std::vector<std::string>& instanceId)
{
	instanceId_ = instanceId;
	for(int dep1 = 0; dep1!= instanceId.size(); dep1++) {
		setCoreParameter("InstanceId."+ std::to_string(dep1), instanceId.at(dep1));
	}
}

