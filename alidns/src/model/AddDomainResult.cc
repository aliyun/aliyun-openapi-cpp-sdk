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

#include <alibabacloud/alidns/model/AddDomainResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

AddDomainResult::AddDomainResult() :
	ServiceResult()
{}

AddDomainResult::AddDomainResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AddDomainResult::~AddDomainResult()
{}

void AddDomainResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDnsServers = value["DnsServers"]["DnsServer"];
	for (const auto &item : allDnsServers)
		dnsServers_.push_back(item.asString());
	if(!value["GroupName"].isNull())
		groupName_ = value["GroupName"].asString();
	if(!value["DomainId"].isNull())
		domainId_ = value["DomainId"].asString();
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["PunyCode"].isNull())
		punyCode_ = value["PunyCode"].asString();
	if(!value["GroupId"].isNull())
		groupId_ = value["GroupId"].asString();

}

std::string AddDomainResult::getGroupName()const
{
	return groupName_;
}

std::string AddDomainResult::getDomainId()const
{
	return domainId_;
}

std::string AddDomainResult::getDomainName()const
{
	return domainName_;
}

std::string AddDomainResult::getPunyCode()const
{
	return punyCode_;
}

std::vector<std::string> AddDomainResult::getDnsServers()const
{
	return dnsServers_;
}

std::string AddDomainResult::getGroupId()const
{
	return groupId_;
}

