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

#include <alibabacloud/polardb/model/DescribeDBClustersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeDBClustersResult::DescribeDBClustersResult() :
	ServiceResult()
{}

DescribeDBClustersResult::DescribeDBClustersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBClustersResult::~DescribeDBClustersResult()
{}

void DescribeDBClustersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["DBCluster"];
	for (auto valueItemsDBCluster : allItemsNode)
	{
		DBCluster itemsObject;
		if(!valueItemsDBCluster["VpcId"].isNull())
			itemsObject.vpcId = valueItemsDBCluster["VpcId"].asString();
		if(!valueItemsDBCluster["VswitchId"].isNull())
			itemsObject.vswitchId = valueItemsDBCluster["VswitchId"].asString();
		if(!valueItemsDBCluster["ExpireTime"].isNull())
			itemsObject.expireTime = valueItemsDBCluster["ExpireTime"].asString();
		if(!valueItemsDBCluster["Expired"].isNull())
			itemsObject.expired = valueItemsDBCluster["Expired"].asString();
		if(!valueItemsDBCluster["DBNodeNumber"].isNull())
			itemsObject.dBNodeNumber = std::stoi(valueItemsDBCluster["DBNodeNumber"].asString());
		if(!valueItemsDBCluster["CreateTime"].isNull())
			itemsObject.createTime = valueItemsDBCluster["CreateTime"].asString();
		if(!valueItemsDBCluster["PayType"].isNull())
			itemsObject.payType = valueItemsDBCluster["PayType"].asString();
		if(!valueItemsDBCluster["StoragePayType"].isNull())
			itemsObject.storagePayType = valueItemsDBCluster["StoragePayType"].asString();
		if(!valueItemsDBCluster["ServerlessType"].isNull())
			itemsObject.serverlessType = valueItemsDBCluster["ServerlessType"].asString();
		if(!valueItemsDBCluster["StrictConsistency"].isNull())
			itemsObject.strictConsistency = valueItemsDBCluster["StrictConsistency"].asString();
		if(!valueItemsDBCluster["DBNodeClass"].isNull())
			itemsObject.dBNodeClass = valueItemsDBCluster["DBNodeClass"].asString();
		if(!valueItemsDBCluster["DBType"].isNull())
			itemsObject.dBType = valueItemsDBCluster["DBType"].asString();
		if(!valueItemsDBCluster["LockMode"].isNull())
			itemsObject.lockMode = valueItemsDBCluster["LockMode"].asString();
		if(!valueItemsDBCluster["RegionId"].isNull())
			itemsObject.regionId = valueItemsDBCluster["RegionId"].asString();
		if(!valueItemsDBCluster["DeletionLock"].isNull())
			itemsObject.deletionLock = std::stoi(valueItemsDBCluster["DeletionLock"].asString());
		if(!valueItemsDBCluster["DBVersion"].isNull())
			itemsObject.dBVersion = valueItemsDBCluster["DBVersion"].asString();
		if(!valueItemsDBCluster["DBClusterId"].isNull())
			itemsObject.dBClusterId = valueItemsDBCluster["DBClusterId"].asString();
		if(!valueItemsDBCluster["DBClusterStatus"].isNull())
			itemsObject.dBClusterStatus = valueItemsDBCluster["DBClusterStatus"].asString();
		if(!valueItemsDBCluster["ResourceGroupId"].isNull())
			itemsObject.resourceGroupId = valueItemsDBCluster["ResourceGroupId"].asString();
		if(!valueItemsDBCluster["StorageUsed"].isNull())
			itemsObject.storageUsed = std::stol(valueItemsDBCluster["StorageUsed"].asString());
		if(!valueItemsDBCluster["CompressStorageUsed"].isNull())
			itemsObject.compressStorageUsed = std::stol(valueItemsDBCluster["CompressStorageUsed"].asString());
		if(!valueItemsDBCluster["StorageSpace"].isNull())
			itemsObject.storageSpace = std::stol(valueItemsDBCluster["StorageSpace"].asString());
		if(!valueItemsDBCluster["DBClusterNetworkType"].isNull())
			itemsObject.dBClusterNetworkType = valueItemsDBCluster["DBClusterNetworkType"].asString();
		if(!valueItemsDBCluster["DBClusterDescription"].isNull())
			itemsObject.dBClusterDescription = valueItemsDBCluster["DBClusterDescription"].asString();
		if(!valueItemsDBCluster["ZoneId"].isNull())
			itemsObject.zoneId = valueItemsDBCluster["ZoneId"].asString();
		if(!valueItemsDBCluster["Engine"].isNull())
			itemsObject.engine = valueItemsDBCluster["Engine"].asString();
		if(!valueItemsDBCluster["Category"].isNull())
			itemsObject.category = valueItemsDBCluster["Category"].asString();
		if(!valueItemsDBCluster["AiType"].isNull())
			itemsObject.aiType = valueItemsDBCluster["AiType"].asString();
		if(!valueItemsDBCluster["CpuCores"].isNull())
			itemsObject.cpuCores = valueItemsDBCluster["CpuCores"].asString();
		if(!valueItemsDBCluster["MemorySize"].isNull())
			itemsObject.memorySize = valueItemsDBCluster["MemorySize"].asString();
		if(!valueItemsDBCluster["RemoteMemorySize"].isNull())
			itemsObject.remoteMemorySize = valueItemsDBCluster["RemoteMemorySize"].asString();
		if(!valueItemsDBCluster["SubCategory"].isNull())
			itemsObject.subCategory = valueItemsDBCluster["SubCategory"].asString();
		if(!valueItemsDBCluster["DeployUnit"].isNull())
			itemsObject.deployUnit = valueItemsDBCluster["DeployUnit"].asString();
		if(!valueItemsDBCluster["StorageType"].isNull())
			itemsObject.storageType = valueItemsDBCluster["StorageType"].asString();
		if(!valueItemsDBCluster["HotStandbyCluster"].isNull())
			itemsObject.hotStandbyCluster = valueItemsDBCluster["HotStandbyCluster"].asString();
		if(!valueItemsDBCluster["EngineMigrationStatus"].isNull())
			itemsObject.engineMigrationStatus = valueItemsDBCluster["EngineMigrationStatus"].asString();
		auto allTagsNode = valueItemsDBCluster["Tags"]["Tag"];
		for (auto valueItemsDBClusterTagsTag : allTagsNode)
		{
			DBCluster::Tag tagsObject;
			if(!valueItemsDBClusterTagsTag["Key"].isNull())
				tagsObject.key = valueItemsDBClusterTagsTag["Key"].asString();
			if(!valueItemsDBClusterTagsTag["Value"].isNull())
				tagsObject.value = valueItemsDBClusterTagsTag["Value"].asString();
			itemsObject.tags.push_back(tagsObject);
		}
		auto allDBNodesNode = valueItemsDBCluster["DBNodes"]["DBNode"];
		for (auto valueItemsDBClusterDBNodesDBNode : allDBNodesNode)
		{
			DBCluster::DBNode dBNodesObject;
			if(!valueItemsDBClusterDBNodesDBNode["DBNodeClass"].isNull())
				dBNodesObject.dBNodeClass = valueItemsDBClusterDBNodesDBNode["DBNodeClass"].asString();
			if(!valueItemsDBClusterDBNodesDBNode["ZoneId"].isNull())
				dBNodesObject.zoneId = valueItemsDBClusterDBNodesDBNode["ZoneId"].asString();
			if(!valueItemsDBClusterDBNodesDBNode["DBNodeRole"].isNull())
				dBNodesObject.dBNodeRole = valueItemsDBClusterDBNodesDBNode["DBNodeRole"].asString();
			if(!valueItemsDBClusterDBNodesDBNode["DBNodeId"].isNull())
				dBNodesObject.dBNodeId = valueItemsDBClusterDBNodesDBNode["DBNodeId"].asString();
			if(!valueItemsDBClusterDBNodesDBNode["RegionId"].isNull())
				dBNodesObject.regionId = valueItemsDBClusterDBNodesDBNode["RegionId"].asString();
			if(!valueItemsDBClusterDBNodesDBNode["Serverless"].isNull())
				dBNodesObject.serverless = valueItemsDBClusterDBNodesDBNode["Serverless"].asString();
			if(!valueItemsDBClusterDBNodesDBNode["ImciSwitch"].isNull())
				dBNodesObject.imciSwitch = valueItemsDBClusterDBNodesDBNode["ImciSwitch"].asString();
			if(!valueItemsDBClusterDBNodesDBNode["HotReplicaMode"].isNull())
				dBNodesObject.hotReplicaMode = valueItemsDBClusterDBNodesDBNode["HotReplicaMode"].asString();
			itemsObject.dBNodes.push_back(dBNodesObject);
		}
		items_.push_back(itemsObject);
	}
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeDBClustersResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeDBClustersResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeDBClustersResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDBClustersResult::DBCluster> DescribeDBClustersResult::getItems()const
{
	return items_;
}

