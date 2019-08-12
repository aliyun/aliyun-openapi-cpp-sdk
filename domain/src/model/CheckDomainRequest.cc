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

#include <alibabacloud/domain/model/CheckDomainRequest.h>

using AlibabaCloud::Domain::Model::CheckDomainRequest;

CheckDomainRequest::CheckDomainRequest() :
	RpcServiceRequest("domain", "2018-01-29", "CheckDomain")
{}

CheckDomainRequest::~CheckDomainRequest()
{}

std::string CheckDomainRequest::getFeeCurrency()const
{
	return feeCurrency_;
}

void CheckDomainRequest::setFeeCurrency(const std::string& feeCurrency)
{
	feeCurrency_ = feeCurrency;
	setCoreParameter("FeeCurrency", std::to_string(feeCurrency));
}

int CheckDomainRequest::getFeePeriod()const
{
	return feePeriod_;
}

void CheckDomainRequest::setFeePeriod(int feePeriod)
{
	feePeriod_ = feePeriod;
	setCoreParameter("FeePeriod", feePeriod);
}

std::string CheckDomainRequest::getDomainName()const
{
	return domainName_;
}

void CheckDomainRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

std::string CheckDomainRequest::getFeeCommand()const
{
	return feeCommand_;
}

void CheckDomainRequest::setFeeCommand(const std::string& feeCommand)
{
	feeCommand_ = feeCommand;
	setCoreParameter("FeeCommand", std::to_string(feeCommand));
}

std::string CheckDomainRequest::getLang()const
{
	return lang_;
}

void CheckDomainRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

