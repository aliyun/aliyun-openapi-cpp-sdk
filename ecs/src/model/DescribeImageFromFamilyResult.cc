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

#include <alibabacloud/ecs/model/DescribeImageFromFamilyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeImageFromFamilyResult::DescribeImageFromFamilyResult() :
	ServiceResult()
{}

DescribeImageFromFamilyResult::DescribeImageFromFamilyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImageFromFamilyResult::~DescribeImageFromFamilyResult()
{}

void DescribeImageFromFamilyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto imageNode = value["Image"];
	if(!imageNode["CreationTime"].isNull())
		image_.creationTime = imageNode["CreationTime"].asString();
	if(!imageNode["Status"].isNull())
		image_.status = imageNode["Status"].asString();
	if(!imageNode["ImageFamily"].isNull())
		image_.imageFamily = imageNode["ImageFamily"].asString();
	if(!imageNode["Progress"].isNull())
		image_.progress = imageNode["Progress"].asString();
	if(!imageNode["IsCopied"].isNull())
		image_.isCopied = imageNode["IsCopied"].asString() == "true";
	if(!imageNode["IsSupportIoOptimized"].isNull())
		image_.isSupportIoOptimized = imageNode["IsSupportIoOptimized"].asString() == "true";
	if(!imageNode["ImageOwnerAlias"].isNull())
		image_.imageOwnerAlias = imageNode["ImageOwnerAlias"].asString();
	if(!imageNode["IsSupportCloudinit"].isNull())
		image_.isSupportCloudinit = imageNode["IsSupportCloudinit"].asString() == "true";
	if(!imageNode["ImageVersion"].isNull())
		image_.imageVersion = imageNode["ImageVersion"].asString();
	if(!imageNode["Usage"].isNull())
		image_.usage = imageNode["Usage"].asString();
	if(!imageNode["IsSelfShared"].isNull())
		image_.isSelfShared = imageNode["IsSelfShared"].asString();
	if(!imageNode["Description"].isNull())
		image_.description = imageNode["Description"].asString();
	if(!imageNode["Size"].isNull())
		image_.size = std::stoi(imageNode["Size"].asString());
	if(!imageNode["Platform"].isNull())
		image_.platform = imageNode["Platform"].asString();
	if(!imageNode["ImageName"].isNull())
		image_.imageName = imageNode["ImageName"].asString();
	if(!imageNode["OSName"].isNull())
		image_.oSName = imageNode["OSName"].asString();
	if(!imageNode["ImageId"].isNull())
		image_.imageId = imageNode["ImageId"].asString();
	if(!imageNode["OSType"].isNull())
		image_.oSType = imageNode["OSType"].asString();
	if(!imageNode["IsSubscribed"].isNull())
		image_.isSubscribed = imageNode["IsSubscribed"].asString() == "true";
	if(!imageNode["ProductCode"].isNull())
		image_.productCode = imageNode["ProductCode"].asString();
	if(!imageNode["Architecture"].isNull())
		image_.architecture = imageNode["Architecture"].asString();
	auto allDiskDeviceMappingsNode = imageNode["DiskDeviceMappings"]["DiskDeviceMapping"];
	for (auto imageNodeDiskDeviceMappingsDiskDeviceMapping : allDiskDeviceMappingsNode)
	{
		Image::DiskDeviceMapping diskDeviceMappingObject;
		if(!imageNodeDiskDeviceMappingsDiskDeviceMapping["Type"].isNull())
			diskDeviceMappingObject.type = imageNodeDiskDeviceMappingsDiskDeviceMapping["Type"].asString();
		if(!imageNodeDiskDeviceMappingsDiskDeviceMapping["ImportOSSBucket"].isNull())
			diskDeviceMappingObject.importOSSBucket = imageNodeDiskDeviceMappingsDiskDeviceMapping["ImportOSSBucket"].asString();
		if(!imageNodeDiskDeviceMappingsDiskDeviceMapping["SnapshotId"].isNull())
			diskDeviceMappingObject.snapshotId = imageNodeDiskDeviceMappingsDiskDeviceMapping["SnapshotId"].asString();
		if(!imageNodeDiskDeviceMappingsDiskDeviceMapping["ImportOSSObject"].isNull())
			diskDeviceMappingObject.importOSSObject = imageNodeDiskDeviceMappingsDiskDeviceMapping["ImportOSSObject"].asString();
		if(!imageNodeDiskDeviceMappingsDiskDeviceMapping["Size"].isNull())
			diskDeviceMappingObject.size = imageNodeDiskDeviceMappingsDiskDeviceMapping["Size"].asString();
		if(!imageNodeDiskDeviceMappingsDiskDeviceMapping["Device"].isNull())
			diskDeviceMappingObject.device = imageNodeDiskDeviceMappingsDiskDeviceMapping["Device"].asString();
		if(!imageNodeDiskDeviceMappingsDiskDeviceMapping["Format"].isNull())
			diskDeviceMappingObject.format = imageNodeDiskDeviceMappingsDiskDeviceMapping["Format"].asString();
		image_.diskDeviceMappings.push_back(diskDeviceMappingObject);
	}
	auto allTagsNode = imageNode["Tags"]["Tag"];
	for (auto imageNodeTagsTag : allTagsNode)
	{
		Image::Tag tagObject;
		if(!imageNodeTagsTag["TagValue"].isNull())
			tagObject.tagValue = imageNodeTagsTag["TagValue"].asString();
		if(!imageNodeTagsTag["TagKey"].isNull())
			tagObject.tagKey = imageNodeTagsTag["TagKey"].asString();
		image_.tags.push_back(tagObject);
	}

}

DescribeImageFromFamilyResult::Image DescribeImageFromFamilyResult::getImage()const
{
	return image_;
}

