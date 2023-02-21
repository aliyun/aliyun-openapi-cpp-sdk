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

#include <alibabacloud/eflo-controller/model/DescribeClusterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eflo_controller;
using namespace AlibabaCloud::Eflo_controller::Model;

DescribeClusterResult::DescribeClusterResult() :
	ServiceResult()
{}

DescribeClusterResult::DescribeClusterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClusterResult::~DescribeClusterResult()
{}

void DescribeClusterResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allComponentsNode = value["Components"]["ComponentsItem"];
	for (auto valueComponentsComponentsItem : allComponentsNode)
	{
		ComponentsItem componentsObject;
		if(!valueComponentsComponentsItem["ComponentType"].isNull())
			componentsObject.componentType = valueComponentsComponentsItem["ComponentType"].asString();
		if(!valueComponentsComponentsItem["ComponentId"].isNull())
			componentsObject.componentId = valueComponentsComponentsItem["ComponentId"].asString();
		components_.push_back(componentsObject);
	}
	auto allNetworksNode = value["Networks"]["NetworksItem"];
	for (auto valueNetworksNetworksItem : allNetworksNode)
	{
		NetworksItem networksObject;
		if(!valueNetworksNetworksItem["VpdId"].isNull())
			networksObject.vpdId = valueNetworksNetworksItem["VpdId"].asString();
		networks_.push_back(networksObject);
	}
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["NodeCount"].isNull())
		nodeCount_ = std::stol(value["NodeCount"].asString());
	if(!value["NodeGroupCount"].isNull())
		nodeGroupCount_ = std::stol(value["NodeGroupCount"].asString());
	if(!value["UpdateTime"].isNull())
		updateTime_ = value["UpdateTime"].asString();
	if(!value["ClusterDescription"].isNull())
		clusterDescription_ = value["ClusterDescription"].asString();
	if(!value["OperatingState"].isNull())
		operatingState_ = value["OperatingState"].asString();
	if(!value["ClusterId"].isNull())
		clusterId_ = value["ClusterId"].asString();
	if(!value["ClusterName"].isNull())
		clusterName_ = value["ClusterName"].asString();
	if(!value["TaskId"].isNull())
		taskId_ = value["TaskId"].asString();
	if(!value["ClusterType"].isNull())
		clusterType_ = value["ClusterType"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();

}

std::vector<DescribeClusterResult::NetworksItem> DescribeClusterResult::getNetworks()const
{
	return networks_;
}

std::string DescribeClusterResult::getTaskId()const
{
	return taskId_;
}

long DescribeClusterResult::getNodeCount()const
{
	return nodeCount_;
}

std::string DescribeClusterResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::string DescribeClusterResult::getClusterId()const
{
	return clusterId_;
}

std::string DescribeClusterResult::getCreateTime()const
{
	return createTime_;
}

long DescribeClusterResult::getNodeGroupCount()const
{
	return nodeGroupCount_;
}

std::string DescribeClusterResult::getOperatingState()const
{
	return operatingState_;
}

std::string DescribeClusterResult::getClusterType()const
{
	return clusterType_;
}

std::vector<DescribeClusterResult::ComponentsItem> DescribeClusterResult::getComponents()const
{
	return components_;
}

std::string DescribeClusterResult::getUpdateTime()const
{
	return updateTime_;
}

std::string DescribeClusterResult::getClusterName()const
{
	return clusterName_;
}

std::string DescribeClusterResult::getClusterDescription()const
{
	return clusterDescription_;
}

