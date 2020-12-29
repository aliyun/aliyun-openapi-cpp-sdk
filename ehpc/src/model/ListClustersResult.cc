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

#include <alibabacloud/ehpc/model/ListClustersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

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
	auto allClustersNode = value["Clusters"]["ClusterInfoSimple"];
	for (auto valueClustersClusterInfoSimple : allClustersNode)
	{
		ClusterInfoSimple clustersObject;
		if(!valueClustersClusterInfoSimple["Id"].isNull())
			clustersObject.id = valueClustersClusterInfoSimple["Id"].asString();
		if(!valueClustersClusterInfoSimple["RegionId"].isNull())
			clustersObject.regionId = valueClustersClusterInfoSimple["RegionId"].asString();
		if(!valueClustersClusterInfoSimple["ZoneId"].isNull())
			clustersObject.zoneId = valueClustersClusterInfoSimple["ZoneId"].asString();
		if(!valueClustersClusterInfoSimple["VSwitchId"].isNull())
			clustersObject.vSwitchId = valueClustersClusterInfoSimple["VSwitchId"].asString();
		if(!valueClustersClusterInfoSimple["VpcId"].isNull())
			clustersObject.vpcId = valueClustersClusterInfoSimple["VpcId"].asString();
		if(!valueClustersClusterInfoSimple["Name"].isNull())
			clustersObject.name = valueClustersClusterInfoSimple["Name"].asString();
		if(!valueClustersClusterInfoSimple["Description"].isNull())
			clustersObject.description = valueClustersClusterInfoSimple["Description"].asString();
		if(!valueClustersClusterInfoSimple["Status"].isNull())
			clustersObject.status = valueClustersClusterInfoSimple["Status"].asString();
		if(!valueClustersClusterInfoSimple["OsTag"].isNull())
			clustersObject.osTag = valueClustersClusterInfoSimple["OsTag"].asString();
		if(!valueClustersClusterInfoSimple["AccountType"].isNull())
			clustersObject.accountType = valueClustersClusterInfoSimple["AccountType"].asString();
		if(!valueClustersClusterInfoSimple["SchedulerType"].isNull())
			clustersObject.schedulerType = valueClustersClusterInfoSimple["SchedulerType"].asString();
		if(!valueClustersClusterInfoSimple["DeployMode"].isNull())
			clustersObject.deployMode = valueClustersClusterInfoSimple["DeployMode"].asString();
		if(!valueClustersClusterInfoSimple["Count"].isNull())
			clustersObject.count = std::stoi(valueClustersClusterInfoSimple["Count"].asString());
		if(!valueClustersClusterInfoSimple["InstanceType"].isNull())
			clustersObject.instanceType = valueClustersClusterInfoSimple["InstanceType"].asString();
		if(!valueClustersClusterInfoSimple["LoginNodes"].isNull())
			clustersObject.loginNodes = valueClustersClusterInfoSimple["LoginNodes"].asString();
		if(!valueClustersClusterInfoSimple["CreateTime"].isNull())
			clustersObject.createTime = valueClustersClusterInfoSimple["CreateTime"].asString();
		if(!valueClustersClusterInfoSimple["ImageOwnerAlias"].isNull())
			clustersObject.imageOwnerAlias = valueClustersClusterInfoSimple["ImageOwnerAlias"].asString();
		if(!valueClustersClusterInfoSimple["ImageId"].isNull())
			clustersObject.imageId = valueClustersClusterInfoSimple["ImageId"].asString();
		if(!valueClustersClusterInfoSimple["Location"].isNull())
			clustersObject.location = valueClustersClusterInfoSimple["Location"].asString();
		if(!valueClustersClusterInfoSimple["EhpcVersion"].isNull())
			clustersObject.ehpcVersion = valueClustersClusterInfoSimple["EhpcVersion"].asString();
		if(!valueClustersClusterInfoSimple["NodePrefix"].isNull())
			clustersObject.nodePrefix = valueClustersClusterInfoSimple["NodePrefix"].asString();
		if(!valueClustersClusterInfoSimple["NodeSuffix"].isNull())
			clustersObject.nodeSuffix = valueClustersClusterInfoSimple["NodeSuffix"].asString();
		if(!valueClustersClusterInfoSimple["BaseOsTag"].isNull())
			clustersObject.baseOsTag = valueClustersClusterInfoSimple["BaseOsTag"].asString();
		if(!valueClustersClusterInfoSimple["InstanceChargeType"].isNull())
			clustersObject.instanceChargeType = valueClustersClusterInfoSimple["InstanceChargeType"].asString();
		if(!valueClustersClusterInfoSimple["ComputeSpotStrategy"].isNull())
			clustersObject.computeSpotStrategy = valueClustersClusterInfoSimple["ComputeSpotStrategy"].asString();
		if(!valueClustersClusterInfoSimple["ComputeSpotPriceLimit"].isNull())
			clustersObject.computeSpotPriceLimit = std::stof(valueClustersClusterInfoSimple["ComputeSpotPriceLimit"].asString());
		if(!valueClustersClusterInfoSimple["ClientVersion"].isNull())
			clustersObject.clientVersion = valueClustersClusterInfoSimple["ClientVersion"].asString();
		auto managersNode = value["Managers"];
		if(!managersNode["Total"].isNull())
			clustersObject.managers.total = std::stoi(managersNode["Total"].asString());
		if(!managersNode["NormalCount"].isNull())
			clustersObject.managers.normalCount = std::stoi(managersNode["NormalCount"].asString());
		if(!managersNode["OperatingCount"].isNull())
			clustersObject.managers.operatingCount = std::stoi(managersNode["OperatingCount"].asString());
		if(!managersNode["StoppedCount"].isNull())
			clustersObject.managers.stoppedCount = std::stoi(managersNode["StoppedCount"].asString());
		if(!managersNode["ExceptionCount"].isNull())
			clustersObject.managers.exceptionCount = std::stoi(managersNode["ExceptionCount"].asString());
		auto computesNode = value["Computes"];
		if(!computesNode["Total"].isNull())
			clustersObject.computes.total = std::stoi(computesNode["Total"].asString());
		if(!computesNode["NormalCount"].isNull())
			clustersObject.computes.normalCount = std::stoi(computesNode["NormalCount"].asString());
		if(!computesNode["OperatingCount"].isNull())
			clustersObject.computes.operatingCount = std::stoi(computesNode["OperatingCount"].asString());
		if(!computesNode["StoppedCount"].isNull())
			clustersObject.computes.stoppedCount = std::stoi(computesNode["StoppedCount"].asString());
		if(!computesNode["ExceptionCount"].isNull())
			clustersObject.computes.exceptionCount = std::stoi(computesNode["ExceptionCount"].asString());
		auto totalResourcesNode = value["TotalResources"];
		if(!totalResourcesNode["Cpu"].isNull())
			clustersObject.totalResources.cpu = std::stoi(totalResourcesNode["Cpu"].asString());
		if(!totalResourcesNode["Memory"].isNull())
			clustersObject.totalResources.memory = std::stoi(totalResourcesNode["Memory"].asString());
		if(!totalResourcesNode["Gpu"].isNull())
			clustersObject.totalResources.gpu = std::stoi(totalResourcesNode["Gpu"].asString());
		auto usedResourcesNode = value["UsedResources"];
		if(!usedResourcesNode["Cpu"].isNull())
			clustersObject.usedResources.cpu = std::stoi(usedResourcesNode["Cpu"].asString());
		if(!usedResourcesNode["Memory"].isNull())
			clustersObject.usedResources.memory = std::stoi(usedResourcesNode["Memory"].asString());
		if(!usedResourcesNode["Gpu"].isNull())
			clustersObject.usedResources.gpu = std::stoi(usedResourcesNode["Gpu"].asString());
		clusters_.push_back(clustersObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int ListClustersResult::getTotalCount()const
{
	return totalCount_;
}

int ListClustersResult::getPageSize()const
{
	return pageSize_;
}

int ListClustersResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListClustersResult::ClusterInfoSimple> ListClustersResult::getClusters()const
{
	return clusters_;
}

