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

#include <alibabacloud/domain/model/SaveSingleTaskForModifyingDnsHostRequest.h>

using AlibabaCloud::Domain::Model::SaveSingleTaskForModifyingDnsHostRequest;

SaveSingleTaskForModifyingDnsHostRequest::SaveSingleTaskForModifyingDnsHostRequest() :
	RpcServiceRequest("domain", "2018-01-29", "SaveSingleTaskForModifyingDnsHost")
{
	setMethod(HttpRequest::Method::Post);
}

SaveSingleTaskForModifyingDnsHostRequest::~SaveSingleTaskForModifyingDnsHostRequest()
{}

std::vector<std::string> SaveSingleTaskForModifyingDnsHostRequest::getIp()const
{
	return ip_;
}

void SaveSingleTaskForModifyingDnsHostRequest::setIp(const std::vector<std::string>& ip)
{
	ip_ = ip;
	for(int dep1 = 0; dep1!= ip.size(); dep1++) {
		setParameter("Ip."+ std::to_string(dep1), ip.at(dep1));
	}
}

std::string SaveSingleTaskForModifyingDnsHostRequest::getInstanceId()const
{
	return instanceId_;
}

void SaveSingleTaskForModifyingDnsHostRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string SaveSingleTaskForModifyingDnsHostRequest::getDnsName()const
{
	return dnsName_;
}

void SaveSingleTaskForModifyingDnsHostRequest::setDnsName(const std::string& dnsName)
{
	dnsName_ = dnsName;
	setParameter("DnsName", dnsName);
}

std::string SaveSingleTaskForModifyingDnsHostRequest::getUserClientIp()const
{
	return userClientIp_;
}

void SaveSingleTaskForModifyingDnsHostRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

std::string SaveSingleTaskForModifyingDnsHostRequest::getLang()const
{
	return lang_;
}

void SaveSingleTaskForModifyingDnsHostRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

