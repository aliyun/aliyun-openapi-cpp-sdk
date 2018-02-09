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

#include <alibabacloud/ehpc/model/ListNodesNoPagingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

ListNodesNoPagingResult::ListNodesNoPagingResult() :
	ServiceResult()
{}

ListNodesNoPagingResult::ListNodesNoPagingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNodesNoPagingResult::~ListNodesNoPagingResult()
{}

void ListNodesNoPagingResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allNodes = value["Nodes"]["NodeInfo"];
	for (auto value : allNodes)
	{
		NodeInfo nodesObject;
		if(!value["Id"].isNull())
			nodesObject.id = value["Id"].asString();
		if(!value["RegionId"].isNull())
			nodesObject.regionId = value["RegionId"].asString();
		if(!value["Status"].isNull())
			nodesObject.status = value["Status"].asString();
		if(!value["CreatedByEhpc"].isNull())
			nodesObject.createdByEhpc = value["CreatedByEhpc"].asString() == "true";
		if(!value["Role"].isNull())
			nodesObject.role = value["Role"].asString();
		if(!value["AddTime"].isNull())
			nodesObject.addTime = value["AddTime"].asString();
		if(!value["Expired"].isNull())
			nodesObject.expired = value["Expired"].asString() == "true";
		if(!value["ExpiredTime"].isNull())
			nodesObject.expiredTime = value["ExpiredTime"].asString();
		if(!value["SpotStrategy"].isNull())
			nodesObject.spotStrategy = value["SpotStrategy"].asString();
		if(!value["LockReason"].isNull())
			nodesObject.lockReason = value["LockReason"].asString();
		if(!value["ImageOwnerAlias"].isNull())
			nodesObject.imageOwnerAlias = value["ImageOwnerAlias"].asString();
		if(!value["ImageId"].isNull())
			nodesObject.imageId = value["ImageId"].asString();
		auto allTotalResources = value["TotalResources"];
		for (auto value : allTotalResources)
		{
			NodeInfo::TotalResources totalResourcesObject;
			if(!value["Cpu"].isNull())
				totalResourcesObject.cpu = std::stoi(value["Cpu"].asString());
			if(!value["Memory"].isNull())
				totalResourcesObject.memory = std::stoi(value["Memory"].asString());
			if(!value["Gpu"].isNull())
				totalResourcesObject.gpu = std::stoi(value["Gpu"].asString());
			nodesObject.totalResources.push_back(totalResourcesObject);
		}
		auto allUsedResources = value["UsedResources"];
		for (auto value : allUsedResources)
		{
			NodeInfo::UsedResources usedResourcesObject;
			if(!value["Cpu"].isNull())
				usedResourcesObject.cpu = std::stoi(value["Cpu"].asString());
			if(!value["Memory"].isNull())
				usedResourcesObject.memory = std::stoi(value["Memory"].asString());
			if(!value["Gpu"].isNull())
				usedResourcesObject.gpu = std::stoi(value["Gpu"].asString());
			nodesObject.usedResources.push_back(usedResourcesObject);
		}
		nodes_.push_back(nodesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int ListNodesNoPagingResult::getTotalCount()const
{
	return totalCount_;
}

int ListNodesNoPagingResult::getPageSize()const
{
	return pageSize_;
}

int ListNodesNoPagingResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListNodesNoPagingResult::NodeInfo> ListNodesNoPagingResult::getNodes()const
{
	return nodes_;
}

