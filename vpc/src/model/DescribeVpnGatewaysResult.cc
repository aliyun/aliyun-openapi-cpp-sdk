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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allVpnGateways = value["VpnGateways"]["VpnGateway"];
	for (auto value : allVpnGateways)
	{
		VpnGateway vpnGatewaysObject;
		if(!value["VpnGatewayId"].isNull())
			vpnGatewaysObject.vpnGatewayId = value["VpnGatewayId"].asString();
		if(!value["VpcId"].isNull())
			vpnGatewaysObject.vpcId = value["VpcId"].asString();
		if(!value["VSwitchId"].isNull())
			vpnGatewaysObject.vSwitchId = value["VSwitchId"].asString();
		if(!value["InternetIp"].isNull())
			vpnGatewaysObject.internetIp = value["InternetIp"].asString();
		if(!value["CreateTime"].isNull())
			vpnGatewaysObject.createTime = std::stol(value["CreateTime"].asString());
		if(!value["EndTime"].isNull())
			vpnGatewaysObject.endTime = std::stol(value["EndTime"].asString());
		if(!value["Spec"].isNull())
			vpnGatewaysObject.spec = value["Spec"].asString();
		if(!value["Name"].isNull())
			vpnGatewaysObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			vpnGatewaysObject.description = value["Description"].asString();
		if(!value["Status"].isNull())
			vpnGatewaysObject.status = value["Status"].asString();
		if(!value["BusinessStatus"].isNull())
			vpnGatewaysObject.businessStatus = value["BusinessStatus"].asString();
		if(!value["ChargeType"].isNull())
			vpnGatewaysObject.chargeType = value["ChargeType"].asString();
		if(!value["IpsecVpn"].isNull())
			vpnGatewaysObject.ipsecVpn = value["IpsecVpn"].asString();
		if(!value["SslVpn"].isNull())
			vpnGatewaysObject.sslVpn = value["SslVpn"].asString();
		if(!value["SslMaxConnections"].isNull())
			vpnGatewaysObject.sslMaxConnections = std::stol(value["SslMaxConnections"].asString());
		if(!value["Tag"].isNull())
			vpnGatewaysObject.tag = value["Tag"].asString();
		vpnGateways_.push_back(vpnGatewaysObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

