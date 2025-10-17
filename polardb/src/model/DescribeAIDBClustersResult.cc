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

#include <alibabacloud/polardb/model/DescribeAIDBClustersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeAIDBClustersResult::DescribeAIDBClustersResult() :
	ServiceResult()
{}

DescribeAIDBClustersResult::DescribeAIDBClustersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAIDBClustersResult::~DescribeAIDBClustersResult()
{}

void DescribeAIDBClustersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["DBCluster"];
	for (auto valueItemsDBCluster : allItemsNode)
	{
		DBCluster itemsObject;
		if(!valueItemsDBCluster["DBClusterId"].isNull())
			itemsObject.dBClusterId = valueItemsDBCluster["DBClusterId"].asString();
		if(!valueItemsDBCluster["RegionId"].isNull())
			itemsObject.regionId = valueItemsDBCluster["RegionId"].asString();
		if(!valueItemsDBCluster["ZoneId"].isNull())
			itemsObject.zoneId = valueItemsDBCluster["ZoneId"].asString();
		if(!valueItemsDBCluster["PayType"].isNull())
			itemsObject.payType = valueItemsDBCluster["PayType"].asString();
		if(!valueItemsDBCluster["DBClusterStatus"].isNull())
			itemsObject.dBClusterStatus = valueItemsDBCluster["DBClusterStatus"].asString();
		if(!valueItemsDBCluster["DBClusterDescription"].isNull())
			itemsObject.dBClusterDescription = valueItemsDBCluster["DBClusterDescription"].asString();
		if(!valueItemsDBCluster["VpcId"].isNull())
			itemsObject.vpcId = valueItemsDBCluster["VpcId"].asString();
		if(!valueItemsDBCluster["DBNodeClass"].isNull())
			itemsObject.dBNodeClass = valueItemsDBCluster["DBNodeClass"].asString();
		if(!valueItemsDBCluster["StorageType"].isNull())
			itemsObject.storageType = valueItemsDBCluster["StorageType"].asString();
		if(!valueItemsDBCluster["StorageSpace"].isNull())
			itemsObject.storageSpace = std::stoi(valueItemsDBCluster["StorageSpace"].asString());
		if(!valueItemsDBCluster["ExpireTime"].isNull())
			itemsObject.expireTime = valueItemsDBCluster["ExpireTime"].asString();
		if(!valueItemsDBCluster["Expired"].isNull())
			itemsObject.expired = valueItemsDBCluster["Expired"].asString() == "true";
		if(!valueItemsDBCluster["LockMode"].isNull())
			itemsObject.lockMode = valueItemsDBCluster["LockMode"].asString();
		if(!valueItemsDBCluster["CreateTime"].isNull())
			itemsObject.createTime = valueItemsDBCluster["CreateTime"].asString();
		if(!valueItemsDBCluster["Mounted"].isNull())
			itemsObject.mounted = valueItemsDBCluster["Mounted"].asString() == "true";
		if(!valueItemsDBCluster["MountDir"].isNull())
			itemsObject.mountDir = valueItemsDBCluster["MountDir"].asString();
		if(!valueItemsDBCluster["CloudInstanceIp"].isNull())
			itemsObject.cloudInstanceIp = valueItemsDBCluster["CloudInstanceIp"].asString();
		if(!valueItemsDBCluster["KubeClusterId"].isNull())
			itemsObject.kubeClusterId = valueItemsDBCluster["KubeClusterId"].asString();
		if(!valueItemsDBCluster["RunType"].isNull())
			itemsObject.runType = valueItemsDBCluster["RunType"].asString();
		if(!valueItemsDBCluster["DBType"].isNull())
			itemsObject.dBType = valueItemsDBCluster["DBType"].asString();
		if(!valueItemsDBCluster["DBNodeStatus"].isNull())
			itemsObject.dBNodeStatus = valueItemsDBCluster["DBNodeStatus"].asString();
		if(!valueItemsDBCluster["EngineVersion"].isNull())
			itemsObject.engineVersion = valueItemsDBCluster["EngineVersion"].asString();
		if(!valueItemsDBCluster["ModelName"].isNull())
			itemsObject.modelName = valueItemsDBCluster["ModelName"].asString();
		if(!valueItemsDBCluster["DBNodeStatusDesc"].isNull())
			itemsObject.dBNodeStatusDesc = valueItemsDBCluster["DBNodeStatusDesc"].asString();
		if(!valueItemsDBCluster["DataZoneId"].isNull())
			itemsObject.dataZoneId = valueItemsDBCluster["DataZoneId"].asString();
		if(!valueItemsDBCluster["DBNodeId"].isNull())
			itemsObject.dBNodeId = valueItemsDBCluster["DBNodeId"].asString();
		if(!valueItemsDBCluster["CreationTime"].isNull())
			itemsObject.creationTime = valueItemsDBCluster["CreationTime"].asString();
		if(!valueItemsDBCluster["MaxQpm"].isNull())
			itemsObject.maxQpm = valueItemsDBCluster["MaxQpm"].asString();
		if(!valueItemsDBCluster["Engine"].isNull())
			itemsObject.engine = valueItemsDBCluster["Engine"].asString();
		if(!valueItemsDBCluster["DBNodeDescription"].isNull())
			itemsObject.dBNodeDescription = valueItemsDBCluster["DBNodeDescription"].asString();
		if(!valueItemsDBCluster["AiNodeType"].isNull())
			itemsObject.aiNodeType = valueItemsDBCluster["AiNodeType"].asString();
		if(!valueItemsDBCluster["VswitchId"].isNull())
			itemsObject.vswitchId = valueItemsDBCluster["VswitchId"].asString();
		if(!valueItemsDBCluster["RelativeDBClusterId"].isNull())
			itemsObject.relativeDBClusterId = valueItemsDBCluster["RelativeDBClusterId"].asString();
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
		auto allConnAddrs = value["ConnAddrs"]["connAddrs"];
		for (auto value : allConnAddrs)
			itemsObject.connAddrs.push_back(value.asString());
		items_.push_back(itemsObject);
	}
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();
	if(!value["EngineVersion"].isNull())
		engineVersion_ = value["EngineVersion"].asString();
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();

}

int DescribeAIDBClustersResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeAIDBClustersResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

std::string DescribeAIDBClustersResult::getEngineVersion()const
{
	return engineVersion_;
}

int DescribeAIDBClustersResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeAIDBClustersResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::vector<DescribeAIDBClustersResult::DBCluster> DescribeAIDBClustersResult::getItems()const
{
	return items_;
}

std::string DescribeAIDBClustersResult::getEngine()const
{
	return engine_;
}

