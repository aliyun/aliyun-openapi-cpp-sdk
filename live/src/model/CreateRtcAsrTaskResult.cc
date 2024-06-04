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

#include <alibabacloud/live/model/CreateRtcAsrTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

CreateRtcAsrTaskResult::CreateRtcAsrTaskResult() :
	ServiceResult()
{}

CreateRtcAsrTaskResult::CreateRtcAsrTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateRtcAsrTaskResult::~CreateRtcAsrTaskResult()
{}

void CreateRtcAsrTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["RetCode"].isNull())
		retCode_ = std::stol(value["RetCode"].asString());
	if(!value["TaskId"].isNull())
		taskId_ = value["TaskId"].asString();

}

std::string CreateRtcAsrTaskResult::getDescription()const
{
	return description_;
}

std::string CreateRtcAsrTaskResult::getTaskId()const
{
	return taskId_;
}

long CreateRtcAsrTaskResult::getRetCode()const
{
	return retCode_;
}

