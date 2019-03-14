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

#include <alibabacloud/emr/model/MetastoreDescribeTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

MetastoreDescribeTaskResult::MetastoreDescribeTaskResult() :
	ServiceResult()
{}

MetastoreDescribeTaskResult::MetastoreDescribeTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

MetastoreDescribeTaskResult::~MetastoreDescribeTaskResult()
{}

void MetastoreDescribeTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto taskNode = value["Task"];
	if(!taskNode["BizId"].isNull())
		task_.bizId = taskNode["BizId"].asString();
	if(!taskNode["DataSourceId"].isNull())
		task_.dataSourceId = taskNode["DataSourceId"].asString();
	if(!taskNode["TaskType"].isNull())
		task_.taskType = taskNode["TaskType"].asString();
	if(!taskNode["TaskStatus"].isNull())
		task_.taskStatus = taskNode["TaskStatus"].asString();
	if(!taskNode["StartTime"].isNull())
		task_.startTime = std::stol(taskNode["StartTime"].asString());
	if(!taskNode["EndTime"].isNull())
		task_.endTime = std::stol(taskNode["EndTime"].asString());
	if(!taskNode["TaskDetail"].isNull())
		task_.taskDetail = taskNode["TaskDetail"].asString();
	if(!taskNode["TaskObject"].isNull())
		task_.taskObject = taskNode["TaskObject"].asString();
	if(!taskNode["TaskResultDetail"].isNull())
		task_.taskResultDetail = taskNode["TaskResultDetail"].asString();
	if(!taskNode["TaskProcess"].isNull())
		task_.taskProcess = std::stoi(taskNode["TaskProcess"].asString());
	if(!taskNode["TriggerUser"].isNull())
		task_.triggerUser = taskNode["TriggerUser"].asString();
	if(!taskNode["TriggerType"].isNull())
		task_.triggerType = taskNode["TriggerType"].asString();
	if(!taskNode["GmtCreate"].isNull())
		task_.gmtCreate = std::stol(taskNode["GmtCreate"].asString());
	if(!taskNode["GmtModified"].isNull())
		task_.gmtModified = std::stol(taskNode["GmtModified"].asString());
	if(!taskNode["ExecuteTime"].isNull())
		task_.executeTime = std::stol(taskNode["ExecuteTime"].asString());

}

MetastoreDescribeTaskResult::Task MetastoreDescribeTaskResult::getTask()const
{
	return task_;
}

