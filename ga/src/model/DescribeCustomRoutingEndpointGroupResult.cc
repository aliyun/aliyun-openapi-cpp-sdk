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

#include <alibabacloud/ga/model/DescribeCustomRoutingEndpointGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

DescribeCustomRoutingEndpointGroupResult::DescribeCustomRoutingEndpointGroupResult() :
	ServiceResult()
{}

DescribeCustomRoutingEndpointGroupResult::DescribeCustomRoutingEndpointGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCustomRoutingEndpointGroupResult::~DescribeCustomRoutingEndpointGroupResult()
{}

void DescribeCustomRoutingEndpointGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEndpointGroupIpList = value["EndpointGroupIpList"]["EndpointGroupIpList"];
	for (const auto &item : allEndpointGroupIpList)
		endpointGroupIpList_.push_back(item.asString());
	auto allEndpointGroupUnconfirmedIpList = value["EndpointGroupUnconfirmedIpList"]["endpointGroupUnconfirmedIpList"];
	for (const auto &item : allEndpointGroupUnconfirmedIpList)
		endpointGroupUnconfirmedIpList_.push_back(item.asString());
	if(!value["AcceleratorId"].isNull())
		acceleratorId_ = value["AcceleratorId"].asString();
	if(!value["ListenerId"].isNull())
		listenerId_ = value["ListenerId"].asString();
	if(!value["EndpointGroupId"].isNull())
		endpointGroupId_ = value["EndpointGroupId"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["EndpointGroupRegion"].isNull())
		endpointGroupRegion_ = value["EndpointGroupRegion"].asString();
	if(!value["State"].isNull())
		state_ = value["State"].asString();
	if(!value["SlsRegion"].isNull())
		slsRegion_ = value["SlsRegion"].asString();
	if(!value["SlsProjectName"].isNull())
		slsProjectName_ = value["SlsProjectName"].asString();
	if(!value["SlsLogStoreName"].isNull())
		slsLogStoreName_ = value["SlsLogStoreName"].asString();
	if(!value["AccessLogSwitch"].isNull())
		accessLogSwitch_ = value["AccessLogSwitch"].asString();
	if(!value["EnableAccessLog"].isNull())
		enableAccessLog_ = value["EnableAccessLog"].asString() == "true";

}

std::string DescribeCustomRoutingEndpointGroupResult::getEndpointGroupId()const
{
	return endpointGroupId_;
}

std::string DescribeCustomRoutingEndpointGroupResult::getDescription()const
{
	return description_;
}

std::string DescribeCustomRoutingEndpointGroupResult::getSlsRegion()const
{
	return slsRegion_;
}

std::string DescribeCustomRoutingEndpointGroupResult::getSlsLogStoreName()const
{
	return slsLogStoreName_;
}

std::string DescribeCustomRoutingEndpointGroupResult::getName()const
{
	return name_;
}

std::vector<std::string> DescribeCustomRoutingEndpointGroupResult::getEndpointGroupIpList()const
{
	return endpointGroupIpList_;
}

bool DescribeCustomRoutingEndpointGroupResult::getEnableAccessLog()const
{
	return enableAccessLog_;
}

std::string DescribeCustomRoutingEndpointGroupResult::getEndpointGroupRegion()const
{
	return endpointGroupRegion_;
}

std::vector<std::string> DescribeCustomRoutingEndpointGroupResult::getEndpointGroupUnconfirmedIpList()const
{
	return endpointGroupUnconfirmedIpList_;
}

std::string DescribeCustomRoutingEndpointGroupResult::getSlsProjectName()const
{
	return slsProjectName_;
}

std::string DescribeCustomRoutingEndpointGroupResult::getState()const
{
	return state_;
}

std::string DescribeCustomRoutingEndpointGroupResult::getAccessLogSwitch()const
{
	return accessLogSwitch_;
}

std::string DescribeCustomRoutingEndpointGroupResult::getAcceleratorId()const
{
	return acceleratorId_;
}

std::string DescribeCustomRoutingEndpointGroupResult::getListenerId()const
{
	return listenerId_;
}

