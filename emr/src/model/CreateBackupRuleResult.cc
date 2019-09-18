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

#include <alibabacloud/emr/model/CreateBackupRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

CreateBackupRuleResult::CreateBackupRuleResult() :
	ServiceResult()
{}

CreateBackupRuleResult::CreateBackupRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateBackupRuleResult::~CreateBackupRuleResult()
{}

void CreateBackupRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
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

std::string CreateBackupRuleResult::getDescription()const
{
	return description_;
}

std::string CreateBackupRuleResult::getMetadataType()const
{
	return metadataType_;
}

std::string CreateBackupRuleResult::getBackupPlanId()const
{
	return backupPlanId_;
}

std::string CreateBackupRuleResult::getId()const
{
	return id_;
}

std::string CreateBackupRuleResult::getBackupMethodType()const
{
	return backupMethodType_;
}

std::string CreateBackupRuleResult::getName()const
{
	return name_;
}

