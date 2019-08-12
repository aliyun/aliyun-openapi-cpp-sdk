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

#include <alibabacloud/bssopenapi/model/CreateInstanceRequest.h>

using AlibabaCloud::BssOpenApi::Model::CreateInstanceRequest;

CreateInstanceRequest::CreateInstanceRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "CreateInstance")
{}

CreateInstanceRequest::~CreateInstanceRequest()
{}

std::string CreateInstanceRequest::getProductCode()const
{
	return productCode_;
}

void CreateInstanceRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setCoreParameter("ProductCode", productCode);
}

int CreateInstanceRequest::getPeriod()const
{
	return period_;
}

void CreateInstanceRequest::setPeriod(int period)
{
	period_ = period;
	setCoreParameter("Period", period);
}

std::string CreateInstanceRequest::getClientToken()const
{
	return clientToken_;
}

void CreateInstanceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string CreateInstanceRequest::getSubscriptionType()const
{
	return subscriptionType_;
}

void CreateInstanceRequest::setSubscriptionType(const std::string& subscriptionType)
{
	subscriptionType_ = subscriptionType;
	setCoreParameter("SubscriptionType", subscriptionType);
}

int CreateInstanceRequest::getRenewPeriod()const
{
	return renewPeriod_;
}

void CreateInstanceRequest::setRenewPeriod(int renewPeriod)
{
	renewPeriod_ = renewPeriod;
	setCoreParameter("RenewPeriod", renewPeriod);
}

std::vector<CreateInstanceRequest::Parameter> CreateInstanceRequest::getParameter()const
{
	return parameter_;
}

void CreateInstanceRequest::setParameter(const std::vector<Parameter>& parameter)
{
	parameter_ = parameter;
	int i = 0;
	for(int i = 0; i!= parameter.size(); i++)	{
		auto obj = parameter.at(i);
		std::string str ="Parameter."+ std::to_string(i);
		setCoreParameter(str + ".Code", std::to_string(obj.code));
		setCoreParameter(str + ".Value", std::to_string(obj.value));
	}
}

std::string CreateInstanceRequest::getRenewalStatus()const
{
	return renewalStatus_;
}

void CreateInstanceRequest::setRenewalStatus(const std::string& renewalStatus)
{
	renewalStatus_ = renewalStatus;
	setCoreParameter("RenewalStatus", renewalStatus);
}

long CreateInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string CreateInstanceRequest::getProductType()const
{
	return productType_;
}

void CreateInstanceRequest::setProductType(const std::string& productType)
{
	productType_ = productType;
	setCoreParameter("ProductType", productType);
}

