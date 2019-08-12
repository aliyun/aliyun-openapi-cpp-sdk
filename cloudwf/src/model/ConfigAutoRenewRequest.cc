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

#include <alibabacloud/cloudwf/model/ConfigAutoRenewRequest.h>

using AlibabaCloud::Cloudwf::Model::ConfigAutoRenewRequest;

ConfigAutoRenewRequest::ConfigAutoRenewRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ConfigAutoRenew")
{}

ConfigAutoRenewRequest::~ConfigAutoRenewRequest()
{}

int ConfigAutoRenewRequest::getOffsetDays()const
{
	return offsetDays_;
}

void ConfigAutoRenewRequest::setOffsetDays(int offsetDays)
{
	offsetDays_ = offsetDays;
	setCoreParameter("OffsetDays", offsetDays);
}

int ConfigAutoRenewRequest::getMonths()const
{
	return months_;
}

void ConfigAutoRenewRequest::setMonths(int months)
{
	months_ = months;
	setCoreParameter("Months", months);
}

bool ConfigAutoRenewRequest::getAutoRenew()const
{
	return autoRenew_;
}

void ConfigAutoRenewRequest::setAutoRenew(bool autoRenew)
{
	autoRenew_ = autoRenew;
	setCoreParameter("AutoRenew", autoRenew ? "true" : "false");
}

std::vector<std::string> ConfigAutoRenewRequest::getApList()const
{
	return apList_;
}

void ConfigAutoRenewRequest::setApList(const std::vector<std::string>& apList)
{
	apList_ = apList;
	for(int i = 0; i!= apList.size(); i++)
		setCoreParameter("ApList."+ std::to_string(i), std::to_string(apList.at(i)));
}

std::string ConfigAutoRenewRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ConfigAutoRenewRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

