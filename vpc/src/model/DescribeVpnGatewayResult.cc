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
	auto allTagsNode = value["Tags"]["Tag"];
	for (auto valueTagsTag : allTagsNode)
	{
		Tag tagsObject;
		if(!valueTagsTag["Key"].isNull())
			tagsObject.key = valueTagsTag["Key"].asString();
		if(!valueTagsTag["Value"].isNull())
			tagsObject.value = valueTagsTag["Value"].asString();
		tags_.push_back(tagsObject);
	}
	auto reservationDataNode = value["ReservationData"];
	if(!reservationDataNode["Status"].isNull())
		reservationData_.status = reservationDataNode["Status"].asString();
	if(!reservationDataNode["ReservationOrderType"].isNull())
		reservationData_.reservationOrderType = reservationDataNode["ReservationOrderType"].asString();
	if(!reservationDataNode["ReservationIpsec"].isNull())
		reservationData_.reservationIpsec = reservationDataNode["ReservationIpsec"].asString();
	if(!reservationDataNode["ReservationSpec"].isNull())
		reservationData_.reservationSpec = reservationDataNode["ReservationSpec"].asString();
	if(!reservationDataNode["ReservationSsl"].isNull())
		reservationData_.reservationSsl = reservationDataNode["ReservationSsl"].asString();
	if(!reservationDataNode["ReservationMaxConnections"].isNull())
		reservationData_.reservationMaxConnections = std::stoi(reservationDataNode["ReservationMaxConnections"].asString());
	if(!reservationDataNode["ReservationEndTime"].isNull())
		reservationData_.reservationEndTime = reservationDataNode["ReservationEndTime"].asString();
	auto allEniInstanceIds = value["EniInstanceIds"]["EniInstanceId"];
	for (const auto &item : allEniInstanceIds)
		eniInstanceIds_.push_back(item.asString());
	if(!value["VpnType"].isNull())
		vpnType_ = value["VpnType"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["SslMaxConnections"].isNull())
		sslMaxConnections_ = std::stol(value["SslMaxConnections"].asString());
	if(!value["Spec"].isNull())
		spec_ = value["Spec"].asString();
	if(!value["InternetIp"].isNull())
		internetIp_ = value["InternetIp"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = std::stol(value["CreateTime"].asString());
	if(!value["AutoPropagate"].isNull())
		autoPropagate_ = value["AutoPropagate"].asString() == "true";
	if(!value["ChargeType"].isNull())
		chargeType_ = value["ChargeType"].asString();
	if(!value["VpnGatewayId"].isNull())
		vpnGatewayId_ = value["VpnGatewayId"].asString();
	if(!value["Tag"].isNull())
		tag_ = value["Tag"].asString();
	if(!value["IpsecVpn"].isNull())
		ipsecVpn_ = value["IpsecVpn"].asString();
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
	if(!value["SslVpn"].isNull())
		sslVpn_ = value["SslVpn"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["NetworkType"].isNull())
		networkType_ = value["NetworkType"].asString();
	if(!value["DisasterRecoveryInternetIp"].isNull())
		disasterRecoveryInternetIp_ = value["DisasterRecoveryInternetIp"].asString();
	if(!value["DisasterRecoveryVSwitchId"].isNull())
		disasterRecoveryVSwitchId_ = value["DisasterRecoveryVSwitchId"].asString();
	if(!value["SslVpnInternetIp"].isNull())
		sslVpnInternetIp_ = value["SslVpnInternetIp"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();

}

std::string DescribeVpnGatewayResult::getIpsecVpn()const
{
	return ipsecVpn_;
}

std::string DescribeVpnGatewayResult::getSslVpn()const
{
	return sslVpn_;
}

std::string DescribeVpnGatewayResult::getVpnType()const
{
	return vpnType_;
}

std::string DescribeVpnGatewayResult::getDescription()const
{
	return description_;
}

std::string DescribeVpnGatewayResult::getDisasterRecoveryVSwitchId()const
{
	return disasterRecoveryVSwitchId_;
}

long DescribeVpnGatewayResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeVpnGatewayResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

bool DescribeVpnGatewayResult::getAutoPropagate()const
{
	return autoPropagate_;
}

std::string DescribeVpnGatewayResult::getBusinessStatus()const
{
	return businessStatus_;
}

std::string DescribeVpnGatewayResult::getName()const
{
	return name_;
}

std::vector<std::string> DescribeVpnGatewayResult::getEniInstanceIds()const
{
	return eniInstanceIds_;
}

std::string DescribeVpnGatewayResult::getInternetIp()const
{
	return internetIp_;
}

std::string DescribeVpnGatewayResult::getDisasterRecoveryInternetIp()const
{
	return disasterRecoveryInternetIp_;
}

std::string DescribeVpnGatewayResult::getNetworkType()const
{
	return networkType_;
}

long DescribeVpnGatewayResult::getSslMaxConnections()const
{
	return sslMaxConnections_;
}

std::vector<DescribeVpnGatewayResult::Tag> DescribeVpnGatewayResult::getTags()const
{
	return tags_;
}

DescribeVpnGatewayResult::ReservationData DescribeVpnGatewayResult::getReservationData()const
{
	return reservationData_;
}

std::string DescribeVpnGatewayResult::getStatus()const
{
	return status_;
}

bool DescribeVpnGatewayResult::getEnableBgp()const
{
	return enableBgp_;
}

long DescribeVpnGatewayResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeVpnGatewayResult::getVSwitchId()const
{
	return vSwitchId_;
}

std::string DescribeVpnGatewayResult::getVpcId()const
{
	return vpcId_;
}

std::string DescribeVpnGatewayResult::getVpnGatewayId()const
{
	return vpnGatewayId_;
}

std::string DescribeVpnGatewayResult::getChargeType()const
{
	return chargeType_;
}

std::string DescribeVpnGatewayResult::getSslVpnInternetIp()const
{
	return sslVpnInternetIp_;
}

std::string DescribeVpnGatewayResult::getTag()const
{
	return tag_;
}

std::string DescribeVpnGatewayResult::getSpec()const
{
	return spec_;
}

