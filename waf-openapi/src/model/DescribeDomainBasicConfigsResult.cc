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

#include <alibabacloud/waf-openapi/model/DescribeDomainBasicConfigsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Waf_openapi;
using namespace AlibabaCloud::Waf_openapi::Model;

DescribeDomainBasicConfigsResult::DescribeDomainBasicConfigsResult() :
	ServiceResult()
{}

DescribeDomainBasicConfigsResult::DescribeDomainBasicConfigsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainBasicConfigsResult::~DescribeDomainBasicConfigsResult()
{}

void DescribeDomainBasicConfigsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDomainConfigsNode = value["DomainConfigs"]["DomainConfig"];
	for (auto valueDomainConfigsDomainConfig : allDomainConfigsNode)
	{
		DomainConfig domainConfigsObject;
		if(!valueDomainConfigsDomainConfig["Status"].isNull())
			domainConfigsObject.status = std::stoi(valueDomainConfigsDomainConfig["Status"].asString());
		if(!valueDomainConfigsDomainConfig["Domain"].isNull())
			domainConfigsObject.domain = valueDomainConfigsDomainConfig["Domain"].asString();
		if(!valueDomainConfigsDomainConfig["Owner"].isNull())
			domainConfigsObject.owner = valueDomainConfigsDomainConfig["Owner"].asString();
		if(!valueDomainConfigsDomainConfig["CcMode"].isNull())
			domainConfigsObject.ccMode = std::stoi(valueDomainConfigsDomainConfig["CcMode"].asString());
		if(!valueDomainConfigsDomainConfig["CcStatus"].isNull())
			domainConfigsObject.ccStatus = std::stoi(valueDomainConfigsDomainConfig["CcStatus"].asString());
		if(!valueDomainConfigsDomainConfig["AccessType"].isNull())
			domainConfigsObject.accessType = valueDomainConfigsDomainConfig["AccessType"].asString();
		if(!valueDomainConfigsDomainConfig["Version"].isNull())
			domainConfigsObject.version = std::stol(valueDomainConfigsDomainConfig["Version"].asString());
		if(!valueDomainConfigsDomainConfig["AclStatus"].isNull())
			domainConfigsObject.aclStatus = std::stoi(valueDomainConfigsDomainConfig["AclStatus"].asString());
		if(!valueDomainConfigsDomainConfig["WafStatus"].isNull())
			domainConfigsObject.wafStatus = std::stoi(valueDomainConfigsDomainConfig["WafStatus"].asString());
		if(!valueDomainConfigsDomainConfig["WafMode"].isNull())
			domainConfigsObject.wafMode = std::stoi(valueDomainConfigsDomainConfig["WafMode"].asString());
		domainConfigs_.push_back(domainConfigsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDomainBasicConfigsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeDomainBasicConfigsResult::DomainConfig> DescribeDomainBasicConfigsResult::getDomainConfigs()const
{
	return domainConfigs_;
}

