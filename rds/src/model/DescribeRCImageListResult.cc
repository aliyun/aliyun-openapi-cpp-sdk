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

#include <alibabacloud/rds/model/DescribeRCImageListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeRCImageListResult::DescribeRCImageListResult() :
	ServiceResult()
{}

DescribeRCImageListResult::DescribeRCImageListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRCImageListResult::~DescribeRCImageListResult()
{}

void DescribeRCImageListResult::parse(const std::string &payload)
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
		if(!valueImagesImage["Description"].isNull())
			imagesObject.description = valueImagesImage["Description"].asString();
		if(!valueImagesImage["ImageId"].isNull())
			imagesObject.imageId = valueImagesImage["ImageId"].asString();
		if(!valueImagesImage["ImageName"].isNull())
			imagesObject.imageName = valueImagesImage["ImageName"].asString();
		if(!valueImagesImage["ImageVersion"].isNull())
			imagesObject.imageVersion = valueImagesImage["ImageVersion"].asString();
		if(!valueImagesImage["IsPublic"].isNull())
			imagesObject.isPublic = valueImagesImage["IsPublic"].asString() == "true";
		if(!valueImagesImage["OSName"].isNull())
			imagesObject.oSName = valueImagesImage["OSName"].asString();
		if(!valueImagesImage["OSNameEn"].isNull())
			imagesObject.oSNameEn = valueImagesImage["OSNameEn"].asString();
		if(!valueImagesImage["OSType"].isNull())
			imagesObject.oSType = valueImagesImage["OSType"].asString();
		if(!valueImagesImage["Size"].isNull())
			imagesObject.size = std::stol(valueImagesImage["Size"].asString());
		if(!valueImagesImage["Status"].isNull())
			imagesObject.status = valueImagesImage["Status"].asString();
		if(!valueImagesImage["Usage"].isNull())
			imagesObject.usage = valueImagesImage["Usage"].asString();
		if(!valueImagesImage["IsSupportRdsCustom"].isNull())
			imagesObject.isSupportRdsCustom = valueImagesImage["IsSupportRdsCustom"].asString() == "true";
		if(!valueImagesImage["Platform"].isNull())
			imagesObject.platform = valueImagesImage["Platform"].asString();
		auto allDiskDeviceMappingsNode = valueImagesImage["DiskDeviceMappings"]["diskDeviceMapping"];
		for (auto valueImagesImageDiskDeviceMappingsdiskDeviceMapping : allDiskDeviceMappingsNode)
		{
			Image::DiskDeviceMapping diskDeviceMappingsObject;
			if(!valueImagesImageDiskDeviceMappingsdiskDeviceMapping["Type"].isNull())
				diskDeviceMappingsObject.type = valueImagesImageDiskDeviceMappingsdiskDeviceMapping["Type"].asString();
			if(!valueImagesImageDiskDeviceMappingsdiskDeviceMapping["Device"].isNull())
				diskDeviceMappingsObject.device = valueImagesImageDiskDeviceMappingsdiskDeviceMapping["Device"].asString();
			if(!valueImagesImageDiskDeviceMappingsdiskDeviceMapping["Size"].isNull())
				diskDeviceMappingsObject.size = valueImagesImageDiskDeviceMappingsdiskDeviceMapping["Size"].asString();
			imagesObject.diskDeviceMappings.push_back(diskDeviceMappingsObject);
		}
		images_.push_back(imagesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();

}

int DescribeRCImageListResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeRCImageListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeRCImageListResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeRCImageListResult::Image> DescribeRCImageListResult::getImages()const
{
	return images_;
}

std::string DescribeRCImageListResult::getRegionId()const
{
	return regionId_;
}

