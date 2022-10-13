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

#include <alibabacloud/ens/model/DescribeFileSystemsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeFileSystemsResult::DescribeFileSystemsResult() :
	ServiceResult()
{}

DescribeFileSystemsResult::DescribeFileSystemsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFileSystemsResult::~DescribeFileSystemsResult()
{}

void DescribeFileSystemsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFileSystemsNode = value["FileSystems"]["FileSystemsItem"];
	for (auto valueFileSystemsFileSystemsItem : allFileSystemsNode)
	{
		FileSystemsItem fileSystemsObject;
		if(!valueFileSystemsFileSystemsItem["FileSystemId"].isNull())
			fileSystemsObject.fileSystemId = valueFileSystemsFileSystemsItem["FileSystemId"].asString();
		if(!valueFileSystemsFileSystemsItem["FileSystemName"].isNull())
			fileSystemsObject.fileSystemName = valueFileSystemsFileSystemsItem["FileSystemName"].asString();
		if(!valueFileSystemsFileSystemsItem["EnsRegionId"].isNull())
			fileSystemsObject.ensRegionId = valueFileSystemsFileSystemsItem["EnsRegionId"].asString();
		if(!valueFileSystemsFileSystemsItem["StorageType"].isNull())
			fileSystemsObject.storageType = valueFileSystemsFileSystemsItem["StorageType"].asString();
		if(!valueFileSystemsFileSystemsItem["ProtocolType"].isNull())
			fileSystemsObject.protocolType = valueFileSystemsFileSystemsItem["ProtocolType"].asString();
		if(!valueFileSystemsFileSystemsItem["Capacity"].isNull())
			fileSystemsObject.capacity = std::stol(valueFileSystemsFileSystemsItem["Capacity"].asString());
		if(!valueFileSystemsFileSystemsItem["MeteredSize"].isNull())
			fileSystemsObject.meteredSize = std::stol(valueFileSystemsFileSystemsItem["MeteredSize"].asString());
		if(!valueFileSystemsFileSystemsItem["Status"].isNull())
			fileSystemsObject.status = valueFileSystemsFileSystemsItem["Status"].asString();
		if(!valueFileSystemsFileSystemsItem["PayType"].isNull())
			fileSystemsObject.payType = valueFileSystemsFileSystemsItem["PayType"].asString();
		if(!valueFileSystemsFileSystemsItem["CreationTime"].isNull())
			fileSystemsObject.creationTime = valueFileSystemsFileSystemsItem["CreationTime"].asString();
		auto allMountTargetsNode = valueFileSystemsFileSystemsItem["MountTargets"]["MountTargetsItem"];
		for (auto valueFileSystemsFileSystemsItemMountTargetsMountTargetsItem : allMountTargetsNode)
		{
			FileSystemsItem::MountTargetsItem mountTargetsObject;
			if(!valueFileSystemsFileSystemsItemMountTargetsMountTargetsItem["MountTargetDomain"].isNull())
				mountTargetsObject.mountTargetDomain = valueFileSystemsFileSystemsItemMountTargetsMountTargetsItem["MountTargetDomain"].asString();
			if(!valueFileSystemsFileSystemsItemMountTargetsMountTargetsItem["MountTargetName"].isNull())
				mountTargetsObject.mountTargetName = valueFileSystemsFileSystemsItemMountTargetsMountTargetsItem["MountTargetName"].asString();
			if(!valueFileSystemsFileSystemsItemMountTargetsMountTargetsItem["NetWorkId"].isNull())
				mountTargetsObject.netWorkId = valueFileSystemsFileSystemsItemMountTargetsMountTargetsItem["NetWorkId"].asString();
			if(!valueFileSystemsFileSystemsItemMountTargetsMountTargetsItem["Status"].isNull())
				mountTargetsObject.status = valueFileSystemsFileSystemsItemMountTargetsMountTargetsItem["Status"].asString();
			fileSystemsObject.mountTargets.push_back(mountTargetsObject);
		}
		fileSystems_.push_back(fileSystemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeFileSystemsResult::FileSystemsItem> DescribeFileSystemsResult::getFileSystems()const
{
	return fileSystems_;
}

int DescribeFileSystemsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeFileSystemsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeFileSystemsResult::getPageNumber()const
{
	return pageNumber_;
}

