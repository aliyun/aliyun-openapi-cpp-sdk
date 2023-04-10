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

#include <alibabacloud/datalake/model/GetLockResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DataLake;
using namespace AlibabaCloud::DataLake::Model;

GetLockResult::GetLockResult() :
	ServiceResult()
{}

GetLockResult::GetLockResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetLockResult::~GetLockResult()
{}

void GetLockResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto lockStatusNode = value["LockStatus"];
	if(!lockStatusNode["LockId"].isNull())
		lockStatus_.lockId = std::stol(lockStatusNode["LockId"].asString());
	if(!lockStatusNode["LockState"].isNull())
		lockStatus_.lockState = lockStatusNode["LockState"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetLockResult::getMessage()const
{
	return message_;
}

GetLockResult::LockStatus GetLockResult::getLockStatus()const
{
	return lockStatus_;
}

std::string GetLockResult::getCode()const
{
	return code_;
}

bool GetLockResult::getSuccess()const
{
	return success_;
}

