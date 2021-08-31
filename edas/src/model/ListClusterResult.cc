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

#include <alibabacloud/edas/model/ListClusterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ListClusterResult::ListClusterResult() :
	ServiceResult()
{}

ListClusterResult::ListClusterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClusterResult::~ListClusterResult()
{}

void ListClusterResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allClusterListNode = value["ClusterList"]["Cluster"];
	for (auto valueClusterListCluster : allClusterListNode)
	{
		Cluster clusterListObject;
		if(!valueClusterListCluster["ClusterId"].isNull())
			clusterListObject.clusterId = valueClusterListCluster["ClusterId"].asString();
		if(!valueClusterListCluster["RegionId"].isNull())
			clusterListObject.regionId = valueClusterListCluster["RegionId"].asString();
		if(!valueClusterListCluster["Description"].isNull())
			clusterListObject.description = valueClusterListCluster["Description"].asString();
		if(!valueClusterListCluster["ClusterName"].isNull())
			clusterListObject.clusterName = valueClusterListCluster["ClusterName"].asString();
		if(!valueClusterListCluster["ClusterType"].isNull())
			clusterListObject.clusterType = std::stoi(valueClusterListCluster["ClusterType"].asString());
		if(!valueClusterListCluster["OversoldFactor"].isNull())
			clusterListObject.oversoldFactor = std::stoi(valueClusterListCluster["OversoldFactor"].asString());
		if(!valueClusterListCluster["NetworkMode"].isNull())
			clusterListObject.networkMode = std::stoi(valueClusterListCluster["NetworkMode"].asString());
		if(!valueClusterListCluster["VpcId"].isNull())
			clusterListObject.vpcId = valueClusterListCluster["VpcId"].asString();
		if(!valueClusterListCluster["NodeNum"].isNull())
			clusterListObject.nodeNum = std::stoi(valueClusterListCluster["NodeNum"].asString());
		if(!valueClusterListCluster["Cpu"].isNull())
			clusterListObject.cpu = std::stoi(valueClusterListCluster["Cpu"].asString());
		if(!valueClusterListCluster["Mem"].isNull())
			clusterListObject.mem = std::stoi(valueClusterListCluster["Mem"].asString());
		if(!valueClusterListCluster["CpuUsed"].isNull())
			clusterListObject.cpuUsed = std::stoi(valueClusterListCluster["CpuUsed"].asString());
		if(!valueClusterListCluster["MemUsed"].isNull())
			clusterListObject.memUsed = std::stoi(valueClusterListCluster["MemUsed"].asString());
		if(!valueClusterListCluster["CreateTime"].isNull())
			clusterListObject.createTime = std::stol(valueClusterListCluster["CreateTime"].asString());
		if(!valueClusterListCluster["UpdateTime"].isNull())
			clusterListObject.updateTime = std::stol(valueClusterListCluster["UpdateTime"].asString());
		if(!valueClusterListCluster["IaasProvider"].isNull())
			clusterListObject.iaasProvider = valueClusterListCluster["IaasProvider"].asString();
		if(!valueClusterListCluster["CsClusterId"].isNull())
			clusterListObject.csClusterId = valueClusterListCluster["CsClusterId"].asString();
		if(!valueClusterListCluster["ResourceGroupId"].isNull())
			clusterListObject.resourceGroupId = valueClusterListCluster["ResourceGroupId"].asString();
		clusterList_.push_back(clusterListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::vector<ListClusterResult::Cluster> ListClusterResult::getClusterList()const
{
	return clusterList_;
}

std::string ListClusterResult::getMessage()const
{
	return message_;
}

int ListClusterResult::getCode()const
{
	return code_;
}

