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

#include <alibabacloud/sgw/model/DescribeGatewaysResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

DescribeGatewaysResult::DescribeGatewaysResult() :
	ServiceResult()
{}

DescribeGatewaysResult::DescribeGatewaysResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGatewaysResult::~DescribeGatewaysResult()
{}

void DescribeGatewaysResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGatewaysNode = value["Gateways"]["Gateway"];
	for (auto valueGatewaysGateway : allGatewaysNode)
	{
		Gateway gatewaysObject;
		if(!valueGatewaysGateway["GatewayId"].isNull())
			gatewaysObject.gatewayId = valueGatewaysGateway["GatewayId"].asString();
		if(!valueGatewaysGateway["StorageBundleId"].isNull())
			gatewaysObject.storageBundleId = valueGatewaysGateway["StorageBundleId"].asString();
		if(!valueGatewaysGateway["Name"].isNull())
			gatewaysObject.name = valueGatewaysGateway["Name"].asString();
		if(!valueGatewaysGateway["Description"].isNull())
			gatewaysObject.description = valueGatewaysGateway["Description"].asString();
		if(!valueGatewaysGateway["Location"].isNull())
			gatewaysObject.location = valueGatewaysGateway["Location"].asString();
		if(!valueGatewaysGateway["Category"].isNull())
			gatewaysObject.category = valueGatewaysGateway["Category"].asString();
		if(!valueGatewaysGateway["Type"].isNull())
			gatewaysObject.type = valueGatewaysGateway["Type"].asString();
		if(!valueGatewaysGateway["GatewayClass"].isNull())
			gatewaysObject.gatewayClass = valueGatewaysGateway["GatewayClass"].asString();
		if(!valueGatewaysGateway["Model"].isNull())
			gatewaysObject.model = valueGatewaysGateway["Model"].asString();
		if(!valueGatewaysGateway["SerialNumber"].isNull())
			gatewaysObject.serialNumber = valueGatewaysGateway["SerialNumber"].asString();
		if(!valueGatewaysGateway["Status"].isNull())
			gatewaysObject.status = valueGatewaysGateway["Status"].asString();
		if(!valueGatewaysGateway["EcsInstanceId"].isNull())
			gatewaysObject.ecsInstanceId = valueGatewaysGateway["EcsInstanceId"].asString();
		if(!valueGatewaysGateway["VpcId"].isNull())
			gatewaysObject.vpcId = valueGatewaysGateway["VpcId"].asString();
		if(!valueGatewaysGateway["VSwitchId"].isNull())
			gatewaysObject.vSwitchId = valueGatewaysGateway["VSwitchId"].asString();
		if(!valueGatewaysGateway["Ip"].isNull())
			gatewaysObject.ip = valueGatewaysGateway["Ip"].asString();
		if(!valueGatewaysGateway["InnerIp"].isNull())
			gatewaysObject.innerIp = valueGatewaysGateway["InnerIp"].asString();
		if(!valueGatewaysGateway["CreatedTime"].isNull())
			gatewaysObject.createdTime = std::stol(valueGatewaysGateway["CreatedTime"].asString());
		if(!valueGatewaysGateway["ActivatedTime"].isNull())
			gatewaysObject.activatedTime = std::stol(valueGatewaysGateway["ActivatedTime"].asString());
		if(!valueGatewaysGateway["TaskId"].isNull())
			gatewaysObject.taskId = valueGatewaysGateway["TaskId"].asString();
		if(!valueGatewaysGateway["GatewayVersion"].isNull())
			gatewaysObject.gatewayVersion = valueGatewaysGateway["GatewayVersion"].asString();
		if(!valueGatewaysGateway["BuyURL"].isNull())
			gatewaysObject.buyURL = valueGatewaysGateway["BuyURL"].asString();
		if(!valueGatewaysGateway["RenewURL"].isNull())
			gatewaysObject.renewURL = valueGatewaysGateway["RenewURL"].asString();
		if(!valueGatewaysGateway["IsPostPaid"].isNull())
			gatewaysObject.isPostPaid = valueGatewaysGateway["IsPostPaid"].asString() == "true";
		if(!valueGatewaysGateway["IsReleaseAfterExpiration"].isNull())
			gatewaysObject.isReleaseAfterExpiration = valueGatewaysGateway["IsReleaseAfterExpiration"].asString() == "true";
		if(!valueGatewaysGateway["ExpiredTime"].isNull())
			gatewaysObject.expiredTime = std::stol(valueGatewaysGateway["ExpiredTime"].asString());
		if(!valueGatewaysGateway["ExpireStatus"].isNull())
			gatewaysObject.expireStatus = std::stoi(valueGatewaysGateway["ExpireStatus"].asString());
		if(!valueGatewaysGateway["CommonBuyInstanceId"].isNull())
			gatewaysObject.commonBuyInstanceId = valueGatewaysGateway["CommonBuyInstanceId"].asString();
		if(!valueGatewaysGateway["PublicNetworkBandwidth"].isNull())
			gatewaysObject.publicNetworkBandwidth = std::stoi(valueGatewaysGateway["PublicNetworkBandwidth"].asString());
		if(!valueGatewaysGateway["GatewayType"].isNull())
			gatewaysObject.gatewayType = valueGatewaysGateway["GatewayType"].asString();
		if(!valueGatewaysGateway["ElasticGateway"].isNull())
			gatewaysObject.elasticGateway = valueGatewaysGateway["ElasticGateway"].asString() == "true";
		if(!valueGatewaysGateway["MaxThroughput"].isNull())
			gatewaysObject.maxThroughput = std::stoi(valueGatewaysGateway["MaxThroughput"].asString());
		if(!valueGatewaysGateway["Capacity"].isNull())
			gatewaysObject.capacity = std::stoi(valueGatewaysGateway["Capacity"].asString());
		if(!valueGatewaysGateway["DataLoadType"].isNull())
			gatewaysObject.dataLoadType = valueGatewaysGateway["DataLoadType"].asString();
		if(!valueGatewaysGateway["DataLoadInterval"].isNull())
			gatewaysObject.dataLoadInterval = std::stoi(valueGatewaysGateway["DataLoadInterval"].asString());
		if(!valueGatewaysGateway["LastErrorKey"].isNull())
			gatewaysObject.lastErrorKey = valueGatewaysGateway["LastErrorKey"].asString();
		if(!valueGatewaysGateway["InnerIpv6Ip"].isNull())
			gatewaysObject.innerIpv6Ip = valueGatewaysGateway["InnerIpv6Ip"].asString();
		auto allElasticNodes = value["ElasticNodes"]["ElasticNode"];
		for (auto value : allElasticNodes)
			gatewaysObject.elasticNodes.push_back(value.asString());
		gateways_.push_back(gatewaysObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeGatewaysResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeGatewaysResult::getMessage()const
{
	return message_;
}

int DescribeGatewaysResult::getPageSize()const
{
	return pageSize_;
}

int DescribeGatewaysResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeGatewaysResult::Gateway> DescribeGatewaysResult::getGateways()const
{
	return gateways_;
}

std::string DescribeGatewaysResult::getCode()const
{
	return code_;
}

bool DescribeGatewaysResult::getSuccess()const
{
	return success_;
}

