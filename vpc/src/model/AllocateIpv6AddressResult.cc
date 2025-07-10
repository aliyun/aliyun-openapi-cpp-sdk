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

#include <alibabacloud/vpc/model/AllocateIpv6AddressResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

AllocateIpv6AddressResult::AllocateIpv6AddressResult() :
	ServiceResult()
{}

AllocateIpv6AddressResult::AllocateIpv6AddressResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AllocateIpv6AddressResult::~AllocateIpv6AddressResult()
{}

void AllocateIpv6AddressResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Ipv6AddressId"].isNull())
		ipv6AddressId_ = value["Ipv6AddressId"].asString();
	if(!value["Ipv6Address"].isNull())
		ipv6Address_ = value["Ipv6Address"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();

}

std::string AllocateIpv6AddressResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::string AllocateIpv6AddressResult::getIpv6AddressId()const
{
	return ipv6AddressId_;
}

std::string AllocateIpv6AddressResult::getIpv6Address()const
{
	return ipv6Address_;
}

