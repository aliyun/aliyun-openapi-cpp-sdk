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

#include <alibabacloud/sgw/model/UploadCSGClientLogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

UploadCSGClientLogResult::UploadCSGClientLogResult() :
	ServiceResult()
{}

UploadCSGClientLogResult::UploadCSGClientLogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UploadCSGClientLogResult::~UploadCSGClientLogResult()
{}

void UploadCSGClientLogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TaskId"].isNull())
		taskId_ = value["TaskId"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string UploadCSGClientLogResult::getTaskId()const
{
	return taskId_;
}

std::string UploadCSGClientLogResult::getMessage()const
{
	return message_;
}

std::string UploadCSGClientLogResult::getCode()const
{
	return code_;
}

bool UploadCSGClientLogResult::getSuccess()const
{
	return success_;
}

