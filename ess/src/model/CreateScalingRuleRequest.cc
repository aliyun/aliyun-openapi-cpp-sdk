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

#include <alibabacloud/ess/model/CreateScalingRuleRequest.h>

using namespace AlibabaCloud::Ess;
using namespace AlibabaCloud::Ess::Model;

CreateScalingRuleRequest::CreateScalingRuleRequest() :
	EssRequest("CreateScalingRule")
{}

CreateScalingRuleRequest::~CreateScalingRuleRequest()
{}

std::string CreateScalingRuleRequest::getScalingRuleName()const
{
	return scalingRuleName_;
}

void CreateScalingRuleRequest::setScalingRuleName(const std::string& scalingRuleName)
{
	scalingRuleName_ = scalingRuleName;
	setParameter("ScalingRuleName", scalingRuleName);
}

std::string CreateScalingRuleRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateScalingRuleRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int CreateScalingRuleRequest::getAdjustmentValue()const
{
	return adjustmentValue_;
}

void CreateScalingRuleRequest::setAdjustmentValue(int adjustmentValue)
{
	adjustmentValue_ = adjustmentValue;
	setParameter("AdjustmentValue", std::to_string(adjustmentValue));
}

std::string CreateScalingRuleRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void CreateScalingRuleRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setParameter("ScalingGroupId", scalingGroupId);
}

std::string CreateScalingRuleRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateScalingRuleRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int CreateScalingRuleRequest::getCooldown()const
{
	return cooldown_;
}

void CreateScalingRuleRequest::setCooldown(int cooldown)
{
	cooldown_ = cooldown;
	setParameter("Cooldown", std::to_string(cooldown));
}

std::string CreateScalingRuleRequest::getAdjustmentType()const
{
	return adjustmentType_;
}

void CreateScalingRuleRequest::setAdjustmentType(const std::string& adjustmentType)
{
	adjustmentType_ = adjustmentType;
	setParameter("AdjustmentType", adjustmentType);
}

long CreateScalingRuleRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateScalingRuleRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateScalingRuleRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateScalingRuleRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

