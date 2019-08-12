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

#include <alibabacloud/ess/model/DeleteScalingRuleRequest.h>

using AlibabaCloud::Ess::Model::DeleteScalingRuleRequest;

DeleteScalingRuleRequest::DeleteScalingRuleRequest() :
	RpcServiceRequest("ess", "2014-08-28", "DeleteScalingRule")
{}

DeleteScalingRuleRequest::~DeleteScalingRuleRequest()
{}

std::string DeleteScalingRuleRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteScalingRuleRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteScalingRuleRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteScalingRuleRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DeleteScalingRuleRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteScalingRuleRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DeleteScalingRuleRequest::getScalingRuleId()const
{
	return scalingRuleId_;
}

void DeleteScalingRuleRequest::setScalingRuleId(const std::string& scalingRuleId)
{
	scalingRuleId_ = scalingRuleId;
	setCoreParameter("ScalingRuleId", scalingRuleId);
}

std::string DeleteScalingRuleRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteScalingRuleRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

