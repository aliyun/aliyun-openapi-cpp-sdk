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

#include <alibabacloud/foas/model/ListInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Foas;
using namespace AlibabaCloud::Foas::Model;

ListInstanceResult::ListInstanceResult() :
	ServiceResult()
{}

ListInstanceResult::ListInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInstanceResult::~ListInstanceResult()
{}

void ListInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["Instance"];
	for (auto valueInstancesInstance : allInstancesNode)
	{
		Instance instancesObject;
		if(!valueInstancesInstance["Id"].isNull())
			instancesObject.id = std::stol(valueInstancesInstance["Id"].asString());
		if(!valueInstancesInstance["ProjectName"].isNull())
			instancesObject.projectName = valueInstancesInstance["ProjectName"].asString();
		if(!valueInstancesInstance["JobName"].isNull())
			instancesObject.jobName = valueInstancesInstance["JobName"].asString();
		if(!valueInstancesInstance["ActualState"].isNull())
			instancesObject.actualState = valueInstancesInstance["ActualState"].asString();
		if(!valueInstancesInstance["ExpectState"].isNull())
			instancesObject.expectState = valueInstancesInstance["ExpectState"].asString();
		if(!valueInstancesInstance["JobType"].isNull())
			instancesObject.jobType = valueInstancesInstance["JobType"].asString();
		if(!valueInstancesInstance["ApiType"].isNull())
			instancesObject.apiType = valueInstancesInstance["ApiType"].asString();
		if(!valueInstancesInstance["Code"].isNull())
			instancesObject.code = valueInstancesInstance["Code"].asString();
		if(!valueInstancesInstance["Properties"].isNull())
			instancesObject.properties = valueInstancesInstance["Properties"].asString();
		if(!valueInstancesInstance["Packages"].isNull())
			instancesObject.packages = valueInstancesInstance["Packages"].asString();
		if(!valueInstancesInstance["Starter"].isNull())
			instancesObject.starter = valueInstancesInstance["Starter"].asString();
		if(!valueInstancesInstance["StartTime"].isNull())
			instancesObject.startTime = std::stol(valueInstancesInstance["StartTime"].asString());
		if(!valueInstancesInstance["LastErrorTime"].isNull())
			instancesObject.lastErrorTime = std::stol(valueInstancesInstance["LastErrorTime"].asString());
		if(!valueInstancesInstance["LastErrorMessage"].isNull())
			instancesObject.lastErrorMessage = valueInstancesInstance["LastErrorMessage"].asString();
		if(!valueInstancesInstance["LastOperator"].isNull())
			instancesObject.lastOperator = valueInstancesInstance["LastOperator"].asString();
		if(!valueInstancesInstance["LastOperateTime"].isNull())
			instancesObject.lastOperateTime = std::stol(valueInstancesInstance["LastOperateTime"].asString());
		if(!valueInstancesInstance["PlanJson"].isNull())
			instancesObject.planJson = valueInstancesInstance["PlanJson"].asString();
		if(!valueInstancesInstance["EngineVersion"].isNull())
			instancesObject.engineVersion = valueInstancesInstance["EngineVersion"].asString();
		if(!valueInstancesInstance["EngineJobHandler"].isNull())
			instancesObject.engineJobHandler = valueInstancesInstance["EngineJobHandler"].asString();
		if(!valueInstancesInstance["InputDelay"].isNull())
			instancesObject.inputDelay = std::stol(valueInstancesInstance["InputDelay"].asString());
		if(!valueInstancesInstance["ClusterId"].isNull())
			instancesObject.clusterId = valueInstancesInstance["ClusterId"].asString();
		if(!valueInstancesInstance["QueueName"].isNull())
			instancesObject.queueName = valueInstancesInstance["QueueName"].asString();
		if(!valueInstancesInstance["EndTime"].isNull())
			instancesObject.endTime = std::stol(valueInstancesInstance["EndTime"].asString());
		if(!valueInstancesInstance["Priority"].isNull())
			instancesObject.priority = std::stoi(valueInstancesInstance["Priority"].asString());
		instances_.push_back(instancesObject);
	}
	if(!value["PageIndex"].isNull())
		pageIndex_ = std::stoi(value["PageIndex"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalPage"].isNull())
		totalPage_ = std::stoi(value["TotalPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

std::vector<ListInstanceResult::Instance> ListInstanceResult::getInstances()const
{
	return instances_;
}

long ListInstanceResult::getTotalCount()const
{
	return totalCount_;
}

int ListInstanceResult::getPageSize()const
{
	return pageSize_;
}

int ListInstanceResult::getTotalPage()const
{
	return totalPage_;
}

int ListInstanceResult::getPageIndex()const
{
	return pageIndex_;
}

