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

#include <alibabacloud/ga/model/GetBasicEndpointResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

GetBasicEndpointResult::GetBasicEndpointResult() :
	ServiceResult()
{}

GetBasicEndpointResult::GetBasicEndpointResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetBasicEndpointResult::~GetBasicEndpointResult()
{}

void GetBasicEndpointResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["AcceleratorId"].isNull())
		acceleratorId_ = value["AcceleratorId"].asString();
	if(!value["EndpointGroupId"].isNull())
		endpointGroupId_ = value["EndpointGroupId"].asString();
	if(!value["EndPointId"].isNull())
		endPointId_ = value["EndPointId"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["EndpointType"].isNull())
		endpointType_ = value["EndpointType"].asString();
	if(!value["EndpointAddress"].isNull())
		endpointAddress_ = value["EndpointAddress"].asString();
	if(!value["EndpointSubAddress"].isNull())
		endpointSubAddress_ = value["EndpointSubAddress"].asString();
	if(!value["EndpointSubAddressType"].isNull())
		endpointSubAddressType_ = value["EndpointSubAddressType"].asString();
	if(!value["EndpointZoneId"].isNull())
		endpointZoneId_ = value["EndpointZoneId"].asString();
	if(!value["State"].isNull())
		state_ = value["State"].asString();

}

std::string GetBasicEndpointResult::getEndPointId()const
{
	return endPointId_;
}

std::string GetBasicEndpointResult::getEndpointGroupId()const
{
	return endpointGroupId_;
}

std::string GetBasicEndpointResult::getEndpointZoneId()const
{
	return endpointZoneId_;
}

std::string GetBasicEndpointResult::getState()const
{
	return state_;
}

std::string GetBasicEndpointResult::getEndpointType()const
{
	return endpointType_;
}

std::string GetBasicEndpointResult::getEndpointSubAddressType()const
{
	return endpointSubAddressType_;
}

std::string GetBasicEndpointResult::getEndpointSubAddress()const
{
	return endpointSubAddress_;
}

std::string GetBasicEndpointResult::getAcceleratorId()const
{
	return acceleratorId_;
}

std::string GetBasicEndpointResult::getName()const
{
	return name_;
}

std::string GetBasicEndpointResult::getEndpointAddress()const
{
	return endpointAddress_;
}

