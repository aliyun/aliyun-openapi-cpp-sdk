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

#include <alibabacloud/ga/model/GetBasicEndpointGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

GetBasicEndpointGroupResult::GetBasicEndpointGroupResult() :
	ServiceResult()
{}

GetBasicEndpointGroupResult::GetBasicEndpointGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetBasicEndpointGroupResult::~GetBasicEndpointGroupResult()
{}

void GetBasicEndpointGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["AcceleratorId"].isNull())
		acceleratorId_ = value["AcceleratorId"].asString();
	if(!value["EndpointGroupId"].isNull())
		endpointGroupId_ = value["EndpointGroupId"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["EndpointGroupRegion"].isNull())
		endpointGroupRegion_ = value["EndpointGroupRegion"].asString();
	if(!value["EndpointType"].isNull())
		endpointType_ = value["EndpointType"].asString();
	if(!value["EndpointAddress"].isNull())
		endpointAddress_ = value["EndpointAddress"].asString();
	if(!value["State"].isNull())
		state_ = value["State"].asString();
	if(!value["EndpointSubAddress"].isNull())
		endpointSubAddress_ = value["EndpointSubAddress"].asString();

}

std::string GetBasicEndpointGroupResult::getEndpointGroupRegion()const
{
	return endpointGroupRegion_;
}

std::string GetBasicEndpointGroupResult::getEndpointGroupId()const
{
	return endpointGroupId_;
}

std::string GetBasicEndpointGroupResult::getDescription()const
{
	return description_;
}

std::string GetBasicEndpointGroupResult::getState()const
{
	return state_;
}

std::string GetBasicEndpointGroupResult::getEndpointType()const
{
	return endpointType_;
}

std::string GetBasicEndpointGroupResult::getEndpointSubAddress()const
{
	return endpointSubAddress_;
}

std::string GetBasicEndpointGroupResult::getAcceleratorId()const
{
	return acceleratorId_;
}

std::string GetBasicEndpointGroupResult::getName()const
{
	return name_;
}

std::string GetBasicEndpointGroupResult::getEndpointAddress()const
{
	return endpointAddress_;
}

