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

#include <alibabacloud/alidns/model/GetMainDomainNameResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

GetMainDomainNameResult::GetMainDomainNameResult() :
	ServiceResult()
{}

GetMainDomainNameResult::GetMainDomainNameResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMainDomainNameResult::~GetMainDomainNameResult()
{}

void GetMainDomainNameResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["RR"].isNull())
		rR_ = value["RR"].asString();
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["DomainLevel"].isNull())
		domainLevel_ = std::stol(value["DomainLevel"].asString());

}

std::string GetMainDomainNameResult::getRR()const
{
	return rR_;
}

std::string GetMainDomainNameResult::getDomainName()const
{
	return domainName_;
}

long GetMainDomainNameResult::getDomainLevel()const
{
	return domainLevel_;
}

