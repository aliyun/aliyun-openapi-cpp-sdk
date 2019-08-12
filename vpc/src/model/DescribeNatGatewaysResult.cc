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

#include <alibabacloud/vpc/model/DescribeNatGatewaysResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeNatGatewaysResult::DescribeNatGatewaysResult() :
	ServiceResult()
{}

DescribeNatGatewaysResult::DescribeNatGatewaysResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNatGatewaysResult::~DescribeNatGatewaysResult()
{}

void DescribeNatGatewaysResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allNatGateways = value["NatGateways"]["NatGateway"];
	for (auto value : allNatGateways)
	{
		NatGateway natGatewaysObject;
		if(!value["NatGatewayId"].isNull())
			natGatewaysObject.natGatewayId = value["NatGatewayId"].asString();
		if(!value["RegionId"].isNull())
			natGatewaysObject.regionId = value["RegionId"].asString();
		if(!value["Name"].isNull())
			natGatewaysObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			natGatewaysObject.description = value["Description"].asString();
		if(!value["VpcId"].isNull())
			natGatewaysObject.vpcId = value["VpcId"].asString();
		if(!value["Spec"].isNull())
			natGatewaysObject.spec = value["Spec"].asString();
		if(!value["InstanceChargeType"].isNull())
			natGatewaysObject.instanceChargeType = value["InstanceChargeType"].asString();
		if(!value["ExpiredTime"].isNull())
			natGatewaysObject.expiredTime = value["ExpiredTime"].asString();
		if(!value["AutoPay"].isNull())
			natGatewaysObject.autoPay = value["AutoPay"].asString() == "true";
		if(!value["BusinessStatus"].isNull())
			natGatewaysObject.businessStatus = value["BusinessStatus"].asString();
		if(!value["CreationTime"].isNull())
			natGatewaysObject.creationTime = value["CreationTime"].asString();
		if(!value["Status"].isNull())
			natGatewaysObject.status = value["Status"].asString();
		auto allIpLists = value["IpLists"]["IpList"];
		for (auto value : allIpLists)
		{
			NatGateway::IpList ipListsObject;
			if(!value["AllocationId"].isNull())
				ipListsObject.allocationId = value["AllocationId"].asString();
			if(!value["IpAddress"].isNull())
				ipListsObject.ipAddress = value["IpAddress"].asString();
			if(!value["UsingStatus"].isNull())
				ipListsObject.usingStatus = value["UsingStatus"].asString();
			if(!value["ApAccessEnabled"].isNull())
				ipListsObject.apAccessEnabled = value["ApAccessEnabled"].asString() == "true";
			natGatewaysObject.ipLists.push_back(ipListsObject);
		}
		auto allForwardTableIds = value["ForwardTableIds"]["ForwardTableId"];
		for (auto value : allForwardTableIds)
			natGatewaysObject.forwardTableIds.push_back(value.asString());
		auto allSnatTableIds = value["SnatTableIds"]["SnatTableId"];
		for (auto value : allSnatTableIds)
			natGatewaysObject.snatTableIds.push_back(value.asString());
		auto allBandwidthPackageIds = value["BandwidthPackageIds"]["BandwidthPackageId"];
		for (auto value : allBandwidthPackageIds)
			natGatewaysObject.bandwidthPackageIds.push_back(value.asString());
		natGateways_.push_back(natGatewaysObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeNatGatewaysResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeNatGatewaysResult::getPageSize()const
{
	return pageSize_;
}

int DescribeNatGatewaysResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeNatGatewaysResult::NatGateway> DescribeNatGatewaysResult::getNatGateways()const
{
	return natGateways_;
}

