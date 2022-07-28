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

#include <alibabacloud/dbs/model/CreateAndStartBackupPlanResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dbs;
using namespace AlibabaCloud::Dbs::Model;

CreateAndStartBackupPlanResult::CreateAndStartBackupPlanResult() :
	ServiceResult()
{}

CreateAndStartBackupPlanResult::CreateAndStartBackupPlanResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateAndStartBackupPlanResult::~CreateAndStartBackupPlanResult()
{}

void CreateAndStartBackupPlanResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["CreateBackupSet"].isNull())
		createBackupSet_ = value["CreateBackupSet"].asString() == "true";
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["BackupPlanId"].isNull())
		backupPlanId_ = value["BackupPlanId"].asString();
	if(!value["OrderId"].isNull())
		orderId_ = value["OrderId"].asString();

}

bool CreateAndStartBackupPlanResult::getCreateBackupSet()const
{
	return createBackupSet_;
}

int CreateAndStartBackupPlanResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string CreateAndStartBackupPlanResult::getBackupPlanId()const
{
	return backupPlanId_;
}

std::string CreateAndStartBackupPlanResult::getErrMessage()const
{
	return errMessage_;
}

std::string CreateAndStartBackupPlanResult::getOrderId()const
{
	return orderId_;
}

bool CreateAndStartBackupPlanResult::getSuccess()const
{
	return success_;
}

std::string CreateAndStartBackupPlanResult::getErrCode()const
{
	return errCode_;
}

