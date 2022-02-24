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

#include <alibabacloud/eipanycast/model/DescribeAnycastEipAddressRequest.h>

using AlibabaCloud::Eipanycast::Model::DescribeAnycastEipAddressRequest;

DescribeAnycastEipAddressRequest::DescribeAnycastEipAddressRequest() :
	RpcServiceRequest("eipanycast", "2020-03-09", "DescribeAnycastEipAddress")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeAnycastEipAddressRequest::~DescribeAnycastEipAddressRequest()
{}

std::string DescribeAnycastEipAddressRequest::getIp()const
{
	return ip_;
}

void DescribeAnycastEipAddressRequest::setIp(const std::string& ip)
{
	ip_ = ip;
	setParameter("Ip", ip);
}

std::string DescribeAnycastEipAddressRequest::getRegionId()const
{
	return regionId_;
}

void DescribeAnycastEipAddressRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeAnycastEipAddressRequest::getAnycastId()const
{
	return anycastId_;
}

void DescribeAnycastEipAddressRequest::setAnycastId(const std::string& anycastId)
{
	anycastId_ = anycastId;
	setParameter("AnycastId", anycastId);
}

std::string DescribeAnycastEipAddressRequest::getBindInstanceId()const
{
	return bindInstanceId_;
}

void DescribeAnycastEipAddressRequest::setBindInstanceId(const std::string& bindInstanceId)
{
	bindInstanceId_ = bindInstanceId;
	setParameter("BindInstanceId", bindInstanceId);
}

