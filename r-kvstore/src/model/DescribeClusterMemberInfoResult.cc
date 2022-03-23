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

#include <alibabacloud/r-kvstore/model/DescribeClusterMemberInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeClusterMemberInfoResult::DescribeClusterMemberInfoResult() :
	ServiceResult()
{}

DescribeClusterMemberInfoResult::DescribeClusterMemberInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClusterMemberInfoResult::~DescribeClusterMemberInfoResult()
{}

void DescribeClusterMemberInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allClusterChildrenNode = value["ClusterChildren"]["Children"];
	for (auto valueClusterChildrenChildren : allClusterChildrenNode)
	{
		Children clusterChildrenObject;
		if(!valueClusterChildrenChildren["Capacity"].isNull())
			clusterChildrenObject.capacity = std::stol(valueClusterChildrenChildren["Capacity"].asString());
		if(!valueClusterChildrenChildren["UserId"].isNull())
			clusterChildrenObject.userId = valueClusterChildrenChildren["UserId"].asString();
		if(!valueClusterChildrenChildren["LockReason"].isNull())
			clusterChildrenObject.lockReason = valueClusterChildrenChildren["LockReason"].asString();
		if(!valueClusterChildrenChildren["DiskSizeMB"].isNull())
			clusterChildrenObject.diskSizeMB = std::stoi(valueClusterChildrenChildren["DiskSizeMB"].asString());
		if(!valueClusterChildrenChildren["BandWidth"].isNull())
			clusterChildrenObject.bandWidth = std::stol(valueClusterChildrenChildren["BandWidth"].asString());
		if(!valueClusterChildrenChildren["CurrentBandWidth"].isNull())
			clusterChildrenObject.currentBandWidth = std::stol(valueClusterChildrenChildren["CurrentBandWidth"].asString());
		if(!valueClusterChildrenChildren["ClassCode"].isNull())
			clusterChildrenObject.classCode = valueClusterChildrenChildren["ClassCode"].asString();
		if(!valueClusterChildrenChildren["Creator"].isNull())
			clusterChildrenObject.creator = std::stoi(valueClusterChildrenChildren["Creator"].asString());
		if(!valueClusterChildrenChildren["BizType"].isNull())
			clusterChildrenObject.bizType = valueClusterChildrenChildren["BizType"].asString();
		if(!valueClusterChildrenChildren["Service"].isNull())
			clusterChildrenObject.service = valueClusterChildrenChildren["Service"].asString();
		if(!valueClusterChildrenChildren["BinlogRetentionDays"].isNull())
			clusterChildrenObject.binlogRetentionDays = std::stoi(valueClusterChildrenChildren["BinlogRetentionDays"].asString());
		if(!valueClusterChildrenChildren["PrimaryInsName"].isNull())
			clusterChildrenObject.primaryInsName = valueClusterChildrenChildren["PrimaryInsName"].asString();
		if(!valueClusterChildrenChildren["Modifier"].isNull())
			clusterChildrenObject.modifier = std::stoi(valueClusterChildrenChildren["Modifier"].asString());
		if(!valueClusterChildrenChildren["Connections"].isNull())
			clusterChildrenObject.connections = std::stol(valueClusterChildrenChildren["Connections"].asString());
		if(!valueClusterChildrenChildren["Health"].isNull())
			clusterChildrenObject.health = valueClusterChildrenChildren["Health"].asString();
		if(!valueClusterChildrenChildren["ResourceGroupName"].isNull())
			clusterChildrenObject.resourceGroupName = valueClusterChildrenChildren["ResourceGroupName"].asString();
		if(!valueClusterChildrenChildren["Nickname"].isNull())
			clusterChildrenObject.nickname = valueClusterChildrenChildren["Nickname"].asString();
		if(!valueClusterChildrenChildren["ServiceVersion"].isNull())
			clusterChildrenObject.serviceVersion = valueClusterChildrenChildren["ServiceVersion"].asString();
		if(!valueClusterChildrenChildren["ReplicaSize"].isNull())
			clusterChildrenObject.replicaSize = std::stoi(valueClusterChildrenChildren["ReplicaSize"].asString());
		if(!valueClusterChildrenChildren["Name"].isNull())
			clusterChildrenObject.name = valueClusterChildrenChildren["Name"].asString();
		if(!valueClusterChildrenChildren["Id"].isNull())
			clusterChildrenObject.id = std::stol(valueClusterChildrenChildren["Id"].asString());
		auto allItemsNode = valueClusterChildrenChildren["Items"]["Item"];
		for (auto valueClusterChildrenChildrenItemsItem : allItemsNode)
		{
			Children::Item itemsObject;
			if(!valueClusterChildrenChildrenItemsItem["Status"].isNull())
				itemsObject.status = valueClusterChildrenChildrenItemsItem["Status"].asString();
			if(!valueClusterChildrenChildrenItemsItem["ZoneId"].isNull())
				itemsObject.zoneId = valueClusterChildrenChildrenItemsItem["ZoneId"].asString();
			if(!valueClusterChildrenChildrenItemsItem["HostName"].isNull())
				itemsObject.hostName = valueClusterChildrenChildrenItemsItem["HostName"].asString();
			if(!valueClusterChildrenChildrenItemsItem["Ip"].isNull())
				itemsObject.ip = valueClusterChildrenChildrenItemsItem["Ip"].asString();
			if(!valueClusterChildrenChildrenItemsItem["Role"].isNull())
				itemsObject.role = valueClusterChildrenChildrenItemsItem["Role"].asString();
			if(!valueClusterChildrenChildrenItemsItem["Id"].isNull())
				itemsObject.id = std::stoi(valueClusterChildrenChildrenItemsItem["Id"].asString());
			auto allPorts = value["Ports"]["Port"];
			for (auto value : allPorts)
				itemsObject.ports.push_back(value.asString());
			clusterChildrenObject.items.push_back(itemsObject);
		}
		clusterChildren_.push_back(clusterChildrenObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeClusterMemberInfoResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeClusterMemberInfoResult::getPageSize()const
{
	return pageSize_;
}

int DescribeClusterMemberInfoResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeClusterMemberInfoResult::Children> DescribeClusterMemberInfoResult::getClusterChildren()const
{
	return clusterChildren_;
}

