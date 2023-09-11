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

#include <alibabacloud/kms/model/DescribeNetworkRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Kms;
using namespace AlibabaCloud::Kms::Model;

DescribeNetworkRuleResult::DescribeNetworkRuleResult() :
	ServiceResult()
{}

DescribeNetworkRuleResult::DescribeNetworkRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNetworkRuleResult::~DescribeNetworkRuleResult()
{}

void DescribeNetworkRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Arn"].isNull())
		arn_ = value["Arn"].asString();
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["SourcePrivateIp"].isNull())
		sourcePrivateIp_ = value["SourcePrivateIp"].asString();

}

std::string DescribeNetworkRuleResult::getType()const
{
	return type_;
}

std::string DescribeNetworkRuleResult::getDescription()const
{
	return description_;
}

std::string DescribeNetworkRuleResult::getSourcePrivateIp()const
{
	return sourcePrivateIp_;
}

std::string DescribeNetworkRuleResult::getArn()const
{
	return arn_;
}

