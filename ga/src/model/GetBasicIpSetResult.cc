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

#include <alibabacloud/ga/model/GetBasicIpSetResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

GetBasicIpSetResult::GetBasicIpSetResult() :
	ServiceResult()
{}

GetBasicIpSetResult::GetBasicIpSetResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetBasicIpSetResult::~GetBasicIpSetResult()
{}

void GetBasicIpSetResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["AccelerateRegionId"].isNull())
		accelerateRegionId_ = value["AccelerateRegionId"].asString();
	if(!value["Bandwidth"].isNull())
		bandwidth_ = std::stol(value["Bandwidth"].asString());
	if(!value["IpSetId"].isNull())
		ipSetId_ = value["IpSetId"].asString();
	if(!value["IpAddress"].isNull())
		ipAddress_ = value["IpAddress"].asString();
	if(!value["AcceleratorId"].isNull())
		acceleratorId_ = value["AcceleratorId"].asString();
	if(!value["IpVersion"].isNull())
		ipVersion_ = value["IpVersion"].asString();
	if(!value["State"].isNull())
		state_ = value["State"].asString();
	if(!value["IspType"].isNull())
		ispType_ = value["IspType"].asString();

}

std::string GetBasicIpSetResult::getIpSetId()const
{
	return ipSetId_;
}

std::string GetBasicIpSetResult::getIpVersion()const
{
	return ipVersion_;
}

std::string GetBasicIpSetResult::getState()const
{
	return state_;
}

std::string GetBasicIpSetResult::getIspType()const
{
	return ispType_;
}

long GetBasicIpSetResult::getBandwidth()const
{
	return bandwidth_;
}

std::string GetBasicIpSetResult::getAccelerateRegionId()const
{
	return accelerateRegionId_;
}

std::string GetBasicIpSetResult::getIpAddress()const
{
	return ipAddress_;
}

std::string GetBasicIpSetResult::getAcceleratorId()const
{
	return acceleratorId_;
}

