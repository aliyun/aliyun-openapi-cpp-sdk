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

#include <alibabacloud/ecd/model/CreateDriveResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

CreateDriveResult::CreateDriveResult() :
	ServiceResult()
{}

CreateDriveResult::CreateDriveResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateDriveResult::~CreateDriveResult()
{}

void CreateDriveResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto driveNode = value["Drive"];
	if(!driveNode["Id"].isNull())
		drive_.id = driveNode["Id"].asString();
	if(!driveNode["GmtCreate"].isNull())
		drive_.gmtCreate = driveNode["GmtCreate"].asString();
	if(!driveNode["GmtModified"].isNull())
		drive_.gmtModified = driveNode["GmtModified"].asString();
	if(!driveNode["AliUid"].isNull())
		drive_.aliUid = driveNode["AliUid"].asString();
	if(!driveNode["DomainId"].isNull())
		drive_.domainId = driveNode["DomainId"].asString();
	if(!driveNode["DriveId"].isNull())
		drive_.driveId = driveNode["DriveId"].asString();
	if(!driveNode["ExternalDriveId"].isNull())
		drive_.externalDriveId = driveNode["ExternalDriveId"].asString();
	if(!driveNode["UserId"].isNull())
		drive_.userId = driveNode["UserId"].asString();
	if(!driveNode["ExternalUserId"].isNull())
		drive_.externalUserId = driveNode["ExternalUserId"].asString();
	if(!driveNode["Name"].isNull())
		drive_.name = driveNode["Name"].asString();
	if(!driveNode["Description"].isNull())
		drive_.description = driveNode["Description"].asString();
	if(!driveNode["TotalSize"].isNull())
		drive_.totalSize = std::stol(driveNode["TotalSize"].asString());
	if(!driveNode["UsedSize"].isNull())
		drive_.usedSize = std::stol(driveNode["UsedSize"].asString());
	if(!driveNode["Status"].isNull())
		drive_.status = driveNode["Status"].asString();
	if(!driveNode["Type"].isNull())
		drive_.type = driveNode["Type"].asString();
	if(!driveNode["ProfileRoaming"].isNull())
		drive_.profileRoaming = driveNode["ProfileRoaming"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string CreateDriveResult::getMessage()const
{
	return message_;
}

CreateDriveResult::Drive CreateDriveResult::getDrive()const
{
	return drive_;
}

std::string CreateDriveResult::getCode()const
{
	return code_;
}

bool CreateDriveResult::getSuccess()const
{
	return success_;
}

