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

#include <alibabacloud/r-kvstore/model/DescribeUserClusterHostResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeUserClusterHostResult::DescribeUserClusterHostResult() :
	ServiceResult()
{}

DescribeUserClusterHostResult::DescribeUserClusterHostResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUserClusterHostResult::~DescribeUserClusterHostResult()
{}

void DescribeUserClusterHostResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allHostItemsNode = value["HostItems"]["HostInfo"];
	for (auto valueHostItemsHostInfo : allHostItemsNode)
	{
		HostInfo hostItemsObject;
		if(!valueHostItemsHostInfo["ClusterId"].isNull())
			hostItemsObject.clusterId = valueHostItemsHostInfo["ClusterId"].asString();
		if(!valueHostItemsHostInfo["HostId"].isNull())
			hostItemsObject.hostId = valueHostItemsHostInfo["HostId"].asString();
		if(!valueHostItemsHostInfo["Engine"].isNull())
			hostItemsObject.engine = valueHostItemsHostInfo["Engine"].asString();
		if(!valueHostItemsHostInfo["HostIP"].isNull())
			hostItemsObject.hostIP = valueHostItemsHostInfo["HostIP"].asString();
		if(!valueHostItemsHostInfo["HostStatus"].isNull())
			hostItemsObject.hostStatus = valueHostItemsHostInfo["HostStatus"].asString();
		if(!valueHostItemsHostInfo["AllocationStatus"].isNull())
			hostItemsObject.allocationStatus = valueHostItemsHostInfo["AllocationStatus"].asString();
		if(!valueHostItemsHostInfo["HostCpu"].isNull())
			hostItemsObject.hostCpu = valueHostItemsHostInfo["HostCpu"].asString();
		if(!valueHostItemsHostInfo["HostMem"].isNull())
			hostItemsObject.hostMem = valueHostItemsHostInfo["HostMem"].asString();
		if(!valueHostItemsHostInfo["HostStorage"].isNull())
			hostItemsObject.hostStorage = valueHostItemsHostInfo["HostStorage"].asString();
		if(!valueHostItemsHostInfo["HostName"].isNull())
			hostItemsObject.hostName = valueHostItemsHostInfo["HostName"].asString();
		if(!valueHostItemsHostInfo["Id"].isNull())
			hostItemsObject.id = std::stoi(valueHostItemsHostInfo["Id"].asString());
		if(!valueHostItemsHostInfo["CreateTime"].isNull())
			hostItemsObject.createTime = valueHostItemsHostInfo["CreateTime"].asString();
		if(!valueHostItemsHostInfo["InstanceNumber"].isNull())
			hostItemsObject.instanceNumber = valueHostItemsHostInfo["InstanceNumber"].asString();
		if(!valueHostItemsHostInfo["RegionId"].isNull())
			hostItemsObject.regionId = valueHostItemsHostInfo["RegionId"].asString();
		if(!valueHostItemsHostInfo["ZoneId"].isNull())
			hostItemsObject.zoneId = valueHostItemsHostInfo["ZoneId"].asString();
		if(!valueHostItemsHostInfo["HostClass"].isNull())
			hostItemsObject.hostClass = valueHostItemsHostInfo["HostClass"].asString();
		if(!valueHostItemsHostInfo["ExpireTime"].isNull())
			hostItemsObject.expireTime = valueHostItemsHostInfo["ExpireTime"].asString();
		if(!valueHostItemsHostInfo["ChargeType"].isNull())
			hostItemsObject.chargeType = valueHostItemsHostInfo["ChargeType"].asString();
		hostItems_.push_back(hostItemsObject);
	}
	if(!value["MaxRecordsPerPage"].isNull())
		maxRecordsPerPage_ = value["MaxRecordsPerPage"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalRecords"].isNull())
		totalRecords_ = std::stoi(value["TotalRecords"].asString());
	if(!value["ItemNumbers"].isNull())
		itemNumbers_ = std::stoi(value["ItemNumbers"].asString());

}

std::string DescribeUserClusterHostResult::getMaxRecordsPerPage()const
{
	return maxRecordsPerPage_;
}

std::vector<DescribeUserClusterHostResult::HostInfo> DescribeUserClusterHostResult::getHostItems()const
{
	return hostItems_;
}

int DescribeUserClusterHostResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeUserClusterHostResult::getTotalRecords()const
{
	return totalRecords_;
}

int DescribeUserClusterHostResult::getItemNumbers()const
{
	return itemNumbers_;
}

