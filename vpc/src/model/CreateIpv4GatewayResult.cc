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

#include <alibabacloud/vpc/model/CreateIpv4GatewayResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

CreateIpv4GatewayResult::CreateIpv4GatewayResult() :
	ServiceResult()
{}

CreateIpv4GatewayResult::CreateIpv4GatewayResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateIpv4GatewayResult::~CreateIpv4GatewayResult()
{}

void CreateIpv4GatewayResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Ipv4GatewayId"].isNull())
		ipv4GatewayId_ = value["Ipv4GatewayId"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();

}

std::string CreateIpv4GatewayResult::getIpv4GatewayId()const
{
	return ipv4GatewayId_;
}

std::string CreateIpv4GatewayResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

