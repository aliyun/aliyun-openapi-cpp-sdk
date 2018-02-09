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
	auto allClusters = value["Clusters"]["ClusterInfoSimple"];
	for (auto value : allClusters)
	{
		ClusterInfoSimple clustersObject;
		if(!value["Id"].isNull())
			clustersObject.id = value["Id"].asString();
		if(!value["RegionId"].isNull())
			clustersObject.regionId = value["RegionId"].asString();
		if(!value["ZoneId"].isNull())
			clustersObject.zoneId = value["ZoneId"].asString();
		if(!value["Name"].isNull())
			clustersObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			clustersObject.description = value["Description"].asString();
		if(!value["Status"].isNull())
			clustersObject.status = value["Status"].asString();
		if(!value["OsTag"].isNull())
			clustersObject.osTag = value["OsTag"].asString();
		if(!value["AccountType"].isNull())
			clustersObject.accountType = value["AccountType"].asString();
		if(!value["SchedulerType"].isNull())
			clustersObject.schedulerType = value["SchedulerType"].asString();
		if(!value["Count"].isNull())
			clustersObject.count = std::stoi(value["Count"].asString());
		if(!value["InstanceType"].isNull())
			clustersObject.instanceType = value["InstanceType"].asString();
		if(!value["LoginNodes"].isNull())
			clustersObject.loginNodes = value["LoginNodes"].asString();
		if(!value["CreateTime"].isNull())
			clustersObject.createTime = value["CreateTime"].asString();
		if(!value["ImageOwnerAlias"].isNull())
			clustersObject.imageOwnerAlias = value["ImageOwnerAlias"].asString();
		if(!value["ImageId"].isNull())
			clustersObject.imageId = value["ImageId"].asString();
		auto allManagers = value["Managers"];
		for (auto value : allManagers)
		{
			ClusterInfoSimple::Managers managersObject;
			if(!value["Total"].isNull())
				managersObject.total = std::stoi(value["Total"].asString());
			if(!value["NormalCount"].isNull())
				managersObject.normalCount = std::stoi(value["NormalCount"].asString());
			if(!value["ExceptionCount"].isNull())
				managersObject.exceptionCount = std::stoi(value["ExceptionCount"].asString());
			clustersObject.managers.push_back(managersObject);
		}
		auto allComputes = value["Computes"];
		for (auto value : allComputes)
		{
			ClusterInfoSimple::Computes computesObject;
			if(!value["Total"].isNull())
				computesObject.total = std::stoi(value["Total"].asString());
			if(!value["NormalCount"].isNull())
				computesObject.normalCount = std::stoi(value["NormalCount"].asString());
			if(!value["ExceptionCount"].isNull())
				computesObject.exceptionCount = std::stoi(value["ExceptionCount"].asString());
			clustersObject.computes.push_back(computesObject);
		}
		auto allTotalResources = value["TotalResources"];
		for (auto value : allTotalResources)
		{
			ClusterInfoSimple::TotalResources totalResourcesObject;
			if(!value["Cpu"].isNull())
				totalResourcesObject.cpu = std::stoi(value["Cpu"].asString());
			if(!value["Memory"].isNull())
				totalResourcesObject.memory = std::stoi(value["Memory"].asString());
			if(!value["Gpu"].isNull())
				totalResourcesObject.gpu = std::stoi(value["Gpu"].asString());
			clustersObject.totalResources.push_back(totalResourcesObject);
		}
		auto allUsedResources = value["UsedResources"];
		for (auto value : allUsedResources)
		{
			ClusterInfoSimple::UsedResources usedResourcesObject;
			if(!value["Cpu"].isNull())
				usedResourcesObject.cpu = std::stoi(value["Cpu"].asString());
			if(!value["Memory"].isNull())
				usedResourcesObject.memory = std::stoi(value["Memory"].asString());
			if(!value["Gpu"].isNull())
				usedResourcesObject.gpu = std::stoi(value["Gpu"].asString());
			clustersObject.usedResources.push_back(usedResourcesObject);
		}
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

