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

#include <alibabacloud/ess/model/DeleteScalingConfigurationRequest.h>

using namespace AlibabaCloud::Ess;
using namespace AlibabaCloud::Ess::Model;

DeleteScalingConfigurationRequest::DeleteScalingConfigurationRequest() :
	EssRequest("DeleteScalingConfiguration")
{}

DeleteScalingConfigurationRequest::~DeleteScalingConfigurationRequest()
{}

std::string DeleteScalingConfigurationRequest::getScalingConfigurationId()const
{
	return scalingConfigurationId_;
}

void DeleteScalingConfigurationRequest::setScalingConfigurationId(const std::string& scalingConfigurationId)
{
	scalingConfigurationId_ = scalingConfigurationId;
	setParameter("ScalingConfigurationId", scalingConfigurationId);
}

std::string DeleteScalingConfigurationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteScalingConfigurationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteScalingConfigurationRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteScalingConfigurationRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DeleteScalingConfigurationRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteScalingConfigurationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteScalingConfigurationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteScalingConfigurationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

