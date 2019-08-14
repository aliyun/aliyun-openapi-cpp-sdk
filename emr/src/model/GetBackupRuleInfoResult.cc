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

#include <alibabacloud/emr/model/GetBackupRuleInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

GetBackupRuleInfoResult::GetBackupRuleInfoResult() :
	ServiceResult()
{}

GetBackupRuleInfoResult::GetBackupRuleInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetBackupRuleInfoResult::~GetBackupRuleInfoResult()
{}

void GetBackupRuleInfoResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["Id"].isNull())
		id_ = value["Id"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["MetadataType"].isNull())
		metadataType_ = value["MetadataType"].asString();
	if(!value["BackupMethodType"].isNull())
		backupMethodType_ = value["BackupMethodType"].asString();
	if(!value["BackupPlanId"].isNull())
		backupPlanId_ = value["BackupPlanId"].asString();

}

std::string GetBackupRuleInfoResult::getDescription()const
{
	return description_;
}

std::string GetBackupRuleInfoResult::getMetadataType()const
{
	return metadataType_;
}

std::string GetBackupRuleInfoResult::getBackupPlanId()const
{
	return backupPlanId_;
}

std::string GetBackupRuleInfoResult::getId()const
{
	return id_;
}

std::string GetBackupRuleInfoResult::getBackupMethodType()const
{
	return backupMethodType_;
}

std::string GetBackupRuleInfoResult::getName()const
{
	return name_;
}

