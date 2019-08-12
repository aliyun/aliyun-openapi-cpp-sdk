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

#include <alibabacloud/dbs/model/ModifyBackupObjectsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dbs;
using namespace AlibabaCloud::Dbs::Model;

ModifyBackupObjectsResult::ModifyBackupObjectsResult() :
	ServiceResult()
{}

ModifyBackupObjectsResult::ModifyBackupObjectsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyBackupObjectsResult::~ModifyBackupObjectsResult()
{}

void ModifyBackupObjectsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["BackupPlanId"].isNull())
		backupPlanId_ = value["BackupPlanId"].asString();
	if(!value["NeedPrecheck"].isNull())
		needPrecheck_ = value["NeedPrecheck"].asString() == "true";

}

int ModifyBackupObjectsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ModifyBackupObjectsResult::getBackupPlanId()const
{
	return backupPlanId_;
}

bool ModifyBackupObjectsResult::getNeedPrecheck()const
{
	return needPrecheck_;
}

std::string ModifyBackupObjectsResult::getErrMessage()const
{
	return errMessage_;
}

bool ModifyBackupObjectsResult::getSuccess()const
{
	return success_;
}

std::string ModifyBackupObjectsResult::getErrCode()const
{
	return errCode_;
}

