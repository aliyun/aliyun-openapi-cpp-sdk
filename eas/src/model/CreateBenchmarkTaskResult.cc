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

#include <alibabacloud/eas/model/CreateBenchmarkTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eas;
using namespace AlibabaCloud::Eas::Model;

CreateBenchmarkTaskResult::CreateBenchmarkTaskResult() :
	ServiceResult()
{}

CreateBenchmarkTaskResult::CreateBenchmarkTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateBenchmarkTaskResult::~CreateBenchmarkTaskResult()
{}

void CreateBenchmarkTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["TaskName"].isNull())
		taskName_ = value["TaskName"].asString();
	if(!value["Region"].isNull())
		region_ = value["Region"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string CreateBenchmarkTaskResult::getMessage()const
{
	return message_;
}

std::string CreateBenchmarkTaskResult::getTaskName()const
{
	return taskName_;
}

std::string CreateBenchmarkTaskResult::getRegion()const
{
	return region_;
}

