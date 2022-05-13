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

#include <alibabacloud/mse/model/ListSecurityGroupRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ListSecurityGroupRuleResult::ListSecurityGroupRuleResult() :
	ServiceResult()
{}

ListSecurityGroupRuleResult::ListSecurityGroupRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSecurityGroupRuleResult::~ListSecurityGroupRuleResult()
{}

void ListSecurityGroupRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Rules"];
	for (auto valueDataRules : allDataNode)
	{
		Rules dataObject;
		if(!valueDataRules["Id"].isNull())
			dataObject.id = valueDataRules["Id"].asString();
		if(!valueDataRules["SecurityGroupId"].isNull())
			dataObject.securityGroupId = valueDataRules["SecurityGroupId"].asString();
		if(!valueDataRules["PortRange"].isNull())
			dataObject.portRange = valueDataRules["PortRange"].asString();
		if(!valueDataRules["IpProtocol"].isNull())
			dataObject.ipProtocol = valueDataRules["IpProtocol"].asString();
		if(!valueDataRules["GatewayId"].isNull())
			dataObject.gatewayId = std::stol(valueDataRules["GatewayId"].asString());
		if(!valueDataRules["GatewayUniqueId"].isNull())
			dataObject.gatewayUniqueId = valueDataRules["GatewayUniqueId"].asString();
		if(!valueDataRules["GmtCreate"].isNull())
			dataObject.gmtCreate = valueDataRules["GmtCreate"].asString();
		if(!valueDataRules["GmtModified"].isNull())
			dataObject.gmtModified = valueDataRules["GmtModified"].asString();
		if(!valueDataRules["Description"].isNull())
			dataObject.description = valueDataRules["Description"].asString();
		data_.push_back(dataObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListSecurityGroupRuleResult::getMessage()const
{
	return message_;
}

int ListSecurityGroupRuleResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListSecurityGroupRuleResult::Rules> ListSecurityGroupRuleResult::getData()const
{
	return data_;
}

int ListSecurityGroupRuleResult::getCode()const
{
	return code_;
}

bool ListSecurityGroupRuleResult::getSuccess()const
{
	return success_;
}

