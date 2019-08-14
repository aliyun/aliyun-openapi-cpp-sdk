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

#include <alibabacloud/domain/model/SaveBatchTaskForModifyingDomainDnsRequest.h>

using AlibabaCloud::Domain::Model::SaveBatchTaskForModifyingDomainDnsRequest;

SaveBatchTaskForModifyingDomainDnsRequest::SaveBatchTaskForModifyingDomainDnsRequest() :
	RpcServiceRequest("domain", "2018-01-29", "SaveBatchTaskForModifyingDomainDns")
{}

SaveBatchTaskForModifyingDomainDnsRequest::~SaveBatchTaskForModifyingDomainDnsRequest()
{}

std::string SaveBatchTaskForModifyingDomainDnsRequest::getUserClientIp()const
{
	return userClientIp_;
}

void SaveBatchTaskForModifyingDomainDnsRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::vector<std::string> SaveBatchTaskForModifyingDomainDnsRequest::getDomainName()const
{
	return domainName_;
}

void SaveBatchTaskForModifyingDomainDnsRequest::setDomainName(const std::vector<std::string>& domainName)
{
	domainName_ = domainName;
	for(int i = 0; i!= domainName.size(); i++)
		setCoreParameter("DomainName."+ std::to_string(i), domainName.at(i));
}

std::vector<std::string> SaveBatchTaskForModifyingDomainDnsRequest::getDomainNameServer()const
{
	return domainNameServer_;
}

void SaveBatchTaskForModifyingDomainDnsRequest::setDomainNameServer(const std::vector<std::string>& domainNameServer)
{
	domainNameServer_ = domainNameServer;
	for(int i = 0; i!= domainNameServer.size(); i++)
		setCoreParameter("DomainNameServer."+ std::to_string(i), domainNameServer.at(i));
}

std::string SaveBatchTaskForModifyingDomainDnsRequest::getLang()const
{
	return lang_;
}

void SaveBatchTaskForModifyingDomainDnsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

bool SaveBatchTaskForModifyingDomainDnsRequest::getAliyunDns()const
{
	return aliyunDns_;
}

void SaveBatchTaskForModifyingDomainDnsRequest::setAliyunDns(bool aliyunDns)
{
	aliyunDns_ = aliyunDns;
	setCoreParameter("AliyunDns", aliyunDns ? "true" : "false");
}

