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

#include <alibabacloud/ddoscoo/model/DescribePortResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribePortResult::DescribePortResult() :
	ServiceResult()
{}

DescribePortResult::DescribePortResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePortResult::~DescribePortResult()
{}

void DescribePortResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNetworkRulesNode = value["NetworkRules"]["NetworkRule"];
	for (auto valueNetworkRulesNetworkRule : allNetworkRulesNode)
	{
		NetworkRule networkRulesObject;
		if(!valueNetworkRulesNetworkRule["FrontendPort"].isNull())
			networkRulesObject.frontendPort = std::stoi(valueNetworkRulesNetworkRule["FrontendPort"].asString());
		if(!valueNetworkRulesNetworkRule["IsAutoCreate"].isNull())
			networkRulesObject.isAutoCreate = valueNetworkRulesNetworkRule["IsAutoCreate"].asString() == "true";
		if(!valueNetworkRulesNetworkRule["InstanceId"].isNull())
			networkRulesObject.instanceId = valueNetworkRulesNetworkRule["InstanceId"].asString();
		if(!valueNetworkRulesNetworkRule["FrontendProtocol"].isNull())
			networkRulesObject.frontendProtocol = valueNetworkRulesNetworkRule["FrontendProtocol"].asString();
		if(!valueNetworkRulesNetworkRule["BackendPort"].isNull())
			networkRulesObject.backendPort = std::stoi(valueNetworkRulesNetworkRule["BackendPort"].asString());
		auto allRealServers = value["RealServers"]["RealServers"];
		for (auto value : allRealServers)
			networkRulesObject.realServers.push_back(value.asString());
		networkRules_.push_back(networkRulesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

std::vector<DescribePortResult::NetworkRule> DescribePortResult::getNetworkRules()const
{
	return networkRules_;
}

long DescribePortResult::getTotalCount()const
{
	return totalCount_;
}

