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

#include <alibabacloud/acms-open/model/DescribeConfigurationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Acms_open;
using namespace AlibabaCloud::Acms_open::Model;

DescribeConfigurationResult::DescribeConfigurationResult() :
	ServiceResult()
{}

DescribeConfigurationResult::DescribeConfigurationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeConfigurationResult::~DescribeConfigurationResult()
{}

void DescribeConfigurationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto configurationNode = value["Configuration"];
	if(!configurationNode["DataId"].isNull())
		configuration_.dataId = configurationNode["DataId"].asString();
	if(!configurationNode["Group"].isNull())
		configuration_.group = configurationNode["Group"].asString();
	if(!configurationNode["Content"].isNull())
		configuration_.content = configurationNode["Content"].asString();
	if(!configurationNode["Md5"].isNull())
		configuration_.md5 = configurationNode["Md5"].asString();
	if(!configurationNode["AppName"].isNull())
		configuration_.appName = configurationNode["AppName"].asString();
	if(!configurationNode["Desc"].isNull())
		configuration_.desc = configurationNode["Desc"].asString();
	if(!configurationNode["Tags"].isNull())
		configuration_.tags = configurationNode["Tags"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();

}

DescribeConfigurationResult::Configuration DescribeConfigurationResult::getConfiguration()const
{
	return configuration_;
}

std::string DescribeConfigurationResult::getMessage()const
{
	return message_;
}

std::string DescribeConfigurationResult::getCode()const
{
	return code_;
}

