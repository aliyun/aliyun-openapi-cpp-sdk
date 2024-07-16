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

#include <alibabacloud/swas-open/model/DescribeFirewallTemplateRulesApplyResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SWAS_OPEN;
using namespace AlibabaCloud::SWAS_OPEN::Model;

DescribeFirewallTemplateRulesApplyResultResult::DescribeFirewallTemplateRulesApplyResultResult() :
	ServiceResult()
{}

DescribeFirewallTemplateRulesApplyResultResult::DescribeFirewallTemplateRulesApplyResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFirewallTemplateRulesApplyResultResult::~DescribeFirewallTemplateRulesApplyResultResult()
{}

void DescribeFirewallTemplateRulesApplyResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto alldataNode = value["data"]["InstanceApplyFirewallTemplateRulesResult"];
	for (auto valuedataInstanceApplyFirewallTemplateRulesResult : alldataNode)
	{
		InstanceApplyFirewallTemplateRulesResult dataObject;
		if(!valuedataInstanceApplyFirewallTemplateRulesResult["RuleProtocol"].isNull())
			dataObject.ruleProtocol = valuedataInstanceApplyFirewallTemplateRulesResult["RuleProtocol"].asString();
		if(!valuedataInstanceApplyFirewallTemplateRulesResult["Port"].isNull())
			dataObject.port = valuedataInstanceApplyFirewallTemplateRulesResult["Port"].asString();
		if(!valuedataInstanceApplyFirewallTemplateRulesResult["SourceCidrIp"].isNull())
			dataObject.sourceCidrIp = valuedataInstanceApplyFirewallTemplateRulesResult["SourceCidrIp"].asString();
		if(!valuedataInstanceApplyFirewallTemplateRulesResult["Remark"].isNull())
			dataObject.remark = valuedataInstanceApplyFirewallTemplateRulesResult["Remark"].asString();
		if(!valuedataInstanceApplyFirewallTemplateRulesResult["Success"].isNull())
			dataObject.success = valuedataInstanceApplyFirewallTemplateRulesResult["Success"].asString() == "true";
		if(!valuedataInstanceApplyFirewallTemplateRulesResult["ErrorCode"].isNull())
			dataObject.errorCode = valuedataInstanceApplyFirewallTemplateRulesResult["ErrorCode"].asString();
		if(!valuedataInstanceApplyFirewallTemplateRulesResult["ErrorInfo"].isNull())
			dataObject.errorInfo = valuedataInstanceApplyFirewallTemplateRulesResult["ErrorInfo"].asString();
		data_.push_back(dataObject);
	}

}

std::vector<DescribeFirewallTemplateRulesApplyResultResult::InstanceApplyFirewallTemplateRulesResult> DescribeFirewallTemplateRulesApplyResultResult::getdata()const
{
	return data_;
}

