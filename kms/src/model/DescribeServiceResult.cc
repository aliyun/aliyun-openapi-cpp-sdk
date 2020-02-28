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

#include <alibabacloud/kms/model/DescribeServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Kms;
using namespace AlibabaCloud::Kms::Model;

DescribeServiceResult::DescribeServiceResult() :
	ServiceResult()
{}

DescribeServiceResult::DescribeServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeServiceResult::~DescribeServiceResult()
{}

void DescribeServiceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allProtectionLevelsNode = value["ProtectionLevels"]["ProtectionLevel"];
	for (auto valueProtectionLevelsProtectionLevel : allProtectionLevelsNode)
	{
		ProtectionLevel protectionLevelsObject;
		if(!valueProtectionLevelsProtectionLevel["Type"].isNull())
			protectionLevelsObject.type = valueProtectionLevelsProtectionLevel["Type"].asString();
		protectionLevels_.push_back(protectionLevelsObject);
	}
	auto allKeySpecsNode = value["KeySpecs"]["KeySpec"];
	for (auto valueKeySpecsKeySpec : allKeySpecsNode)
	{
		KeySpec keySpecsObject;
		if(!valueKeySpecsKeySpec["Name"].isNull())
			keySpecsObject.name = valueKeySpecsKeySpec["Name"].asString();
		auto allSupportedProtectionLevels = value["SupportedProtectionLevels"]["SupportedProtectionLevel"];
		for (auto value : allSupportedProtectionLevels)
			keySpecsObject.supportedProtectionLevels.push_back(value.asString());
		auto allUsages = value["Usages"]["Usage"];
		for (auto value : allUsages)
			keySpecsObject.usages.push_back(value.asString());
		keySpecs_.push_back(keySpecsObject);
	}

}

std::vector<DescribeServiceResult::ProtectionLevel> DescribeServiceResult::getProtectionLevels()const
{
	return protectionLevels_;
}

std::vector<DescribeServiceResult::KeySpec> DescribeServiceResult::getKeySpecs()const
{
	return keySpecs_;
}

