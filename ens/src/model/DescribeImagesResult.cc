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

#include <alibabacloud/ens/model/DescribeImagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeImagesResult::DescribeImagesResult() :
	ServiceResult()
{}

DescribeImagesResult::DescribeImagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImagesResult::~DescribeImagesResult()
{}

void DescribeImagesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImagesNode = value["Images"]["Image"];
	for (auto valueImagesImage : allImagesNode)
	{
		Image imagesObject;
		if(!valueImagesImage["Architecture"].isNull())
			imagesObject.architecture = valueImagesImage["Architecture"].asString();
		if(!valueImagesImage["CreationTime"].isNull())
			imagesObject.creationTime = valueImagesImage["CreationTime"].asString();
		if(!valueImagesImage["ImageId"].isNull())
			imagesObject.imageId = valueImagesImage["ImageId"].asString();
		if(!valueImagesImage["ImageName"].isNull())
			imagesObject.imageName = valueImagesImage["ImageName"].asString();
		if(!valueImagesImage["ImageOwnerAlias"].isNull())
			imagesObject.imageOwnerAlias = valueImagesImage["ImageOwnerAlias"].asString();
		if(!valueImagesImage["ImageSize"].isNull())
			imagesObject.imageSize = valueImagesImage["ImageSize"].asString();
		if(!valueImagesImage["Platform"].isNull())
			imagesObject.platform = valueImagesImage["Platform"].asString();
		if(!valueImagesImage["SnapshotId"].isNull())
			imagesObject.snapshotId = valueImagesImage["SnapshotId"].asString();
		if(!valueImagesImage["RegionId"].isNull())
			imagesObject.regionId = valueImagesImage["RegionId"].asString();
		auto allDiskDeviceMappingsNode = valueImagesImage["DiskDeviceMappings"]["DiskDeviceMapping"];
		for (auto valueImagesImageDiskDeviceMappingsDiskDeviceMapping : allDiskDeviceMappingsNode)
		{
			Image::DiskDeviceMapping diskDeviceMappingsObject;
			if(!valueImagesImageDiskDeviceMappingsDiskDeviceMapping["Type"].isNull())
				diskDeviceMappingsObject.type = valueImagesImageDiskDeviceMappingsDiskDeviceMapping["Type"].asString();
			if(!valueImagesImageDiskDeviceMappingsDiskDeviceMapping["Size"].isNull())
				diskDeviceMappingsObject.size = valueImagesImageDiskDeviceMappingsDiskDeviceMapping["Size"].asString();
			if(!valueImagesImageDiskDeviceMappingsDiskDeviceMapping["Format"].isNull())
				diskDeviceMappingsObject.format = valueImagesImageDiskDeviceMappingsDiskDeviceMapping["Format"].asString();
			if(!valueImagesImageDiskDeviceMappingsDiskDeviceMapping["imageId"].isNull())
				diskDeviceMappingsObject.imageId = valueImagesImageDiskDeviceMappingsDiskDeviceMapping["imageId"].asString();
			imagesObject.diskDeviceMappings.push_back(diskDeviceMappingsObject);
		}
		images_.push_back(imagesObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeImagesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeImagesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeImagesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeImagesResult::Image> DescribeImagesResult::getImages()const
{
	return images_;
}

int DescribeImagesResult::getCode()const
{
	return code_;
}

