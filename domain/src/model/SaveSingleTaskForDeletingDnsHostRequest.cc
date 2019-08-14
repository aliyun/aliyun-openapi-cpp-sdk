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

#include <alibabacloud/domain/model/SaveSingleTaskForDeletingDnsHostRequest.h>

using AlibabaCloud::Domain::Model::SaveSingleTaskForDeletingDnsHostRequest;

SaveSingleTaskForDeletingDnsHostRequest::SaveSingleTaskForDeletingDnsHostRequest() :
	RpcServiceRequest("domain", "2018-01-29", "SaveSingleTaskForDeletingDnsHost")
{}

SaveSingleTaskForDeletingDnsHostRequest::~SaveSingleTaskForDeletingDnsHostRequest()
{}

std::string SaveSingleTaskForDeletingDnsHostRequest::getInstanceId()const
{
	return instanceId_;
}

void SaveSingleTaskForDeletingDnsHostRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string SaveSingleTaskForDeletingDnsHostRequest::getDnsName()const
{
	return dnsName_;
}

void SaveSingleTaskForDeletingDnsHostRequest::setDnsName(const std::string& dnsName)
{
	dnsName_ = dnsName;
	setCoreParameter("DnsName", dnsName);
}

std::string SaveSingleTaskForDeletingDnsHostRequest::getUserClientIp()const
{
	return userClientIp_;
}

void SaveSingleTaskForDeletingDnsHostRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::string SaveSingleTaskForDeletingDnsHostRequest::getLang()const
{
	return lang_;
}

void SaveSingleTaskForDeletingDnsHostRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

