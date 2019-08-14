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

#include <alibabacloud/alidns/model/DescribeGtmInstanceStatusRequest.h>

using AlibabaCloud::Alidns::Model::DescribeGtmInstanceStatusRequest;

DescribeGtmInstanceStatusRequest::DescribeGtmInstanceStatusRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "DescribeGtmInstanceStatus")
{}

DescribeGtmInstanceStatusRequest::~DescribeGtmInstanceStatusRequest()
{}

std::string DescribeGtmInstanceStatusRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeGtmInstanceStatusRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string DescribeGtmInstanceStatusRequest::getUserClientIp()const
{
	return userClientIp_;
}

void DescribeGtmInstanceStatusRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::string DescribeGtmInstanceStatusRequest::getLang()const
{
	return lang_;
}

void DescribeGtmInstanceStatusRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

