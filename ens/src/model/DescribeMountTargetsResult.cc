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

#include <alibabacloud/ens/model/DescribeMountTargetsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeMountTargetsResult::DescribeMountTargetsResult() :
	ServiceResult()
{}

DescribeMountTargetsResult::DescribeMountTargetsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMountTargetsResult::~DescribeMountTargetsResult()
{}

void DescribeMountTargetsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMountTargetsNode = value["MountTargets"]["MountTargetsItem"];
	for (auto valueMountTargetsMountTargetsItem : allMountTargetsNode)
	{
		MountTargetsItem mountTargetsObject;
		if(!valueMountTargetsMountTargetsItem["MountTargetDomain"].isNull())
			mountTargetsObject.mountTargetDomain = valueMountTargetsMountTargetsItem["MountTargetDomain"].asString();
		if(!valueMountTargetsMountTargetsItem["MountTargetName"].isNull())
			mountTargetsObject.mountTargetName = valueMountTargetsMountTargetsItem["MountTargetName"].asString();
		if(!valueMountTargetsMountTargetsItem["NetWorkId"].isNull())
			mountTargetsObject.netWorkId = valueMountTargetsMountTargetsItem["NetWorkId"].asString();
		if(!valueMountTargetsMountTargetsItem["Status"].isNull())
			mountTargetsObject.status = valueMountTargetsMountTargetsItem["Status"].asString();
		if(!valueMountTargetsMountTargetsItem["EnsRegionId"].isNull())
			mountTargetsObject.ensRegionId = valueMountTargetsMountTargetsItem["EnsRegionId"].asString();
		if(!valueMountTargetsMountTargetsItem["FileSystemId"].isNull())
			mountTargetsObject.fileSystemId = valueMountTargetsMountTargetsItem["FileSystemId"].asString();
		mountTargets_.push_back(mountTargetsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeMountTargetsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeMountTargetsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeMountTargetsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeMountTargetsResult::MountTargetsItem> DescribeMountTargetsResult::getMountTargets()const
{
	return mountTargets_;
}

