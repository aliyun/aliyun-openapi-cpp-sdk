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

#include <alibabacloud/vpc/model/DescribeVpnGatewaysResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeVpnGatewaysResult::DescribeVpnGatewaysResult() :
	ServiceResult()
{}

DescribeVpnGatewaysResult::DescribeVpnGatewaysResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVpnGatewaysResult::~DescribeVpnGatewaysResult()
{}

void DescribeVpnGatewaysResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVpnGatewaysNode = value["VpnGateways"]["VpnGateway"];
	for (auto valueVpnGatewaysVpnGateway : allVpnGatewaysNode)
	{
		VpnGateway vpnGatewaysObject;
		if(!valueVpnGatewaysVpnGateway["VpnType"].isNull())
			vpnGatewaysObject.vpnType = valueVpnGatewaysVpnGateway["VpnType"].asString();
		if(!valueVpnGatewaysVpnGateway["Status"].isNull())
			vpnGatewaysObject.status = valueVpnGatewaysVpnGateway["Status"].asString();
		if(!valueVpnGatewaysVpnGateway["VpcId"].isNull())
			vpnGatewaysObject.vpcId = valueVpnGatewaysVpnGateway["VpcId"].asString();
		if(!valueVpnGatewaysVpnGateway["SslMaxConnections"].isNull())
			vpnGatewaysObject.sslMaxConnections = std::stol(valueVpnGatewaysVpnGateway["SslMaxConnections"].asString());
		if(!valueVpnGatewaysVpnGateway["Spec"].isNull())
			vpnGatewaysObject.spec = valueVpnGatewaysVpnGateway["Spec"].asString();
		if(!valueVpnGatewaysVpnGateway["InternetIp"].isNull())
			vpnGatewaysObject.internetIp = valueVpnGatewaysVpnGateway["InternetIp"].asString();
		if(!valueVpnGatewaysVpnGateway["CreateTime"].isNull())
			vpnGatewaysObject.createTime = std::stol(valueVpnGatewaysVpnGateway["CreateTime"].asString());
		if(!valueVpnGatewaysVpnGateway["AutoPropagate"].isNull())
			vpnGatewaysObject.autoPropagate = valueVpnGatewaysVpnGateway["AutoPropagate"].asString() == "true";
		if(!valueVpnGatewaysVpnGateway["ChargeType"].isNull())
			vpnGatewaysObject.chargeType = valueVpnGatewaysVpnGateway["ChargeType"].asString();
		if(!valueVpnGatewaysVpnGateway["VpnGatewayId"].isNull())
			vpnGatewaysObject.vpnGatewayId = valueVpnGatewaysVpnGateway["VpnGatewayId"].asString();
		if(!valueVpnGatewaysVpnGateway["Tag"].isNull())
			vpnGatewaysObject.tag = valueVpnGatewaysVpnGateway["Tag"].asString();
		if(!valueVpnGatewaysVpnGateway["IpsecVpn"].isNull())
			vpnGatewaysObject.ipsecVpn = valueVpnGatewaysVpnGateway["IpsecVpn"].asString();
		if(!valueVpnGatewaysVpnGateway["EndTime"].isNull())
			vpnGatewaysObject.endTime = std::stol(valueVpnGatewaysVpnGateway["EndTime"].asString());
		if(!valueVpnGatewaysVpnGateway["VSwitchId"].isNull())
			vpnGatewaysObject.vSwitchId = valueVpnGatewaysVpnGateway["VSwitchId"].asString();
		if(!valueVpnGatewaysVpnGateway["Description"].isNull())
			vpnGatewaysObject.description = valueVpnGatewaysVpnGateway["Description"].asString();
		if(!valueVpnGatewaysVpnGateway["EnableBgp"].isNull())
			vpnGatewaysObject.enableBgp = valueVpnGatewaysVpnGateway["EnableBgp"].asString() == "true";
		if(!valueVpnGatewaysVpnGateway["BusinessStatus"].isNull())
			vpnGatewaysObject.businessStatus = valueVpnGatewaysVpnGateway["BusinessStatus"].asString();
		if(!valueVpnGatewaysVpnGateway["SslVpn"].isNull())
			vpnGatewaysObject.sslVpn = valueVpnGatewaysVpnGateway["SslVpn"].asString();
		if(!valueVpnGatewaysVpnGateway["Name"].isNull())
			vpnGatewaysObject.name = valueVpnGatewaysVpnGateway["Name"].asString();
		if(!valueVpnGatewaysVpnGateway["NetworkType"].isNull())
			vpnGatewaysObject.networkType = valueVpnGatewaysVpnGateway["NetworkType"].asString();
		if(!valueVpnGatewaysVpnGateway["DisasterRecoveryInternetIp"].isNull())
			vpnGatewaysObject.disasterRecoveryInternetIp = valueVpnGatewaysVpnGateway["DisasterRecoveryInternetIp"].asString();
		if(!valueVpnGatewaysVpnGateway["DisasterRecoveryVSwitchId"].isNull())
			vpnGatewaysObject.disasterRecoveryVSwitchId = valueVpnGatewaysVpnGateway["DisasterRecoveryVSwitchId"].asString();
		if(!valueVpnGatewaysVpnGateway["SslVpnInternetIp"].isNull())
			vpnGatewaysObject.sslVpnInternetIp = valueVpnGatewaysVpnGateway["SslVpnInternetIp"].asString();
		if(!valueVpnGatewaysVpnGateway["ResourceGroupId"].isNull())
			vpnGatewaysObject.resourceGroupId = valueVpnGatewaysVpnGateway["ResourceGroupId"].asString();
		auto allTagsNode = valueVpnGatewaysVpnGateway["Tags"]["Tag"];
		for (auto valueVpnGatewaysVpnGatewayTagsTag : allTagsNode)
		{
			VpnGateway::Tag tagsObject;
			if(!valueVpnGatewaysVpnGatewayTagsTag["Key"].isNull())
				tagsObject.key = valueVpnGatewaysVpnGatewayTagsTag["Key"].asString();
			if(!valueVpnGatewaysVpnGatewayTagsTag["Value"].isNull())
				tagsObject.value = valueVpnGatewaysVpnGatewayTagsTag["Value"].asString();
			vpnGatewaysObject.tags.push_back(tagsObject);
		}
		auto reservationDataNode = value["ReservationData"];
		if(!reservationDataNode["Status"].isNull())
			vpnGatewaysObject.reservationData.status = reservationDataNode["Status"].asString();
		if(!reservationDataNode["ReservationOrderType"].isNull())
			vpnGatewaysObject.reservationData.reservationOrderType = reservationDataNode["ReservationOrderType"].asString();
		if(!reservationDataNode["ReservationIpsec"].isNull())
			vpnGatewaysObject.reservationData.reservationIpsec = reservationDataNode["ReservationIpsec"].asString();
		if(!reservationDataNode["ReservationSpec"].isNull())
			vpnGatewaysObject.reservationData.reservationSpec = reservationDataNode["ReservationSpec"].asString();
		if(!reservationDataNode["ReservationSsl"].isNull())
			vpnGatewaysObject.reservationData.reservationSsl = reservationDataNode["ReservationSsl"].asString();
		if(!reservationDataNode["ReservationMaxConnections"].isNull())
			vpnGatewaysObject.reservationData.reservationMaxConnections = std::stoi(reservationDataNode["ReservationMaxConnections"].asString());
		if(!reservationDataNode["ReservationEndTime"].isNull())
			vpnGatewaysObject.reservationData.reservationEndTime = reservationDataNode["ReservationEndTime"].asString();
		auto allEniInstanceIds = value["EniInstanceIds"]["EniInstanceId"];
		for (auto value : allEniInstanceIds)
			vpnGatewaysObject.eniInstanceIds.push_back(value.asString());
		vpnGateways_.push_back(vpnGatewaysObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeVpnGatewaysResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeVpnGatewaysResult::getPageSize()const
{
	return pageSize_;
}

std::vector<DescribeVpnGatewaysResult::VpnGateway> DescribeVpnGatewaysResult::getVpnGateways()const
{
	return vpnGateways_;
}

int DescribeVpnGatewaysResult::getPageNumber()const
{
	return pageNumber_;
}

