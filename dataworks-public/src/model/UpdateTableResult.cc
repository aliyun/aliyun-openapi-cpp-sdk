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

#include <alibabacloud/dataworks-public/model/UpdateTableResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

UpdateTableResult::UpdateTableResult() :
	ServiceResult()
{}

UpdateTableResult::UpdateTableResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateTableResult::~UpdateTableResult()
{}

void UpdateTableResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto taskInfoNode = value["TaskInfo"];
	if(!taskInfoNode["Status"].isNull())
		taskInfo_.status = taskInfoNode["Status"].asString();
	if(!taskInfoNode["NextTaskId"].isNull())
		taskInfo_.nextTaskId = taskInfoNode["NextTaskId"].asString();
	if(!taskInfoNode["TaskId"].isNull())
		taskInfo_.taskId = taskInfoNode["TaskId"].asString();
	if(!taskInfoNode["Content"].isNull())
		taskInfo_.content = taskInfoNode["Content"].asString();

}

UpdateTableResult::TaskInfo UpdateTableResult::getTaskInfo()const
{
	return taskInfo_;
}

