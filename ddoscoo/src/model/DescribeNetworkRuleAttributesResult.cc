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

#include <alibabacloud/ddoscoo/model/DescribeNetworkRuleAttributesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeNetworkRuleAttributesResult::DescribeNetworkRuleAttributesResult() :
	ServiceResult()
{}

DescribeNetworkRuleAttributesResult::DescribeNetworkRuleAttributesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNetworkRuleAttributesResult::~DescribeNetworkRuleAttributesResult()
{}

void DescribeNetworkRuleAttributesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNetworkRuleAttributesNode = value["NetworkRuleAttributes"]["NetworkRuleAttribute"];
	for (auto valueNetworkRuleAttributesNetworkRuleAttribute : allNetworkRuleAttributesNode)
	{
		NetworkRuleAttribute networkRuleAttributesObject;
		if(!valueNetworkRuleAttributesNetworkRuleAttribute["FrontendPort"].isNull())
			networkRuleAttributesObject.frontendPort = std::stoi(valueNetworkRuleAttributesNetworkRuleAttribute["FrontendPort"].asString());
		if(!valueNetworkRuleAttributesNetworkRuleAttribute["InstanceId"].isNull())
			networkRuleAttributesObject.instanceId = valueNetworkRuleAttributesNetworkRuleAttribute["InstanceId"].asString();
		if(!valueNetworkRuleAttributesNetworkRuleAttribute["Protocol"].isNull())
			networkRuleAttributesObject.protocol = valueNetworkRuleAttributesNetworkRuleAttribute["Protocol"].asString();
		auto configNode = value["Config"];
		if(!configNode["NodataConn"].isNull())
			networkRuleAttributesObject.config.nodataConn = configNode["NodataConn"].asString();
		if(!configNode["Synproxy"].isNull())
			networkRuleAttributesObject.config.synproxy = configNode["Synproxy"].asString();
		if(!configNode["PersistenceTimeout"].isNull())
			networkRuleAttributesObject.config.persistenceTimeout = std::stoi(configNode["PersistenceTimeout"].asString());
		auto slaNode = configNode["Sla"];
		if(!slaNode["MaxconnEnable"].isNull())
			networkRuleAttributesObject.config.sla.maxconnEnable = std::stoi(slaNode["MaxconnEnable"].asString());
		if(!slaNode["CpsEnable"].isNull())
			networkRuleAttributesObject.config.sla.cpsEnable = std::stoi(slaNode["CpsEnable"].asString());
		if(!slaNode["Cps"].isNull())
			networkRuleAttributesObject.config.sla.cps = std::stoi(slaNode["Cps"].asString());
		if(!slaNode["Maxconn"].isNull())
			networkRuleAttributesObject.config.sla.maxconn = std::stoi(slaNode["Maxconn"].asString());
		auto slimitNode = configNode["Slimit"];
		if(!slimitNode["MaxconnEnable"].isNull())
			networkRuleAttributesObject.config.slimit.maxconnEnable = std::stoi(slimitNode["MaxconnEnable"].asString());
		if(!slimitNode["CpsEnable"].isNull())
			networkRuleAttributesObject.config.slimit.cpsEnable = std::stoi(slimitNode["CpsEnable"].asString());
		if(!slimitNode["Cps"].isNull())
			networkRuleAttributesObject.config.slimit.cps = std::stoi(slimitNode["Cps"].asString());
		if(!slimitNode["Pps"].isNull())
			networkRuleAttributesObject.config.slimit.pps = std::stol(slimitNode["Pps"].asString());
		if(!slimitNode["Bps"].isNull())
			networkRuleAttributesObject.config.slimit.bps = std::stol(slimitNode["Bps"].asString());
		if(!slimitNode["Maxconn"].isNull())
			networkRuleAttributesObject.config.slimit.maxconn = std::stoi(slimitNode["Maxconn"].asString());
		if(!slimitNode["CpsMode"].isNull())
			networkRuleAttributesObject.config.slimit.cpsMode = std::stoi(slimitNode["CpsMode"].asString());
		auto payloadLenNode = configNode["PayloadLen"];
		if(!payloadLenNode["Min"].isNull())
			networkRuleAttributesObject.config.payloadLen.min = std::stoi(payloadLenNode["Min"].asString());
		if(!payloadLenNode["Max"].isNull())
			networkRuleAttributesObject.config.payloadLen.max = std::stoi(payloadLenNode["Max"].asString());
		auto ccNode = configNode["Cc"];
		auto allSblackNode = ccNode["Sblack"]["SblackItem"];
		for (auto ccNodeSblackSblackItem : allSblackNode)
		{
			NetworkRuleAttribute::Config::Cc::SblackItem sblackItemObject;
			if(!ccNodeSblackSblackItem["Type"].isNull())
				sblackItemObject.type = std::stoi(ccNodeSblackSblackItem["Type"].asString());
			if(!ccNodeSblackSblackItem["During"].isNull())
				sblackItemObject.during = std::stoi(ccNodeSblackSblackItem["During"].asString());
			if(!ccNodeSblackSblackItem["Expires"].isNull())
				sblackItemObject.expires = std::stoi(ccNodeSblackSblackItem["Expires"].asString());
			if(!ccNodeSblackSblackItem["Cnt"].isNull())
				sblackItemObject.cnt = std::stoi(ccNodeSblackSblackItem["Cnt"].asString());
			networkRuleAttributesObject.config.cc.sblack.push_back(sblackItemObject);
		}
		networkRuleAttributes_.push_back(networkRuleAttributesObject);
	}

}

std::vector<DescribeNetworkRuleAttributesResult::NetworkRuleAttribute> DescribeNetworkRuleAttributesResult::getNetworkRuleAttributes()const
{
	return networkRuleAttributes_;
}

