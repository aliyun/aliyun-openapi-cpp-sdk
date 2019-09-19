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

#include <alibabacloud/afs/model/DescribeConfigNameResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Afs;
using namespace AlibabaCloud::Afs::Model;

DescribeConfigNameResult::DescribeConfigNameResult() :
	ServiceResult()
{}

DescribeConfigNameResult::DescribeConfigNameResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeConfigNameResult::~DescribeConfigNameResult()
{}

void DescribeConfigNameResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allConfigNamesNode = value["ConfigNames"]["ConfigName"];
	for (auto valueConfigNamesConfigName : allConfigNamesNode)
	{
		ConfigName configNamesObject;
		if(!valueConfigNamesConfigName["AliUid"].isNull())
			configNamesObject.aliUid = valueConfigNamesConfigName["AliUid"].asString();
		if(!valueConfigNamesConfigName["ConfigName"].isNull())
			configNamesObject.configName = valueConfigNamesConfigName["ConfigName"].asString();
		if(!valueConfigNamesConfigName["RefExtId"].isNull())
			configNamesObject.refExtId = valueConfigNamesConfigName["RefExtId"].asString();
		configNames_.push_back(configNamesObject);
	}
	if(!value["HasConfig"].isNull())
		hasConfig_ = value["HasConfig"].asString() == "true";
	if(!value["BizCode"].isNull())
		bizCode_ = value["BizCode"].asString();

}

std::vector<DescribeConfigNameResult::ConfigName> DescribeConfigNameResult::getConfigNames()const
{
	return configNames_;
}

bool DescribeConfigNameResult::getHasConfig()const
{
	return hasConfig_;
}

std::string DescribeConfigNameResult::getBizCode()const
{
	return bizCode_;
}

