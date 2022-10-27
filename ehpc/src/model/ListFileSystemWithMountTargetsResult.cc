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

#include <alibabacloud/ehpc/model/ListFileSystemWithMountTargetsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

ListFileSystemWithMountTargetsResult::ListFileSystemWithMountTargetsResult() :
	ServiceResult()
{}

ListFileSystemWithMountTargetsResult::ListFileSystemWithMountTargetsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFileSystemWithMountTargetsResult::~ListFileSystemWithMountTargetsResult()
{}

void ListFileSystemWithMountTargetsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFileSystemListNode = value["FileSystemList"]["FileSystems"];
	for (auto valueFileSystemListFileSystems : allFileSystemListNode)
	{
		FileSystems fileSystemListObject;
		if(!valueFileSystemListFileSystems["Status"].isNull())
			fileSystemListObject.status = valueFileSystemListFileSystems["Status"].asString();
		if(!valueFileSystemListFileSystems["Capacity"].isNull())
			fileSystemListObject.capacity = std::stoi(valueFileSystemListFileSystems["Capacity"].asString());
		if(!valueFileSystemListFileSystems["CreateTime"].isNull())
			fileSystemListObject.createTime = valueFileSystemListFileSystems["CreateTime"].asString();
		if(!valueFileSystemListFileSystems["StorageType"].isNull())
			fileSystemListObject.storageType = valueFileSystemListFileSystems["StorageType"].asString();
		if(!valueFileSystemListFileSystems["BandWidth"].isNull())
			fileSystemListObject.bandWidth = std::stoi(valueFileSystemListFileSystems["BandWidth"].asString());
		if(!valueFileSystemListFileSystems["RegionId"].isNull())
			fileSystemListObject.regionId = valueFileSystemListFileSystems["RegionId"].asString();
		if(!valueFileSystemListFileSystems["FileSystemId"].isNull())
			fileSystemListObject.fileSystemId = valueFileSystemListFileSystems["FileSystemId"].asString();
		if(!valueFileSystemListFileSystems["FileSystemType"].isNull())
			fileSystemListObject.fileSystemType = valueFileSystemListFileSystems["FileSystemType"].asString();
		if(!valueFileSystemListFileSystems["MeteredSize"].isNull())
			fileSystemListObject.meteredSize = std::stoi(valueFileSystemListFileSystems["MeteredSize"].asString());
		if(!valueFileSystemListFileSystems["EncryptType"].isNull())
			fileSystemListObject.encryptType = std::stoi(valueFileSystemListFileSystems["EncryptType"].asString());
		if(!valueFileSystemListFileSystems["ProtocolType"].isNull())
			fileSystemListObject.protocolType = valueFileSystemListFileSystems["ProtocolType"].asString();
		if(!valueFileSystemListFileSystems["Destription"].isNull())
			fileSystemListObject.destription = valueFileSystemListFileSystems["Destription"].asString();
		if(!valueFileSystemListFileSystems["VpcId"].isNull())
			fileSystemListObject.vpcId = valueFileSystemListFileSystems["VpcId"].asString();
		auto allPackageListNode = valueFileSystemListFileSystems["PackageList"]["Packages"];
		for (auto valueFileSystemListFileSystemsPackageListPackages : allPackageListNode)
		{
			FileSystems::Packages packageListObject;
			if(!valueFileSystemListFileSystemsPackageListPackages["PackageId"].isNull())
				packageListObject.packageId = valueFileSystemListFileSystemsPackageListPackages["PackageId"].asString();
			fileSystemListObject.packageList.push_back(packageListObject);
		}
		auto allMountTargetListNode = valueFileSystemListFileSystems["MountTargetList"]["MountTargets"];
		for (auto valueFileSystemListFileSystemsMountTargetListMountTargets : allMountTargetListNode)
		{
			FileSystems::MountTargets mountTargetListObject;
			if(!valueFileSystemListFileSystemsMountTargetListMountTargets["Status"].isNull())
				mountTargetListObject.status = valueFileSystemListFileSystemsMountTargetListMountTargets["Status"].asString();
			if(!valueFileSystemListFileSystemsMountTargetListMountTargets["VpcId"].isNull())
				mountTargetListObject.vpcId = valueFileSystemListFileSystemsMountTargetListMountTargets["VpcId"].asString();
			if(!valueFileSystemListFileSystemsMountTargetListMountTargets["MountTargetDomain"].isNull())
				mountTargetListObject.mountTargetDomain = valueFileSystemListFileSystemsMountTargetListMountTargets["MountTargetDomain"].asString();
			if(!valueFileSystemListFileSystemsMountTargetListMountTargets["AccessGroup"].isNull())
				mountTargetListObject.accessGroup = valueFileSystemListFileSystemsMountTargetListMountTargets["AccessGroup"].asString();
			if(!valueFileSystemListFileSystemsMountTargetListMountTargets["VswId"].isNull())
				mountTargetListObject.vswId = valueFileSystemListFileSystemsMountTargetListMountTargets["VswId"].asString();
			if(!valueFileSystemListFileSystemsMountTargetListMountTargets["NetworkType"].isNull())
				mountTargetListObject.networkType = valueFileSystemListFileSystemsMountTargetListMountTargets["NetworkType"].asString();
			fileSystemListObject.mountTargetList.push_back(mountTargetListObject);
		}
		fileSystemList_.push_back(fileSystemListObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListFileSystemWithMountTargetsResult::getTotalCount()const
{
	return totalCount_;
}

int ListFileSystemWithMountTargetsResult::getPageSize()const
{
	return pageSize_;
}

int ListFileSystemWithMountTargetsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListFileSystemWithMountTargetsResult::FileSystems> ListFileSystemWithMountTargetsResult::getFileSystemList()const
{
	return fileSystemList_;
}

