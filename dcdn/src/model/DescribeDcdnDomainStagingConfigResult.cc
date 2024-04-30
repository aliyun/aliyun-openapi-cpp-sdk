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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainStagingConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnDomainStagingConfigResult::DescribeDcdnDomainStagingConfigResult() :
	ServiceResult()
{}

DescribeDcdnDomainStagingConfigResult::DescribeDcdnDomainStagingConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnDomainStagingConfigResult::~DescribeDcdnDomainStagingConfigResult()
{}

void DescribeDcdnDomainStagingConfigResult::parse(const std::string &payload)
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
			domainConfigsObject.status = valueDomainConfigsDomainConfig["Status"].asString();
		if(!valueDomainConfigsDomainConfig["ConfigId"].isNull())
			domainConfigsObject.configId = valueDomainConfigsDomainConfig["ConfigId"].asString();
		if(!valueDomainConfigsDomainConfig["FunctionName"].isNull())
			domainConfigsObject.functionName = valueDomainConfigsDomainConfig["FunctionName"].asString();
		auto allFunctionArgsNode = valueDomainConfigsDomainConfig["FunctionArgs"]["FunctionArg"];
		for (auto valueDomainConfigsDomainConfigFunctionArgsFunctionArg : allFunctionArgsNode)
		{
			DomainConfig::FunctionArg functionArgsObject;
			if(!valueDomainConfigsDomainConfigFunctionArgsFunctionArg["ArgName"].isNull())
				functionArgsObject.argName = valueDomainConfigsDomainConfigFunctionArgsFunctionArg["ArgName"].asString();
			if(!valueDomainConfigsDomainConfigFunctionArgsFunctionArg["ArgValue"].isNull())
				functionArgsObject.argValue = valueDomainConfigsDomainConfigFunctionArgsFunctionArg["ArgValue"].asString();
			domainConfigsObject.functionArgs.push_back(functionArgsObject);
		}
		domainConfigs_.push_back(domainConfigsObject);
	}

}

std::vector<DescribeDcdnDomainStagingConfigResult::DomainConfig> DescribeDcdnDomainStagingConfigResult::getDomainConfigs()const
{
	return domainConfigs_;
}

