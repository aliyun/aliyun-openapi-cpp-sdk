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
	auto allClusterOperationList = value["ClusterOperationList"]["ClusterOperation"];
	for (auto value : allClusterOperationList)
	{
		ClusterOperation clusterOperationListObject;
		if(!value["OperationId"].isNull())
			clusterOperationListObject.operationId = value["OperationId"].asString();
		if(!value["OperationName"].isNull())
			clusterOperationListObject.operationName = value["OperationName"].asString();
		if(!value["StartTime"].isNull())
			clusterOperationListObject.startTime = value["StartTime"].asString();
		if(!value["Duration"].isNull())
			clusterOperationListObject.duration = value["Duration"].asString();
		if(!value["Status"].isNull())
			clusterOperationListObject.status = value["Status"].asString();
		if(!value["Percentage"].isNull())
			clusterOperationListObject.percentage = value["Percentage"].asString();
		if(!value["Comment"].isNull())
			clusterOperationListObject.comment = value["Comment"].asString();
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

