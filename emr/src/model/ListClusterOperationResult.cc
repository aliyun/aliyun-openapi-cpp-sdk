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

#include <alibabacloud/emr/model/ListClusterOperationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListClusterOperationResult::ListClusterOperationResult() :
	ServiceResult()
{}

ListClusterOperationResult::ListClusterOperationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClusterOperationResult::~ListClusterOperationResult()
{}

void ListClusterOperationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allClusterOperationListNode = value["ClusterOperationList"]["ClusterOperation"];
	for (auto valueClusterOperationListClusterOperation : allClusterOperationListNode)
	{
		ClusterOperation clusterOperationListObject;
		if(!valueClusterOperationListClusterOperation["OperationId"].isNull())
			clusterOperationListObject.operationId = valueClusterOperationListClusterOperation["OperationId"].asString();
		if(!valueClusterOperationListClusterOperation["OperationName"].isNull())
			clusterOperationListObject.operationName = valueClusterOperationListClusterOperation["OperationName"].asString();
		if(!valueClusterOperationListClusterOperation["StartTime"].isNull())
			clusterOperationListObject.startTime = valueClusterOperationListClusterOperation["StartTime"].asString();
		if(!valueClusterOperationListClusterOperation["Duration"].isNull())
			clusterOperationListObject.duration = valueClusterOperationListClusterOperation["Duration"].asString();
		if(!valueClusterOperationListClusterOperation["Status"].isNull())
			clusterOperationListObject.status = valueClusterOperationListClusterOperation["Status"].asString();
		if(!valueClusterOperationListClusterOperation["Percentage"].isNull())
			clusterOperationListObject.percentage = valueClusterOperationListClusterOperation["Percentage"].asString();
		if(!valueClusterOperationListClusterOperation["Comment"].isNull())
			clusterOperationListObject.comment = valueClusterOperationListClusterOperation["Comment"].asString();
		clusterOperationList_.push_back(clusterOperationListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

std::vector<ListClusterOperationResult::ClusterOperation> ListClusterOperationResult::getClusterOperationList()const
{
	return clusterOperationList_;
}

int ListClusterOperationResult::getTotalCount()const
{
	return totalCount_;
}

int ListClusterOperationResult::getPageSize()const
{
	return pageSize_;
}

int ListClusterOperationResult::getPageNumber()const
{
	return pageNumber_;
}

