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

#include <alibabacloud/ecd/model/DescribeDrivesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

DescribeDrivesResult::DescribeDrivesResult() :
	ServiceResult()
{}

DescribeDrivesResult::DescribeDrivesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDrivesResult::~DescribeDrivesResult()
{}

void DescribeDrivesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDrivesNode = value["Drives"]["Drive"];
	for (auto valueDrivesDrive : allDrivesNode)
	{
		Drive drivesObject;
		if(!valueDrivesDrive["Id"].isNull())
			drivesObject.id = valueDrivesDrive["Id"].asString();
		if(!valueDrivesDrive["GmtCreate"].isNull())
			drivesObject.gmtCreate = valueDrivesDrive["GmtCreate"].asString();
		if(!valueDrivesDrive["GmtModified"].isNull())
			drivesObject.gmtModified = valueDrivesDrive["GmtModified"].asString();
		if(!valueDrivesDrive["AliUid"].isNull())
			drivesObject.aliUid = std::stol(valueDrivesDrive["AliUid"].asString());
		if(!valueDrivesDrive["DomainId"].isNull())
			drivesObject.domainId = valueDrivesDrive["DomainId"].asString();
		if(!valueDrivesDrive["ExternalDomainId"].isNull())
			drivesObject.externalDomainId = valueDrivesDrive["ExternalDomainId"].asString();
		if(!valueDrivesDrive["DriveId"].isNull())
			drivesObject.driveId = valueDrivesDrive["DriveId"].asString();
		if(!valueDrivesDrive["ExternalDriveId"].isNull())
			drivesObject.externalDriveId = valueDrivesDrive["ExternalDriveId"].asString();
		if(!valueDrivesDrive["UserId"].isNull())
			drivesObject.userId = valueDrivesDrive["UserId"].asString();
		if(!valueDrivesDrive["ExternalUserId"].isNull())
			drivesObject.externalUserId = valueDrivesDrive["ExternalUserId"].asString();
		if(!valueDrivesDrive["Name"].isNull())
			drivesObject.name = valueDrivesDrive["Name"].asString();
		if(!valueDrivesDrive["Description"].isNull())
			drivesObject.description = valueDrivesDrive["Description"].asString();
		if(!valueDrivesDrive["TotalSize"].isNull())
			drivesObject.totalSize = std::stol(valueDrivesDrive["TotalSize"].asString());
		if(!valueDrivesDrive["UsedSize"].isNull())
			drivesObject.usedSize = std::stol(valueDrivesDrive["UsedSize"].asString());
		if(!valueDrivesDrive["Status"].isNull())
			drivesObject.status = valueDrivesDrive["Status"].asString();
		if(!valueDrivesDrive["Type"].isNull())
			drivesObject.type = valueDrivesDrive["Type"].asString();
		if(!valueDrivesDrive["ProfileRoaming"].isNull())
			drivesObject.profileRoaming = valueDrivesDrive["ProfileRoaming"].asString() == "true";
		if(!valueDrivesDrive["DesktopGroupCount"].isNull())
			drivesObject.desktopGroupCount = std::stoi(valueDrivesDrive["DesktopGroupCount"].asString());
		if(!valueDrivesDrive["EnableProfileManagement"].isNull())
			drivesObject.enableProfileManagement = valueDrivesDrive["EnableProfileManagement"].asString() == "true";
		auto allDesktopGroupsNode = valueDrivesDrive["DesktopGroups"]["DesktopGroup"];
		for (auto valueDrivesDriveDesktopGroupsDesktopGroup : allDesktopGroupsNode)
		{
			Drive::DesktopGroup desktopGroupsObject;
			if(!valueDrivesDriveDesktopGroupsDesktopGroup["DesktopGroupId"].isNull())
				desktopGroupsObject.desktopGroupId = valueDrivesDriveDesktopGroupsDesktopGroup["DesktopGroupId"].asString();
			if(!valueDrivesDriveDesktopGroupsDesktopGroup["DesktopGroupName"].isNull())
				desktopGroupsObject.desktopGroupName = valueDrivesDriveDesktopGroupsDesktopGroup["DesktopGroupName"].asString();
			drivesObject.desktopGroups.push_back(desktopGroupsObject);
		}
		drives_.push_back(drivesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeDrivesResult::getMessage()const
{
	return message_;
}

std::vector<DescribeDrivesResult::Drive> DescribeDrivesResult::getDrives()const
{
	return drives_;
}

std::string DescribeDrivesResult::getCode()const
{
	return code_;
}

bool DescribeDrivesResult::getSuccess()const
{
	return success_;
}

