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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
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
		if(!value["VSwitchId"].isNull())
			clustersObject.vSwitchId = value["VSwitchId"].asString();
		if(!value["VpcId"].isNull())
			clustersObject.vpcId = value["VpcId"].asString();
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
		if(!value["DeployMode"].isNull())
			clustersObject.deployMode = value["DeployMode"].asString();
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
		if(!value["Location"].isNull())
			clustersObject.location = value["Location"].asString();
		if(!value["EhpcVersion"].isNull())
			clustersObject.ehpcVersion = value["EhpcVersion"].asString();
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

