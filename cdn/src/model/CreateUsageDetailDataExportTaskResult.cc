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

#include <alibabacloud/cdn/model/CreateUsageDetailDataExportTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

CreateUsageDetailDataExportTaskResult::CreateUsageDetailDataExportTaskResult() :
	ServiceResult()
{}

CreateUsageDetailDataExportTaskResult::CreateUsageDetailDataExportTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateUsageDetailDataExportTaskResult::~CreateUsageDetailDataExportTaskResult()
{}

void CreateUsageDetailDataExportTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["TaskId"].isNull())
		taskId_ = value["TaskId"].asString();

}

std::string CreateUsageDetailDataExportTaskResult::getTaskId()const
{
	return taskId_;
}

std::string CreateUsageDetailDataExportTaskResult::getEndTime()const
{
	return endTime_;
}

std::string CreateUsageDetailDataExportTaskResult::getStartTime()const
{
	return startTime_;
}

