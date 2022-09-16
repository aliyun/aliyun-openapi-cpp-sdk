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

#include <alibabacloud/ecd/model/DeleteDriveResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

DeleteDriveResult::DeleteDriveResult() :
	ServiceResult()
{}

DeleteDriveResult::DeleteDriveResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteDriveResult::~DeleteDriveResult()
{}

void DeleteDriveResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Data"].isNull())
		data_ = value["Data"].asString() == "true";

}

std::string DeleteDriveResult::getMessage()const
{
	return message_;
}

bool DeleteDriveResult::getData()const
{
	return data_;
}

std::string DeleteDriveResult::getCode()const
{
	return code_;
}

bool DeleteDriveResult::getSuccess()const
{
	return success_;
}

