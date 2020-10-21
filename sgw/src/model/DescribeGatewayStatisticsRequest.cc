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

#include <alibabacloud/sgw/model/DescribeGatewayStatisticsRequest.h>

using AlibabaCloud::Sgw::Model::DescribeGatewayStatisticsRequest;

DescribeGatewayStatisticsRequest::DescribeGatewayStatisticsRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "DescribeGatewayStatistics")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeGatewayStatisticsRequest::~DescribeGatewayStatisticsRequest()
{}

std::string DescribeGatewayStatisticsRequest::getGatewayCategory()const
{
	return gatewayCategory_;
}

void DescribeGatewayStatisticsRequest::setGatewayCategory(const std::string& gatewayCategory)
{
	gatewayCategory_ = gatewayCategory;
	setParameter("GatewayCategory", gatewayCategory);
}

std::string DescribeGatewayStatisticsRequest::getGatewayLocation()const
{
	return gatewayLocation_;
}

void DescribeGatewayStatisticsRequest::setGatewayLocation(const std::string& gatewayLocation)
{
	gatewayLocation_ = gatewayLocation;
	setParameter("GatewayLocation", gatewayLocation);
}

long DescribeGatewayStatisticsRequest::getStartTimestamp()const
{
	return startTimestamp_;
}

void DescribeGatewayStatisticsRequest::setStartTimestamp(long startTimestamp)
{
	startTimestamp_ = startTimestamp;
	setParameter("StartTimestamp", std::to_string(startTimestamp));
}

std::string DescribeGatewayStatisticsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeGatewayStatisticsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long DescribeGatewayStatisticsRequest::getEndTimestamp()const
{
	return endTimestamp_;
}

void DescribeGatewayStatisticsRequest::setEndTimestamp(long endTimestamp)
{
	endTimestamp_ = endTimestamp;
	setParameter("EndTimestamp", std::to_string(endTimestamp));
}

std::string DescribeGatewayStatisticsRequest::getTargetAccountId()const
{
	return targetAccountId_;
}

void DescribeGatewayStatisticsRequest::setTargetAccountId(const std::string& targetAccountId)
{
	targetAccountId_ = targetAccountId;
	setParameter("TargetAccountId", targetAccountId);
}

std::string DescribeGatewayStatisticsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeGatewayStatisticsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

