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

#include <alibabacloud/eflo-controller/model/ListClustersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eflo_controller;
using namespace AlibabaCloud::Eflo_controller::Model;

ListClustersResult::ListClustersResult() :
	ServiceResult()
{}

ListClustersResult::ListClustersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClustersResult::~ListClustersResult()
{}

void ListClustersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allClustersNode = value["Clusters"]["ClustersItem"];
	for (auto valueClustersClustersItem : allClustersNode)
	{
		ClustersItem clustersObject;
		if(!valueClustersClustersItem["Components"].isNull())
			clustersObject.components = valueClustersClustersItem["Components"].asString();
		if(!valueClustersClustersItem["ClusterId"].isNull())
			clustersObject.clusterId = valueClustersClustersItem["ClusterId"].asString();
		if(!valueClustersClustersItem["ClusterName"].isNull())
			clustersObject.clusterName = valueClustersClustersItem["ClusterName"].asString();
		if(!valueClustersClustersItem["OperatingState"].isNull())
			clustersObject.operatingState = valueClustersClustersItem["OperatingState"].asString();
		if(!valueClustersClustersItem["TaskId"].isNull())
			clustersObject.taskId = valueClustersClustersItem["TaskId"].asString();
		if(!valueClustersClustersItem["ClusterType"].isNull())
			clustersObject.clusterType = valueClustersClustersItem["ClusterType"].asString();
		if(!valueClustersClustersItem["NodeCount"].isNull())
			clustersObject.nodeCount = std::stol(valueClustersClustersItem["NodeCount"].asString());
		if(!valueClustersClustersItem["NodeGroupCount"].isNull())
			clustersObject.nodeGroupCount = std::stol(valueClustersClustersItem["NodeGroupCount"].asString());
		if(!valueClustersClustersItem["CreateTime"].isNull())
			clustersObject.createTime = valueClustersClustersItem["CreateTime"].asString();
		if(!valueClustersClustersItem["UpdateTime"].isNull())
			clustersObject.updateTime = valueClustersClustersItem["UpdateTime"].asString();
		if(!valueClustersClustersItem["ClusterDescription"].isNull())
			clustersObject.clusterDescription = valueClustersClustersItem["ClusterDescription"].asString();
		if(!valueClustersClustersItem["ResourceGroupId"].isNull())
			clustersObject.resourceGroupId = valueClustersClustersItem["ResourceGroupId"].asString();
		clusters_.push_back(clustersObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string ListClustersResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListClustersResult::ClustersItem> ListClustersResult::getClusters()const
{
	return clusters_;
}

