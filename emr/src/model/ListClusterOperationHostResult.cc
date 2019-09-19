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

#include <alibabacloud/emr/model/ListClusterOperationHostResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListClusterOperationHostResult::ListClusterOperationHostResult() :
	ServiceResult()
{}

ListClusterOperationHostResult::ListClusterOperationHostResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClusterOperationHostResult::~ListClusterOperationHostResult()
{}

void ListClusterOperationHostResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allClusterOperationHostListNode = value["ClusterOperationHostList"]["ClusterOperationHost"];
	for (auto valueClusterOperationHostListClusterOperationHost : allClusterOperationHostListNode)
	{
		ClusterOperationHost clusterOperationHostListObject;
		if(!valueClusterOperationHostListClusterOperationHost["HostId"].isNull())
			clusterOperationHostListObject.hostId = valueClusterOperationHostListClusterOperationHost["HostId"].asString();
		if(!valueClusterOperationHostListClusterOperationHost["HostName"].isNull())
			clusterOperationHostListObject.hostName = valueClusterOperationHostListClusterOperationHost["HostName"].asString();
		if(!valueClusterOperationHostListClusterOperationHost["Status"].isNull())
			clusterOperationHostListObject.status = valueClusterOperationHostListClusterOperationHost["Status"].asString();
		if(!valueClusterOperationHostListClusterOperationHost["Percentage"].isNull())
			clusterOperationHostListObject.percentage = valueClusterOperationHostListClusterOperationHost["Percentage"].asString();
		clusterOperationHostList_.push_back(clusterOperationHostListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int ListClusterOperationHostResult::getTotalCount()const
{
	return totalCount_;
}

int ListClusterOperationHostResult::getPageSize()const
{
	return pageSize_;
}

int ListClusterOperationHostResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListClusterOperationHostResult::ClusterOperationHost> ListClusterOperationHostResult::getClusterOperationHostList()const
{
	return clusterOperationHostList_;
}

