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

#include <alibabacloud/smartag/model/CreateQosRequest.h>

using AlibabaCloud::Smartag::Model::CreateQosRequest;

CreateQosRequest::CreateQosRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "CreateQos")
{}

CreateQosRequest::~CreateQosRequest()
{}

long CreateQosRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateQosRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateQosRequest::getQosName()const
{
	return qosName_;
}

void CreateQosRequest::setQosName(const std::string& qosName)
{
	qosName_ = qosName;
	setCoreParameter("QosName", qosName);
}

std::string CreateQosRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateQosRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateQosRequest::getRegionId()const
{
	return regionId_;
}

void CreateQosRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateQosRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateQosRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long CreateQosRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateQosRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

