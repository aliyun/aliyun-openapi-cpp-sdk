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

#include <alibabacloud/adcp/model/DescribeHubClustersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adcp;
using namespace AlibabaCloud::Adcp::Model;

DescribeHubClustersResult::DescribeHubClustersResult() :
	ServiceResult()
{}

DescribeHubClustersResult::DescribeHubClustersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeHubClustersResult::~DescribeHubClustersResult()
{}

void DescribeHubClustersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allClustersNode = value["Clusters"]["Cluster"];
	for (auto valueClustersCluster : allClustersNode)
	{
		Cluster clustersObject;
		auto allConditionsNode = valueClustersCluster["Conditions"]["Condition"];
		for (auto valueClustersClusterConditionsCondition : allConditionsNode)
		{
			Cluster::Condition conditionsObject;
			if(!valueClustersClusterConditionsCondition["Type"].isNull())
				conditionsObject.type = valueClustersClusterConditionsCondition["Type"].asString();
			if(!valueClustersClusterConditionsCondition["Status"].isNull())
				conditionsObject.status = valueClustersClusterConditionsCondition["Status"].asString();
			if(!valueClustersClusterConditionsCondition["Reason"].isNull())
				conditionsObject.reason = valueClustersClusterConditionsCondition["Reason"].asString();
			if(!valueClustersClusterConditionsCondition["Message"].isNull())
				conditionsObject.message = valueClustersClusterConditionsCondition["Message"].asString();
			clustersObject.conditions.push_back(conditionsObject);
		}
		auto endpointsNode = value["Endpoints"];
		if(!endpointsNode["IntranetApiServerEndpoint"].isNull())
			clustersObject.endpoints.intranetApiServerEndpoint = endpointsNode["IntranetApiServerEndpoint"].asString();
		if(!endpointsNode["PublicApiServerEndpoint"].isNull())
			clustersObject.endpoints.publicApiServerEndpoint = endpointsNode["PublicApiServerEndpoint"].asString();
		auto clusterInfoNode = value["ClusterInfo"];
		if(!clusterInfoNode["Profile"].isNull())
			clustersObject.clusterInfo.profile = clusterInfoNode["Profile"].asString();
		if(!clusterInfoNode["CreationTime"].isNull())
			clustersObject.clusterInfo.creationTime = clusterInfoNode["CreationTime"].asString();
		if(!clusterInfoNode["UpdateTime"].isNull())
			clustersObject.clusterInfo.updateTime = clusterInfoNode["UpdateTime"].asString();
		if(!clusterInfoNode["ErrorMessage"].isNull())
			clustersObject.clusterInfo.errorMessage = clusterInfoNode["ErrorMessage"].asString();
		if(!clusterInfoNode["Version"].isNull())
			clustersObject.clusterInfo.version = clusterInfoNode["Version"].asString();
		if(!clusterInfoNode["State"].isNull())
			clustersObject.clusterInfo.state = clusterInfoNode["State"].asString();
		if(!clusterInfoNode["ClusterId"].isNull())
			clustersObject.clusterInfo.clusterId = clusterInfoNode["ClusterId"].asString();
		if(!clusterInfoNode["Name"].isNull())
			clustersObject.clusterInfo.name = clusterInfoNode["Name"].asString();
		if(!clusterInfoNode["RegionId"].isNull())
			clustersObject.clusterInfo.regionId = clusterInfoNode["RegionId"].asString();
		if(!clusterInfoNode["ClusterSpec"].isNull())
			clustersObject.clusterInfo.clusterSpec = clusterInfoNode["ClusterSpec"].asString();
		auto networkNode = value["Network"];
		if(!networkNode["VpcId"].isNull())
			clustersObject.network.vpcId = networkNode["VpcId"].asString();
		if(!networkNode["ClusterDomain"].isNull())
			clustersObject.network.clusterDomain = networkNode["ClusterDomain"].asString();
			auto allVSwitches = networkNode["VSwitches"]["VSwitches"];
			for (auto value : allVSwitches)
				clustersObject.network.vSwitches.push_back(value.asString());
			auto allSecurityGroupIDs = networkNode["SecurityGroupIDs"]["SecurityGroupIDs"];
			for (auto value : allSecurityGroupIDs)
				clustersObject.network.securityGroupIDs.push_back(value.asString());
		auto apiServerNode = value["ApiServer"];
		if(!apiServerNode["EnabledPublic"].isNull())
			clustersObject.apiServer.enabledPublic = apiServerNode["EnabledPublic"].asString() == "true";
		if(!apiServerNode["LoadBalancerId"].isNull())
			clustersObject.apiServer.loadBalancerId = apiServerNode["LoadBalancerId"].asString();
		if(!apiServerNode["ApiServerEipId"].isNull())
			clustersObject.apiServer.apiServerEipId = apiServerNode["ApiServerEipId"].asString();
		auto meshConfigNode = value["MeshConfig"];
		if(!meshConfigNode["EnableMesh"].isNull())
			clustersObject.meshConfig.enableMesh = meshConfigNode["EnableMesh"].asString() == "true";
		if(!meshConfigNode["MeshId"].isNull())
			clustersObject.meshConfig.meshId = meshConfigNode["MeshId"].asString();
		auto logConfigNode = value["LogConfig"];
		if(!logConfigNode["EnableLog"].isNull())
			clustersObject.logConfig.enableLog = logConfigNode["EnableLog"].asString() == "true";
		if(!logConfigNode["LogProject"].isNull())
			clustersObject.logConfig.logProject = logConfigNode["LogProject"].asString();
		if(!logConfigNode["LogStoreTTL"].isNull())
			clustersObject.logConfig.logStoreTTL = logConfigNode["LogStoreTTL"].asString();
		clusters_.push_back(clustersObject);
	}

}

std::vector<DescribeHubClustersResult::Cluster> DescribeHubClustersResult::getClusters()const
{
	return clusters_;
}

