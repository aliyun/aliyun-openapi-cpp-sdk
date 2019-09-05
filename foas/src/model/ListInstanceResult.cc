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
	auto allInstances = value["Instances"]["Instance"];
	for (auto value : allInstances)
	{
		Instance instancesObject;
		if(!value["Id"].isNull())
			instancesObject.id = std::stol(value["Id"].asString());
		if(!value["ProjectName"].isNull())
			instancesObject.projectName = value["ProjectName"].asString();
		if(!value["JobName"].isNull())
			instancesObject.jobName = value["JobName"].asString();
		if(!value["ActualState"].isNull())
			instancesObject.actualState = value["ActualState"].asString();
		if(!value["ExpectState"].isNull())
			instancesObject.expectState = value["ExpectState"].asString();
		if(!value["JobType"].isNull())
			instancesObject.jobType = value["JobType"].asString();
		if(!value["ApiType"].isNull())
			instancesObject.apiType = value["ApiType"].asString();
		if(!value["Code"].isNull())
			instancesObject.code = value["Code"].asString();
		if(!value["Properties"].isNull())
			instancesObject.properties = value["Properties"].asString();
		if(!value["Packages"].isNull())
			instancesObject.packages = value["Packages"].asString();
		if(!value["Starter"].isNull())
			instancesObject.starter = value["Starter"].asString();
		if(!value["StartTime"].isNull())
			instancesObject.startTime = std::stol(value["StartTime"].asString());
		if(!value["LastErrorTime"].isNull())
			instancesObject.lastErrorTime = std::stol(value["LastErrorTime"].asString());
		if(!value["LastErrorMessage"].isNull())
			instancesObject.lastErrorMessage = value["LastErrorMessage"].asString();
		if(!value["LastOperator"].isNull())
			instancesObject.lastOperator = value["LastOperator"].asString();
		if(!value["LastOperateTime"].isNull())
			instancesObject.lastOperateTime = std::stol(value["LastOperateTime"].asString());
		if(!value["PlanJson"].isNull())
			instancesObject.planJson = value["PlanJson"].asString();
		if(!value["EngineVersion"].isNull())
			instancesObject.engineVersion = value["EngineVersion"].asString();
		if(!value["EngineJobHandler"].isNull())
			instancesObject.engineJobHandler = value["EngineJobHandler"].asString();
		if(!value["InputDelay"].isNull())
			instancesObject.inputDelay = std::stol(value["InputDelay"].asString());
		if(!value["ClusterId"].isNull())
			instancesObject.clusterId = value["ClusterId"].asString();
		if(!value["QueueName"].isNull())
			instancesObject.queueName = value["QueueName"].asString();
		if(!value["EndTime"].isNull())
			instancesObject.endTime = std::stol(value["EndTime"].asString());
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

