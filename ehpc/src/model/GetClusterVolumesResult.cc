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

#include <alibabacloud/ehpc/model/GetClusterVolumesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

GetClusterVolumesResult::GetClusterVolumesResult() :
	ServiceResult()
{}

GetClusterVolumesResult::GetClusterVolumesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetClusterVolumesResult::~GetClusterVolumesResult()
{}

void GetClusterVolumesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVolumesNode = value["Volumes"]["VolumeInfo"];
	for (auto valueVolumesVolumeInfo : allVolumesNode)
	{
		VolumeInfo volumesObject;
		if(!valueVolumesVolumeInfo["VolumeId"].isNull())
			volumesObject.volumeId = valueVolumesVolumeInfo["VolumeId"].asString();
		if(!valueVolumesVolumeInfo["VolumeType"].isNull())
			volumesObject.volumeType = valueVolumesVolumeInfo["VolumeType"].asString();
		if(!valueVolumesVolumeInfo["VolumeProtocol"].isNull())
			volumesObject.volumeProtocol = valueVolumesVolumeInfo["VolumeProtocol"].asString();
		if(!valueVolumesVolumeInfo["VolumeMountpoint"].isNull())
			volumesObject.volumeMountpoint = valueVolumesVolumeInfo["VolumeMountpoint"].asString();
		if(!valueVolumesVolumeInfo["RemoteDirectory"].isNull())
			volumesObject.remoteDirectory = valueVolumesVolumeInfo["RemoteDirectory"].asString();
		if(!valueVolumesVolumeInfo["LocalDirectory"].isNull())
			volumesObject.localDirectory = valueVolumesVolumeInfo["LocalDirectory"].asString();
		if(!valueVolumesVolumeInfo["Location"].isNull())
			volumesObject.location = valueVolumesVolumeInfo["Location"].asString();
		if(!valueVolumesVolumeInfo["JobQueue"].isNull())
			volumesObject.jobQueue = valueVolumesVolumeInfo["JobQueue"].asString();
		if(!valueVolumesVolumeInfo["MustKeep"].isNull())
			volumesObject.mustKeep = valueVolumesVolumeInfo["MustKeep"].asString() == "true";
		auto allRolesNode = allVolumesNode["Roles"]["RoleInfo"];
		for (auto allVolumesNodeRolesRoleInfo : allRolesNode)
		{
			VolumeInfo::RoleInfo rolesObject;
			if(!allVolumesNodeRolesRoleInfo["Name"].isNull())
				rolesObject.name = allVolumesNodeRolesRoleInfo["Name"].asString();
			volumesObject.roles.push_back(rolesObject);
		}
		volumes_.push_back(volumesObject);
	}
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();

}

std::vector<GetClusterVolumesResult::VolumeInfo> GetClusterVolumesResult::getVolumes()const
{
	return volumes_;
}

std::string GetClusterVolumesResult::getRegionId()const
{
	return regionId_;
}

