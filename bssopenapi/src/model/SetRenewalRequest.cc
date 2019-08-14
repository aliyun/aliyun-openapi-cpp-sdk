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

#include <alibabacloud/bssopenapi/model/SetRenewalRequest.h>

using AlibabaCloud::BssOpenApi::Model::SetRenewalRequest;

SetRenewalRequest::SetRenewalRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "SetRenewal")
{}

SetRenewalRequest::~SetRenewalRequest()
{}

std::string SetRenewalRequest::getProductCode()const
{
	return productCode_;
}

void SetRenewalRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setCoreParameter("ProductCode", productCode);
}

std::string SetRenewalRequest::getInstanceIDs()const
{
	return instanceIDs_;
}

void SetRenewalRequest::setInstanceIDs(const std::string& instanceIDs)
{
	instanceIDs_ = instanceIDs;
	setCoreParameter("InstanceIDs", instanceIDs);
}

std::string SetRenewalRequest::getSubscriptionType()const
{
	return subscriptionType_;
}

void SetRenewalRequest::setSubscriptionType(const std::string& subscriptionType)
{
	subscriptionType_ = subscriptionType;
	setCoreParameter("SubscriptionType", subscriptionType);
}

std::string SetRenewalRequest::getRenewalStatus()const
{
	return renewalStatus_;
}

void SetRenewalRequest::setRenewalStatus(const std::string& renewalStatus)
{
	renewalStatus_ = renewalStatus;
	setCoreParameter("RenewalStatus", renewalStatus);
}

std::string SetRenewalRequest::getRenewalPeriodUnit()const
{
	return renewalPeriodUnit_;
}

void SetRenewalRequest::setRenewalPeriodUnit(const std::string& renewalPeriodUnit)
{
	renewalPeriodUnit_ = renewalPeriodUnit;
	setCoreParameter("RenewalPeriodUnit", renewalPeriodUnit);
}

int SetRenewalRequest::getRenewalPeriod()const
{
	return renewalPeriod_;
}

void SetRenewalRequest::setRenewalPeriod(int renewalPeriod)
{
	renewalPeriod_ = renewalPeriod;
	setCoreParameter("RenewalPeriod", std::to_string(renewalPeriod));
}

long SetRenewalRequest::getOwnerId()const
{
	return ownerId_;
}

void SetRenewalRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string SetRenewalRequest::getProductType()const
{
	return productType_;
}

void SetRenewalRequest::setProductType(const std::string& productType)
{
	productType_ = productType;
	setCoreParameter("ProductType", productType);
}

