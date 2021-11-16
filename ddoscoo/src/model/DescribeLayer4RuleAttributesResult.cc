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

#include <alibabacloud/ddoscoo/model/DescribeLayer4RuleAttributesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeLayer4RuleAttributesResult::DescribeLayer4RuleAttributesResult() :
	ServiceResult()
{}

DescribeLayer4RuleAttributesResult::DescribeLayer4RuleAttributesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLayer4RuleAttributesResult::~DescribeLayer4RuleAttributesResult()
{}

void DescribeLayer4RuleAttributesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allListenersNode = value["Listeners"]["Listener"];
	for (auto valueListenersListener : allListenersNode)
	{
		Listener listenersObject;
		if(!valueListenersListener["InstanceId"].isNull())
			listenersObject.instanceId = valueListenersListener["InstanceId"].asString();
		if(!valueListenersListener["Protocol"].isNull())
			listenersObject.protocol = valueListenersListener["Protocol"].asString();
		if(!valueListenersListener["FrontendPort"].isNull())
			listenersObject.frontendPort = std::stoi(valueListenersListener["FrontendPort"].asString());
		auto configNode = value["Config"];
		if(!configNode["PersistenceTimeout"].isNull())
			listenersObject.config.persistenceTimeout = std::stoi(configNode["PersistenceTimeout"].asString());
		if(!configNode["Synproxy"].isNull())
			listenersObject.config.synproxy = configNode["Synproxy"].asString();
		if(!configNode["NodataConn"].isNull())
			listenersObject.config.nodataConn = configNode["NodataConn"].asString();
		auto slaNode = configNode["Sla"];
		if(!slaNode["Cps"].isNull())
			listenersObject.config.sla.cps = std::stoi(slaNode["Cps"].asString());
		if(!slaNode["Maxconn"].isNull())
			listenersObject.config.sla.maxconn = std::stoi(slaNode["Maxconn"].asString());
		if(!slaNode["CpsEnable"].isNull())
			listenersObject.config.sla.cpsEnable = std::stoi(slaNode["CpsEnable"].asString());
		if(!slaNode["MaxconnEnable"].isNull())
			listenersObject.config.sla.maxconnEnable = std::stoi(slaNode["MaxconnEnable"].asString());
		auto slimitNode = configNode["Slimit"];
		if(!slimitNode["Cps"].isNull())
			listenersObject.config.slimit.cps = std::stoi(slimitNode["Cps"].asString());
		if(!slimitNode["Maxconn"].isNull())
			listenersObject.config.slimit.maxconn = std::stoi(slimitNode["Maxconn"].asString());
		if(!slimitNode["CpsEnable"].isNull())
			listenersObject.config.slimit.cpsEnable = std::stoi(slimitNode["CpsEnable"].asString());
		if(!slimitNode["CpsMode"].isNull())
			listenersObject.config.slimit.cpsMode = std::stoi(slimitNode["CpsMode"].asString());
		if(!slimitNode["MaxconnEnable"].isNull())
			listenersObject.config.slimit.maxconnEnable = std::stoi(slimitNode["MaxconnEnable"].asString());
		if(!slimitNode["Bps"].isNull())
			listenersObject.config.slimit.bps = std::stol(slimitNode["Bps"].asString());
		if(!slimitNode["Pps"].isNull())
			listenersObject.config.slimit.pps = std::stol(slimitNode["Pps"].asString());
		auto payloadLenNode = configNode["PayloadLen"];
		if(!payloadLenNode["Min"].isNull())
			listenersObject.config.payloadLen.min = std::stoi(payloadLenNode["Min"].asString());
		if(!payloadLenNode["Max"].isNull())
			listenersObject.config.payloadLen.max = std::stoi(payloadLenNode["Max"].asString());
		auto ccNode = configNode["Cc"];
		auto allSblackNode = ccNode["Sblack"]["SblackItem"];
		for (auto ccNodeSblackSblackItem : allSblackNode)
		{
			Listener::Config::Cc::SblackItem sblackItemObject;
			if(!ccNodeSblackSblackItem["During"].isNull())
				sblackItemObject.during = std::stoi(ccNodeSblackSblackItem["During"].asString());
			if(!ccNodeSblackSblackItem["Expires"].isNull())
				sblackItemObject.expires = std::stoi(ccNodeSblackSblackItem["Expires"].asString());
			if(!ccNodeSblackSblackItem["Cnt"].isNull())
				sblackItemObject.cnt = std::stoi(ccNodeSblackSblackItem["Cnt"].asString());
			if(!ccNodeSblackSblackItem["Type"].isNull())
				sblackItemObject.type = std::stoi(ccNodeSblackSblackItem["Type"].asString());
			listenersObject.config.cc.sblack.push_back(sblackItemObject);
		}
		listeners_.push_back(listenersObject);
	}

}

std::vector<DescribeLayer4RuleAttributesResult::Listener> DescribeLayer4RuleAttributesResult::getListeners()const
{
	return listeners_;
}

