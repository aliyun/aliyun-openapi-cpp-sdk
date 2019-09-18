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

#include <alibabacloud/cbn/model/CreateFlowlogRequest.h>

using AlibabaCloud::Cbn::Model::CreateFlowlogRequest;

CreateFlowlogRequest::CreateFlowlogRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "CreateFlowlog")
{}

CreateFlowlogRequest::~CreateFlowlogRequest()
{}

long CreateFlowlogRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateFlowlogRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateFlowlogRequest::getClientToken()const
{
	return clientToken_;
}

void CreateFlowlogRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string CreateFlowlogRequest::getCenId()const
{
	return cenId_;
}

void CreateFlowlogRequest::setCenId(const std::string& cenId)
{
	cenId_ = cenId;
	setCoreParameter("CenId", cenId);
}

std::string CreateFlowlogRequest::getDescription()const
{
	return description_;
}

void CreateFlowlogRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateFlowlogRequest::getRegionId()const
{
	return regionId_;
}

void CreateFlowlogRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateFlowlogRequest::getProjectName()const
{
	return projectName_;
}

void CreateFlowlogRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setCoreParameter("ProjectName", projectName);
}

std::string CreateFlowlogRequest::getLogStoreName()const
{
	return logStoreName_;
}

void CreateFlowlogRequest::setLogStoreName(const std::string& logStoreName)
{
	logStoreName_ = logStoreName;
	setCoreParameter("LogStoreName", logStoreName);
}

std::string CreateFlowlogRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateFlowlogRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateFlowlogRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateFlowlogRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long CreateFlowlogRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateFlowlogRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateFlowlogRequest::getFlowLogName()const
{
	return flowLogName_;
}

void CreateFlowlogRequest::setFlowLogName(const std::string& flowLogName)
{
	flowLogName_ = flowLogName;
	setCoreParameter("FlowLogName", flowLogName);
}

