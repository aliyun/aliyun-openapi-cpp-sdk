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

#include <alibabacloud/vpc/model/DescribeExpressConnectTrafficQosRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeExpressConnectTrafficQosRuleResult::DescribeExpressConnectTrafficQosRuleResult() :
	ServiceResult()
{}

DescribeExpressConnectTrafficQosRuleResult::DescribeExpressConnectTrafficQosRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeExpressConnectTrafficQosRuleResult::~DescribeExpressConnectTrafficQosRuleResult()
{}

void DescribeExpressConnectTrafficQosRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRuleListNode = value["RuleList"]["ruleListItem"];
	for (auto valueRuleListruleListItem : allRuleListNode)
	{
		RuleListItem ruleListObject;
		if(!valueRuleListruleListItem["QosId"].isNull())
			ruleListObject.qosId = valueRuleListruleListItem["QosId"].asString();
		if(!valueRuleListruleListItem["QueueId"].isNull())
			ruleListObject.queueId = valueRuleListruleListItem["QueueId"].asString();
		if(!valueRuleListruleListItem["Priority"].isNull())
			ruleListObject.priority = std::stoi(valueRuleListruleListItem["Priority"].asString());
		if(!valueRuleListruleListItem["Protocol"].isNull())
			ruleListObject.protocol = valueRuleListruleListItem["Protocol"].asString();
		if(!valueRuleListruleListItem["SrcCidr"].isNull())
			ruleListObject.srcCidr = valueRuleListruleListItem["SrcCidr"].asString();
		if(!valueRuleListruleListItem["DstCidr"].isNull())
			ruleListObject.dstCidr = valueRuleListruleListItem["DstCidr"].asString();
		if(!valueRuleListruleListItem["SrcIPv6Cidr"].isNull())
			ruleListObject.srcIPv6Cidr = valueRuleListruleListItem["SrcIPv6Cidr"].asString();
		if(!valueRuleListruleListItem["DstIPv6Cidr"].isNull())
			ruleListObject.dstIPv6Cidr = valueRuleListruleListItem["DstIPv6Cidr"].asString();
		if(!valueRuleListruleListItem["SrcPortRange"].isNull())
			ruleListObject.srcPortRange = valueRuleListruleListItem["SrcPortRange"].asString();
		if(!valueRuleListruleListItem["DstPortRange"].isNull())
			ruleListObject.dstPortRange = valueRuleListruleListItem["DstPortRange"].asString();
		if(!valueRuleListruleListItem["MatchDscp"].isNull())
			ruleListObject.matchDscp = std::stoi(valueRuleListruleListItem["MatchDscp"].asString());
		if(!valueRuleListruleListItem["RemarkingDscp"].isNull())
			ruleListObject.remarkingDscp = std::stoi(valueRuleListruleListItem["RemarkingDscp"].asString());
		if(!valueRuleListruleListItem["RuleName"].isNull())
			ruleListObject.ruleName = valueRuleListruleListItem["RuleName"].asString();
		if(!valueRuleListruleListItem["RuleDescription"].isNull())
			ruleListObject.ruleDescription = valueRuleListruleListItem["RuleDescription"].asString();
		if(!valueRuleListruleListItem["RuleId"].isNull())
			ruleListObject.ruleId = valueRuleListruleListItem["RuleId"].asString();
		if(!valueRuleListruleListItem["Status"].isNull())
			ruleListObject.status = valueRuleListruleListItem["Status"].asString();
		ruleList_.push_back(ruleListObject);
	}

}

std::vector<DescribeExpressConnectTrafficQosRuleResult::RuleListItem> DescribeExpressConnectTrafficQosRuleResult::getRuleList()const
{
	return ruleList_;
}

