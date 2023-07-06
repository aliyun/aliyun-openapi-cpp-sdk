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

#include <alibabacloud/polardb/model/DescribeDBClustersWithBackupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeDBClustersWithBackupsResult::DescribeDBClustersWithBackupsResult() :
	ServiceResult()
{}

DescribeDBClustersWithBackupsResult::DescribeDBClustersWithBackupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBClustersWithBackupsResult::~DescribeDBClustersWithBackupsResult()
{}

void DescribeDBClustersWithBackupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["DBCluster"];
	for (auto valueItemsDBCluster : allItemsNode)
	{
		DBCluster itemsObject;
		if(!valueItemsDBCluster["DeletedTime"].isNull())
			itemsObject.deletedTime = valueItemsDBCluster["DeletedTime"].asString();
		if(!valueItemsDBCluster["VpcId"].isNull())
			itemsObject.vpcId = valueItemsDBCluster["VpcId"].asString();
		if(!valueItemsDBCluster["ExpireTime"].isNull())
			itemsObject.expireTime = valueItemsDBCluster["ExpireTime"].asString();
		if(!valueItemsDBCluster["Expired"].isNull())
			itemsObject.expired = valueItemsDBCluster["Expired"].asString();
		if(!valueItemsDBCluster["CreateTime"].isNull())
			itemsObject.createTime = valueItemsDBCluster["CreateTime"].asString();
		if(!valueItemsDBCluster["DBNodeClass"].isNull())
			itemsObject.dBNodeClass = valueItemsDBCluster["DBNodeClass"].asString();
		if(!valueItemsDBCluster["PayType"].isNull())
			itemsObject.payType = valueItemsDBCluster["PayType"].asString();
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
		if(!valueItemsDBCluster["IsDeleted"].isNull())
			itemsObject.isDeleted = std::stoi(valueItemsDBCluster["IsDeleted"].asString());
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
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());

}

int DescribeDBClustersWithBackupsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeDBClustersWithBackupsResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeDBClustersWithBackupsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDBClustersWithBackupsResult::DBCluster> DescribeDBClustersWithBackupsResult::getItems()const
{
	return items_;
}

