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

#include <alibabacloud/emr/model/DescribeMetaTablePreviewTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeMetaTablePreviewTaskResult::DescribeMetaTablePreviewTaskResult() :
	ServiceResult()
{}

DescribeMetaTablePreviewTaskResult::DescribeMetaTablePreviewTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMetaTablePreviewTaskResult::~DescribeMetaTablePreviewTaskResult()
{}

void DescribeMetaTablePreviewTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allRowsNode = dataNode["Rows"]["Row"];
	for (auto dataNodeRowsRow : allRowsNode)
	{
		Data::Row rowObject;
		auto allColumns = value["Columns"]["Column"];
		for (auto value : allColumns)
			rowObject.columns.push_back(value.asString());
		data_.rows.push_back(rowObject);
	}
		auto allHeaders = dataNode["Headers"]["Header"];
		for (auto value : allHeaders)
			data_.headers.push_back(value.asString());
	if(!value["TaskId"].isNull())
		taskId_ = value["TaskId"].asString();
	if(!value["TaskStatus"].isNull())
		taskStatus_ = value["TaskStatus"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = std::stol(value["StartTime"].asString());
	if(!value["EndTime"].isNull())
		endTime_ = std::stol(value["EndTime"].asString());
	if(!value["ExecuteTime"].isNull())
		executeTime_ = std::stol(value["ExecuteTime"].asString());
	if(!value["TaskProcess"].isNull())
		taskProcess_ = std::stoi(value["TaskProcess"].asString());

}

std::string DescribeMetaTablePreviewTaskResult::getTaskId()const
{
	return taskId_;
}

long DescribeMetaTablePreviewTaskResult::getEndTime()const
{
	return endTime_;
}

long DescribeMetaTablePreviewTaskResult::getExecuteTime()const
{
	return executeTime_;
}

int DescribeMetaTablePreviewTaskResult::getTaskProcess()const
{
	return taskProcess_;
}

long DescribeMetaTablePreviewTaskResult::getStartTime()const
{
	return startTime_;
}

DescribeMetaTablePreviewTaskResult::Data DescribeMetaTablePreviewTaskResult::getData()const
{
	return data_;
}

std::string DescribeMetaTablePreviewTaskResult::getTaskStatus()const
{
	return taskStatus_;
}

