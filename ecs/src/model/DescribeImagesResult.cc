<<<<<<< HEAD
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

#include <alibabacloud/ecs/model/DescribeImagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
=======
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

#include <alibabacloud/ecs/model/DescribeImagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

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
>>>>>>> master
	auto allImages = value["Images"]["Image"];
	for (auto value : allImages)
	{
		Image imagesObject;
		if(!value["Progress"].isNull())
			imagesObject.progress = value["Progress"].asString();
		if(!value["ImageId"].isNull())
			imagesObject.imageId = value["ImageId"].asString();
		if(!value["ImageName"].isNull())
			imagesObject.imageName = value["ImageName"].asString();
		if(!value["ImageVersion"].isNull())
			imagesObject.imageVersion = value["ImageVersion"].asString();
		if(!value["Description"].isNull())
			imagesObject.description = value["Description"].asString();
		if(!value["Size"].isNull())
			imagesObject.size = std::stoi(value["Size"].asString());
		if(!value["ImageOwnerAlias"].isNull())
			imagesObject.imageOwnerAlias = value["ImageOwnerAlias"].asString();
		if(!value["IsSupportIoOptimized"].isNull())
			imagesObject.isSupportIoOptimized = value["IsSupportIoOptimized"].asString() == "true";
		if(!value["IsSupportCloudinit"].isNull())
			imagesObject.isSupportCloudinit = value["IsSupportCloudinit"].asString() == "true";
		if(!value["OSName"].isNull())
			imagesObject.oSName = value["OSName"].asString();
		if(!value["OSNameEn"].isNull())
			imagesObject.oSNameEn = value["OSNameEn"].asString();
		if(!value["Architecture"].isNull())
			imagesObject.architecture = value["Architecture"].asString();
		if(!value["Status"].isNull())
			imagesObject.status = value["Status"].asString();
		if(!value["ProductCode"].isNull())
			imagesObject.productCode = value["ProductCode"].asString();
		if(!value["IsSubscribed"].isNull())
			imagesObject.isSubscribed = value["IsSubscribed"].asString() == "true";
		if(!value["CreationTime"].isNull())
			imagesObject.creationTime = value["CreationTime"].asString();
		if(!value["IsSelfShared"].isNull())
			imagesObject.isSelfShared = value["IsSelfShared"].asString();
		if(!value["OSType"].isNull())
			imagesObject.oSType = value["OSType"].asString();
		if(!value["Platform"].isNull())
			imagesObject.platform = value["Platform"].asString();
		if(!value["Usage"].isNull())
			imagesObject.usage = value["Usage"].asString();
		if(!value["IsCopied"].isNull())
			imagesObject.isCopied = value["IsCopied"].asString() == "true";
		if(!value["ResourceGroupId"].isNull())
			imagesObject.resourceGroupId = value["ResourceGroupId"].asString();
		auto allDiskDeviceMappings = value["DiskDeviceMappings"]["DiskDeviceMapping"];
		for (auto value : allDiskDeviceMappings)
		{
			Image::DiskDeviceMapping diskDeviceMappingsObject;
			if(!value["SnapshotId"].isNull())
				diskDeviceMappingsObject.snapshotId = value["SnapshotId"].asString();
			if(!value["Size"].isNull())
				diskDeviceMappingsObject.size = value["Size"].asString();
			if(!value["Device"].isNull())
				diskDeviceMappingsObject.device = value["Device"].asString();
			if(!value["Type"].isNull())
				diskDeviceMappingsObject.type = value["Type"].asString();
			if(!value["Format"].isNull())
				diskDeviceMappingsObject.format = value["Format"].asString();
			if(!value["ImportOSSBucket"].isNull())
				diskDeviceMappingsObject.importOSSBucket = value["ImportOSSBucket"].asString();
			if(!value["ImportOSSObject"].isNull())
				diskDeviceMappingsObject.importOSSObject = value["ImportOSSObject"].asString();
			if(!value["Progress"].isNull())
				diskDeviceMappingsObject.progress = value["Progress"].asString();
			if(!value["RemainTime"].isNull())
				diskDeviceMappingsObject.remainTime = std::stoi(value["RemainTime"].asString());
			imagesObject.diskDeviceMappings.push_back(diskDeviceMappingsObject);
		}
		auto allTags = value["Tags"]["Tag"];
		for (auto value : allTags)
		{
			Image::Tag tagsObject;
			if(!value["TagKey"].isNull())
				tagsObject.tagKey = value["TagKey"].asString();
			if(!value["TagValue"].isNull())
				tagsObject.tagValue = value["TagValue"].asString();
			imagesObject.tags.push_back(tagsObject);
		}
		images_.push_back(imagesObject);
	}
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

std::string DescribeImagesResult::getRegionId()const
{
	return regionId_;
}

