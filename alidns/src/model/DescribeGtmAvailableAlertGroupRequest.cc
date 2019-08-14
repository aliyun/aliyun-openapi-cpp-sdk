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

#include <alibabacloud/alidns/model/DescribeGtmAvailableAlertGroupRequest.h>

using AlibabaCloud::Alidns::Model::DescribeGtmAvailableAlertGroupRequest;

DescribeGtmAvailableAlertGroupRequest::DescribeGtmAvailableAlertGroupRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "DescribeGtmAvailableAlertGroup")
{}

DescribeGtmAvailableAlertGroupRequest::~DescribeGtmAvailableAlertGroupRequest()
{}

std::string DescribeGtmAvailableAlertGroupRequest::getUserClientIp()const
{
	return userClientIp_;
}

void DescribeGtmAvailableAlertGroupRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::string DescribeGtmAvailableAlertGroupRequest::getLang()const
{
	return lang_;
}

void DescribeGtmAvailableAlertGroupRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

