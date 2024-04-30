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

#include <alibabacloud/dcdn/model/DescribeRDDomainConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeRDDomainConfigResult::DescribeRDDomainConfigResult() :
	ServiceResult()
{}

DescribeRDDomainConfigResult::DescribeRDDomainConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRDDomainConfigResult::~DescribeRDDomainConfigResult()
{}

void DescribeRDDomainConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDomainConfigsNode = value["DomainConfigs"]["DomainConfig"];
	for (auto valueDomainConfigsDomainConfig : allDomainConfigsNode)
	{
		DomainConfig domainConfigsObject;
		if(!valueDomainConfigsDomainConfig["ConfigId"].isNull())
			domainConfigsObject.configId = std::stol(valueDomainConfigsDomainConfig["ConfigId"].asString());
		if(!valueDomainConfigsDomainConfig["Status"].isNull())
			domainConfigsObject.status = valueDomainConfigsDomainConfig["Status"].asString();
		if(!valueDomainConfigsDomainConfig["FunctionName"].isNull())
			domainConfigsObject.functionName = valueDomainConfigsDomainConfig["FunctionName"].asString();
		if(!valueDomainConfigsDomainConfig["ParentId"].isNull())
			domainConfigsObject.parentId = valueDomainConfigsDomainConfig["ParentId"].asString();
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

std::vector<DescribeRDDomainConfigResult::DomainConfig> DescribeRDDomainConfigResult::getDomainConfigs()const
{
	return domainConfigs_;
}

