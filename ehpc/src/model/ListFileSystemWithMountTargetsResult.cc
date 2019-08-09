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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allFileSystemList = value["FileSystemList"]["FileSystems"];
	for (auto value : allFileSystemList)
	{
		FileSystems fileSystemListObject;
		if(!value["RegionId"].isNull())
			fileSystemListObject.regionId = value["RegionId"].asString();
		if(!value["FileSystemId"].isNull())
			fileSystemListObject.fileSystemId = value["FileSystemId"].asString();
		if(!value["ProtocolType"].isNull())
			fileSystemListObject.protocolType = value["ProtocolType"].asString();
		if(!value["CreateTime"].isNull())
			fileSystemListObject.createTime = value["CreateTime"].asString();
		if(!value["Destription"].isNull())
			fileSystemListObject.destription = value["Destription"].asString();
		if(!value["StorageType"].isNull())
			fileSystemListObject.storageType = value["StorageType"].asString();
		if(!value["MeteredSize"].isNull())
			fileSystemListObject.meteredSize = value["MeteredSize"].asString();
		auto allPackageList = value["PackageList"]["Packages"];
		for (auto value : allPackageList)
		{
			FileSystems::Packages packageListObject;
			if(!value["PackageId"].isNull())
				packageListObject.packageId = value["PackageId"].asString();
			fileSystemListObject.packageList.push_back(packageListObject);
		}
		auto allMountTargetList = value["MountTargetList"]["MountTargets"];
		for (auto value : allMountTargetList)
		{
			FileSystems::MountTargets mountTargetListObject;
			if(!value["MountTargetDomain"].isNull())
				mountTargetListObject.mountTargetDomain = value["MountTargetDomain"].asString();
			if(!value["Status"].isNull())
				mountTargetListObject.status = value["Status"].asString();
			if(!value["NetworkType"].isNull())
				mountTargetListObject.networkType = value["NetworkType"].asString();
			if(!value["VswId"].isNull())
				mountTargetListObject.vswId = value["VswId"].asString();
			if(!value["VpcId"].isNull())
				mountTargetListObject.vpcId = value["VpcId"].asString();
			if(!value["AccessGroup"].isNull())
				mountTargetListObject.accessGroup = value["AccessGroup"].asString();
			fileSystemListObject.mountTargetList.push_back(mountTargetListObject);
		}
		fileSystemList_.push_back(fileSystemListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

