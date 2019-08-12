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

#include <alibabacloud/bssopenapi/model/GetSubscriptionPriceRequest.h>

using AlibabaCloud::BssOpenApi::Model::GetSubscriptionPriceRequest;

GetSubscriptionPriceRequest::GetSubscriptionPriceRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "GetSubscriptionPrice")
{}

GetSubscriptionPriceRequest::~GetSubscriptionPriceRequest()
{}

int GetSubscriptionPriceRequest::getServicePeriodQuantity()const
{
	return servicePeriodQuantity_;
}

void GetSubscriptionPriceRequest::setServicePeriodQuantity(int servicePeriodQuantity)
{
	servicePeriodQuantity_ = servicePeriodQuantity;
	setCoreParameter("ServicePeriodQuantity", servicePeriodQuantity);
}

std::string GetSubscriptionPriceRequest::getProductCode()const
{
	return productCode_;
}

void GetSubscriptionPriceRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setCoreParameter("ProductCode", std::to_string(productCode));
}

std::string GetSubscriptionPriceRequest::getInstanceId()const
{
	return instanceId_;
}

void GetSubscriptionPriceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

int GetSubscriptionPriceRequest::getQuantity()const
{
	return quantity_;
}

void GetSubscriptionPriceRequest::setQuantity(int quantity)
{
	quantity_ = quantity;
	setCoreParameter("Quantity", quantity);
}

std::string GetSubscriptionPriceRequest::getServicePeriodUnit()const
{
	return servicePeriodUnit_;
}

void GetSubscriptionPriceRequest::setServicePeriodUnit(const std::string& servicePeriodUnit)
{
	servicePeriodUnit_ = servicePeriodUnit;
	setCoreParameter("ServicePeriodUnit", std::to_string(servicePeriodUnit));
}

std::string GetSubscriptionPriceRequest::getSubscriptionType()const
{
	return subscriptionType_;
}

void GetSubscriptionPriceRequest::setSubscriptionType(const std::string& subscriptionType)
{
	subscriptionType_ = subscriptionType;
	setCoreParameter("SubscriptionType", std::to_string(subscriptionType));
}

std::vector<GetSubscriptionPriceRequest::ModuleList> GetSubscriptionPriceRequest::getModuleList()const
{
	return moduleList_;
}

void GetSubscriptionPriceRequest::setModuleList(const std::vector<ModuleList>& moduleList)
{
	moduleList_ = moduleList;
	int i = 0;
	for(int i = 0; i!= moduleList.size(); i++)	{
		auto obj = moduleList.at(i);
		std::string str ="ModuleList."+ std::to_string(i);
		setCoreParameter(str + ".ModuleCode", std::to_string(obj.moduleCode));
		setCoreParameter(str + ".ModuleStatus", obj.moduleStatus);
		setCoreParameter(str + ".Tag", std::to_string(obj.tag));
		setCoreParameter(str + ".Config", std::to_string(obj.config));
	}
}

long GetSubscriptionPriceRequest::getOwnerId()const
{
	return ownerId_;
}

void GetSubscriptionPriceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string GetSubscriptionPriceRequest::getRegion()const
{
	return region_;
}

void GetSubscriptionPriceRequest::setRegion(const std::string& region)
{
	region_ = region;
	setCoreParameter("Region", std::to_string(region));
}

std::string GetSubscriptionPriceRequest::getOrderType()const
{
	return orderType_;
}

void GetSubscriptionPriceRequest::setOrderType(const std::string& orderType)
{
	orderType_ = orderType;
	setCoreParameter("OrderType", std::to_string(orderType));
}

std::string GetSubscriptionPriceRequest::getProductType()const
{
	return productType_;
}

void GetSubscriptionPriceRequest::setProductType(const std::string& productType)
{
	productType_ = productType;
	setCoreParameter("ProductType", std::to_string(productType));
}

