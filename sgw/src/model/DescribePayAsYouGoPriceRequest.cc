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

#include <alibabacloud/sgw/model/DescribePayAsYouGoPriceRequest.h>

using AlibabaCloud::Sgw::Model::DescribePayAsYouGoPriceRequest;

DescribePayAsYouGoPriceRequest::DescribePayAsYouGoPriceRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "DescribePayAsYouGoPrice")
{
	setMethod(HttpRequest::Method::Post);
}

DescribePayAsYouGoPriceRequest::~DescribePayAsYouGoPriceRequest()
{}

std::string DescribePayAsYouGoPriceRequest::getGatewayClass()const
{
	return gatewayClass_;
}

void DescribePayAsYouGoPriceRequest::setGatewayClass(const std::string& gatewayClass)
{
	gatewayClass_ = gatewayClass;
	setParameter("GatewayClass", gatewayClass);
}

std::string DescribePayAsYouGoPriceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribePayAsYouGoPriceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribePayAsYouGoPriceRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribePayAsYouGoPriceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribePayAsYouGoPriceRequest::getRegionId()const
{
	return regionId_;
}

void DescribePayAsYouGoPriceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

