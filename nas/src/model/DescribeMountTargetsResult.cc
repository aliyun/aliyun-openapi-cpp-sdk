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

#include <alibabacloud/nas/model/DescribeMountTargetsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::NAS;
using namespace AlibabaCloud::NAS::Model;

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
	auto allMountTargetsNode = value["MountTargets"]["MountTarget"];
	for (auto valueMountTargetsMountTarget : allMountTargetsNode)
	{
		MountTarget mountTargetsObject;
		if(!valueMountTargetsMountTarget["VpcId"].isNull())
			mountTargetsObject.vpcId = valueMountTargetsMountTarget["VpcId"].asString();
		if(!valueMountTargetsMountTarget["Status"].isNull())
			mountTargetsObject.status = valueMountTargetsMountTarget["Status"].asString();
		if(!valueMountTargetsMountTarget["MountTargetDomain"].isNull())
			mountTargetsObject.mountTargetDomain = valueMountTargetsMountTarget["MountTargetDomain"].asString();
		if(!valueMountTargetsMountTarget["AccessGroup"].isNull())
			mountTargetsObject.accessGroup = valueMountTargetsMountTarget["AccessGroup"].asString();
		if(!valueMountTargetsMountTarget["DualStackMountTargetDomain"].isNull())
			mountTargetsObject.dualStackMountTargetDomain = valueMountTargetsMountTarget["DualStackMountTargetDomain"].asString();
		if(!valueMountTargetsMountTarget["VswId"].isNull())
			mountTargetsObject.vswId = valueMountTargetsMountTarget["VswId"].asString();
		if(!valueMountTargetsMountTarget["NetworkType"].isNull())
			mountTargetsObject.networkType = valueMountTargetsMountTarget["NetworkType"].asString();
		if(!valueMountTargetsMountTarget["IPVersion"].isNull())
			mountTargetsObject.iPVersion = valueMountTargetsMountTarget["IPVersion"].asString();
		if(!valueMountTargetsMountTarget["MountTargetIp"].isNull())
			mountTargetsObject.mountTargetIp = valueMountTargetsMountTarget["MountTargetIp"].asString();
		auto allClientMasterNodesNode = valueMountTargetsMountTarget["ClientMasterNodes"]["ClientMasterNode"];
		for (auto valueMountTargetsMountTargetClientMasterNodesClientMasterNode : allClientMasterNodesNode)
		{
			MountTarget::ClientMasterNode clientMasterNodesObject;
			if(!valueMountTargetsMountTargetClientMasterNodesClientMasterNode["EcsId"].isNull())
				clientMasterNodesObject.ecsId = valueMountTargetsMountTargetClientMasterNodesClientMasterNode["EcsId"].asString();
			if(!valueMountTargetsMountTargetClientMasterNodesClientMasterNode["DefaultPasswd"].isNull())
				clientMasterNodesObject.defaultPasswd = valueMountTargetsMountTargetClientMasterNodesClientMasterNode["DefaultPasswd"].asString();
			if(!valueMountTargetsMountTargetClientMasterNodesClientMasterNode["EcsIp"].isNull())
				clientMasterNodesObject.ecsIp = valueMountTargetsMountTargetClientMasterNodesClientMasterNode["EcsIp"].asString();
			mountTargetsObject.clientMasterNodes.push_back(clientMasterNodesObject);
		}
		auto allTagsNode = valueMountTargetsMountTarget["Tags"]["Tag"];
		for (auto valueMountTargetsMountTargetTagsTag : allTagsNode)
		{
			MountTarget::Tag tagsObject;
			if(!valueMountTargetsMountTargetTagsTag["Key"].isNull())
				tagsObject.key = valueMountTargetsMountTargetTagsTag["Key"].asString();
			if(!valueMountTargetsMountTargetTagsTag["Value"].isNull())
				tagsObject.value = valueMountTargetsMountTargetTagsTag["Value"].asString();
			mountTargetsObject.tags.push_back(tagsObject);
		}
		mountTargets_.push_back(mountTargetsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

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

std::vector<DescribeMountTargetsResult::MountTarget> DescribeMountTargetsResult::getMountTargets()const
{
	return mountTargets_;
}

