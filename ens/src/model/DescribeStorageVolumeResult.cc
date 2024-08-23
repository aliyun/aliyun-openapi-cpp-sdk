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

#include <alibabacloud/ens/model/DescribeStorageVolumeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeStorageVolumeResult::DescribeStorageVolumeResult() :
	ServiceResult()
{}

DescribeStorageVolumeResult::DescribeStorageVolumeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeStorageVolumeResult::~DescribeStorageVolumeResult()
{}

void DescribeStorageVolumeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStorageVolumesNode = value["StorageVolumes"]["StorageVolumesItem"];
	for (auto valueStorageVolumesStorageVolumesItem : allStorageVolumesNode)
	{
		StorageVolumesItem storageVolumesObject;
		if(!valueStorageVolumesStorageVolumesItem["StorageVolumeId"].isNull())
			storageVolumesObject.storageVolumeId = valueStorageVolumesStorageVolumesItem["StorageVolumeId"].asString();
		if(!valueStorageVolumesStorageVolumesItem["StorageVolumeName"].isNull())
			storageVolumesObject.storageVolumeName = valueStorageVolumesStorageVolumesItem["StorageVolumeName"].asString();
		if(!valueStorageVolumesStorageVolumesItem["StorageGatewayId"].isNull())
			storageVolumesObject.storageGatewayId = valueStorageVolumesStorageVolumesItem["StorageGatewayId"].asString();
		if(!valueStorageVolumesStorageVolumesItem["StorageId"].isNull())
			storageVolumesObject.storageId = valueStorageVolumesStorageVolumesItem["StorageId"].asString();
		if(!valueStorageVolumesStorageVolumesItem["CreationTime"].isNull())
			storageVolumesObject.creationTime = valueStorageVolumesStorageVolumesItem["CreationTime"].asString();
		if(!valueStorageVolumesStorageVolumesItem["IsEnable"].isNull())
			storageVolumesObject.isEnable = std::stoi(valueStorageVolumesStorageVolumesItem["IsEnable"].asString());
		if(!valueStorageVolumesStorageVolumesItem["IsAuth"].isNull())
			storageVolumesObject.isAuth = std::stoi(valueStorageVolumesStorageVolumesItem["IsAuth"].asString());
		if(!valueStorageVolumesStorageVolumesItem["Description"].isNull())
			storageVolumesObject.description = valueStorageVolumesStorageVolumesItem["Description"].asString();
		if(!valueStorageVolumesStorageVolumesItem["TargetName"].isNull())
			storageVolumesObject.targetName = valueStorageVolumesStorageVolumesItem["TargetName"].asString();
		if(!valueStorageVolumesStorageVolumesItem["Status"].isNull())
			storageVolumesObject.status = valueStorageVolumesStorageVolumesItem["Status"].asString();
		if(!valueStorageVolumesStorageVolumesItem["AuthProtocol"].isNull())
			storageVolumesObject.authProtocol = valueStorageVolumesStorageVolumesItem["AuthProtocol"].asString();
		if(!valueStorageVolumesStorageVolumesItem["EnsRegionId"].isNull())
			storageVolumesObject.ensRegionId = valueStorageVolumesStorageVolumesItem["EnsRegionId"].asString();
		storageVolumes_.push_back(storageVolumesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();

}

std::string DescribeStorageVolumeResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeStorageVolumeResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeStorageVolumeResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeStorageVolumeResult::StorageVolumesItem> DescribeStorageVolumeResult::getStorageVolumes()const
{
	return storageVolumes_;
}

