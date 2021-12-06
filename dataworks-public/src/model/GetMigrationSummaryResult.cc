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

#include <alibabacloud/dataworks-public/model/GetMigrationSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetMigrationSummaryResult::GetMigrationSummaryResult() :
	ServiceResult()
{}

GetMigrationSummaryResult::GetMigrationSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMigrationSummaryResult::~GetMigrationSummaryResult()
{}

void GetMigrationSummaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["MigrationId"].isNull())
		data_.migrationId = std::stol(dataNode["MigrationId"].asString());
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["GmtCreate"].isNull())
		data_.gmtCreate = std::stol(dataNode["GmtCreate"].asString());
	if(!dataNode["GmtModified"].isNull())
		data_.gmtModified = std::stol(dataNode["GmtModified"].asString());
	if(!dataNode["CreateUser"].isNull())
		data_.createUser = dataNode["CreateUser"].asString();
	if(!dataNode["OpUser"].isNull())
		data_.opUser = dataNode["OpUser"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["ProjectId"].isNull())
		data_.projectId = std::stol(dataNode["ProjectId"].asString());
	if(!dataNode["DownloadUrl"].isNull())
		data_.downloadUrl = dataNode["DownloadUrl"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetMigrationSummaryResult::Data GetMigrationSummaryResult::getData()const
{
	return data_;
}

bool GetMigrationSummaryResult::getSuccess()const
{
	return success_;
}

