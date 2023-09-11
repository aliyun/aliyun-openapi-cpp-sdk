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

#include <alibabacloud/kms/model/CreateNetworkRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Kms;
using namespace AlibabaCloud::Kms::Model;

CreateNetworkRuleResult::CreateNetworkRuleResult() :
	ServiceResult()
{}

CreateNetworkRuleResult::CreateNetworkRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateNetworkRuleResult::~CreateNetworkRuleResult()
{}

void CreateNetworkRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["SourcePrivateIp"].isNull())
		sourcePrivateIp_ = value["SourcePrivateIp"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Arn"].isNull())
		arn_ = value["Arn"].asString();

}

std::string CreateNetworkRuleResult::getType()const
{
	return type_;
}

std::string CreateNetworkRuleResult::getDescription()const
{
	return description_;
}

std::string CreateNetworkRuleResult::getSourcePrivateIp()const
{
	return sourcePrivateIp_;
}

std::string CreateNetworkRuleResult::getArn()const
{
	return arn_;
}

std::string CreateNetworkRuleResult::getName()const
{
	return name_;
}

