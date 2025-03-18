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

#include <alibabacloud/ens/model/DescribeImageInfosResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeImageInfosResult::DescribeImageInfosResult() :
	ServiceResult()
{}

DescribeImageInfosResult::DescribeImageInfosResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImageInfosResult::~DescribeImageInfosResult()
{}

void DescribeImageInfosResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImagesNode = value["Images"]["Image"];
	for (auto valueImagesImage : allImagesNode)
	{
		Image imagesObject;
		if(!valueImagesImage["Description"].isNull())
			imagesObject.description = valueImagesImage["Description"].asString();
		if(!valueImagesImage["ImageId"].isNull())
			imagesObject.imageId = valueImagesImage["ImageId"].asString();
		if(!valueImagesImage["ImageSize"].isNull())
			imagesObject.imageSize = valueImagesImage["ImageSize"].asString();
		if(!valueImagesImage["ImageVersion"].isNull())
			imagesObject.imageVersion = valueImagesImage["ImageVersion"].asString();
		if(!valueImagesImage["OSName"].isNull())
			imagesObject.oSName = valueImagesImage["OSName"].asString();
		if(!valueImagesImage["OSType"].isNull())
			imagesObject.oSType = valueImagesImage["OSType"].asString();
		if(!valueImagesImage["ComputeType"].isNull())
			imagesObject.computeType = valueImagesImage["ComputeType"].asString();
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

}

std::vector<DescribeImageInfosResult::Image> DescribeImageInfosResult::getImages()const
{
	return images_;
}

int DescribeImageInfosResult::getCode()const
{
	return code_;
}

