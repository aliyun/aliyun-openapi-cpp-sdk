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

#include <alibabacloud/edas/model/GetK8sClusterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

GetK8sClusterResult::GetK8sClusterResult() :
	ServiceResult()
{}

GetK8sClusterResult::GetK8sClusterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetK8sClusterResult::~GetK8sClusterResult()
{}

void GetK8sClusterResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto clusterPageNode = value["ClusterPage"];
	if(!clusterPageNode["CurrentPage"].isNull())
		clusterPage_.currentPage = std::stoi(clusterPageNode["CurrentPage"].asString());
	if(!clusterPageNode["PageSize"].isNull())
		clusterPage_.pageSize = std::stoi(clusterPageNode["PageSize"].asString());
	if(!clusterPageNode["TotalSize"].isNull())
		clusterPage_.totalSize = std::stoi(clusterPageNode["TotalSize"].asString());
	auto allClusterListNode = clusterPageNode["ClusterList"]["Cluster"];
	for (auto clusterPageNodeClusterListCluster : allClusterListNode)
	{
		ClusterPage::Cluster clusterObject;
		if(!clusterPageNodeClusterListCluster["ClusterId"].isNull())
			clusterObject.clusterId = clusterPageNodeClusterListCluster["ClusterId"].asString();
		if(!clusterPageNodeClusterListCluster["ClusterImportStatus"].isNull())
			clusterObject.clusterImportStatus = std::stoi(clusterPageNodeClusterListCluster["ClusterImportStatus"].asString());
		if(!clusterPageNodeClusterListCluster["ClusterName"].isNull())
			clusterObject.clusterName = clusterPageNodeClusterListCluster["ClusterName"].asString();
		if(!clusterPageNodeClusterListCluster["ClusterStatus"].isNull())
			clusterObject.clusterStatus = std::stoi(clusterPageNodeClusterListCluster["ClusterStatus"].asString());
		if(!clusterPageNodeClusterListCluster["ClusterType"].isNull())
			clusterObject.clusterType = std::stoi(clusterPageNodeClusterListCluster["ClusterType"].asString());
		if(!clusterPageNodeClusterListCluster["RegionId"].isNull())
			clusterObject.regionId = clusterPageNodeClusterListCluster["RegionId"].asString();
		if(!clusterPageNodeClusterListCluster["VpcId"].isNull())
			clusterObject.vpcId = clusterPageNodeClusterListCluster["VpcId"].asString();
		if(!clusterPageNodeClusterListCluster["VswitchId"].isNull())
			clusterObject.vswitchId = clusterPageNodeClusterListCluster["VswitchId"].asString();
		if(!clusterPageNodeClusterListCluster["SubNetCidr"].isNull())
			clusterObject.subNetCidr = clusterPageNodeClusterListCluster["SubNetCidr"].asString();
		if(!clusterPageNodeClusterListCluster["CsClusterStatus"].isNull())
			clusterObject.csClusterStatus = clusterPageNodeClusterListCluster["CsClusterStatus"].asString();
		if(!clusterPageNodeClusterListCluster["CsClusterId"].isNull())
			clusterObject.csClusterId = clusterPageNodeClusterListCluster["CsClusterId"].asString();
		if(!clusterPageNodeClusterListCluster["Description"].isNull())
			clusterObject.description = clusterPageNodeClusterListCluster["Description"].asString();
		if(!clusterPageNodeClusterListCluster["NodeNum"].isNull())
			clusterObject.nodeNum = std::stoi(clusterPageNodeClusterListCluster["NodeNum"].asString());
		if(!clusterPageNodeClusterListCluster["Cpu"].isNull())
			clusterObject.cpu = std::stoi(clusterPageNodeClusterListCluster["Cpu"].asString());
		if(!clusterPageNodeClusterListCluster["Mem"].isNull())
			clusterObject.mem = std::stoi(clusterPageNodeClusterListCluster["Mem"].asString());
		if(!clusterPageNodeClusterListCluster["NetworkMode"].isNull())
			clusterObject.networkMode = std::stoi(clusterPageNodeClusterListCluster["NetworkMode"].asString());
		clusterPage_.clusterList.push_back(clusterObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

GetK8sClusterResult::ClusterPage GetK8sClusterResult::getClusterPage()const
{
	return clusterPage_;
}

std::string GetK8sClusterResult::getMessage()const
{
	return message_;
}

int GetK8sClusterResult::getCode()const
{
	return code_;
}

