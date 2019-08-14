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

#include <alibabacloud/dcdn/model/DescribeDcdnIpaDomainConfigsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnIpaDomainConfigsResult::DescribeDcdnIpaDomainConfigsResult() :
	ServiceResult()
{}

DescribeDcdnIpaDomainConfigsResult::DescribeDcdnIpaDomainConfigsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnIpaDomainConfigsResult::~DescribeDcdnIpaDomainConfigsResult()
{}

void DescribeDcdnIpaDomainConfigsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allDomainConfigs = value["DomainConfigs"]["DomainConfig"];
	for (auto value : allDomainConfigs)
	{
		DomainConfig domainConfigsObject;
		if(!value["FunctionName"].isNull())
			domainConfigsObject.functionName = value["FunctionName"].asString();
		if(!value["ConfigId"].isNull())
			domainConfigsObject.configId = value["ConfigId"].asString();
		if(!value["Status"].isNull())
			domainConfigsObject.status = value["Status"].asString();
		auto allFunctionArgs = value["FunctionArgs"]["FunctionArg"];
		for (auto value : allFunctionArgs)
		{
			DomainConfig::FunctionArg functionArgsObject;
			if(!value["ArgName"].isNull())
				functionArgsObject.argName = value["ArgName"].asString();
			if(!value["ArgValue"].isNull())
				functionArgsObject.argValue = value["ArgValue"].asString();
			domainConfigsObject.functionArgs.push_back(functionArgsObject);
		}
		domainConfigs_.push_back(domainConfigsObject);
	}

}

std::vector<DescribeDcdnIpaDomainConfigsResult::DomainConfig> DescribeDcdnIpaDomainConfigsResult::getDomainConfigs()const
{
	return domainConfigs_;
}

