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

#include <alibabacloud/dms-enterprise/model/GetDataLakeDatabaseResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetDataLakeDatabaseResult::GetDataLakeDatabaseResult() :
	ServiceResult()
{}

GetDataLakeDatabaseResult::GetDataLakeDatabaseResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDataLakeDatabaseResult::~GetDataLakeDatabaseResult()
{}

void GetDataLakeDatabaseResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto databaseNode = value["Database"];
	if(!databaseNode["Description"].isNull())
		database_.description = databaseNode["Description"].asString();
	if(!databaseNode["Parameters"].isNull())
		database_.parameters = databaseNode["Parameters"].asString();
	if(!databaseNode["DbId"].isNull())
		database_.dbId = std::stol(databaseNode["DbId"].asString());
	if(!databaseNode["CatalogName"].isNull())
		database_.catalogName = databaseNode["CatalogName"].asString();
	if(!databaseNode["Name"].isNull())
		database_.name = databaseNode["Name"].asString();
	if(!databaseNode["Location"].isNull())
		database_.location = databaseNode["Location"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

GetDataLakeDatabaseResult::Database GetDataLakeDatabaseResult::getDatabase()const
{
	return database_;
}

std::string GetDataLakeDatabaseResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetDataLakeDatabaseResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetDataLakeDatabaseResult::getSuccess()const
{
	return success_;
}

