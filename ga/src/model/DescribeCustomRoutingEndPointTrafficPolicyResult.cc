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

#include <alibabacloud/ga/model/DescribeCustomRoutingEndPointTrafficPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

DescribeCustomRoutingEndPointTrafficPolicyResult::DescribeCustomRoutingEndPointTrafficPolicyResult() :
	ServiceResult()
{}

DescribeCustomRoutingEndPointTrafficPolicyResult::DescribeCustomRoutingEndPointTrafficPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCustomRoutingEndPointTrafficPolicyResult::~DescribeCustomRoutingEndPointTrafficPolicyResult()
{}

void DescribeCustomRoutingEndPointTrafficPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPortRangesNode = value["PortRanges"]["portRangesItem"];
	for (auto valuePortRangesportRangesItem : allPortRangesNode)
	{
		PortRangesItem portRangesObject;
		if(!valuePortRangesportRangesItem["FromPort"].isNull())
			portRangesObject.fromPort = std::stoi(valuePortRangesportRangesItem["FromPort"].asString());
		if(!valuePortRangesportRangesItem["ToPort"].isNull())
			portRangesObject.toPort = std::stoi(valuePortRangesportRangesItem["ToPort"].asString());
		portRanges_.push_back(portRangesObject);
	}
	if(!value["AcceleratorId"].isNull())
		acceleratorId_ = value["AcceleratorId"].asString();
	if(!value["ListenerId"].isNull())
		listenerId_ = value["ListenerId"].asString();
	if(!value["EndpointGroupId"].isNull())
		endpointGroupId_ = value["EndpointGroupId"].asString();
	if(!value["EndpointId"].isNull())
		endpointId_ = value["EndpointId"].asString();
	if(!value["Endpoint"].isNull())
		endpoint_ = value["Endpoint"].asString();
	if(!value["PolicyId"].isNull())
		policyId_ = value["PolicyId"].asString();
	if(!value["Address"].isNull())
		address_ = value["Address"].asString();
	if(!value["State"].isNull())
		state_ = value["State"].asString();

}

std::string DescribeCustomRoutingEndPointTrafficPolicyResult::getEndpointGroupId()const
{
	return endpointGroupId_;
}

std::string DescribeCustomRoutingEndPointTrafficPolicyResult::getEndpoint()const
{
	return endpoint_;
}

std::string DescribeCustomRoutingEndPointTrafficPolicyResult::getAddress()const
{
	return address_;
}

std::string DescribeCustomRoutingEndPointTrafficPolicyResult::getState()const
{
	return state_;
}

std::vector<DescribeCustomRoutingEndPointTrafficPolicyResult::PortRangesItem> DescribeCustomRoutingEndPointTrafficPolicyResult::getPortRanges()const
{
	return portRanges_;
}

std::string DescribeCustomRoutingEndPointTrafficPolicyResult::getEndpointId()const
{
	return endpointId_;
}

std::string DescribeCustomRoutingEndPointTrafficPolicyResult::getAcceleratorId()const
{
	return acceleratorId_;
}

std::string DescribeCustomRoutingEndPointTrafficPolicyResult::getPolicyId()const
{
	return policyId_;
}

std::string DescribeCustomRoutingEndPointTrafficPolicyResult::getListenerId()const
{
	return listenerId_;
}

