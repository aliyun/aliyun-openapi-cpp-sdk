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

#include <alibabacloud/dataworks-public/model/ExportDISyncTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ExportDISyncTasksResult::ExportDISyncTasksResult() :
	ServiceResult()
{}

ExportDISyncTasksResult::ExportDISyncTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ExportDISyncTasksResult::~ExportDISyncTasksResult()
{}

void ExportDISyncTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["data"];
	if(!dataNode["realTimeSolution"].isNull())
		data_.realTimeSolution = dataNode["realTimeSolution"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::string ExportDISyncTasksResult::getRequestId()const
{
	return requestId_;
}

ExportDISyncTasksResult::Data ExportDISyncTasksResult::getData()const
{
	return data_;
}

bool ExportDISyncTasksResult::getSuccess()const
{
	return success_;
}

