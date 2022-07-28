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

#include <alibabacloud/dbs/model/CreateRestoreTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dbs;
using namespace AlibabaCloud::Dbs::Model;

CreateRestoreTaskResult::CreateRestoreTaskResult() :
	ServiceResult()
{}

CreateRestoreTaskResult::CreateRestoreTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateRestoreTaskResult::~CreateRestoreTaskResult()
{}

void CreateRestoreTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["RestoreTaskId"].isNull())
		restoreTaskId_ = value["RestoreTaskId"].asString();

}

std::string CreateRestoreTaskResult::getRestoreTaskId()const
{
	return restoreTaskId_;
}

int CreateRestoreTaskResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string CreateRestoreTaskResult::getErrMessage()const
{
	return errMessage_;
}

bool CreateRestoreTaskResult::getSuccess()const
{
	return success_;
}

std::string CreateRestoreTaskResult::getErrCode()const
{
	return errCode_;
}

