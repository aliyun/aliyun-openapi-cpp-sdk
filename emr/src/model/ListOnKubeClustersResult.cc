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

#include <alibabacloud/emr/model/ListOnKubeClustersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListOnKubeClustersResult::ListOnKubeClustersResult() :
	ServiceResult()
{}

ListOnKubeClustersResult::ListOnKubeClustersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListOnKubeClustersResult::~ListOnKubeClustersResult()
{}

void ListOnKubeClustersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOnKubeClusterSummaryNode = value["OnKubeClusterSummary"]["Cluster"];
	for (auto valueOnKubeClusterSummaryCluster : allOnKubeClusterSummaryNode)
	{
		Cluster onKubeClusterSummaryObject;
		if(!valueOnKubeClusterSummaryCluster["ClusterId"].isNull())
			onKubeClusterSummaryObject.clusterId = valueOnKubeClusterSummaryCluster["ClusterId"].asString();
		if(!valueOnKubeClusterSummaryCluster["ClusterName"].isNull())
			onKubeClusterSummaryObject.clusterName = valueOnKubeClusterSummaryCluster["ClusterName"].asString();
		if(!valueOnKubeClusterSummaryCluster["ClusterType"].isNull())
			onKubeClusterSummaryObject.clusterType = valueOnKubeClusterSummaryCluster["ClusterType"].asString();
		if(!valueOnKubeClusterSummaryCluster["ClusterStatus"].isNull())
			onKubeClusterSummaryObject.clusterStatus = valueOnKubeClusterSummaryCluster["ClusterStatus"].asString();
		if(!valueOnKubeClusterSummaryCluster["FailReason"].isNull())
			onKubeClusterSummaryObject.failReason = valueOnKubeClusterSummaryCluster["FailReason"].asString();
		if(!valueOnKubeClusterSummaryCluster["VpcId"].isNull())
			onKubeClusterSummaryObject.vpcId = valueOnKubeClusterSummaryCluster["VpcId"].asString();
		if(!valueOnKubeClusterSummaryCluster["CreateTime"].isNull())
			onKubeClusterSummaryObject.createTime = std::stol(valueOnKubeClusterSummaryCluster["CreateTime"].asString());
		if(!valueOnKubeClusterSummaryCluster["KubeClusterId"].isNull())
			onKubeClusterSummaryObject.kubeClusterId = valueOnKubeClusterSummaryCluster["KubeClusterId"].asString();
		if(!valueOnKubeClusterSummaryCluster["KubeNamespace"].isNull())
			onKubeClusterSummaryObject.kubeNamespace = valueOnKubeClusterSummaryCluster["KubeNamespace"].asString();
		onKubeClusterSummary_.push_back(onKubeClusterSummaryObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<ListOnKubeClustersResult::Cluster> ListOnKubeClustersResult::getOnKubeClusterSummary()const
{
	return onKubeClusterSummary_;
}

int ListOnKubeClustersResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListOnKubeClustersResult::getNextToken()const
{
	return nextToken_;
}

int ListOnKubeClustersResult::getMaxResults()const
{
	return maxResults_;
}

