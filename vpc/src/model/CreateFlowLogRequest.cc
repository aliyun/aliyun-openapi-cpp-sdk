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

#include <alibabacloud/vpc/model/CreateFlowLogRequest.h>

using AlibabaCloud::Vpc::Model::CreateFlowLogRequest;

CreateFlowLogRequest::CreateFlowLogRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "CreateFlowLog")
{}

CreateFlowLogRequest::~CreateFlowLogRequest()
{}

long CreateFlowLogRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateFlowLogRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateFlowLogRequest::getResourceId()const
{
	return resourceId_;
}

void CreateFlowLogRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setCoreParameter("ResourceId", std::to_string(resourceId));
}

std::string CreateFlowLogRequest::getProjectName()const
{
	return projectName_;
}

void CreateFlowLogRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setCoreParameter("ProjectName", std::to_string(projectName));
}

std::string CreateFlowLogRequest::getLogStoreName()const
{
	return logStoreName_;
}

void CreateFlowLogRequest::setLogStoreName(const std::string& logStoreName)
{
	logStoreName_ = logStoreName;
	setCoreParameter("LogStoreName", std::to_string(logStoreName));
}

std::string CreateFlowLogRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateFlowLogRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string CreateFlowLogRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateFlowLogRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string CreateFlowLogRequest::getDescription()const
{
	return description_;
}

void CreateFlowLogRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

long CreateFlowLogRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateFlowLogRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string CreateFlowLogRequest::getResourceType()const
{
	return resourceType_;
}

void CreateFlowLogRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", std::to_string(resourceType));
}

std::string CreateFlowLogRequest::getRegionId()const
{
	return regionId_;
}

void CreateFlowLogRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string CreateFlowLogRequest::getTrafficType()const
{
	return trafficType_;
}

void CreateFlowLogRequest::setTrafficType(const std::string& trafficType)
{
	trafficType_ = trafficType;
	setCoreParameter("TrafficType", std::to_string(trafficType));
}

std::string CreateFlowLogRequest::getFlowLogName()const
{
	return flowLogName_;
}

void CreateFlowLogRequest::setFlowLogName(const std::string& flowLogName)
{
	flowLogName_ = flowLogName;
	setCoreParameter("FlowLogName", std::to_string(flowLogName));
}

