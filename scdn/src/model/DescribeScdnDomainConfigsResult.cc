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

#include <alibabacloud/scdn/model/DescribeScdnDomainConfigsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scdn;
using namespace AlibabaCloud::Scdn::Model;

DescribeScdnDomainConfigsResult::DescribeScdnDomainConfigsResult() :
	ServiceResult()
{}

DescribeScdnDomainConfigsResult::DescribeScdnDomainConfigsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScdnDomainConfigsResult::~DescribeScdnDomainConfigsResult()
{}

void DescribeScdnDomainConfigsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDomainConfigsNode = value["DomainConfigs"]["DomainConfig"];
	for (auto valueDomainConfigsDomainConfig : allDomainConfigsNode)
	{
		DomainConfig domainConfigsObject;
		if(!valueDomainConfigsDomainConfig["FunctionName"].isNull())
			domainConfigsObject.functionName = valueDomainConfigsDomainConfig["FunctionName"].asString();
		if(!valueDomainConfigsDomainConfig["ConfigId"].isNull())
			domainConfigsObject.configId = valueDomainConfigsDomainConfig["ConfigId"].asString();
		if(!valueDomainConfigsDomainConfig["Status"].isNull())
			domainConfigsObject.status = valueDomainConfigsDomainConfig["Status"].asString();
		auto allFunctionArgsNode = allDomainConfigsNode["FunctionArgs"]["FunctionArg"];
		for (auto allDomainConfigsNodeFunctionArgsFunctionArg : allFunctionArgsNode)
		{
			DomainConfig::FunctionArg functionArgsObject;
			if(!allDomainConfigsNodeFunctionArgsFunctionArg["ArgName"].isNull())
				functionArgsObject.argName = allDomainConfigsNodeFunctionArgsFunctionArg["ArgName"].asString();
			if(!allDomainConfigsNodeFunctionArgsFunctionArg["ArgValue"].isNull())
				functionArgsObject.argValue = allDomainConfigsNodeFunctionArgsFunctionArg["ArgValue"].asString();
			domainConfigsObject.functionArgs.push_back(functionArgsObject);
		}
		domainConfigs_.push_back(domainConfigsObject);
	}

}

std::vector<DescribeScdnDomainConfigsResult::DomainConfig> DescribeScdnDomainConfigsResult::getDomainConfigs()const
{
	return domainConfigs_;
}

