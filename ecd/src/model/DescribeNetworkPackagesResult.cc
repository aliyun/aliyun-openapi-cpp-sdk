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

#include <alibabacloud/ecd/model/DescribeNetworkPackagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

DescribeNetworkPackagesResult::DescribeNetworkPackagesResult() :
	ServiceResult()
{}

DescribeNetworkPackagesResult::DescribeNetworkPackagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNetworkPackagesResult::~DescribeNetworkPackagesResult()
{}

void DescribeNetworkPackagesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNetworkPackagesNode = value["NetworkPackages"]["NetworkPackage"];
	for (auto valueNetworkPackagesNetworkPackage : allNetworkPackagesNode)
	{
		NetworkPackage networkPackagesObject;
		if(!valueNetworkPackagesNetworkPackage["NetworkPackageId"].isNull())
			networkPackagesObject.networkPackageId = valueNetworkPackagesNetworkPackage["NetworkPackageId"].asString();
		if(!valueNetworkPackagesNetworkPackage["Bandwidth"].isNull())
			networkPackagesObject.bandwidth = std::stoi(valueNetworkPackagesNetworkPackage["Bandwidth"].asString());
		if(!valueNetworkPackagesNetworkPackage["ExpiredTime"].isNull())
			networkPackagesObject.expiredTime = valueNetworkPackagesNetworkPackage["ExpiredTime"].asString();
		if(!valueNetworkPackagesNetworkPackage["CreateTime"].isNull())
			networkPackagesObject.createTime = valueNetworkPackagesNetworkPackage["CreateTime"].asString();
		if(!valueNetworkPackagesNetworkPackage["OfficeSiteId"].isNull())
			networkPackagesObject.officeSiteId = valueNetworkPackagesNetworkPackage["OfficeSiteId"].asString();
		if(!valueNetworkPackagesNetworkPackage["PayType"].isNull())
			networkPackagesObject.payType = valueNetworkPackagesNetworkPackage["PayType"].asString();
		if(!valueNetworkPackagesNetworkPackage["InternetChargeType"].isNull())
			networkPackagesObject.internetChargeType = valueNetworkPackagesNetworkPackage["InternetChargeType"].asString();
		if(!valueNetworkPackagesNetworkPackage["ReservationInternetChargeType"].isNull())
			networkPackagesObject.reservationInternetChargeType = valueNetworkPackagesNetworkPackage["ReservationInternetChargeType"].asString();
		if(!valueNetworkPackagesNetworkPackage["ReservationBandwidth"].isNull())
			networkPackagesObject.reservationBandwidth = std::stoi(valueNetworkPackagesNetworkPackage["ReservationBandwidth"].asString());
		if(!valueNetworkPackagesNetworkPackage["ReservationActiveTime"].isNull())
			networkPackagesObject.reservationActiveTime = valueNetworkPackagesNetworkPackage["ReservationActiveTime"].asString();
		if(!valueNetworkPackagesNetworkPackage["NetworkPackageStatus"].isNull())
			networkPackagesObject.networkPackageStatus = valueNetworkPackagesNetworkPackage["NetworkPackageStatus"].asString();
		if(!valueNetworkPackagesNetworkPackage["OfficeSiteName"].isNull())
			networkPackagesObject.officeSiteName = valueNetworkPackagesNetworkPackage["OfficeSiteName"].asString();
		if(!valueNetworkPackagesNetworkPackage["OfficeSiteVpcType"].isNull())
			networkPackagesObject.officeSiteVpcType = valueNetworkPackagesNetworkPackage["OfficeSiteVpcType"].asString();
		if(!valueNetworkPackagesNetworkPackage["VpcSnatPolicy"].isNull())
			networkPackagesObject.vpcSnatPolicy = valueNetworkPackagesNetworkPackage["VpcSnatPolicy"].asString();
		if(!valueNetworkPackagesNetworkPackage["QosType"].isNull())
			networkPackagesObject.qosType = valueNetworkPackagesNetworkPackage["QosType"].asString();
		if(!valueNetworkPackagesNetworkPackage["NgwVersion"].isNull())
			networkPackagesObject.ngwVersion = valueNetworkPackagesNetworkPackage["NgwVersion"].asString();
		auto allEipAddresses = value["EipAddresses"]["EipAddress"];
		for (auto value : allEipAddresses)
			networkPackagesObject.eipAddresses.push_back(value.asString());
		networkPackages_.push_back(networkPackagesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string DescribeNetworkPackagesResult::getNextToken()const
{
	return nextToken_;
}

std::vector<DescribeNetworkPackagesResult::NetworkPackage> DescribeNetworkPackagesResult::getNetworkPackages()const
{
	return networkPackages_;
}

