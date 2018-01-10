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
	auto allVpnGateways = value["VpnGateways"]["VpnGateway"];
	for (auto value : allVpnGateways)
	{
		VpnGateway vpnGatewayObject;
		vpnGatewayObject.vpnGatewayId = value["VpnGatewayId"].asString();
		vpnGatewayObject.vpcId = value["VpcId"].asString();
		vpnGatewayObject.vSwitchId = value["VSwitchId"].asString();
		vpnGatewayObject.internetIp = value["InternetIp"].asString();
		vpnGatewayObject.createTime = std::stol(value["CreateTime"].asString());
		vpnGatewayObject.endTime = std::stol(value["EndTime"].asString());
		vpnGatewayObject.spec = value["Spec"].asString();
		vpnGatewayObject.name = value["Name"].asString();
		vpnGatewayObject.description = value["Description"].asString();
		vpnGatewayObject.status = value["Status"].asString();
		vpnGatewayObject.businessStatus = value["BusinessStatus"].asString();
		vpnGatewayObject.chargeType = value["ChargeType"].asString();
		vpnGateways_.push_back(vpnGatewayObject);
	}
	totalCount_ = std::stoi(value["TotalCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeVpnGatewaysResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeVpnGatewaysResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeVpnGatewaysResult::getPageSize()const
{
	return pageSize_;
}

void DescribeVpnGatewaysResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeVpnGatewaysResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeVpnGatewaysResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

