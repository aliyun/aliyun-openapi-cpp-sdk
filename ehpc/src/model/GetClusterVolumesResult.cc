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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allVolumes = value["Volumes"]["VolumeInfo"];
	for (auto value : allVolumes)
	{
		VolumeInfo volumesObject;
		if(!value["VolumeId"].isNull())
			volumesObject.volumeId = value["VolumeId"].asString();
		if(!value["VolumeType"].isNull())
			volumesObject.volumeType = value["VolumeType"].asString();
		if(!value["VolumeProtocol"].isNull())
			volumesObject.volumeProtocol = value["VolumeProtocol"].asString();
		if(!value["VolumeMountpoint"].isNull())
			volumesObject.volumeMountpoint = value["VolumeMountpoint"].asString();
		if(!value["RemoteDirectory"].isNull())
			volumesObject.remoteDirectory = value["RemoteDirectory"].asString();
		if(!value["LocalDirectory"].isNull())
			volumesObject.localDirectory = value["LocalDirectory"].asString();
		if(!value["Location"].isNull())
			volumesObject.location = value["Location"].asString();
		if(!value["JobQueue"].isNull())
			volumesObject.jobQueue = value["JobQueue"].asString();
		if(!value["MustKeep"].isNull())
			volumesObject.mustKeep = value["MustKeep"].asString() == "true";
		auto allRoles = value["Roles"]["RoleInfo"];
		for (auto value : allRoles)
		{
			VolumeInfo::RoleInfo rolesObject;
			if(!value["Name"].isNull())
				rolesObject.name = value["Name"].asString();
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

