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

#include <alibabacloud/ga/model/DescribeCustomRoutingEndpointGroupDestinationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

DescribeCustomRoutingEndpointGroupDestinationsResult::DescribeCustomRoutingEndpointGroupDestinationsResult() :
	ServiceResult()
{}

DescribeCustomRoutingEndpointGroupDestinationsResult::DescribeCustomRoutingEndpointGroupDestinationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCustomRoutingEndpointGroupDestinationsResult::~DescribeCustomRoutingEndpointGroupDestinationsResult()
{}

void DescribeCustomRoutingEndpointGroupDestinationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allProtocols = value["Protocols"]["protocols"];
	for (const auto &item : allProtocols)
		protocols_.push_back(item.asString());
	if(!value["AcceleratorId"].isNull())
		acceleratorId_ = value["AcceleratorId"].asString();
	if(!value["ListenerId"].isNull())
		listenerId_ = value["ListenerId"].asString();
	if(!value["EndpointGroupId"].isNull())
		endpointGroupId_ = value["EndpointGroupId"].asString();
	if(!value["DestinationId"].isNull())
		destinationId_ = value["DestinationId"].asString();
	if(!value["FromPort"].isNull())
		fromPort_ = std::stoi(value["FromPort"].asString());
	if(!value["ToPort"].isNull())
		toPort_ = std::stoi(value["ToPort"].asString());
	if(!value["State"].isNull())
		state_ = value["State"].asString();

}

std::vector<std::string> DescribeCustomRoutingEndpointGroupDestinationsResult::getProtocols()const
{
	return protocols_;
}

std::string DescribeCustomRoutingEndpointGroupDestinationsResult::getEndpointGroupId()const
{
	return endpointGroupId_;
}

int DescribeCustomRoutingEndpointGroupDestinationsResult::getFromPort()const
{
	return fromPort_;
}

int DescribeCustomRoutingEndpointGroupDestinationsResult::getToPort()const
{
	return toPort_;
}

std::string DescribeCustomRoutingEndpointGroupDestinationsResult::getState()const
{
	return state_;
}

std::string DescribeCustomRoutingEndpointGroupDestinationsResult::getAcceleratorId()const
{
	return acceleratorId_;
}

std::string DescribeCustomRoutingEndpointGroupDestinationsResult::getDestinationId()const
{
	return destinationId_;
}

std::string DescribeCustomRoutingEndpointGroupDestinationsResult::getListenerId()const
{
	return listenerId_;
}

