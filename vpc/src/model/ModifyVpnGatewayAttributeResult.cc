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

#include <alibabacloud/vpc/model/ModifyVpnGatewayAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

ModifyVpnGatewayAttributeResult::ModifyVpnGatewayAttributeResult() :
	ServiceResult()
{}

ModifyVpnGatewayAttributeResult::ModifyVpnGatewayAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyVpnGatewayAttributeResult::~ModifyVpnGatewayAttributeResult()
{}

void ModifyVpnGatewayAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	vpnGatewayId_ = value["VpnGatewayId"].asString();
	vpcId_ = value["VpcId"].asString();
	vSwitchId_ = value["VSwitchId"].asString();
	internetIp_ = value["InternetIp"].asString();
	intranetIp_ = value["IntranetIp"].asString();
	createTime_ = std::stol(value["CreateTime"].asString());
	endTime_ = std::stol(value["EndTime"].asString());
	spec_ = value["Spec"].asString();
	name_ = value["Name"].asString();
	description_ = value["Description"].asString();
	status_ = value["Status"].asString();
	businessStatus_ = value["BusinessStatus"].asString();

}

std::string ModifyVpnGatewayAttributeResult::getStatus()const
{
	return status_;
}

void ModifyVpnGatewayAttributeResult::setStatus(const std::string& status)
{
	status_ = status;
}

std::string ModifyVpnGatewayAttributeResult::getDescription()const
{
	return description_;
}

void ModifyVpnGatewayAttributeResult::setDescription(const std::string& description)
{
	description_ = description;
}

std::string ModifyVpnGatewayAttributeResult::getVpcId()const
{
	return vpcId_;
}

void ModifyVpnGatewayAttributeResult::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
}

std::string ModifyVpnGatewayAttributeResult::getInternetIp()const
{
	return internetIp_;
}

void ModifyVpnGatewayAttributeResult::setInternetIp(const std::string& internetIp)
{
	internetIp_ = internetIp;
}

long ModifyVpnGatewayAttributeResult::getEndTime()const
{
	return endTime_;
}

void ModifyVpnGatewayAttributeResult::setEndTime(long endTime)
{
	endTime_ = endTime;
}

std::string ModifyVpnGatewayAttributeResult::getVpnGatewayId()const
{
	return vpnGatewayId_;
}

void ModifyVpnGatewayAttributeResult::setVpnGatewayId(const std::string& vpnGatewayId)
{
	vpnGatewayId_ = vpnGatewayId;
}

std::string ModifyVpnGatewayAttributeResult::getVSwitchId()const
{
	return vSwitchId_;
}

void ModifyVpnGatewayAttributeResult::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
}

long ModifyVpnGatewayAttributeResult::getCreateTime()const
{
	return createTime_;
}

void ModifyVpnGatewayAttributeResult::setCreateTime(long createTime)
{
	createTime_ = createTime;
}

std::string ModifyVpnGatewayAttributeResult::getSpec()const
{
	return spec_;
}

void ModifyVpnGatewayAttributeResult::setSpec(const std::string& spec)
{
	spec_ = spec;
}

std::string ModifyVpnGatewayAttributeResult::getIntranetIp()const
{
	return intranetIp_;
}

void ModifyVpnGatewayAttributeResult::setIntranetIp(const std::string& intranetIp)
{
	intranetIp_ = intranetIp;
}

std::string ModifyVpnGatewayAttributeResult::getBusinessStatus()const
{
	return businessStatus_;
}

void ModifyVpnGatewayAttributeResult::setBusinessStatus(const std::string& businessStatus)
{
	businessStatus_ = businessStatus;
}

std::string ModifyVpnGatewayAttributeResult::getName()const
{
	return name_;
}

void ModifyVpnGatewayAttributeResult::setName(const std::string& name)
{
	name_ = name;
}

