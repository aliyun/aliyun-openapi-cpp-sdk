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

#include <alibabacloud/vpc/model/AllocateVpcIpv6CidrResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

AllocateVpcIpv6CidrResult::AllocateVpcIpv6CidrResult() :
	ServiceResult()
{}

AllocateVpcIpv6CidrResult::AllocateVpcIpv6CidrResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AllocateVpcIpv6CidrResult::~AllocateVpcIpv6CidrResult()
{}

void AllocateVpcIpv6CidrResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Ipv6CidrBlock"].isNull())
		ipv6CidrBlock_ = value["Ipv6CidrBlock"].asString();

}

std::string AllocateVpcIpv6CidrResult::getIpv6CidrBlock()const
{
	return ipv6CidrBlock_;
}

