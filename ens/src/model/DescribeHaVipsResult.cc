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

#include <alibabacloud/ens/model/DescribeHaVipsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeHaVipsResult::DescribeHaVipsResult() :
	ServiceResult()
{}

DescribeHaVipsResult::DescribeHaVipsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeHaVipsResult::~DescribeHaVipsResult()
{}

void DescribeHaVipsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allHaVipsNode = value["HaVips"]["HaVip"];
	for (auto valueHaVipsHaVip : allHaVipsNode)
	{
		HaVip haVipsObject;
		if(!valueHaVipsHaVip["Status"].isNull())
			haVipsObject.status = valueHaVipsHaVip["Status"].asString();
		if(!valueHaVipsHaVip["CreationTime"].isNull())
			haVipsObject.creationTime = valueHaVipsHaVip["CreationTime"].asString();
		if(!valueHaVipsHaVip["Description"].isNull())
			haVipsObject.description = valueHaVipsHaVip["Description"].asString();
		if(!valueHaVipsHaVip["HaVipId"].isNull())
			haVipsObject.haVipId = valueHaVipsHaVip["HaVipId"].asString();
		if(!valueHaVipsHaVip["Name"].isNull())
			haVipsObject.name = valueHaVipsHaVip["Name"].asString();
		if(!valueHaVipsHaVip["EnsRegionId"].isNull())
			haVipsObject.ensRegionId = valueHaVipsHaVip["EnsRegionId"].asString();
		if(!valueHaVipsHaVip["NetworkId"].isNull())
			haVipsObject.networkId = valueHaVipsHaVip["NetworkId"].asString();
		if(!valueHaVipsHaVip["VSwitchId"].isNull())
			haVipsObject.vSwitchId = valueHaVipsHaVip["VSwitchId"].asString();
		if(!valueHaVipsHaVip["IpAddress"].isNull())
			haVipsObject.ipAddress = valueHaVipsHaVip["IpAddress"].asString();
		auto allAssociatedEipAddressesNode = valueHaVipsHaVip["AssociatedEipAddresses"]["eip"];
		for (auto valueHaVipsHaVipAssociatedEipAddresseseip : allAssociatedEipAddressesNode)
		{
			HaVip::Eip associatedEipAddressesObject;
			if(!valueHaVipsHaVipAssociatedEipAddresseseip["EipId"].isNull())
				associatedEipAddressesObject.eipId = valueHaVipsHaVipAssociatedEipAddresseseip["EipId"].asString();
			if(!valueHaVipsHaVipAssociatedEipAddresseseip["Eip"].isNull())
				associatedEipAddressesObject.eip = valueHaVipsHaVipAssociatedEipAddresseseip["Eip"].asString();
			haVipsObject.associatedEipAddresses.push_back(associatedEipAddressesObject);
		}
		auto allAssociatedInstancesNode = valueHaVipsHaVip["AssociatedInstances"]["relation"];
		for (auto valueHaVipsHaVipAssociatedInstancesrelation : allAssociatedInstancesNode)
		{
			HaVip::Relation associatedInstancesObject;
			if(!valueHaVipsHaVipAssociatedInstancesrelation["InstanceId"].isNull())
				associatedInstancesObject.instanceId = valueHaVipsHaVipAssociatedInstancesrelation["InstanceId"].asString();
			if(!valueHaVipsHaVipAssociatedInstancesrelation["InstanceType"].isNull())
				associatedInstancesObject.instanceType = valueHaVipsHaVipAssociatedInstancesrelation["InstanceType"].asString();
			if(!valueHaVipsHaVipAssociatedInstancesrelation["IpAddress"].isNull())
				associatedInstancesObject.ipAddress = valueHaVipsHaVipAssociatedInstancesrelation["IpAddress"].asString();
			if(!valueHaVipsHaVipAssociatedInstancesrelation["Status"].isNull())
				associatedInstancesObject.status = valueHaVipsHaVipAssociatedInstancesrelation["Status"].asString();
			if(!valueHaVipsHaVipAssociatedInstancesrelation["CreationTime"].isNull())
				associatedInstancesObject.creationTime = valueHaVipsHaVipAssociatedInstancesrelation["CreationTime"].asString();
			haVipsObject.associatedInstances.push_back(associatedInstancesObject);
		}
		haVips_.push_back(haVipsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();

}

std::string DescribeHaVipsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeHaVipsResult::HaVip> DescribeHaVipsResult::getHaVips()const
{
	return haVips_;
}

std::string DescribeHaVipsResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeHaVipsResult::getPageNumber()const
{
	return pageNumber_;
}

