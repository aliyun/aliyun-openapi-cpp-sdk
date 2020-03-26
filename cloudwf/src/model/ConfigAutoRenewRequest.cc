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
{
	setMethod(HttpRequest::Method::Post);
}

ConfigAutoRenewRequest::~ConfigAutoRenewRequest()
{}

int ConfigAutoRenewRequest::getOffsetDays()const
{
	return offsetDays_;
}

void ConfigAutoRenewRequest::setOffsetDays(int offsetDays)
{
	offsetDays_ = offsetDays;
	setParameter("OffsetDays", std::to_string(offsetDays));
}

int ConfigAutoRenewRequest::getMonths()const
{
	return months_;
}

void ConfigAutoRenewRequest::setMonths(int months)
{
	months_ = months;
	setParameter("Months", std::to_string(months));
}

std::vector<std::string> ConfigAutoRenewRequest::getApList()const
{
	return apList_;
}

void ConfigAutoRenewRequest::setApList(const std::vector<std::string>& apList)
{
	apList_ = apList;
	for(int dep1 = 0; dep1!= apList.size(); dep1++) {
		setParameter("ApList."+ std::to_string(dep1), apList.at(dep1));
	}
}

std::string ConfigAutoRenewRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ConfigAutoRenewRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool ConfigAutoRenewRequest::getAutoRenew()const
{
	return autoRenew_;
}

void ConfigAutoRenewRequest::setAutoRenew(bool autoRenew)
{
	autoRenew_ = autoRenew;
	setParameter("AutoRenew", autoRenew ? "true" : "false");
}

