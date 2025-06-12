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

#include <alibabacloud/clickhouse/model/DescribeDBClustersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Clickhouse;
using namespace AlibabaCloud::Clickhouse::Model;

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
	auto allDBClustersNode = value["DBClusters"]["DBCluster"];
	for (auto valueDBClustersDBCluster : allDBClustersNode)
	{
		DBCluster dBClustersObject;
		if(!valueDBClustersDBCluster["VpcId"].isNull())
			dBClustersObject.vpcId = valueDBClustersDBCluster["VpcId"].asString();
		if(!valueDBClustersDBCluster["DBNodeCount"].isNull())
			dBClustersObject.dBNodeCount = std::stol(valueDBClustersDBCluster["DBNodeCount"].asString());
		if(!valueDBClustersDBCluster["CreateTime"].isNull())
			dBClustersObject.createTime = valueDBClustersDBCluster["CreateTime"].asString();
		if(!valueDBClustersDBCluster["PayType"].isNull())
			dBClustersObject.payType = valueDBClustersDBCluster["PayType"].asString();
		if(!valueDBClustersDBCluster["StorageType"].isNull())
			dBClustersObject.storageType = valueDBClustersDBCluster["StorageType"].asString();
		if(!valueDBClustersDBCluster["Port"].isNull())
			dBClustersObject.port = std::stoi(valueDBClustersDBCluster["Port"].asString());
		if(!valueDBClustersDBCluster["LockMode"].isNull())
			dBClustersObject.lockMode = valueDBClustersDBCluster["LockMode"].asString();
		if(!valueDBClustersDBCluster["Bid"].isNull())
			dBClustersObject.bid = valueDBClustersDBCluster["Bid"].asString();
		if(!valueDBClustersDBCluster["IsExpired"].isNull())
			dBClustersObject.isExpired = valueDBClustersDBCluster["IsExpired"].asString();
		if(!valueDBClustersDBCluster["VpcCloudInstanceId"].isNull())
			dBClustersObject.vpcCloudInstanceId = valueDBClustersDBCluster["VpcCloudInstanceId"].asString();
		if(!valueDBClustersDBCluster["ScaleOutDisableWriteWindows"].isNull())
			dBClustersObject.scaleOutDisableWriteWindows = valueDBClustersDBCluster["ScaleOutDisableWriteWindows"].asString();
		if(!valueDBClustersDBCluster["DBClusterId"].isNull())
			dBClustersObject.dBClusterId = valueDBClustersDBCluster["DBClusterId"].asString();
		if(!valueDBClustersDBCluster["ConnectionString"].isNull())
			dBClustersObject.connectionString = valueDBClustersDBCluster["ConnectionString"].asString();
		if(!valueDBClustersDBCluster["CommodityCode"].isNull())
			dBClustersObject.commodityCode = valueDBClustersDBCluster["CommodityCode"].asString();
		if(!valueDBClustersDBCluster["ExpireTime"].isNull())
			dBClustersObject.expireTime = valueDBClustersDBCluster["ExpireTime"].asString();
		if(!valueDBClustersDBCluster["DBNodeStorage"].isNull())
			dBClustersObject.dBNodeStorage = std::stol(valueDBClustersDBCluster["DBNodeStorage"].asString());
		if(!valueDBClustersDBCluster["DBNodeClass"].isNull())
			dBClustersObject.dBNodeClass = valueDBClustersDBCluster["DBNodeClass"].asString();
		if(!valueDBClustersDBCluster["AliUid"].isNull())
			dBClustersObject.aliUid = valueDBClustersDBCluster["AliUid"].asString();
		if(!valueDBClustersDBCluster["LockReason"].isNull())
			dBClustersObject.lockReason = valueDBClustersDBCluster["LockReason"].asString();
		if(!valueDBClustersDBCluster["RegionId"].isNull())
			dBClustersObject.regionId = valueDBClustersDBCluster["RegionId"].asString();
		if(!valueDBClustersDBCluster["VSwitchId"].isNull())
			dBClustersObject.vSwitchId = valueDBClustersDBCluster["VSwitchId"].asString();
		if(!valueDBClustersDBCluster["DBClusterStatus"].isNull())
			dBClustersObject.dBClusterStatus = valueDBClustersDBCluster["DBClusterStatus"].asString();
		if(!valueDBClustersDBCluster["DBClusterDescription"].isNull())
			dBClustersObject.dBClusterDescription = valueDBClustersDBCluster["DBClusterDescription"].asString();
		if(!valueDBClustersDBCluster["DBClusterNetworkType"].isNull())
			dBClustersObject.dBClusterNetworkType = valueDBClustersDBCluster["DBClusterNetworkType"].asString();
		if(!valueDBClustersDBCluster["ZoneId"].isNull())
			dBClustersObject.zoneId = valueDBClustersDBCluster["ZoneId"].asString();
		if(!valueDBClustersDBCluster["Category"].isNull())
			dBClustersObject.category = valueDBClustersDBCluster["Category"].asString();
		if(!valueDBClustersDBCluster["ControlVersion"].isNull())
			dBClustersObject.controlVersion = valueDBClustersDBCluster["ControlVersion"].asString();
		if(!valueDBClustersDBCluster["ExtStorageType"].isNull())
			dBClustersObject.extStorageType = valueDBClustersDBCluster["ExtStorageType"].asString();
		if(!valueDBClustersDBCluster["ExtStorageSize"].isNull())
			dBClustersObject.extStorageSize = std::stoi(valueDBClustersDBCluster["ExtStorageSize"].asString());
		if(!valueDBClustersDBCluster["ResourceGroupId"].isNull())
			dBClustersObject.resourceGroupId = valueDBClustersDBCluster["ResourceGroupId"].asString();
		if(!valueDBClustersDBCluster["DbVersion"].isNull())
			dBClustersObject.dbVersion = valueDBClustersDBCluster["DbVersion"].asString();
		auto allTagsNode = valueDBClustersDBCluster["Tags"]["Tag"];
		for (auto valueDBClustersDBClusterTagsTag : allTagsNode)
		{
			DBCluster::Tag tagsObject;
			if(!valueDBClustersDBClusterTagsTag["Key"].isNull())
				tagsObject.key = valueDBClustersDBClusterTagsTag["Key"].asString();
			if(!valueDBClustersDBClusterTagsTag["Value"].isNull())
				tagsObject.value = valueDBClustersDBClusterTagsTag["Value"].asString();
			dBClustersObject.tags.push_back(tagsObject);
		}
		auto scaleOutStatusNode = value["ScaleOutStatus"];
		if(!scaleOutStatusNode["Progress"].isNull())
			dBClustersObject.scaleOutStatus.progress = scaleOutStatusNode["Progress"].asString();
		if(!scaleOutStatusNode["Ratio"].isNull())
			dBClustersObject.scaleOutStatus.ratio = scaleOutStatusNode["Ratio"].asString();
		dBClusters_.push_back(dBClustersObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeDBClustersResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDBClustersResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDBClustersResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDBClustersResult::DBCluster> DescribeDBClustersResult::getDBClusters()const
{
	return dBClusters_;
}

