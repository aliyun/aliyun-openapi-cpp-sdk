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

#include <alibabacloud/ess/model/ModifyScalingRuleRequest.h>

using namespace AlibabaCloud::Ess;
using namespace AlibabaCloud::Ess::Model;

ModifyScalingRuleRequest::ModifyScalingRuleRequest() :
	EssRequest("ModifyScalingRule")
{}

ModifyScalingRuleRequest::~ModifyScalingRuleRequest()
{}

std::string ModifyScalingRuleRequest::getScalingRuleName()const
{
	return scalingRuleName_;
}

void ModifyScalingRuleRequest::setScalingRuleName(const std::string& scalingRuleName)
{
	scalingRuleName_ = scalingRuleName;
	setParameter("ScalingRuleName", scalingRuleName);
}

long ModifyScalingRuleRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyScalingRuleRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyScalingRuleRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyScalingRuleRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int ModifyScalingRuleRequest::getAdjustmentValue()const
{
	return adjustmentValue_;
}

void ModifyScalingRuleRequest::setAdjustmentValue(int adjustmentValue)
{
	adjustmentValue_ = adjustmentValue;
	setParameter("AdjustmentValue", std::to_string(adjustmentValue));
}

std::string ModifyScalingRuleRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyScalingRuleRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int ModifyScalingRuleRequest::getCooldown()const
{
	return cooldown_;
}

void ModifyScalingRuleRequest::setCooldown(int cooldown)
{
	cooldown_ = cooldown;
	setParameter("Cooldown", std::to_string(cooldown));
}

std::string ModifyScalingRuleRequest::getAdjustmentType()const
{
	return adjustmentType_;
}

void ModifyScalingRuleRequest::setAdjustmentType(const std::string& adjustmentType)
{
	adjustmentType_ = adjustmentType;
	setParameter("AdjustmentType", adjustmentType);
}

long ModifyScalingRuleRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyScalingRuleRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyScalingRuleRequest::getScalingRuleId()const
{
	return scalingRuleId_;
}

void ModifyScalingRuleRequest::setScalingRuleId(const std::string& scalingRuleId)
{
	scalingRuleId_ = scalingRuleId;
	setParameter("ScalingRuleId", scalingRuleId);
}

std::string ModifyScalingRuleRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyScalingRuleRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

