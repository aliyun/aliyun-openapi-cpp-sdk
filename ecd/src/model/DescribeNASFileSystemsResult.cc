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

#include <alibabacloud/ecd/model/DescribeNASFileSystemsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

DescribeNASFileSystemsResult::DescribeNASFileSystemsResult() :
	ServiceResult()
{}

DescribeNASFileSystemsResult::DescribeNASFileSystemsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNASFileSystemsResult::~DescribeNASFileSystemsResult()
{}

void DescribeNASFileSystemsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFileSystemsNode = value["FileSystems"]["FileSystem"];
	for (auto valueFileSystemsFileSystem : allFileSystemsNode)
	{
		FileSystem fileSystemsObject;
		if(!valueFileSystemsFileSystem["Capacity"].isNull())
			fileSystemsObject.capacity = std::stol(valueFileSystemsFileSystem["Capacity"].asString());
		if(!valueFileSystemsFileSystem["MountTargetStatus"].isNull())
			fileSystemsObject.mountTargetStatus = valueFileSystemsFileSystem["MountTargetStatus"].asString();
		if(!valueFileSystemsFileSystem["CreateTime"].isNull())
			fileSystemsObject.createTime = valueFileSystemsFileSystem["CreateTime"].asString();
		if(!valueFileSystemsFileSystem["OfficeSiteId"].isNull())
			fileSystemsObject.officeSiteId = valueFileSystemsFileSystem["OfficeSiteId"].asString();
		if(!valueFileSystemsFileSystem["SupportAcl"].isNull())
			fileSystemsObject.supportAcl = valueFileSystemsFileSystem["SupportAcl"].asString() == "true";
		if(!valueFileSystemsFileSystem["StorageType"].isNull())
			fileSystemsObject.storageType = valueFileSystemsFileSystem["StorageType"].asString();
		if(!valueFileSystemsFileSystem["OfficeSiteName"].isNull())
			fileSystemsObject.officeSiteName = valueFileSystemsFileSystem["OfficeSiteName"].asString();
		if(!valueFileSystemsFileSystem["RegionId"].isNull())
			fileSystemsObject.regionId = valueFileSystemsFileSystem["RegionId"].asString();
		if(!valueFileSystemsFileSystem["FileSystemId"].isNull())
			fileSystemsObject.fileSystemId = valueFileSystemsFileSystem["FileSystemId"].asString();
		if(!valueFileSystemsFileSystem["FileSystemType"].isNull())
			fileSystemsObject.fileSystemType = valueFileSystemsFileSystem["FileSystemType"].asString();
		if(!valueFileSystemsFileSystem["FileSystemName"].isNull())
			fileSystemsObject.fileSystemName = valueFileSystemsFileSystem["FileSystemName"].asString();
		if(!valueFileSystemsFileSystem["MeteredSize"].isNull())
			fileSystemsObject.meteredSize = std::stol(valueFileSystemsFileSystem["MeteredSize"].asString());
		if(!valueFileSystemsFileSystem["MountTargetDomain"].isNull())
			fileSystemsObject.mountTargetDomain = valueFileSystemsFileSystem["MountTargetDomain"].asString();
		if(!valueFileSystemsFileSystem["Description"].isNull())
			fileSystemsObject.description = valueFileSystemsFileSystem["Description"].asString();
		if(!valueFileSystemsFileSystem["ZoneId"].isNull())
			fileSystemsObject.zoneId = valueFileSystemsFileSystem["ZoneId"].asString();
		if(!valueFileSystemsFileSystem["FileSystemStatus"].isNull())
			fileSystemsObject.fileSystemStatus = valueFileSystemsFileSystem["FileSystemStatus"].asString();
		if(!valueFileSystemsFileSystem["EncryptionEnabled"].isNull())
			fileSystemsObject.encryptionEnabled = valueFileSystemsFileSystem["EncryptionEnabled"].asString() == "true";
		if(!valueFileSystemsFileSystem["ProfileCompatible"].isNull())
			fileSystemsObject.profileCompatible = valueFileSystemsFileSystem["ProfileCompatible"].asString() == "true";
		if(!valueFileSystemsFileSystem["DomainId"].isNull())
			fileSystemsObject.domainId = valueFileSystemsFileSystem["DomainId"].asString();
		auto allDesktopGroupsNode = valueFileSystemsFileSystem["DesktopGroups"]["DesktopGroup"];
		for (auto valueFileSystemsFileSystemDesktopGroupsDesktopGroup : allDesktopGroupsNode)
		{
			FileSystem::DesktopGroup desktopGroupsObject;
			if(!valueFileSystemsFileSystemDesktopGroupsDesktopGroup["DesktopGroupId"].isNull())
				desktopGroupsObject.desktopGroupId = valueFileSystemsFileSystemDesktopGroupsDesktopGroup["DesktopGroupId"].asString();
			if(!valueFileSystemsFileSystemDesktopGroupsDesktopGroup["DesktopGroupName"].isNull())
				desktopGroupsObject.desktopGroupName = valueFileSystemsFileSystemDesktopGroupsDesktopGroup["DesktopGroupName"].asString();
			fileSystemsObject.desktopGroups.push_back(desktopGroupsObject);
		}
		fileSystems_.push_back(fileSystemsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::vector<DescribeNASFileSystemsResult::FileSystem> DescribeNASFileSystemsResult::getFileSystems()const
{
	return fileSystems_;
}

std::string DescribeNASFileSystemsResult::getNextToken()const
{
	return nextToken_;
}

