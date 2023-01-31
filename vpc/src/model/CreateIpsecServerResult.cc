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

#include <alibabacloud/vpc/model/CreateIpsecServerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

CreateIpsecServerResult::CreateIpsecServerResult() :
	ServiceResult()
{}

CreateIpsecServerResult::CreateIpsecServerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateIpsecServerResult::~CreateIpsecServerResult()
{}

void CreateIpsecServerResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["CreationTime"].isNull())
		creationTime_ = value["CreationTime"].asString();
	if(!value["IpsecServerId"].isNull())
		ipsecServerId_ = value["IpsecServerId"].asString();
	if(!value["IpsecServerName"].isNull())
		ipsecServerName_ = value["IpsecServerName"].asString();
	if(!value["VpnGatewayId"].isNull())
		vpnGatewayId_ = value["VpnGatewayId"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();

}

std::string CreateIpsecServerResult::getVpnGatewayId()const
{
	return vpnGatewayId_;
}

std::string CreateIpsecServerResult::getIpsecServerId()const
{
	return ipsecServerId_;
}

std::string CreateIpsecServerResult::getCreationTime()const
{
	return creationTime_;
}

std::string CreateIpsecServerResult::getRegionId()const
{
	return regionId_;
}

std::string CreateIpsecServerResult::getIpsecServerName()const
{
	return ipsecServerName_;
}

