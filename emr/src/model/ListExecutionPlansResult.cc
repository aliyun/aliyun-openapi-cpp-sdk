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

#include <alibabacloud/emr/model/ListExecutionPlansResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListExecutionPlansResult::ListExecutionPlansResult() :
	ServiceResult()
{}

ListExecutionPlansResult::ListExecutionPlansResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListExecutionPlansResult::~ListExecutionPlansResult()
{}

void ListExecutionPlansResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allExecutionPlansNode = value["ExecutionPlans"]["ExecutionPlanInfo"];
	for (auto valueExecutionPlansExecutionPlanInfo : allExecutionPlansNode)
	{
		ExecutionPlanInfo executionPlansObject;
		if(!valueExecutionPlansExecutionPlanInfo["Id"].isNull())
			executionPlansObject.id = valueExecutionPlansExecutionPlanInfo["Id"].asString();
		if(!valueExecutionPlansExecutionPlanInfo["Name"].isNull())
			executionPlansObject.name = valueExecutionPlansExecutionPlanInfo["Name"].asString();
		if(!valueExecutionPlansExecutionPlanInfo["CreateClusterOnDemand"].isNull())
			executionPlansObject.createClusterOnDemand = valueExecutionPlansExecutionPlanInfo["CreateClusterOnDemand"].asString() == "true";
		if(!valueExecutionPlansExecutionPlanInfo["Stragety"].isNull())
			executionPlansObject.stragety = valueExecutionPlansExecutionPlanInfo["Stragety"].asString();
		if(!valueExecutionPlansExecutionPlanInfo["Status"].isNull())
			executionPlansObject.status = valueExecutionPlansExecutionPlanInfo["Status"].asString();
		if(!valueExecutionPlansExecutionPlanInfo["TimeInterval"].isNull())
			executionPlansObject.timeInterval = std::stoi(valueExecutionPlansExecutionPlanInfo["TimeInterval"].asString());
		if(!valueExecutionPlansExecutionPlanInfo["StartTime"].isNull())
			executionPlansObject.startTime = std::stol(valueExecutionPlansExecutionPlanInfo["StartTime"].asString());
		if(!valueExecutionPlansExecutionPlanInfo["TimeUnit"].isNull())
			executionPlansObject.timeUnit = valueExecutionPlansExecutionPlanInfo["TimeUnit"].asString();
		executionPlans_.push_back(executionPlansObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int ListExecutionPlansResult::getTotalCount()const
{
	return totalCount_;
}

int ListExecutionPlansResult::getPageSize()const
{
	return pageSize_;
}

int ListExecutionPlansResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListExecutionPlansResult::ExecutionPlanInfo> ListExecutionPlansResult::getExecutionPlans()const
{
	return executionPlans_;
}

