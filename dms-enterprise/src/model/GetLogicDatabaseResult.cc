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

#include <alibabacloud/dms-enterprise/model/GetLogicDatabaseResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetLogicDatabaseResult::GetLogicDatabaseResult() :
	ServiceResult()
{}

GetLogicDatabaseResult::GetLogicDatabaseResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetLogicDatabaseResult::~GetLogicDatabaseResult()
{}

void GetLogicDatabaseResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto logicDatabaseNode = value["LogicDatabase"];
	if(!logicDatabaseNode["DatabaseId"].isNull())
		logicDatabase_.databaseId = logicDatabaseNode["DatabaseId"].asString();
	if(!logicDatabaseNode["DbType"].isNull())
		logicDatabase_.dbType = logicDatabaseNode["DbType"].asString();
	if(!logicDatabaseNode["Logic"].isNull())
		logicDatabase_.logic = logicDatabaseNode["Logic"].asString() == "true";
	if(!logicDatabaseNode["SchemaName"].isNull())
		logicDatabase_.schemaName = logicDatabaseNode["SchemaName"].asString();
	if(!logicDatabaseNode["SearchName"].isNull())
		logicDatabase_.searchName = logicDatabaseNode["SearchName"].asString();
	if(!logicDatabaseNode["EnvType"].isNull())
		logicDatabase_.envType = logicDatabaseNode["EnvType"].asString();
	if(!logicDatabaseNode["Alias"].isNull())
		logicDatabase_.alias = logicDatabaseNode["Alias"].asString();
		auto allOwnerIdList = logicDatabaseNode["OwnerIdList"]["OwnerIds"];
		for (auto value : allOwnerIdList)
			logicDatabase_.ownerIdList.push_back(value.asString());
		auto allOwnerNameList = logicDatabaseNode["OwnerNameList"]["OwnerNames"];
		for (auto value : allOwnerNameList)
			logicDatabase_.ownerNameList.push_back(value.asString());
		auto allDatabaseIds = logicDatabaseNode["DatabaseIds"]["DatabaseIds"];
		for (auto value : allDatabaseIds)
			logicDatabase_.databaseIds.push_back(value.asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetLogicDatabaseResult::LogicDatabase GetLogicDatabaseResult::getLogicDatabase()const
{
	return logicDatabase_;
}

std::string GetLogicDatabaseResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetLogicDatabaseResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetLogicDatabaseResult::getSuccess()const
{
	return success_;
}

