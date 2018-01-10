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
	vpnGatewayId_ = value["VpnGatewayId"].asString();
	vpcId_ = value["VpcId"].asString();
	vSwitchId_ = value["VSwitchId"].asString();
	internetIp_ = value["InternetIp"].asString();
	createTime_ = std::stol(value["CreateTime"].asString());
	endTime_ = std::stol(value["EndTime"].asString());
	spec_ = value["Spec"].asString();
	name_ = value["Name"].asString();
	description_ = value["Description"].asString();
	status_ = value["Status"].asString();
	businessStatus_ = value["BusinessStatus"].asString();
	chargeType_ = value["ChargeType"].asString();

}

std::string DescribeVpnGatewayResult::getStatus()const
{
	return status_;
}

void DescribeVpnGatewayResult::setStatus(const std::string& status)
{
	status_ = status;
}

std::string DescribeVpnGatewayResult::getDescription()const
{
	return description_;
}

void DescribeVpnGatewayResult::setDescription(const std::string& description)
{
	description_ = description;
}

std::string DescribeVpnGatewayResult::getVpcId()const
{
	return vpcId_;
}

void DescribeVpnGatewayResult::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
}

std::string DescribeVpnGatewayResult::getInternetIp()const
{
	return internetIp_;
}

void DescribeVpnGatewayResult::setInternetIp(const std::string& internetIp)
{
	internetIp_ = internetIp;
}

long DescribeVpnGatewayResult::getEndTime()const
{
	return endTime_;
}

void DescribeVpnGatewayResult::setEndTime(long endTime)
{
	endTime_ = endTime;
}

std::string DescribeVpnGatewayResult::getVpnGatewayId()const
{
	return vpnGatewayId_;
}

void DescribeVpnGatewayResult::setVpnGatewayId(const std::string& vpnGatewayId)
{
	vpnGatewayId_ = vpnGatewayId;
}

std::string DescribeVpnGatewayResult::getChargeType()const
{
	return chargeType_;
}

void DescribeVpnGatewayResult::setChargeType(const std::string& chargeType)
{
	chargeType_ = chargeType;
}

std::string DescribeVpnGatewayResult::getVSwitchId()const
{
	return vSwitchId_;
}

void DescribeVpnGatewayResult::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
}

long DescribeVpnGatewayResult::getCreateTime()const
{
	return createTime_;
}

void DescribeVpnGatewayResult::setCreateTime(long createTime)
{
	createTime_ = createTime;
}

std::string DescribeVpnGatewayResult::getSpec()const
{
	return spec_;
}

void DescribeVpnGatewayResult::setSpec(const std::string& spec)
{
	spec_ = spec;
}

std::string DescribeVpnGatewayResult::getBusinessStatus()const
{
	return businessStatus_;
}

void DescribeVpnGatewayResult::setBusinessStatus(const std::string& businessStatus)
{
	businessStatus_ = businessStatus;
}

std::string DescribeVpnGatewayResult::getName()const
{
	return name_;
}

void DescribeVpnGatewayResult::setName(const std::string& name)
{
	name_ = name;
}

