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

#include <alibabacloud/vpc/model/AllocateIpv6InternetBandwidthResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

AllocateIpv6InternetBandwidthResult::AllocateIpv6InternetBandwidthResult() :
	ServiceResult()
{}

AllocateIpv6InternetBandwidthResult::AllocateIpv6InternetBandwidthResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AllocateIpv6InternetBandwidthResult::~AllocateIpv6InternetBandwidthResult()
{}

void AllocateIpv6InternetBandwidthResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Ipv6AddressId"].isNull())
		ipv6AddressId_ = value["Ipv6AddressId"].asString();
	if(!value["InternetBandwidthId"].isNull())
		internetBandwidthId_ = value["InternetBandwidthId"].asString();

}

std::string AllocateIpv6InternetBandwidthResult::getInternetBandwidthId()const
{
	return internetBandwidthId_;
}

std::string AllocateIpv6InternetBandwidthResult::getIpv6AddressId()const
{
	return ipv6AddressId_;
}

