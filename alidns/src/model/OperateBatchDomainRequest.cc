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

#include <alibabacloud/alidns/model/OperateBatchDomainRequest.h>

using AlibabaCloud::Alidns::Model::OperateBatchDomainRequest;

OperateBatchDomainRequest::OperateBatchDomainRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "OperateBatchDomain")
{
	setMethod(HttpRequest::Method::Post);
}

OperateBatchDomainRequest::~OperateBatchDomainRequest()
{}

std::vector<OperateBatchDomainRequest::DomainRecordInfo> OperateBatchDomainRequest::getDomainRecordInfo()const
{
	return domainRecordInfo_;
}

void OperateBatchDomainRequest::setDomainRecordInfo(const std::vector<DomainRecordInfo>& domainRecordInfo)
{
	domainRecordInfo_ = domainRecordInfo;
	for(int dep1 = 0; dep1!= domainRecordInfo.size(); dep1++) {
		auto domainRecordInfoObj = domainRecordInfo.at(dep1);
		std::string domainRecordInfoObjStr = "DomainRecordInfo." + std::to_string(dep1);
		setCoreParameter(domainRecordInfoObjStr + ".Rr", domainRecordInfoObj.rr);
		setCoreParameter(domainRecordInfoObjStr + ".NewType", domainRecordInfoObj.newType);
		setCoreParameter(domainRecordInfoObjStr + ".NewValue", domainRecordInfoObj.newValue);
		setCoreParameter(domainRecordInfoObjStr + ".Line", domainRecordInfoObj.line);
		setCoreParameter(domainRecordInfoObjStr + ".Domain", domainRecordInfoObj.domain);
		setCoreParameter(domainRecordInfoObjStr + ".Type", domainRecordInfoObj.type);
		setCoreParameter(domainRecordInfoObjStr + ".Priority", std::to_string(domainRecordInfoObj.priority));
		setCoreParameter(domainRecordInfoObjStr + ".Value", domainRecordInfoObj.value);
		setCoreParameter(domainRecordInfoObjStr + ".Ttl", std::to_string(domainRecordInfoObj.ttl));
		setCoreParameter(domainRecordInfoObjStr + ".NewRr", domainRecordInfoObj.newRr);
	}
}

std::string OperateBatchDomainRequest::getType()const
{
	return type_;
}

void OperateBatchDomainRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string OperateBatchDomainRequest::getUserClientIp()const
{
	return userClientIp_;
}

void OperateBatchDomainRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::string OperateBatchDomainRequest::getLang()const
{
	return lang_;
}

void OperateBatchDomainRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

