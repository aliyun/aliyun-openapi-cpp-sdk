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

#include <alibabacloud/schedulerx3/model/CreateJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SchedulerX3;
using namespace AlibabaCloud::SchedulerX3::Model;

CreateJobResult::CreateJobResult() :
	ServiceResult()
{}

CreateJobResult::CreateJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateJobResult::~CreateJobResult()
{}

void CreateJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["JobId"].isNull())
		data_.jobId = std::stol(dataNode["JobId"].asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string CreateJobResult::getMessage()const
{
	return message_;
}

CreateJobResult::Data CreateJobResult::getData()const
{
	return data_;
}

int CreateJobResult::getCode()const
{
	return code_;
}

bool CreateJobResult::getSuccess()const
{
	return success_;
}

