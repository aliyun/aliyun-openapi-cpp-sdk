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

#include <alibabacloud/polardb/model/DescribeGlobalDatabaseNetworksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeGlobalDatabaseNetworksResult::DescribeGlobalDatabaseNetworksResult() :
	ServiceResult()
{}

DescribeGlobalDatabaseNetworksResult::DescribeGlobalDatabaseNetworksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGlobalDatabaseNetworksResult::~DescribeGlobalDatabaseNetworksResult()
{}

void DescribeGlobalDatabaseNetworksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["GlobalDatabaseNetwork"];
	for (auto valueItemsGlobalDatabaseNetwork : allItemsNode)
	{
		GlobalDatabaseNetwork itemsObject;
		if(!valueItemsGlobalDatabaseNetwork["DBVersion"].isNull())
			itemsObject.dBVersion = valueItemsGlobalDatabaseNetwork["DBVersion"].asString();
		if(!valueItemsGlobalDatabaseNetwork["GDNId"].isNull())
			itemsObject.gDNId = valueItemsGlobalDatabaseNetwork["GDNId"].asString();
		if(!valueItemsGlobalDatabaseNetwork["CreateTime"].isNull())
			itemsObject.createTime = valueItemsGlobalDatabaseNetwork["CreateTime"].asString();
		if(!valueItemsGlobalDatabaseNetwork["GDNStatus"].isNull())
			itemsObject.gDNStatus = valueItemsGlobalDatabaseNetwork["GDNStatus"].asString();
		if(!valueItemsGlobalDatabaseNetwork["DBType"].isNull())
			itemsObject.dBType = valueItemsGlobalDatabaseNetwork["DBType"].asString();
		if(!valueItemsGlobalDatabaseNetwork["GDNDescription"].isNull())
			itemsObject.gDNDescription = valueItemsGlobalDatabaseNetwork["GDNDescription"].asString();
		if(!valueItemsGlobalDatabaseNetwork["ZoneId"].isNull())
			itemsObject.zoneId = valueItemsGlobalDatabaseNetwork["ZoneId"].asString();
		auto allDBClustersNode = valueItemsGlobalDatabaseNetwork["DBClusters"]["DBCluster"];
		for (auto valueItemsGlobalDatabaseNetworkDBClustersDBCluster : allDBClustersNode)
		{
			GlobalDatabaseNetwork::DBCluster dBClustersObject;
			if(!valueItemsGlobalDatabaseNetworkDBClustersDBCluster["DBClusterId"].isNull())
				dBClustersObject.dBClusterId = valueItemsGlobalDatabaseNetworkDBClustersDBCluster["DBClusterId"].asString();
			if(!valueItemsGlobalDatabaseNetworkDBClustersDBCluster["Role"].isNull())
				dBClustersObject.role = valueItemsGlobalDatabaseNetworkDBClustersDBCluster["Role"].asString();
			if(!valueItemsGlobalDatabaseNetworkDBClustersDBCluster["RegionId"].isNull())
				dBClustersObject.regionId = valueItemsGlobalDatabaseNetworkDBClustersDBCluster["RegionId"].asString();
			itemsObject.dBClusters.push_back(dBClustersObject);
		}
		auto allOutCloudDBClustersNode = valueItemsGlobalDatabaseNetwork["OutCloudDBClusters"]["OutCloudDBCluster"];
		for (auto valueItemsGlobalDatabaseNetworkOutCloudDBClustersOutCloudDBCluster : allOutCloudDBClustersNode)
		{
			GlobalDatabaseNetwork::OutCloudDBCluster outCloudDBClustersObject;
			if(!valueItemsGlobalDatabaseNetworkOutCloudDBClustersOutCloudDBCluster["OutCloudType"].isNull())
				outCloudDBClustersObject.outCloudType = valueItemsGlobalDatabaseNetworkOutCloudDBClustersOutCloudDBCluster["OutCloudType"].asString();
			if(!valueItemsGlobalDatabaseNetworkOutCloudDBClustersOutCloudDBCluster["DBClusterId"].isNull())
				outCloudDBClustersObject.dBClusterId = valueItemsGlobalDatabaseNetworkOutCloudDBClustersOutCloudDBCluster["DBClusterId"].asString();
			if(!valueItemsGlobalDatabaseNetworkOutCloudDBClustersOutCloudDBCluster["Role"].isNull())
				outCloudDBClustersObject.role = valueItemsGlobalDatabaseNetworkOutCloudDBClustersOutCloudDBCluster["Role"].asString();
			if(!valueItemsGlobalDatabaseNetworkOutCloudDBClustersOutCloudDBCluster["RegionId"].isNull())
				outCloudDBClustersObject.regionId = valueItemsGlobalDatabaseNetworkOutCloudDBClustersOutCloudDBCluster["RegionId"].asString();
			itemsObject.outCloudDBClusters.push_back(outCloudDBClustersObject);
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

int DescribeGlobalDatabaseNetworksResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeGlobalDatabaseNetworksResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeGlobalDatabaseNetworksResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeGlobalDatabaseNetworksResult::GlobalDatabaseNetwork> DescribeGlobalDatabaseNetworksResult::getItems()const
{
	return items_;
}

