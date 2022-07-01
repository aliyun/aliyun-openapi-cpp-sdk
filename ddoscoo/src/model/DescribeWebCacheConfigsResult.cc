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

#include <alibabacloud/ddoscoo/model/DescribeWebCacheConfigsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeWebCacheConfigsResult::DescribeWebCacheConfigsResult() :
	ServiceResult()
{}

DescribeWebCacheConfigsResult::DescribeWebCacheConfigsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWebCacheConfigsResult::~DescribeWebCacheConfigsResult()
{}

void DescribeWebCacheConfigsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDomainCacheConfigsNode = value["DomainCacheConfigs"]["CacheConfig"];
	for (auto valueDomainCacheConfigsCacheConfig : allDomainCacheConfigsNode)
	{
		CacheConfig domainCacheConfigsObject;
		if(!valueDomainCacheConfigsCacheConfig["Domain"].isNull())
			domainCacheConfigsObject.domain = valueDomainCacheConfigsCacheConfig["Domain"].asString();
		if(!valueDomainCacheConfigsCacheConfig["Mode"].isNull())
			domainCacheConfigsObject.mode = valueDomainCacheConfigsCacheConfig["Mode"].asString();
		if(!valueDomainCacheConfigsCacheConfig["Enable"].isNull())
			domainCacheConfigsObject.enable = std::stoi(valueDomainCacheConfigsCacheConfig["Enable"].asString());
		auto allCustomRulesNode = valueDomainCacheConfigsCacheConfig["CustomRules"]["CustomRule"];
		for (auto valueDomainCacheConfigsCacheConfigCustomRulesCustomRule : allCustomRulesNode)
		{
			CacheConfig::CustomRule customRulesObject;
			if(!valueDomainCacheConfigsCacheConfigCustomRulesCustomRule["Mode"].isNull())
				customRulesObject.mode = valueDomainCacheConfigsCacheConfigCustomRulesCustomRule["Mode"].asString();
			if(!valueDomainCacheConfigsCacheConfigCustomRulesCustomRule["CacheTtl"].isNull())
				customRulesObject.cacheTtl = std::stol(valueDomainCacheConfigsCacheConfigCustomRulesCustomRule["CacheTtl"].asString());
			if(!valueDomainCacheConfigsCacheConfigCustomRulesCustomRule["Name"].isNull())
				customRulesObject.name = valueDomainCacheConfigsCacheConfigCustomRulesCustomRule["Name"].asString();
			if(!valueDomainCacheConfigsCacheConfigCustomRulesCustomRule["Uri"].isNull())
				customRulesObject.uri = valueDomainCacheConfigsCacheConfigCustomRulesCustomRule["Uri"].asString();
			domainCacheConfigsObject.customRules.push_back(customRulesObject);
		}
		domainCacheConfigs_.push_back(domainCacheConfigsObject);
	}

}

std::vector<DescribeWebCacheConfigsResult::CacheConfig> DescribeWebCacheConfigsResult::getDomainCacheConfigs()const
{
	return domainCacheConfigs_;
}

