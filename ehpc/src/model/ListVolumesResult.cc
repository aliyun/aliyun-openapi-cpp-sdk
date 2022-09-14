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
		if(!valueVolumesVolumeInfo["ClusterName"].isNull())
			volumesObject.clusterName = valueVolumesVolumeInfo["ClusterName"].asString();
		if(!valueVolumesVolumeInfo["RemoteDirectory"].isNull())
			volumesObject.remoteDirectory = valueVolumesVolumeInfo["RemoteDirectory"].asString();
		if(!valueVolumesVolumeInfo["VolumeMountpoint"].isNull())
			volumesObject.volumeMountpoint = valueVolumesVolumeInfo["VolumeMountpoint"].asString();
		if(!valueVolumesVolumeInfo["VolumeType"].isNull())
			volumesObject.volumeType = valueVolumesVolumeInfo["VolumeType"].asString();
		if(!valueVolumesVolumeInfo["VolumeProtocol"].isNull())
			volumesObject.volumeProtocol = valueVolumesVolumeInfo["VolumeProtocol"].asString();
		if(!valueVolumesVolumeInfo["RegionId"].isNull())
			volumesObject.regionId = valueVolumesVolumeInfo["RegionId"].asString();
		if(!valueVolumesVolumeInfo["ClusterId"].isNull())
			volumesObject.clusterId = valueVolumesVolumeInfo["ClusterId"].asString();
		volumes_.push_back(volumesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

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

