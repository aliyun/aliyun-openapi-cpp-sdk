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

#include <alibabacloud/eiam/model/ListDomainsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

ListDomainsResult::ListDomainsResult() :
	ServiceResult()
{}

ListDomainsResult::ListDomainsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDomainsResult::~ListDomainsResult()
{}

void ListDomainsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDomainsNode = value["Domains"]["Domain"];
	for (auto valueDomainsDomain : allDomainsNode)
	{
		Domain domainsObject;
		if(!valueDomainsDomain["InstanceId"].isNull())
			domainsObject.instanceId = valueDomainsDomain["InstanceId"].asString();
		if(!valueDomainsDomain["DomainId"].isNull())
			domainsObject.domainId = valueDomainsDomain["DomainId"].asString();
		if(!valueDomainsDomain["Domain"].isNull())
			domainsObject.domain = valueDomainsDomain["Domain"].asString();
		if(!valueDomainsDomain["DomainType"].isNull())
			domainsObject.domainType = valueDomainsDomain["DomainType"].asString();
		if(!valueDomainsDomain["LockMode"].isNull())
			domainsObject.lockMode = valueDomainsDomain["LockMode"].asString();
		if(!valueDomainsDomain["DefaultDomain"].isNull())
			domainsObject.defaultDomain = valueDomainsDomain["DefaultDomain"].asString() == "true";
		if(!valueDomainsDomain["CreateTime"].isNull())
			domainsObject.createTime = std::stol(valueDomainsDomain["CreateTime"].asString());
		if(!valueDomainsDomain["UpdateTime"].isNull())
			domainsObject.updateTime = std::stol(valueDomainsDomain["UpdateTime"].asString());
		auto filingNode = value["Filing"];
		if(!filingNode["IcpNumber"].isNull())
			domainsObject.filing.icpNumber = filingNode["IcpNumber"].asString();
		domains_.push_back(domainsObject);
	}

}

std::vector<ListDomainsResult::Domain> ListDomainsResult::getDomains()const
{
	return domains_;
}

