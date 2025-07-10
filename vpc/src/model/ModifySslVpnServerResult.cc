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

#include <alibabacloud/vpc/model/ModifySslVpnServerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

ModifySslVpnServerResult::ModifySslVpnServerResult() :
	ServiceResult()
{}

ModifySslVpnServerResult::ModifySslVpnServerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifySslVpnServerResult::~ModifySslVpnServerResult()
{}

void ModifySslVpnServerResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["InternetIp"].isNull())
		internetIp_ = value["InternetIp"].asString();
	if(!value["IDaaSInstanceId"].isNull())
		iDaaSInstanceId_ = value["IDaaSInstanceId"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = std::stol(value["CreateTime"].asString());
	if(!value["VpnGatewayId"].isNull())
		vpnGatewayId_ = value["VpnGatewayId"].asString();
	if(!value["Compress"].isNull())
		compress_ = value["Compress"].asString() == "true";
	if(!value["Port"].isNull())
		port_ = std::stoi(value["Port"].asString());
	if(!value["LocalSubnet"].isNull())
		localSubnet_ = value["LocalSubnet"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["Cipher"].isNull())
		cipher_ = value["Cipher"].asString();
	if(!value["Connections"].isNull())
		connections_ = std::stoi(value["Connections"].asString());
	if(!value["SslVpnServerId"].isNull())
		sslVpnServerId_ = value["SslVpnServerId"].asString();
	if(!value["MaxConnections"].isNull())
		maxConnections_ = std::stoi(value["MaxConnections"].asString());
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["EnableMultiFactorAuth"].isNull())
		enableMultiFactorAuth_ = value["EnableMultiFactorAuth"].asString() == "true";
	if(!value["ClientIpPool"].isNull())
		clientIpPool_ = value["ClientIpPool"].asString();
	if(!value["Proto"].isNull())
		proto_ = value["Proto"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();
	if(!value["IDaaSApplicationId"].isNull())
		iDaaSApplicationId_ = value["IDaaSApplicationId"].asString();
	if(!value["IDaaSInstanceVersion"].isNull())
		iDaaSInstanceVersion_ = value["IDaaSInstanceVersion"].asString();

}

bool ModifySslVpnServerResult::getCompress()const
{
	return compress_;
}

std::string ModifySslVpnServerResult::getLocalSubnet()const
{
	return localSubnet_;
}

int ModifySslVpnServerResult::getConnections()const
{
	return connections_;
}

std::string ModifySslVpnServerResult::getClientIpPool()const
{
	return clientIpPool_;
}

std::string ModifySslVpnServerResult::getIDaaSInstanceId()const
{
	return iDaaSInstanceId_;
}

int ModifySslVpnServerResult::getMaxConnections()const
{
	return maxConnections_;
}

std::string ModifySslVpnServerResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

bool ModifySslVpnServerResult::getEnableMultiFactorAuth()const
{
	return enableMultiFactorAuth_;
}

long ModifySslVpnServerResult::getCreateTime()const
{
	return createTime_;
}

int ModifySslVpnServerResult::getPort()const
{
	return port_;
}

std::string ModifySslVpnServerResult::getSslVpnServerId()const
{
	return sslVpnServerId_;
}

std::string ModifySslVpnServerResult::getIDaaSInstanceVersion()const
{
	return iDaaSInstanceVersion_;
}

std::string ModifySslVpnServerResult::getName()const
{
	return name_;
}

std::string ModifySslVpnServerResult::getIDaaSApplicationId()const
{
	return iDaaSApplicationId_;
}

std::string ModifySslVpnServerResult::getInternetIp()const
{
	return internetIp_;
}

std::string ModifySslVpnServerResult::getProto()const
{
	return proto_;
}

std::string ModifySslVpnServerResult::getVpnGatewayId()const
{
	return vpnGatewayId_;
}

std::string ModifySslVpnServerResult::getRegionId()const
{
	return regionId_;
}

std::string ModifySslVpnServerResult::getCipher()const
{
	return cipher_;
}

