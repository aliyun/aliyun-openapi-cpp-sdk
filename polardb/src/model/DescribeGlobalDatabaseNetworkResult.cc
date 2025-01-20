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

#include <alibabacloud/polardb/model/DescribeGlobalDatabaseNetworkResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeGlobalDatabaseNetworkResult::DescribeGlobalDatabaseNetworkResult() :
	ServiceResult()
{}

DescribeGlobalDatabaseNetworkResult::DescribeGlobalDatabaseNetworkResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGlobalDatabaseNetworkResult::~DescribeGlobalDatabaseNetworkResult()
{}

void DescribeGlobalDatabaseNetworkResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allConnectionsNode = value["Connections"]["Connection"];
	for (auto valueConnectionsConnection : allConnectionsNode)
	{
		Connection connectionsObject;
		if(!valueConnectionsConnection["ConnectionString"].isNull())
			connectionsObject.connectionString = valueConnectionsConnection["ConnectionString"].asString();
		if(!valueConnectionsConnection["NetType"].isNull())
			connectionsObject.netType = valueConnectionsConnection["NetType"].asString();
		if(!valueConnectionsConnection["Port"].isNull())
			connectionsObject.port = valueConnectionsConnection["Port"].asString();
		connections_.push_back(connectionsObject);
	}
	auto allDBClustersNode = value["DBClusters"]["DBCluster"];
	for (auto valueDBClustersDBCluster : allDBClustersNode)
	{
		DBCluster dBClustersObject;
		if(!valueDBClustersDBCluster["ReplicaLag"].isNull())
			dBClustersObject.replicaLag = valueDBClustersDBCluster["ReplicaLag"].asString();
		if(!valueDBClustersDBCluster["ExpireTime"].isNull())
			dBClustersObject.expireTime = valueDBClustersDBCluster["ExpireTime"].asString();
		if(!valueDBClustersDBCluster["Expired"].isNull())
			dBClustersObject.expired = valueDBClustersDBCluster["Expired"].asString();
		if(!valueDBClustersDBCluster["DBNodeClass"].isNull())
			dBClustersObject.dBNodeClass = valueDBClustersDBCluster["DBNodeClass"].asString();
		if(!valueDBClustersDBCluster["PayType"].isNull())
			dBClustersObject.payType = valueDBClustersDBCluster["PayType"].asString();
		if(!valueDBClustersDBCluster["DBType"].isNull())
			dBClustersObject.dBType = valueDBClustersDBCluster["DBType"].asString();
		if(!valueDBClustersDBCluster["RegionId"].isNull())
			dBClustersObject.regionId = valueDBClustersDBCluster["RegionId"].asString();
		if(!valueDBClustersDBCluster["DBVersion"].isNull())
			dBClustersObject.dBVersion = valueDBClustersDBCluster["DBVersion"].asString();
		if(!valueDBClustersDBCluster["DBClusterId"].isNull())
			dBClustersObject.dBClusterId = valueDBClustersDBCluster["DBClusterId"].asString();
		if(!valueDBClustersDBCluster["DBClusterStatus"].isNull())
			dBClustersObject.dBClusterStatus = valueDBClustersDBCluster["DBClusterStatus"].asString();
		if(!valueDBClustersDBCluster["StorageUsed"].isNull())
			dBClustersObject.storageUsed = valueDBClustersDBCluster["StorageUsed"].asString();
		if(!valueDBClustersDBCluster["DBClusterDescription"].isNull())
			dBClustersObject.dBClusterDescription = valueDBClustersDBCluster["DBClusterDescription"].asString();
		if(!valueDBClustersDBCluster["Category"].isNull())
			dBClustersObject.category = valueDBClustersDBCluster["Category"].asString();
		if(!valueDBClustersDBCluster["Role"].isNull())
			dBClustersObject.role = valueDBClustersDBCluster["Role"].asString();
		if(!valueDBClustersDBCluster["ServerlessType"].isNull())
			dBClustersObject.serverlessType = valueDBClustersDBCluster["ServerlessType"].asString();
		if(!valueDBClustersDBCluster["MemberStatus"].isNull())
			dBClustersObject.memberStatus = valueDBClustersDBCluster["MemberStatus"].asString();
		auto allDBNodesNode = valueDBClustersDBCluster["DBNodes"]["DBNode"];
		for (auto valueDBClustersDBClusterDBNodesDBNode : allDBNodesNode)
		{
			DBCluster::DBNode dBNodesObject;
			if(!valueDBClustersDBClusterDBNodesDBNode["DBNodeClass"].isNull())
				dBNodesObject.dBNodeClass = valueDBClustersDBClusterDBNodesDBNode["DBNodeClass"].asString();
			if(!valueDBClustersDBClusterDBNodesDBNode["ZoneId"].isNull())
				dBNodesObject.zoneId = valueDBClustersDBClusterDBNodesDBNode["ZoneId"].asString();
			if(!valueDBClustersDBClusterDBNodesDBNode["CreationTime"].isNull())
				dBNodesObject.creationTime = valueDBClustersDBClusterDBNodesDBNode["CreationTime"].asString();
			if(!valueDBClustersDBClusterDBNodesDBNode["DBNodeRole"].isNull())
				dBNodesObject.dBNodeRole = valueDBClustersDBClusterDBNodesDBNode["DBNodeRole"].asString();
			if(!valueDBClustersDBClusterDBNodesDBNode["DBNodeStatus"].isNull())
				dBNodesObject.dBNodeStatus = valueDBClustersDBClusterDBNodesDBNode["DBNodeStatus"].asString();
			if(!valueDBClustersDBClusterDBNodesDBNode["FailoverPriority"].isNull())
				dBNodesObject.failoverPriority = std::stoi(valueDBClustersDBClusterDBNodesDBNode["FailoverPriority"].asString());
			if(!valueDBClustersDBClusterDBNodesDBNode["MaxConnections"].isNull())
				dBNodesObject.maxConnections = std::stoi(valueDBClustersDBClusterDBNodesDBNode["MaxConnections"].asString());
			if(!valueDBClustersDBClusterDBNodesDBNode["MaxIOPS"].isNull())
				dBNodesObject.maxIOPS = std::stoi(valueDBClustersDBClusterDBNodesDBNode["MaxIOPS"].asString());
			if(!valueDBClustersDBClusterDBNodesDBNode["DBNodeId"].isNull())
				dBNodesObject.dBNodeId = valueDBClustersDBClusterDBNodesDBNode["DBNodeId"].asString();
			dBClustersObject.dBNodes.push_back(dBNodesObject);
		}
		dBClusters_.push_back(dBClustersObject);
	}
	if(!value["GDNStatus"].isNull())
		gDNStatus_ = value["GDNStatus"].asString();
	if(!value["DBVersion"].isNull())
		dBVersion_ = value["DBVersion"].asString();
	if(!value["GDNId"].isNull())
		gDNId_ = value["GDNId"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["DBType"].isNull())
		dBType_ = value["DBType"].asString();
	if(!value["GDNDescription"].isNull())
		gDNDescription_ = value["GDNDescription"].asString();
	if(!value["GlobalDomainName"].isNull())
		globalDomainName_ = value["GlobalDomainName"].asString();
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();

}

std::vector<DescribeGlobalDatabaseNetworkResult::Connection> DescribeGlobalDatabaseNetworkResult::getConnections()const
{
	return connections_;
}

std::string DescribeGlobalDatabaseNetworkResult::getGDNStatus()const
{
	return gDNStatus_;
}

std::string DescribeGlobalDatabaseNetworkResult::getDBVersion()const
{
	return dBVersion_;
}

std::string DescribeGlobalDatabaseNetworkResult::getGDNId()const
{
	return gDNId_;
}

std::string DescribeGlobalDatabaseNetworkResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::string DescribeGlobalDatabaseNetworkResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeGlobalDatabaseNetworkResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::string DescribeGlobalDatabaseNetworkResult::getDBType()const
{
	return dBType_;
}

std::string DescribeGlobalDatabaseNetworkResult::getGDNDescription()const
{
	return gDNDescription_;
}

std::vector<DescribeGlobalDatabaseNetworkResult::DBCluster> DescribeGlobalDatabaseNetworkResult::getDBClusters()const
{
	return dBClusters_;
}

std::string DescribeGlobalDatabaseNetworkResult::getGlobalDomainName()const
{
	return globalDomainName_;
}

