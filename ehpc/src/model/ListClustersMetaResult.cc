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

#include <alibabacloud/ehpc/model/ListClustersMetaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

ListClustersMetaResult::ListClustersMetaResult() :
	ServiceResult()
{}

ListClustersMetaResult::ListClustersMetaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClustersMetaResult::~ListClustersMetaResult()
{}

void ListClustersMetaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allClustersNode = value["Clusters"]["ClusterInfoSimple"];
	for (auto valueClustersClusterInfoSimple : allClustersNode)
	{
		ClusterInfoSimple clustersObject;
		if(!valueClustersClusterInfoSimple["Status"].isNull())
			clustersObject.status = valueClustersClusterInfoSimple["Status"].asString();
		if(!valueClustersClusterInfoSimple["VpcId"].isNull())
			clustersObject.vpcId = valueClustersClusterInfoSimple["VpcId"].asString();
		if(!valueClustersClusterInfoSimple["SchedulerType"].isNull())
			clustersObject.schedulerType = valueClustersClusterInfoSimple["SchedulerType"].asString();
		if(!valueClustersClusterInfoSimple["DeployMode"].isNull())
			clustersObject.deployMode = valueClustersClusterInfoSimple["DeployMode"].asString();
		if(!valueClustersClusterInfoSimple["IsComputeEss"].isNull())
			clustersObject.isComputeEss = valueClustersClusterInfoSimple["IsComputeEss"].asString() == "true";
		if(!valueClustersClusterInfoSimple["OsTag"].isNull())
			clustersObject.osTag = valueClustersClusterInfoSimple["OsTag"].asString();
		if(!valueClustersClusterInfoSimple["AccountType"].isNull())
			clustersObject.accountType = valueClustersClusterInfoSimple["AccountType"].asString();
		if(!valueClustersClusterInfoSimple["Description"].isNull())
			clustersObject.description = valueClustersClusterInfoSimple["Description"].asString();
		if(!valueClustersClusterInfoSimple["Name"].isNull())
			clustersObject.name = valueClustersClusterInfoSimple["Name"].asString();
		if(!valueClustersClusterInfoSimple["Id"].isNull())
			clustersObject.id = valueClustersClusterInfoSimple["Id"].asString();
		if(!valueClustersClusterInfoSimple["Location"].isNull())
			clustersObject.location = valueClustersClusterInfoSimple["Location"].asString();
		if(!valueClustersClusterInfoSimple["ClientVersion"].isNull())
			clustersObject.clientVersion = valueClustersClusterInfoSimple["ClientVersion"].asString();
		if(!valueClustersClusterInfoSimple["HasPlugin"].isNull())
			clustersObject.hasPlugin = valueClustersClusterInfoSimple["HasPlugin"].asString() == "true";
		if(!valueClustersClusterInfoSimple["EhpcVersion"].isNull())
			clustersObject.ehpcVersion = valueClustersClusterInfoSimple["EhpcVersion"].asString();
		clusters_.push_back(clustersObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListClustersMetaResult::getTotalCount()const
{
	return totalCount_;
}

int ListClustersMetaResult::getPageSize()const
{
	return pageSize_;
}

int ListClustersMetaResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListClustersMetaResult::ClusterInfoSimple> ListClustersMetaResult::getClusters()const
{
	return clusters_;
}

