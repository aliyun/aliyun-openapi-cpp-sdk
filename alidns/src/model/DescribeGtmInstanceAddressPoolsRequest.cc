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

#include <alibabacloud/alidns/model/DescribeGtmInstanceAddressPoolsRequest.h>

using AlibabaCloud::Alidns::Model::DescribeGtmInstanceAddressPoolsRequest;

DescribeGtmInstanceAddressPoolsRequest::DescribeGtmInstanceAddressPoolsRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "DescribeGtmInstanceAddressPools")
{}

DescribeGtmInstanceAddressPoolsRequest::~DescribeGtmInstanceAddressPoolsRequest()
{}

std::string DescribeGtmInstanceAddressPoolsRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeGtmInstanceAddressPoolsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string DescribeGtmInstanceAddressPoolsRequest::getUserClientIp()const
{
	return userClientIp_;
}

void DescribeGtmInstanceAddressPoolsRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

int DescribeGtmInstanceAddressPoolsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeGtmInstanceAddressPoolsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeGtmInstanceAddressPoolsRequest::getLang()const
{
	return lang_;
}

void DescribeGtmInstanceAddressPoolsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

int DescribeGtmInstanceAddressPoolsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeGtmInstanceAddressPoolsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

