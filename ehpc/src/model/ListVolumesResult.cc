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

#include <alibabacloud/ehpc/model/ListVolumesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

ListVolumesResult::ListVolumesResult() :
	ServiceResult()
{}

ListVolumesResult::ListVolumesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVolumesResult::~ListVolumesResult()
{}

void ListVolumesResult::parse(const std::string &payload)
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
		if(!value["RegionId"].isNull())
			volumesObject.regionId = value["RegionId"].asString();
		if(!value["ClusterId"].isNull())
			volumesObject.clusterId = value["ClusterId"].asString();
		if(!value["ClusterName"].isNull())
			volumesObject.clusterName = value["ClusterName"].asString();
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
		auto allAdditionalVolumes = value["AdditionalVolumes"]["VolumeInfo"];
		for (auto value : allAdditionalVolumes)
		{
			VolumeInfo::VolumeInfo1 additionalVolumesObject;
			if(!value["VolumeType"].isNull())
				additionalVolumesObject.volumeType = value["VolumeType"].asString();
			if(!value["VolumeId"].isNull())
				additionalVolumesObject.volumeId = value["VolumeId"].asString();
			if(!value["VolumeProtocol"].isNull())
				additionalVolumesObject.volumeProtocol = value["VolumeProtocol"].asString();
			if(!value["VolumeMountpoint"].isNull())
				additionalVolumesObject.volumeMountpoint = value["VolumeMountpoint"].asString();
			if(!value["RemoteDirectory"].isNull())
				additionalVolumesObject.remoteDirectory = value["RemoteDirectory"].asString();
			if(!value["LocalDirectory"].isNull())
				additionalVolumesObject.localDirectory = value["LocalDirectory"].asString();
			if(!value["Role"].isNull())
				additionalVolumesObject.role = value["Role"].asString();
			if(!value["Location"].isNull())
				additionalVolumesObject.location = value["Location"].asString();
			if(!value["JobQueue"].isNull())
				additionalVolumesObject.jobQueue = value["JobQueue"].asString();
			volumesObject.additionalVolumes.push_back(additionalVolumesObject);
		}
		volumes_.push_back(volumesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int ListVolumesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListVolumesResult::VolumeInfo> ListVolumesResult::getVolumes()const
{
	return volumes_;
}

int ListVolumesResult::getPageSize()const
{
	return pageSize_;
}

int ListVolumesResult::getPageNumber()const
{
	return pageNumber_;
}

