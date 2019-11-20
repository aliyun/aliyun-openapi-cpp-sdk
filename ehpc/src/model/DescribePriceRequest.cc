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

#include <alibabacloud/ehpc/model/DescribePriceRequest.h>

using AlibabaCloud::EHPC::Model::DescribePriceRequest;

DescribePriceRequest::DescribePriceRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "DescribePrice")
{
	setMethod(HttpRequest::Method::Get);
}

DescribePriceRequest::~DescribePriceRequest()
{}

std::vector<DescribePriceRequest::Commodities> DescribePriceRequest::getCommodities()const
{
	return commodities_;
}

void DescribePriceRequest::setCommodities(const std::vector<Commodities>& commodities)
{
	commodities_ = commodities;
	for(int dep1 = 0; dep1!= commodities.size(); dep1++) {
		auto commoditiesObj = commodities.at(dep1);
		std::string commoditiesObjStr = "Commodities." + std::to_string(dep1);
		setCoreParameter(commoditiesObjStr + ".Amount", std::to_string(commoditiesObj.amount));
		setCoreParameter(commoditiesObjStr + ".Period", std::to_string(commoditiesObj.period));
		setCoreParameter(commoditiesObjStr + ".NodeType", commoditiesObj.nodeType);
		setCoreParameter(commoditiesObjStr + ".SystemDiskCategory", commoditiesObj.systemDiskCategory);
		setCoreParameter(commoditiesObjStr + ".SystemDiskSize", std::to_string(commoditiesObj.systemDiskSize));
		setCoreParameter(commoditiesObjStr + ".InstanceType", commoditiesObj.instanceType);
		setCoreParameter(commoditiesObjStr + ".NetworkType", commoditiesObj.networkType);
	}
}

std::string DescribePriceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribePriceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribePriceRequest::getPriceUnit()const
{
	return priceUnit_;
}

void DescribePriceRequest::setPriceUnit(const std::string& priceUnit)
{
	priceUnit_ = priceUnit;
	setCoreParameter("PriceUnit", priceUnit);
}

std::string DescribePriceRequest::getChargeType()const
{
	return chargeType_;
}

void DescribePriceRequest::setChargeType(const std::string& chargeType)
{
	chargeType_ = chargeType;
	setCoreParameter("ChargeType", chargeType);
}

std::string DescribePriceRequest::getOrderType()const
{
	return orderType_;
}

void DescribePriceRequest::setOrderType(const std::string& orderType)
{
	orderType_ = orderType;
	setCoreParameter("OrderType", orderType);
}

