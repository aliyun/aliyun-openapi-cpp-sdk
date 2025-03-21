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

#include <alibabacloud/eiam/model/GetNetworkAccessEndpointResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

GetNetworkAccessEndpointResult::GetNetworkAccessEndpointResult() :
	ServiceResult()
{}

GetNetworkAccessEndpointResult::GetNetworkAccessEndpointResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetNetworkAccessEndpointResult::~GetNetworkAccessEndpointResult()
{}

void GetNetworkAccessEndpointResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto networkAccessEndpointNode = value["NetworkAccessEndpoint"];
	if(!networkAccessEndpointNode["InstanceId"].isNull())
		networkAccessEndpoint_.instanceId = networkAccessEndpointNode["InstanceId"].asString();
	if(!networkAccessEndpointNode["NetworkAccessEndpointId"].isNull())
		networkAccessEndpoint_.networkAccessEndpointId = networkAccessEndpointNode["NetworkAccessEndpointId"].asString();
	if(!networkAccessEndpointNode["NetworkAccessEndpointName"].isNull())
		networkAccessEndpoint_.networkAccessEndpointName = networkAccessEndpointNode["NetworkAccessEndpointName"].asString();
	if(!networkAccessEndpointNode["VpcId"].isNull())
		networkAccessEndpoint_.vpcId = networkAccessEndpointNode["VpcId"].asString();
	if(!networkAccessEndpointNode["VpcRegionId"].isNull())
		networkAccessEndpoint_.vpcRegionId = networkAccessEndpointNode["VpcRegionId"].asString();
	if(!networkAccessEndpointNode["SecurityGroupId"].isNull())
		networkAccessEndpoint_.securityGroupId = networkAccessEndpointNode["SecurityGroupId"].asString();
	if(!networkAccessEndpointNode["Status"].isNull())
		networkAccessEndpoint_.status = networkAccessEndpointNode["Status"].asString();
	if(!networkAccessEndpointNode["NetworkAccessEndpointType"].isNull())
		networkAccessEndpoint_.networkAccessEndpointType = networkAccessEndpointNode["NetworkAccessEndpointType"].asString();
	if(!networkAccessEndpointNode["CreateTime"].isNull())
		networkAccessEndpoint_.createTime = std::stol(networkAccessEndpointNode["CreateTime"].asString());
	if(!networkAccessEndpointNode["UpdateTime"].isNull())
		networkAccessEndpoint_.updateTime = std::stol(networkAccessEndpointNode["UpdateTime"].asString());
		auto allVSwitchIds = networkAccessEndpointNode["VSwitchIds"]["VSwitchId"];
		for (auto value : allVSwitchIds)
			networkAccessEndpoint_.vSwitchIds.push_back(value.asString());
		auto allEgressPublicIpAddresses = networkAccessEndpointNode["EgressPublicIpAddresses"]["EgressPublicIpAddress"];
		for (auto value : allEgressPublicIpAddresses)
			networkAccessEndpoint_.egressPublicIpAddresses.push_back(value.asString());
		auto allEgressPrivateIpAddresses = networkAccessEndpointNode["EgressPrivateIpAddresses"]["EgressPrivateIpAddress"];
		for (auto value : allEgressPrivateIpAddresses)
			networkAccessEndpoint_.egressPrivateIpAddresses.push_back(value.asString());

}

GetNetworkAccessEndpointResult::NetworkAccessEndpoint GetNetworkAccessEndpointResult::getNetworkAccessEndpoint()const
{
	return networkAccessEndpoint_;
}

