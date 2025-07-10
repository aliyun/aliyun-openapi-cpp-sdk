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
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["InternetIp"].isNull())
		internetIp_ = value["InternetIp"].asString();
	if(!value["Spec"].isNull())
		spec_ = value["Spec"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = std::stol(value["CreateTime"].asString());
	if(!value["AutoPropagate"].isNull())
		autoPropagate_ = value["AutoPropagate"].asString() == "true";
	if(!value["VpnGatewayId"].isNull())
		vpnGatewayId_ = value["VpnGatewayId"].asString();
	if(!value["IntranetIp"].isNull())
		intranetIp_ = value["IntranetIp"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = std::stol(value["EndTime"].asString());
	if(!value["VSwitchId"].isNull())
		vSwitchId_ = value["VSwitchId"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["EnableBgp"].isNull())
		enableBgp_ = value["EnableBgp"].asString() == "true";
	if(!value["BusinessStatus"].isNull())
		businessStatus_ = value["BusinessStatus"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["DisasterRecoveryInternetIp"].isNull())
		disasterRecoveryInternetIp_ = value["DisasterRecoveryInternetIp"].asString();
	if(!value["DisasterRecoveryVSwitchId"].isNull())
		disasterRecoveryVSwitchId_ = value["DisasterRecoveryVSwitchId"].asString();
	if(!value["SslVpnInternetIp"].isNull())
		sslVpnInternetIp_ = value["SslVpnInternetIp"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();

}

std::string ModifyVpnGatewayAttributeResult::getStatus()const
{
	return status_;
}

std::string ModifyVpnGatewayAttributeResult::getDescription()const
{
	return description_;
}

bool ModifyVpnGatewayAttributeResult::getEnableBgp()const
{
	return enableBgp_;
}

std::string ModifyVpnGatewayAttributeResult::getDisasterRecoveryVSwitchId()const
{
	return disasterRecoveryVSwitchId_;
}

long ModifyVpnGatewayAttributeResult::getEndTime()const
{
	return endTime_;
}

std::string ModifyVpnGatewayAttributeResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

long ModifyVpnGatewayAttributeResult::getCreateTime()const
{
	return createTime_;
}

std::string ModifyVpnGatewayAttributeResult::getVSwitchId()const
{
	return vSwitchId_;
}

bool ModifyVpnGatewayAttributeResult::getAutoPropagate()const
{
	return autoPropagate_;
}

std::string ModifyVpnGatewayAttributeResult::getIntranetIp()const
{
	return intranetIp_;
}

std::string ModifyVpnGatewayAttributeResult::getBusinessStatus()const
{
	return businessStatus_;
}

std::string ModifyVpnGatewayAttributeResult::getName()const
{
	return name_;
}

std::string ModifyVpnGatewayAttributeResult::getVpcId()const
{
	return vpcId_;
}

std::string ModifyVpnGatewayAttributeResult::getInternetIp()const
{
	return internetIp_;
}

std::string ModifyVpnGatewayAttributeResult::getVpnGatewayId()const
{
	return vpnGatewayId_;
}

std::string ModifyVpnGatewayAttributeResult::getDisasterRecoveryInternetIp()const
{
	return disasterRecoveryInternetIp_;
}

std::string ModifyVpnGatewayAttributeResult::getSslVpnInternetIp()const
{
	return sslVpnInternetIp_;
}

std::string ModifyVpnGatewayAttributeResult::getSpec()const
{
	return spec_;
}

