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

#include <alibabacloud/vpc/model/DescribeExpressConnectTrafficQosQueueResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeExpressConnectTrafficQosQueueResult::DescribeExpressConnectTrafficQosQueueResult() :
	ServiceResult()
{}

DescribeExpressConnectTrafficQosQueueResult::DescribeExpressConnectTrafficQosQueueResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeExpressConnectTrafficQosQueueResult::~DescribeExpressConnectTrafficQosQueueResult()
{}

void DescribeExpressConnectTrafficQosQueueResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allQueueListNode = value["QueueList"]["queueListItem"];
	for (auto valueQueueListqueueListItem : allQueueListNode)
	{
		QueueListItem queueListObject;
		if(!valueQueueListqueueListItem["QosId"].isNull())
			queueListObject.qosId = valueQueueListqueueListItem["QosId"].asString();
		if(!valueQueueListqueueListItem["QueueId"].isNull())
			queueListObject.queueId = valueQueueListqueueListItem["QueueId"].asString();
		if(!valueQueueListqueueListItem["QueueType"].isNull())
			queueListObject.queueType = valueQueueListqueueListItem["QueueType"].asString();
		if(!valueQueueListqueueListItem["BandwidthPercent"].isNull())
			queueListObject.bandwidthPercent = valueQueueListqueueListItem["BandwidthPercent"].asString();
		if(!valueQueueListqueueListItem["QueueName"].isNull())
			queueListObject.queueName = valueQueueListqueueListItem["QueueName"].asString();
		if(!valueQueueListqueueListItem["QueueDescription"].isNull())
			queueListObject.queueDescription = valueQueueListqueueListItem["QueueDescription"].asString();
		if(!valueQueueListqueueListItem["Status"].isNull())
			queueListObject.status = valueQueueListqueueListItem["Status"].asString();
		auto allRuleListNode = valueQueueListqueueListItem["RuleList"]["ruleListItem"];
		for (auto valueQueueListqueueListItemRuleListruleListItem : allRuleListNode)
		{
			QueueListItem::RuleListItem ruleListObject;
			if(!valueQueueListqueueListItemRuleListruleListItem["QosId"].isNull())
				ruleListObject.qosId = valueQueueListqueueListItemRuleListruleListItem["QosId"].asString();
			if(!valueQueueListqueueListItemRuleListruleListItem["QueueId"].isNull())
				ruleListObject.queueId = valueQueueListqueueListItemRuleListruleListItem["QueueId"].asString();
			if(!valueQueueListqueueListItemRuleListruleListItem["Priority"].isNull())
				ruleListObject.priority = std::stoi(valueQueueListqueueListItemRuleListruleListItem["Priority"].asString());
			if(!valueQueueListqueueListItemRuleListruleListItem["Protocol"].isNull())
				ruleListObject.protocol = valueQueueListqueueListItemRuleListruleListItem["Protocol"].asString();
			if(!valueQueueListqueueListItemRuleListruleListItem["SrcCidr"].isNull())
				ruleListObject.srcCidr = valueQueueListqueueListItemRuleListruleListItem["SrcCidr"].asString();
			if(!valueQueueListqueueListItemRuleListruleListItem["DstCidr"].isNull())
				ruleListObject.dstCidr = valueQueueListqueueListItemRuleListruleListItem["DstCidr"].asString();
			if(!valueQueueListqueueListItemRuleListruleListItem["SrcIPv6Cidr"].isNull())
				ruleListObject.srcIPv6Cidr = valueQueueListqueueListItemRuleListruleListItem["SrcIPv6Cidr"].asString();
			if(!valueQueueListqueueListItemRuleListruleListItem["DstIPv6Cidr"].isNull())
				ruleListObject.dstIPv6Cidr = valueQueueListqueueListItemRuleListruleListItem["DstIPv6Cidr"].asString();
			if(!valueQueueListqueueListItemRuleListruleListItem["SrcPortRange"].isNull())
				ruleListObject.srcPortRange = valueQueueListqueueListItemRuleListruleListItem["SrcPortRange"].asString();
			if(!valueQueueListqueueListItemRuleListruleListItem["DstPortRange"].isNull())
				ruleListObject.dstPortRange = valueQueueListqueueListItemRuleListruleListItem["DstPortRange"].asString();
			if(!valueQueueListqueueListItemRuleListruleListItem["MatchDscp"].isNull())
				ruleListObject.matchDscp = std::stoi(valueQueueListqueueListItemRuleListruleListItem["MatchDscp"].asString());
			if(!valueQueueListqueueListItemRuleListruleListItem["RemarkingDscp"].isNull())
				ruleListObject.remarkingDscp = std::stoi(valueQueueListqueueListItemRuleListruleListItem["RemarkingDscp"].asString());
			if(!valueQueueListqueueListItemRuleListruleListItem["RuleName"].isNull())
				ruleListObject.ruleName = valueQueueListqueueListItemRuleListruleListItem["RuleName"].asString();
			if(!valueQueueListqueueListItemRuleListruleListItem["RuleDescription"].isNull())
				ruleListObject.ruleDescription = valueQueueListqueueListItemRuleListruleListItem["RuleDescription"].asString();
			if(!valueQueueListqueueListItemRuleListruleListItem["RuleId"].isNull())
				ruleListObject.ruleId = valueQueueListqueueListItemRuleListruleListItem["RuleId"].asString();
			if(!valueQueueListqueueListItemRuleListruleListItem["Status"].isNull())
				ruleListObject.status = valueQueueListqueueListItemRuleListruleListItem["Status"].asString();
			queueListObject.ruleList.push_back(ruleListObject);
		}
		queueList_.push_back(queueListObject);
	}

}

std::vector<DescribeExpressConnectTrafficQosQueueResult::QueueListItem> DescribeExpressConnectTrafficQosQueueResult::getQueueList()const
{
	return queueList_;
}

