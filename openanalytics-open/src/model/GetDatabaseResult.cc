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

#include <alibabacloud/openanalytics-open/model/GetDatabaseResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Openanalytics_open;
using namespace AlibabaCloud::Openanalytics_open::Model;

GetDatabaseResult::GetDatabaseResult() :
	ServiceResult()
{}

GetDatabaseResult::GetDatabaseResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDatabaseResult::~GetDatabaseResult()
{}

void GetDatabaseResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto databaseModelNode = value["DatabaseModel"];
	if(!databaseModelNode["TenantId"].isNull())
		databaseModel_.tenantId = databaseModelNode["TenantId"].asString();
	if(!databaseModelNode["OwnerName"].isNull())
		databaseModel_.ownerName = databaseModelNode["OwnerName"].asString();
	if(!databaseModelNode["LocationUri"].isNull())
		databaseModel_.locationUri = databaseModelNode["LocationUri"].asString();
	if(!databaseModelNode["Parameters"].isNull())
		databaseModel_.parameters = databaseModelNode["Parameters"].asString();
	if(!databaseModelNode["Description"].isNull())
		databaseModel_.description = databaseModelNode["Description"].asString();
	if(!databaseModelNode["Name"].isNull())
		databaseModel_.name = databaseModelNode["Name"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetDatabaseResult::DatabaseModel GetDatabaseResult::getDatabaseModel()const
{
	return databaseModel_;
}

std::string GetDatabaseResult::getMessage()const
{
	return message_;
}

std::string GetDatabaseResult::getCode()const
{
	return code_;
}

bool GetDatabaseResult::getSuccess()const
{
	return success_;
}

