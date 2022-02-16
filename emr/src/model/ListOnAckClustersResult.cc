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

#include <alibabacloud/emr/model/ListOnAckClustersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListOnAckClustersResult::ListOnAckClustersResult() :
	ServiceResult()
{}

ListOnAckClustersResult::ListOnAckClustersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListOnAckClustersResult::~ListOnAckClustersResult()
{}

void ListOnAckClustersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allClustersNode = value["Clusters"]["Cluster"];
	for (auto valueClustersCluster : allClustersNode)
	{
		Cluster clustersObject;
		if(!valueClustersCluster["ClusterId"].isNull())
			clustersObject.clusterId = valueClustersCluster["ClusterId"].asString();
		if(!valueClustersCluster["ClusterName"].isNull())
			clustersObject.clusterName = valueClustersCluster["ClusterName"].asString();
		if(!valueClustersCluster["ClusterType"].isNull())
			clustersObject.clusterType = valueClustersCluster["ClusterType"].asString();
		if(!valueClustersCluster["ClusterStatus"].isNull())
			clustersObject.clusterStatus = valueClustersCluster["ClusterStatus"].asString();
		if(!valueClustersCluster["FailReason"].isNull())
			clustersObject.failReason = valueClustersCluster["FailReason"].asString();
		if(!valueClustersCluster["VpcId"].isNull())
			clustersObject.vpcId = valueClustersCluster["VpcId"].asString();
		if(!valueClustersCluster["CreateTime"].isNull())
			clustersObject.createTime = std::stol(valueClustersCluster["CreateTime"].asString());
		if(!valueClustersCluster["KubeClusterId"].isNull())
			clustersObject.kubeClusterId = valueClustersCluster["KubeClusterId"].asString();
		if(!valueClustersCluster["KubeNamespace"].isNull())
			clustersObject.kubeNamespace = valueClustersCluster["KubeNamespace"].asString();
		clusters_.push_back(clustersObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListOnAckClustersResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListOnAckClustersResult::getNextToken()const
{
	return nextToken_;
}

int ListOnAckClustersResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListOnAckClustersResult::Cluster> ListOnAckClustersResult::getClusters()const
{
	return clusters_;
}

