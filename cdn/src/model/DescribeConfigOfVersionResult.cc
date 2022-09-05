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

#include <alibabacloud/cdn/model/DescribeConfigOfVersionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeConfigOfVersionResult::DescribeConfigOfVersionResult() :
	ServiceResult()
{}

DescribeConfigOfVersionResult::DescribeConfigOfVersionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeConfigOfVersionResult::~DescribeConfigOfVersionResult()
{}

void DescribeConfigOfVersionResult::parse(const std::string &payload)
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
		auto allFunctionArgsNode = valueVersionConfigsVersionConfig["FunctionArgs"]["FunctionArg"];
		for (auto valueVersionConfigsVersionConfigFunctionArgsFunctionArg : allFunctionArgsNode)
		{
			VersionConfig::FunctionArg functionArgsObject;
			if(!valueVersionConfigsVersionConfigFunctionArgsFunctionArg["ArgName"].isNull())
				functionArgsObject.argName = valueVersionConfigsVersionConfigFunctionArgsFunctionArg["ArgName"].asString();
			if(!valueVersionConfigsVersionConfigFunctionArgsFunctionArg["ArgValue"].isNull())
				functionArgsObject.argValue = valueVersionConfigsVersionConfigFunctionArgsFunctionArg["ArgValue"].asString();
			versionConfigsObject.functionArgs.push_back(functionArgsObject);
		}
		versionConfigs_.push_back(versionConfigsObject);
	}

}

std::vector<DescribeConfigOfVersionResult::VersionConfig> DescribeConfigOfVersionResult::getVersionConfigs()const
{
	return versionConfigs_;
}

