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
	auto allItems = value["Items"]["DBCluster"];
	for (auto value : allItems)
	{
		DBCluster itemsObject;
		if(!value["DBClusterId"].isNull())
			itemsObject.dBClusterId = value["DBClusterId"].asString();
		if(!value["DBClusterDescription"].isNull())
			itemsObject.dBClusterDescription = value["DBClusterDescription"].asString();
		if(!value["PayType"].isNull())
			itemsObject.payType = value["PayType"].asString();
		if(!value["DBClusterNetworkType"].isNull())
			itemsObject.dBClusterNetworkType = value["DBClusterNetworkType"].asString();
		if(!value["RegionId"].isNull())
			itemsObject.regionId = value["RegionId"].asString();
		if(!value["ZoneId"].isNull())
			itemsObject.zoneId = value["ZoneId"].asString();
		if(!value["ExpireTime"].isNull())
			itemsObject.expireTime = value["ExpireTime"].asString();
		if(!value["Expired"].isNull())
			itemsObject.expired = value["Expired"].asString();
		if(!value["DBClusterStatus"].isNull())
			itemsObject.dBClusterStatus = value["DBClusterStatus"].asString();
		if(!value["Engine"].isNull())
			itemsObject.engine = value["Engine"].asString();
		if(!value["DBType"].isNull())
			itemsObject.dBType = value["DBType"].asString();
		if(!value["DBVersion"].isNull())
			itemsObject.dBVersion = value["DBVersion"].asString();
		if(!value["LockMode"].isNull())
			itemsObject.lockMode = value["LockMode"].asString();
		if(!value["DeletionLock"].isNull())
			itemsObject.deletionLock = std::stoi(value["DeletionLock"].asString());
		if(!value["CreateTime"].isNull())
			itemsObject.createTime = value["CreateTime"].asString();
		if(!value["VpcId"].isNull())
			itemsObject.vpcId = value["VpcId"].asString();
		if(!value["DBNodeNumber"].isNull())
			itemsObject.dBNodeNumber = std::stoi(value["DBNodeNumber"].asString());
		if(!value["DBNodeClass"].isNull())
			itemsObject.dBNodeClass = value["DBNodeClass"].asString();
		if(!value["StorageUsed"].isNull())
			itemsObject.storageUsed = std::stol(value["StorageUsed"].asString());
		auto allDBNodes = value["DBNodes"]["DBNode"];
		for (auto value : allDBNodes)
		{
			DBCluster::DBNode dBNodesObject;
			if(!value["DBNodeId"].isNull())
				dBNodesObject.dBNodeId = value["DBNodeId"].asString();
			if(!value["DBNodeClass"].isNull())
				dBNodesObject.dBNodeClass = value["DBNodeClass"].asString();
			if(!value["DBNodeRole"].isNull())
				dBNodesObject.dBNodeRole = value["DBNodeRole"].asString();
			if(!value["RegionId"].isNull())
				dBNodesObject.regionId = value["RegionId"].asString();
			if(!value["ZoneId"].isNull())
				dBNodesObject.zoneId = value["ZoneId"].asString();
			itemsObject.dBNodes.push_back(dBNodesObject);
		}
		auto allTags = value["Tags"]["Tag"];
		for (auto value : allTags)
		{
			DBCluster::Tag tagsObject;
			if(!value["Key"].isNull())
				tagsObject.key = value["Key"].asString();
			if(!value["Value"].isNull())
				tagsObject.value = value["Value"].asString();
			itemsObject.tags.push_back(tagsObject);
		}
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

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

