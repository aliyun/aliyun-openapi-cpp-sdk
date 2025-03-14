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

#include <alibabacloud/sophonsoar/model/DescribePlaybookInputOutputResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sophonsoar;
using namespace AlibabaCloud::Sophonsoar::Model;

DescribePlaybookInputOutputResult::DescribePlaybookInputOutputResult() :
	ServiceResult()
{}

DescribePlaybookInputOutputResult::DescribePlaybookInputOutputResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePlaybookInputOutputResult::~DescribePlaybookInputOutputResult()
{}

void DescribePlaybookInputOutputResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto configNode = value["Config"];
	if(!configNode["ParamType"].isNull())
		config_.paramType = configNode["ParamType"].asString();
	if(!configNode["ExeConfig"].isNull())
		config_.exeConfig = configNode["ExeConfig"].asString();
	if(!configNode["InputParams"].isNull())
		config_.inputParams = configNode["InputParams"].asString();
	if(!configNode["OutputParams"].isNull())
		config_.outputParams = configNode["OutputParams"].asString();
	if(!configNode["PlaybookUuid"].isNull())
		config_.playbookUuid = configNode["PlaybookUuid"].asString();
	if(!configNode["Type"].isNull())
		config_.type = configNode["Type"].asString();
	if(!configNode["ModelCode"].isNull())
		config_.modelCode = configNode["ModelCode"].asString();
	if(!configNode["ModelName"].isNull())
		config_.modelName = configNode["ModelName"].asString();

}

DescribePlaybookInputOutputResult::Config DescribePlaybookInputOutputResult::getConfig()const
{
	return config_;
}

