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

#include <alibabacloud/ga/model/GetBasicAccelerateIpEndpointRelationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

GetBasicAccelerateIpEndpointRelationResult::GetBasicAccelerateIpEndpointRelationResult() :
	ServiceResult()
{}

GetBasicAccelerateIpEndpointRelationResult::GetBasicAccelerateIpEndpointRelationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetBasicAccelerateIpEndpointRelationResult::~GetBasicAccelerateIpEndpointRelationResult()
{}

void GetBasicAccelerateIpEndpointRelationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["EndpointId"].isNull())
		endpointId_ = value["EndpointId"].asString();
	if(!value["EndpointName"].isNull())
		endpointName_ = value["EndpointName"].asString();
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
	if(!value["AccelerateIpId"].isNull())
		accelerateIpId_ = value["AccelerateIpId"].asString();
	if(!value["IpAddress"].isNull())
		ipAddress_ = value["IpAddress"].asString();
	if(!value["State"].isNull())
		state_ = value["State"].asString();
	if(!value["AcceleratorId"].isNull())
		acceleratorId_ = value["AcceleratorId"].asString();

}

std::string GetBasicAccelerateIpEndpointRelationResult::getEndpointName()const
{
	return endpointName_;
}

std::string GetBasicAccelerateIpEndpointRelationResult::getEndpointZoneId()const
{
	return endpointZoneId_;
}

std::string GetBasicAccelerateIpEndpointRelationResult::getAccelerateIpId()const
{
	return accelerateIpId_;
}

std::string GetBasicAccelerateIpEndpointRelationResult::getState()const
{
	return state_;
}

std::string GetBasicAccelerateIpEndpointRelationResult::getEndpointId()const
{
	return endpointId_;
}

std::string GetBasicAccelerateIpEndpointRelationResult::getEndpointType()const
{
	return endpointType_;
}

std::string GetBasicAccelerateIpEndpointRelationResult::getEndpointSubAddressType()const
{
	return endpointSubAddressType_;
}

std::string GetBasicAccelerateIpEndpointRelationResult::getEndpointSubAddress()const
{
	return endpointSubAddress_;
}

std::string GetBasicAccelerateIpEndpointRelationResult::getIpAddress()const
{
	return ipAddress_;
}

std::string GetBasicAccelerateIpEndpointRelationResult::getAcceleratorId()const
{
	return acceleratorId_;
}

std::string GetBasicAccelerateIpEndpointRelationResult::getEndpointAddress()const
{
	return endpointAddress_;
}

