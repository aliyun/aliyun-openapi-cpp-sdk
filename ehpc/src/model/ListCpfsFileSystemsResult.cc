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

#include <alibabacloud/ehpc/model/ListCpfsFileSystemsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

ListCpfsFileSystemsResult::ListCpfsFileSystemsResult() :
	ServiceResult()
{}

ListCpfsFileSystemsResult::ListCpfsFileSystemsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCpfsFileSystemsResult::~ListCpfsFileSystemsResult()
{}

void ListCpfsFileSystemsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allFileSystemList = value["FileSystemList"]["FileSystems"];
	for (auto value : allFileSystemList)
	{
		FileSystems fileSystemListObject;
		if(!value["RegionId"].isNull())
			fileSystemListObject.regionId = value["RegionId"].asString();
		if(!value["ZoneId"].isNull())
			fileSystemListObject.zoneId = value["ZoneId"].asString();
		if(!value["FileSystemId"].isNull())
			fileSystemListObject.fileSystemId = value["FileSystemId"].asString();
		if(!value["CreateTime"].isNull())
			fileSystemListObject.createTime = value["CreateTime"].asString();
		if(!value["Destription"].isNull())
			fileSystemListObject.destription = value["Destription"].asString();
		if(!value["ProtocolType"].isNull())
			fileSystemListObject.protocolType = value["ProtocolType"].asString();
		if(!value["Capacity"].isNull())
			fileSystemListObject.capacity = value["Capacity"].asString();
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

int ListCpfsFileSystemsResult::getTotalCount()const
{
	return totalCount_;
}

int ListCpfsFileSystemsResult::getPageSize()const
{
	return pageSize_;
}

int ListCpfsFileSystemsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListCpfsFileSystemsResult::FileSystems> ListCpfsFileSystemsResult::getFileSystemList()const
{
	return fileSystemList_;
}

