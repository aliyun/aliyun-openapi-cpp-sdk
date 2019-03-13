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

#include <alibabacloud/vpc/model/DescribeVpnGatewayResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeVpnGatewayResult::DescribeVpnGatewayResult() :
	ServiceResult()
{}

DescribeVpnGatewayResult::DescribeVpnGatewayResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVpnGatewayResult::~DescribeVpnGatewayResult()
{}

void DescribeVpnGatewayResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	if(!value["VpnGatewayId"].isNull())
		vpnGatewayId_ = value["VpnGatewayId"].asString();
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["VSwitchId"].isNull())
		vSwitchId_ = value["VSwitchId"].asString();
	if(!value["InternetIp"].isNull())
		internetIp_ = value["InternetIp"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = std::stol(value["CreateTime"].asString());
	if(!value["EndTime"].isNull())
		endTime_ = std::stol(value["EndTime"].asString());
	if(!value["Spec"].isNull())
		spec_ = value["Spec"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["BusinessStatus"].isNull())
		businessStatus_ = value["BusinessStatus"].asString();
	if(!value["ChargeType"].isNull())
		chargeType_ = value["ChargeType"].asString();
	if(!value["IpsecVpn"].isNull())
		ipsecVpn_ = value["IpsecVpn"].asString();
	if(!value["SslVpn"].isNull())
		sslVpn_ = value["SslVpn"].asString();
	if(!value["SslMaxConnections"].isNull())
		sslMaxConnections_ = std::stol(value["SslMaxConnections"].asString());

}

std::string DescribeVpnGatewayResult::getStatus()const
{
	return status_;
}

std::string DescribeVpnGatewayResult::getIpsecVpn()const
{
	return ipsecVpn_;
}

std::string DescribeVpnGatewayResult::getSslVpn()const
{
	return sslVpn_;
}

std::string DescribeVpnGatewayResult::getDescription()const
{
	return description_;
}

long DescribeVpnGatewayResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeVpnGatewayResult::getVSwitchId()const
{
	return vSwitchId_;
}

long DescribeVpnGatewayResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeVpnGatewayResult::getBusinessStatus()const
{
	return businessStatus_;
}

std::string DescribeVpnGatewayResult::getName()const
{
	return name_;
}

std::string DescribeVpnGatewayResult::getVpcId()const
{
	return vpcId_;
}

std::string DescribeVpnGatewayResult::getInternetIp()const
{
	return internetIp_;
}

std::string DescribeVpnGatewayResult::getVpnGatewayId()const
{
	return vpnGatewayId_;
}

std::string DescribeVpnGatewayResult::getChargeType()const
{
	return chargeType_;
}

std::string DescribeVpnGatewayResult::getSpec()const
{
	return spec_;
}

long DescribeVpnGatewayResult::getSslMaxConnections()const
{
	return sslMaxConnections_;
}

