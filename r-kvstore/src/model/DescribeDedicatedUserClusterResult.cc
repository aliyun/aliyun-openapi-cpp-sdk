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

#include <alibabacloud/r-kvstore/model/DescribeDedicatedUserClusterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeDedicatedUserClusterResult::DescribeDedicatedUserClusterResult() :
	ServiceResult()
{}

DescribeDedicatedUserClusterResult::DescribeDedicatedUserClusterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDedicatedUserClusterResult::~DescribeDedicatedUserClusterResult()
{}

void DescribeDedicatedUserClusterResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allClusterItemsNode = value["ClusterItems"]["ClusterInfo"];
	for (auto valueClusterItemsClusterInfo : allClusterItemsNode)
	{
		ClusterInfo clusterItemsObject;
		if(!valueClusterItemsClusterInfo["ClusterId"].isNull())
			clusterItemsObject.clusterId = valueClusterItemsClusterInfo["ClusterId"].asString();
		if(!valueClusterItemsClusterInfo["ClusterName"].isNull())
			clusterItemsObject.clusterName = valueClusterItemsClusterInfo["ClusterName"].asString();
		if(!valueClusterItemsClusterInfo["HostNumbers"].isNull())
			clusterItemsObject.hostNumbers = std::stoi(valueClusterItemsClusterInfo["HostNumbers"].asString());
		if(!valueClusterItemsClusterInfo["InstanceNumbers"].isNull())
			clusterItemsObject.instanceNumbers = std::stoi(valueClusterItemsClusterInfo["InstanceNumbers"].asString());
		if(!valueClusterItemsClusterInfo["CpuOverAllocationRatio"].isNull())
			clusterItemsObject.cpuOverAllocationRatio = std::stoi(valueClusterItemsClusterInfo["CpuOverAllocationRatio"].asString());
		if(!valueClusterItemsClusterInfo["MemoryOverAllocationRatio"].isNull())
			clusterItemsObject.memoryOverAllocationRatio = std::stoi(valueClusterItemsClusterInfo["MemoryOverAllocationRatio"].asString());
		if(!valueClusterItemsClusterInfo["DiskOverAllocationRatio"].isNull())
			clusterItemsObject.diskOverAllocationRatio = std::stoi(valueClusterItemsClusterInfo["DiskOverAllocationRatio"].asString());
		if(!valueClusterItemsClusterInfo["AllocationPolicy"].isNull())
			clusterItemsObject.allocationPolicy = valueClusterItemsClusterInfo["AllocationPolicy"].asString();
		if(!valueClusterItemsClusterInfo["HostReplacePolicy"].isNull())
			clusterItemsObject.hostReplacePolicy = valueClusterItemsClusterInfo["HostReplacePolicy"].asString();
		if(!valueClusterItemsClusterInfo["CreateTime"].isNull())
			clusterItemsObject.createTime = valueClusterItemsClusterInfo["CreateTime"].asString();
		clusterItems_.push_back(clusterItemsObject);
	}
	if(!value["MaxRecordsPerPage"].isNull())
		maxRecordsPerPage_ = std::stoi(value["MaxRecordsPerPage"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalRecords"].isNull())
		totalRecords_ = std::stoi(value["TotalRecords"].asString());
	if(!value["ItemsNumbers"].isNull())
		itemsNumbers_ = std::stoi(value["ItemsNumbers"].asString());

}

int DescribeDedicatedUserClusterResult::getMaxRecordsPerPage()const
{
	return maxRecordsPerPage_;
}

int DescribeDedicatedUserClusterResult::getItemsNumbers()const
{
	return itemsNumbers_;
}

int DescribeDedicatedUserClusterResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeDedicatedUserClusterResult::getTotalRecords()const
{
	return totalRecords_;
}

std::vector<DescribeDedicatedUserClusterResult::ClusterInfo> DescribeDedicatedUserClusterResult::getClusterItems()const
{
	return clusterItems_;
}

