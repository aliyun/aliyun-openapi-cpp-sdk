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

#include <alibabacloud/ga/model/DescribeCustomRoutingEndpointResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

DescribeCustomRoutingEndpointResult::DescribeCustomRoutingEndpointResult() :
	ServiceResult()
{}

DescribeCustomRoutingEndpointResult::DescribeCustomRoutingEndpointResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCustomRoutingEndpointResult::~DescribeCustomRoutingEndpointResult()
{}

void DescribeCustomRoutingEndpointResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["AcceleratorId"].isNull())
		acceleratorId_ = value["AcceleratorId"].asString();
	if(!value["ListenerId"].isNull())
		listenerId_ = value["ListenerId"].asString();
	if(!value["EndpointGroupId"].isNull())
		endpointGroupId_ = value["EndpointGroupId"].asString();
	if(!value["EndpointId"].isNull())
		endpointId_ = value["EndpointId"].asString();
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["Endpoint"].isNull())
		endpoint_ = value["Endpoint"].asString();
	if(!value["TrafficToEndpointPolicy"].isNull())
		trafficToEndpointPolicy_ = value["TrafficToEndpointPolicy"].asString();
	if(!value["State"].isNull())
		state_ = value["State"].asString();

}

std::string DescribeCustomRoutingEndpointResult::getType()const
{
	return type_;
}

std::string DescribeCustomRoutingEndpointResult::getEndpointGroupId()const
{
	return endpointGroupId_;
}

std::string DescribeCustomRoutingEndpointResult::getEndpoint()const
{
	return endpoint_;
}

std::string DescribeCustomRoutingEndpointResult::getState()const
{
	return state_;
}

std::string DescribeCustomRoutingEndpointResult::getEndpointId()const
{
	return endpointId_;
}

std::string DescribeCustomRoutingEndpointResult::getTrafficToEndpointPolicy()const
{
	return trafficToEndpointPolicy_;
}

std::string DescribeCustomRoutingEndpointResult::getAcceleratorId()const
{
	return acceleratorId_;
}

std::string DescribeCustomRoutingEndpointResult::getListenerId()const
{
	return listenerId_;
}

