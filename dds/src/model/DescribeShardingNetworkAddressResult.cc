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

#include <alibabacloud/dds/model/DescribeShardingNetworkAddressResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

DescribeShardingNetworkAddressResult::DescribeShardingNetworkAddressResult() :
	ServiceResult()
{}

DescribeShardingNetworkAddressResult::DescribeShardingNetworkAddressResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeShardingNetworkAddressResult::~DescribeShardingNetworkAddressResult()
{}

void DescribeShardingNetworkAddressResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allNetworkAddresses = value["NetworkAddresses"]["NetworkAddress"];
	for (auto value : allNetworkAddresses)
	{
		NetworkAddress networkAddressesObject;
		if(!value["NetworkAddress"].isNull())
			networkAddressesObject.networkAddress = value["NetworkAddress"].asString();
		if(!value["IPAddress"].isNull())
			networkAddressesObject.iPAddress = value["IPAddress"].asString();
		if(!value["NetworkType"].isNull())
			networkAddressesObject.networkType = value["NetworkType"].asString();
		if(!value["Port"].isNull())
			networkAddressesObject.port = value["Port"].asString();
		if(!value["VPCId"].isNull())
			networkAddressesObject.vPCId = value["VPCId"].asString();
		if(!value["VswitchId"].isNull())
			networkAddressesObject.vswitchId = value["VswitchId"].asString();
		if(!value["NodeId"].isNull())
			networkAddressesObject.nodeId = value["NodeId"].asString();
		if(!value["ExpiredTime"].isNull())
			networkAddressesObject.expiredTime = value["ExpiredTime"].asString();
		if(!value["NodeType"].isNull())
			networkAddressesObject.nodeType = value["NodeType"].asString();
		networkAddresses_.push_back(networkAddressesObject);
	}

}

std::vector<DescribeShardingNetworkAddressResult::NetworkAddress> DescribeShardingNetworkAddressResult::getNetworkAddresses()const
{
	return networkAddresses_;
}

