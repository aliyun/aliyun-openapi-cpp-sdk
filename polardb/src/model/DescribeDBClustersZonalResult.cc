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

#include <alibabacloud/polardb/model/DescribeDBClustersZonalResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeDBClustersZonalResult::DescribeDBClustersZonalResult() :
	ServiceResult()
{}

DescribeDBClustersZonalResult::DescribeDBClustersZonalResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBClustersZonalResult::~DescribeDBClustersZonalResult()
{}

void DescribeDBClustersZonalResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["DBCluster"];
	for (auto valueItemsDBCluster : allItemsNode)
	{
		DBCluster itemsObject;
		if(!valueItemsDBCluster["Category"].isNull())
			itemsObject.category = valueItemsDBCluster["Category"].asString();
		if(!valueItemsDBCluster["DBClusterId"].isNull())
			itemsObject.dBClusterId = valueItemsDBCluster["DBClusterId"].asString();
		if(!valueItemsDBCluster["DBType"].isNull())
			itemsObject.dBType = valueItemsDBCluster["DBType"].asString();
		if(!valueItemsDBCluster["CentralControlRegionId"].isNull())
			itemsObject.centralControlRegionId = valueItemsDBCluster["CentralControlRegionId"].asString();
		if(!valueItemsDBCluster["DBVersion"].isNull())
			itemsObject.dBVersion = valueItemsDBCluster["DBVersion"].asString();
		if(!valueItemsDBCluster["CloudProvider"].isNull())
			itemsObject.cloudProvider = valueItemsDBCluster["CloudProvider"].asString();
		if(!valueItemsDBCluster["StorageType"].isNull())
			itemsObject.storageType = valueItemsDBCluster["StorageType"].asString();
		if(!valueItemsDBCluster["ZoneId"].isNull())
			itemsObject.zoneId = valueItemsDBCluster["ZoneId"].asString();
		if(!valueItemsDBCluster["DBClusterStatus"].isNull())
			itemsObject.dBClusterStatus = valueItemsDBCluster["DBClusterStatus"].asString();
		if(!valueItemsDBCluster["CreateTime"].isNull())
			itemsObject.createTime = valueItemsDBCluster["CreateTime"].asString();
		if(!valueItemsDBCluster["DBClusterDescription"].isNull())
			itemsObject.dBClusterDescription = valueItemsDBCluster["DBClusterDescription"].asString();
		if(!valueItemsDBCluster["Expired"].isNull())
			itemsObject.expired = valueItemsDBCluster["Expired"].asString();
		if(!valueItemsDBCluster["PayType"].isNull())
			itemsObject.payType = valueItemsDBCluster["PayType"].asString();
		if(!valueItemsDBCluster["LockMode"].isNull())
			itemsObject.lockMode = valueItemsDBCluster["LockMode"].asString();
		if(!valueItemsDBCluster["VswitchId"].isNull())
			itemsObject.vswitchId = valueItemsDBCluster["VswitchId"].asString();
		if(!valueItemsDBCluster["StrictConsistency"].isNull())
			itemsObject.strictConsistency = valueItemsDBCluster["StrictConsistency"].asString();
		if(!valueItemsDBCluster["DBNodeClass"].isNull())
			itemsObject.dBNodeClass = valueItemsDBCluster["DBNodeClass"].asString();
		if(!valueItemsDBCluster["StorageUsed"].isNull())
			itemsObject.storageUsed = std::stol(valueItemsDBCluster["StorageUsed"].asString());
		if(!valueItemsDBCluster["ENSRegionId"].isNull())
			itemsObject.eNSRegionId = valueItemsDBCluster["ENSRegionId"].asString();
		if(!valueItemsDBCluster["CnNodeCount"].isNull())
			itemsObject.cnNodeCount = std::stoi(valueItemsDBCluster["CnNodeCount"].asString());
		if(!valueItemsDBCluster["DBNodeNumber"].isNull())
			itemsObject.dBNodeNumber = std::stoi(valueItemsDBCluster["DBNodeNumber"].asString());
		if(!valueItemsDBCluster["VpcId"].isNull())
			itemsObject.vpcId = valueItemsDBCluster["VpcId"].asString();
		if(!valueItemsDBCluster["CnClass"].isNull())
			itemsObject.cnClass = valueItemsDBCluster["CnClass"].asString();
		if(!valueItemsDBCluster["StorageSpace"].isNull())
			itemsObject.storageSpace = std::stol(valueItemsDBCluster["StorageSpace"].asString());
		if(!valueItemsDBCluster["ServerlessType"].isNull())
			itemsObject.serverlessType = valueItemsDBCluster["ServerlessType"].asString();
		if(!valueItemsDBCluster["AiType"].isNull())
			itemsObject.aiType = valueItemsDBCluster["AiType"].asString();
		if(!valueItemsDBCluster["CpuCores"].isNull())
			itemsObject.cpuCores = valueItemsDBCluster["CpuCores"].asString();
		if(!valueItemsDBCluster["CloudInstanceIp"].isNull())
			itemsObject.cloudInstanceIp = valueItemsDBCluster["CloudInstanceIp"].asString();
		if(!valueItemsDBCluster["SubCategory"].isNull())
			itemsObject.subCategory = valueItemsDBCluster["SubCategory"].asString();
		if(!valueItemsDBCluster["ExpireTime"].isNull())
			itemsObject.expireTime = valueItemsDBCluster["ExpireTime"].asString();
		auto allTagsNode = valueItemsDBCluster["Tags"]["Tag"];
		for (auto valueItemsDBClusterTagsTag : allTagsNode)
		{
			DBCluster::Tag tagsObject;
			if(!valueItemsDBClusterTagsTag["Value"].isNull())
				tagsObject.value = valueItemsDBClusterTagsTag["Value"].asString();
			if(!valueItemsDBClusterTagsTag["Key"].isNull())
				tagsObject.key = valueItemsDBClusterTagsTag["Key"].asString();
			itemsObject.tags.push_back(tagsObject);
		}
		items_.push_back(itemsObject);
	}
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

int DescribeDBClustersZonalResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeDBClustersZonalResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

std::string DescribeDBClustersZonalResult::getNextToken()const
{
	return nextToken_;
}

int DescribeDBClustersZonalResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeDBClustersZonalResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<DescribeDBClustersZonalResult::DBCluster> DescribeDBClustersZonalResult::getItems()const
{
	return items_;
}

