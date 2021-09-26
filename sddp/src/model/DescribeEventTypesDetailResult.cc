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

#include <alibabacloud/sddp/model/DescribeEventTypesDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

DescribeEventTypesDetailResult::DescribeEventTypesDetailResult() :
	ServiceResult()
{}

DescribeEventTypesDetailResult::DescribeEventTypesDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEventTypesDetailResult::~DescribeEventTypesDetailResult()
{}

void DescribeEventTypesDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto userStatusNode = value["UserStatus"];
	if(!userStatusNode["Name"].isNull())
		userStatus_.name = userStatusNode["Name"].asString();
	if(!userStatusNode["Code"].isNull())
		userStatus_.code = userStatusNode["Code"].asString();
	if(!userStatusNode["Description"].isNull())
		userStatus_.description = userStatusNode["Description"].asString();
	if(!userStatusNode["ParentTypeId"].isNull())
		userStatus_.parentTypeId = std::stol(userStatusNode["ParentTypeId"].asString());
	if(!userStatusNode["ParentTypeName"].isNull())
		userStatus_.parentTypeName = userStatusNode["ParentTypeName"].asString();
	if(!userStatusNode["RiskLevel"].isNull())
		userStatus_.riskLevel = std::stoi(userStatusNode["RiskLevel"].asString());
	if(!userStatusNode["RiskName"].isNull())
		userStatus_.riskName = userStatusNode["RiskName"].asString();
	if(!userStatusNode["Status"].isNull())
		userStatus_.status = std::stoi(userStatusNode["Status"].asString());
	if(!userStatusNode["EventHitCount"].isNull())
		userStatus_.eventHitCount = std::stoi(userStatusNode["EventHitCount"].asString());
	if(!userStatusNode["AccessCount"].isNull())
		userStatus_.accessCount = std::stoi(userStatusNode["AccessCount"].asString());
	if(!userStatusNode["DescEvent"].isNull())
		userStatus_.descEvent = userStatusNode["DescEvent"].asString();
	if(!userStatusNode["DescModel"].isNull())
		userStatus_.descModel = userStatusNode["DescModel"].asString();
	if(!userStatusNode["DealSuggestion"].isNull())
		userStatus_.dealSuggestion = userStatusNode["DealSuggestion"].asString();
	if(!userStatusNode["RiskEvent"].isNull())
		userStatus_.riskEvent = userStatusNode["RiskEvent"].asString();
	if(!userStatusNode["AdaptedProduct"].isNull())
		userStatus_.adaptedProduct = userStatusNode["AdaptedProduct"].asString();
	if(!userStatusNode["ConfigCode"].isNull())
		userStatus_.configCode = userStatusNode["ConfigCode"].asString();
	if(!userStatusNode["ConfigContentType"].isNull())
		userStatus_.configContentType = std::stoi(userStatusNode["ConfigContentType"].asString());
	if(!userStatusNode["ConfigDescription"].isNull())
		userStatus_.configDescription = userStatusNode["ConfigDescription"].asString();
	if(!userStatusNode["ConfigValue"].isNull())
		userStatus_.configValue = userStatusNode["ConfigValue"].asString();

}

DescribeEventTypesDetailResult::UserStatus DescribeEventTypesDetailResult::getUserStatus()const
{
	return userStatus_;
}

