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

#include <alibabacloud/drds/model/DescribeEvaluateTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeEvaluateTasksResult::DescribeEvaluateTasksResult() :
	ServiceResult()
{}

DescribeEvaluateTasksResult::DescribeEvaluateTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEvaluateTasksResult::~DescribeEvaluateTasksResult()
{}

void DescribeEvaluateTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["EvaluateTask"];
	for (auto valueDataEvaluateTask : allDataNode)
	{
		EvaluateTask dataObject;
		if(!valueDataEvaluateTask["Id"].isNull())
			dataObject.id = std::stoi(valueDataEvaluateTask["Id"].asString());
		if(!valueDataEvaluateTask["BatchEvaluateTaskId"].isNull())
			dataObject.batchEvaluateTaskId = std::stoi(valueDataEvaluateTask["BatchEvaluateTaskId"].asString());
		if(!valueDataEvaluateTask["TaskName"].isNull())
			dataObject.taskName = valueDataEvaluateTask["TaskName"].asString();
		if(!valueDataEvaluateTask["GmtCreate"].isNull())
			dataObject.gmtCreate = valueDataEvaluateTask["GmtCreate"].asString();
		if(!valueDataEvaluateTask["GmtModified"].isNull())
			dataObject.gmtModified = valueDataEvaluateTask["GmtModified"].asString();
		if(!valueDataEvaluateTask["Status"].isNull())
			dataObject.status = valueDataEvaluateTask["Status"].asString();
		if(!valueDataEvaluateTask["InstId"].isNull())
			dataObject.instId = valueDataEvaluateTask["InstId"].asString();
		if(!valueDataEvaluateTask["DbName"].isNull())
			dataObject.dbName = valueDataEvaluateTask["DbName"].asString();
		if(!valueDataEvaluateTask["Progress"].isNull())
			dataObject.progress = std::stoi(valueDataEvaluateTask["Progress"].asString());
		if(!valueDataEvaluateTask["EvalauteHours"].isNull())
			dataObject.evalauteHours = std::stoi(valueDataEvaluateTask["EvalauteHours"].asString());
		if(!valueDataEvaluateTask["AllSqlCount"].isNull())
			dataObject.allSqlCount = std::stoi(valueDataEvaluateTask["AllSqlCount"].asString());
		if(!valueDataEvaluateTask["DbType"].isNull())
			dataObject.dbType = std::stoi(valueDataEvaluateTask["DbType"].asString());
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int DescribeEvaluateTasksResult::getPageSize()const
{
	return pageSize_;
}

int DescribeEvaluateTasksResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeEvaluateTasksResult::getTotal()const
{
	return total_;
}

std::vector<DescribeEvaluateTasksResult::EvaluateTask> DescribeEvaluateTasksResult::getData()const
{
	return data_;
}

bool DescribeEvaluateTasksResult::getSuccess()const
{
	return success_;
}

