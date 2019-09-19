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

#include <alibabacloud/foas/model/ListClusterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Foas;
using namespace AlibabaCloud::Foas::Model;

ListClusterResult::ListClusterResult() :
	ServiceResult()
{}

ListClusterResult::ListClusterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClusterResult::~ListClusterResult()
{}

void ListClusterResult::parse(const std::string &payload)
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
		if(!valueClustersCluster["RegionId"].isNull())
			clustersObject.regionId = valueClustersCluster["RegionId"].asString();
		if(!valueClustersCluster["ZoneId"].isNull())
			clustersObject.zoneId = valueClustersCluster["ZoneId"].asString();
		if(!valueClustersCluster["State"].isNull())
			clustersObject.state = valueClustersCluster["State"].asString();
		if(!valueClustersCluster["OwnerId"].isNull())
			clustersObject.ownerId = valueClustersCluster["OwnerId"].asString();
		if(!valueClustersCluster["Operator"].isNull())
			clustersObject._operator = valueClustersCluster["Operator"].asString();
		if(!valueClustersCluster["DisplayName"].isNull())
			clustersObject.displayName = valueClustersCluster["DisplayName"].asString();
		if(!valueClustersCluster["Description"].isNull())
			clustersObject.description = valueClustersCluster["Description"].asString();
		if(!valueClustersCluster["GmtCreate"].isNull())
			clustersObject.gmtCreate = std::stol(valueClustersCluster["GmtCreate"].asString());
		if(!valueClustersCluster["GmtModified"].isNull())
			clustersObject.gmtModified = std::stol(valueClustersCluster["GmtModified"].asString());
		clusters_.push_back(clustersObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["TotalPage"].isNull())
		totalPage_ = std::stoi(value["TotalPage"].asString());
	if(!value["PageIndex"].isNull())
		pageIndex_ = std::stoi(value["PageIndex"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

long ListClusterResult::getTotalCount()const
{
	return totalCount_;
}

int ListClusterResult::getTotalPage()const
{
	return totalPage_;
}

int ListClusterResult::getPageSize()const
{
	return pageSize_;
}

std::vector<ListClusterResult::Cluster> ListClusterResult::getClusters()const
{
	return clusters_;
}

int ListClusterResult::getPageIndex()const
{
	return pageIndex_;
}

