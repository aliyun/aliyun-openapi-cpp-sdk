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

#include <alibabacloud/ens/model/DescribeSecondaryPublicIpAddressesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeSecondaryPublicIpAddressesResult::DescribeSecondaryPublicIpAddressesResult() :
	ServiceResult()
{}

DescribeSecondaryPublicIpAddressesResult::DescribeSecondaryPublicIpAddressesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSecondaryPublicIpAddressesResult::~DescribeSecondaryPublicIpAddressesResult()
{}

void DescribeSecondaryPublicIpAddressesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSecondaryPublicIpAddressesNode = value["SecondaryPublicIpAddresses"]["ip"];
	for (auto valueSecondaryPublicIpAddressesip : allSecondaryPublicIpAddressesNode)
	{
		Ip secondaryPublicIpAddressesObject;
		if(!valueSecondaryPublicIpAddressesip["CidrMask"].isNull())
			secondaryPublicIpAddressesObject.cidrMask = std::stoi(valueSecondaryPublicIpAddressesip["CidrMask"].asString());
		if(!valueSecondaryPublicIpAddressesip["Gateway"].isNull())
			secondaryPublicIpAddressesObject.gateway = valueSecondaryPublicIpAddressesip["Gateway"].asString();
		if(!valueSecondaryPublicIpAddressesip["SecondaryPublicIpAddress"].isNull())
			secondaryPublicIpAddressesObject.secondaryPublicIpAddress = valueSecondaryPublicIpAddressesip["SecondaryPublicIpAddress"].asString();
		if(!valueSecondaryPublicIpAddressesip["Isp"].isNull())
			secondaryPublicIpAddressesObject.isp = valueSecondaryPublicIpAddressesip["Isp"].asString();
		if(!valueSecondaryPublicIpAddressesip["SecondaryPublicIpId"].isNull())
			secondaryPublicIpAddressesObject.secondaryPublicIpId = valueSecondaryPublicIpAddressesip["SecondaryPublicIpId"].asString();
		if(!valueSecondaryPublicIpAddressesip["EnsRegionId"].isNull())
			secondaryPublicIpAddressesObject.ensRegionId = valueSecondaryPublicIpAddressesip["EnsRegionId"].asString();
		if(!valueSecondaryPublicIpAddressesip["CreationTime"].isNull())
			secondaryPublicIpAddressesObject.creationTime = valueSecondaryPublicIpAddressesip["CreationTime"].asString();
		if(!valueSecondaryPublicIpAddressesip["IpVersion"].isNull())
			secondaryPublicIpAddressesObject.ipVersion = valueSecondaryPublicIpAddressesip["IpVersion"].asString();
		secondaryPublicIpAddresses_.push_back(secondaryPublicIpAddressesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeSecondaryPublicIpAddressesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeSecondaryPublicIpAddressesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeSecondaryPublicIpAddressesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeSecondaryPublicIpAddressesResult::Ip> DescribeSecondaryPublicIpAddressesResult::getSecondaryPublicIpAddresses()const
{
	return secondaryPublicIpAddresses_;
}

