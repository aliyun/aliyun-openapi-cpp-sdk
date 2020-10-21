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

#include <alibabacloud/sgw/model/DescribeSubscriptionPriceRequest.h>

using AlibabaCloud::Sgw::Model::DescribeSubscriptionPriceRequest;

DescribeSubscriptionPriceRequest::DescribeSubscriptionPriceRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "DescribeSubscriptionPrice")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSubscriptionPriceRequest::~DescribeSubscriptionPriceRequest()
{}

std::string DescribeSubscriptionPriceRequest::getGatewayClass()const
{
	return gatewayClass_;
}

void DescribeSubscriptionPriceRequest::setGatewayClass(const std::string& gatewayClass)
{
	gatewayClass_ = gatewayClass;
	setParameter("GatewayClass", gatewayClass);
}

long DescribeSubscriptionPriceRequest::getCacheSSDSize()const
{
	return cacheSSDSize_;
}

void DescribeSubscriptionPriceRequest::setCacheSSDSize(long cacheSSDSize)
{
	cacheSSDSize_ = cacheSSDSize;
	setParameter("CacheSSDSize", std::to_string(cacheSSDSize));
}

std::string DescribeSubscriptionPriceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeSubscriptionPriceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeSubscriptionPriceRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void DescribeSubscriptionPriceRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setParameter("PeriodUnit", periodUnit);
}

int DescribeSubscriptionPriceRequest::getPeriodQuantity()const
{
	return periodQuantity_;
}

void DescribeSubscriptionPriceRequest::setPeriodQuantity(int periodQuantity)
{
	periodQuantity_ = periodQuantity;
	setParameter("PeriodQuantity", std::to_string(periodQuantity));
}

std::string DescribeSubscriptionPriceRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeSubscriptionPriceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeSubscriptionPriceRequest::getRegionId()const
{
	return regionId_;
}

void DescribeSubscriptionPriceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

long DescribeSubscriptionPriceRequest::getCacheCloudEfficiencySize()const
{
	return cacheCloudEfficiencySize_;
}

void DescribeSubscriptionPriceRequest::setCacheCloudEfficiencySize(long cacheCloudEfficiencySize)
{
	cacheCloudEfficiencySize_ = cacheCloudEfficiencySize;
	setParameter("CacheCloudEfficiencySize", std::to_string(cacheCloudEfficiencySize));
}

