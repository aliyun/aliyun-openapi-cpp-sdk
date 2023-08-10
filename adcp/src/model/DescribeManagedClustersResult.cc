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

#include <alibabacloud/adcp/model/DescribeManagedClustersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adcp;
using namespace AlibabaCloud::Adcp::Model;

DescribeManagedClustersResult::DescribeManagedClustersResult() :
	ServiceResult()
{}

DescribeManagedClustersResult::DescribeManagedClustersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeManagedClustersResult::~DescribeManagedClustersResult()
{}

void DescribeManagedClustersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allClustersNode = value["Clusters"]["Cluster"];
	for (auto valueClustersCluster : allClustersNode)
	{
		Cluster clustersObject;
		auto cluster1Node = value["Cluster"];
		if(!cluster1Node["Name"].isNull())
			clustersObject.cluster1.name = cluster1Node["Name"].asString();
		if(!cluster1Node["ClusterID"].isNull())
			clustersObject.cluster1.clusterID = cluster1Node["ClusterID"].asString();
		if(!cluster1Node["Region"].isNull())
			clustersObject.cluster1.region = cluster1Node["Region"].asString();
		if(!cluster1Node["State"].isNull())
			clustersObject.cluster1.state = cluster1Node["State"].asString();
		if(!cluster1Node["ClusterType"].isNull())
			clustersObject.cluster1.clusterType = cluster1Node["ClusterType"].asString();
		if(!cluster1Node["Created"].isNull())
			clustersObject.cluster1.created = cluster1Node["Created"].asString();
		if(!cluster1Node["Updated"].isNull())
			clustersObject.cluster1.updated = cluster1Node["Updated"].asString();
		if(!cluster1Node["InitVersion"].isNull())
			clustersObject.cluster1.initVersion = cluster1Node["InitVersion"].asString();
		if(!cluster1Node["CurrentVersion"].isNull())
			clustersObject.cluster1.currentVersion = cluster1Node["CurrentVersion"].asString();
		if(!cluster1Node["ResourceGroupId"].isNull())
			clustersObject.cluster1.resourceGroupId = cluster1Node["ResourceGroupId"].asString();
		if(!cluster1Node["VpcID"].isNull())
			clustersObject.cluster1.vpcID = cluster1Node["VpcID"].asString();
		if(!cluster1Node["VSwitchID"].isNull())
			clustersObject.cluster1.vSwitchID = cluster1Node["VSwitchID"].asString();
		if(!cluster1Node["Profile"].isNull())
			clustersObject.cluster1.profile = cluster1Node["Profile"].asString();
		if(!cluster1Node["ClusterSpec"].isNull())
			clustersObject.cluster1.clusterSpec = cluster1Node["ClusterSpec"].asString();
		auto statusNode = value["Status"];
		if(!statusNode["State"].isNull())
			clustersObject.status.state = statusNode["State"].asString();
		if(!statusNode["Message"].isNull())
			clustersObject.status.message = statusNode["Message"].asString();
		auto meshStatusNode = value["MeshStatus"];
		if(!meshStatusNode["InMesh"].isNull())
			clustersObject.meshStatus.inMesh = meshStatusNode["InMesh"].asString() == "true";
		clusters_.push_back(clustersObject);
	}

}

std::vector<DescribeManagedClustersResult::Cluster> DescribeManagedClustersResult::getClusters()const
{
	return clusters_;
}

