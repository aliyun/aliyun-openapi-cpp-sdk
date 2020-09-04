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

#include <alibabacloud/dcdn/model/DescribeDcdnConfigOfVersionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnConfigOfVersionResult::DescribeDcdnConfigOfVersionResult() :
	ServiceResult()
{}

DescribeDcdnConfigOfVersionResult::DescribeDcdnConfigOfVersionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnConfigOfVersionResult::~DescribeDcdnConfigOfVersionResult()
{}

void DescribeDcdnConfigOfVersionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVersionConfigsNode = value["VersionConfigs"]["VersionConfig"];
	for (auto valueVersionConfigsVersionConfig : allVersionConfigsNode)
	{
		VersionConfig versionConfigsObject;
		if(!valueVersionConfigsVersionConfig["Status"].isNull())
			versionConfigsObject.status = valueVersionConfigsVersionConfig["Status"].asString();
		if(!valueVersionConfigsVersionConfig["ConfigId"].isNull())
			versionConfigsObject.configId = valueVersionConfigsVersionConfig["ConfigId"].asString();
		if(!valueVersionConfigsVersionConfig["FunctionName"].isNull())
			versionConfigsObject.functionName = valueVersionConfigsVersionConfig["FunctionName"].asString();
		auto allFunctionArgsNode = allVersionConfigsNode["FunctionArgs"]["FunctionArg"];
		for (auto allVersionConfigsNodeFunctionArgsFunctionArg : allFunctionArgsNode)
		{
			VersionConfig::FunctionArg functionArgsObject;
			if(!allVersionConfigsNodeFunctionArgsFunctionArg["ArgName"].isNull())
				functionArgsObject.argName = allVersionConfigsNodeFunctionArgsFunctionArg["ArgName"].asString();
			if(!allVersionConfigsNodeFunctionArgsFunctionArg["ArgValue"].isNull())
				functionArgsObject.argValue = allVersionConfigsNodeFunctionArgsFunctionArg["ArgValue"].asString();
			versionConfigsObject.functionArgs.push_back(functionArgsObject);
		}
		versionConfigs_.push_back(versionConfigsObject);
	}

}

std::vector<DescribeDcdnConfigOfVersionResult::VersionConfig> DescribeDcdnConfigOfVersionResult::getVersionConfigs()const
{
	return versionConfigs_;
}

