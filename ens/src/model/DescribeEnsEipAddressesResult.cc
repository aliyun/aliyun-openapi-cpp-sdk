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

#include <alibabacloud/ens/model/DescribeEnsEipAddressesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeEnsEipAddressesResult::DescribeEnsEipAddressesResult() :
	ServiceResult()
{}

DescribeEnsEipAddressesResult::DescribeEnsEipAddressesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEnsEipAddressesResult::~DescribeEnsEipAddressesResult()
{}

void DescribeEnsEipAddressesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEipAddressesNode = value["EipAddresses"]["EipAddress"];
	for (auto valueEipAddressesEipAddress : allEipAddressesNode)
	{
		EipAddress eipAddressesObject;
		if(!valueEipAddressesEipAddress["AllocationId"].isNull())
			eipAddressesObject.allocationId = valueEipAddressesEipAddress["AllocationId"].asString();
		if(!valueEipAddressesEipAddress["AllocationTime"].isNull())
			eipAddressesObject.allocationTime = valueEipAddressesEipAddress["AllocationTime"].asString();
		if(!valueEipAddressesEipAddress["Bandwidth"].isNull())
			eipAddressesObject.bandwidth = std::stoi(valueEipAddressesEipAddress["Bandwidth"].asString());
		if(!valueEipAddressesEipAddress["ChargeType"].isNull())
			eipAddressesObject.chargeType = valueEipAddressesEipAddress["ChargeType"].asString();
		if(!valueEipAddressesEipAddress["Description"].isNull())
			eipAddressesObject.description = valueEipAddressesEipAddress["Description"].asString();
		if(!valueEipAddressesEipAddress["InstanceId"].isNull())
			eipAddressesObject.instanceId = valueEipAddressesEipAddress["InstanceId"].asString();
		if(!valueEipAddressesEipAddress["InstanceType"].isNull())
			eipAddressesObject.instanceType = valueEipAddressesEipAddress["InstanceType"].asString();
		if(!valueEipAddressesEipAddress["InternetChargeType"].isNull())
			eipAddressesObject.internetChargeType = valueEipAddressesEipAddress["InternetChargeType"].asString();
		if(!valueEipAddressesEipAddress["IpAddress"].isNull())
			eipAddressesObject.ipAddress = valueEipAddressesEipAddress["IpAddress"].asString();
		if(!valueEipAddressesEipAddress["Name"].isNull())
			eipAddressesObject.name = valueEipAddressesEipAddress["Name"].asString();
		if(!valueEipAddressesEipAddress["EnsRegionId"].isNull())
			eipAddressesObject.ensRegionId = valueEipAddressesEipAddress["EnsRegionId"].asString();
		if(!valueEipAddressesEipAddress["Status"].isNull())
			eipAddressesObject.status = valueEipAddressesEipAddress["Status"].asString();
		if(!valueEipAddressesEipAddress["Isp"].isNull())
			eipAddressesObject.isp = valueEipAddressesEipAddress["Isp"].asString();
		if(!valueEipAddressesEipAddress["Standby"].isNull())
			eipAddressesObject.standby = valueEipAddressesEipAddress["Standby"].asString() == "true";
		if(!valueEipAddressesEipAddress["IpStatus"].isNull())
			eipAddressesObject.ipStatus = valueEipAddressesEipAddress["IpStatus"].asString();
		eipAddresses_.push_back(eipAddressesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeEnsEipAddressesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeEnsEipAddressesResult::EipAddress> DescribeEnsEipAddressesResult::getEipAddresses()const
{
	return eipAddresses_;
}

int DescribeEnsEipAddressesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeEnsEipAddressesResult::getPageNumber()const
{
	return pageNumber_;
}

