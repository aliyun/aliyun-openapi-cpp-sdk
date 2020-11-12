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

#include <alibabacloud/pvtz/model/DescribeRequestGraphRequest.h>

using AlibabaCloud::Pvtz::Model::DescribeRequestGraphRequest;

DescribeRequestGraphRequest::DescribeRequestGraphRequest() :
	RpcServiceRequest("pvtz", "2018-01-01", "DescribeRequestGraph")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeRequestGraphRequest::~DescribeRequestGraphRequest()
{}

long DescribeRequestGraphRequest::getStartTimestamp()const
{
	return startTimestamp_;
}

void DescribeRequestGraphRequest::setStartTimestamp(long startTimestamp)
{
	startTimestamp_ = startTimestamp;
	setParameter("StartTimestamp", std::to_string(startTimestamp));
}

long DescribeRequestGraphRequest::getEndTimestamp()const
{
	return endTimestamp_;
}

void DescribeRequestGraphRequest::setEndTimestamp(long endTimestamp)
{
	endTimestamp_ = endTimestamp;
	setParameter("EndTimestamp", std::to_string(endTimestamp));
}

std::string DescribeRequestGraphRequest::getBizType()const
{
	return bizType_;
}

void DescribeRequestGraphRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setParameter("BizType", bizType);
}

std::string DescribeRequestGraphRequest::getVpcId()const
{
	return vpcId_;
}

void DescribeRequestGraphRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string DescribeRequestGraphRequest::getUserClientIp()const
{
	return userClientIp_;
}

void DescribeRequestGraphRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

std::string DescribeRequestGraphRequest::getBizId()const
{
	return bizId_;
}

void DescribeRequestGraphRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

std::string DescribeRequestGraphRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeRequestGraphRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string DescribeRequestGraphRequest::getLang()const
{
	return lang_;
}

void DescribeRequestGraphRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

