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

#include <alibabacloud/vpc/model/CreateIpv6GatewayResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

CreateIpv6GatewayResult::CreateIpv6GatewayResult() :
	ServiceResult()
{}

CreateIpv6GatewayResult::CreateIpv6GatewayResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateIpv6GatewayResult::~CreateIpv6GatewayResult()
{}

void CreateIpv6GatewayResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	if(!value["Ipv6GatewayId"].isNull())
		ipv6GatewayId_ = value["Ipv6GatewayId"].asString();

}

std::string CreateIpv6GatewayResult::getIpv6GatewayId()const
{
	return ipv6GatewayId_;
}

