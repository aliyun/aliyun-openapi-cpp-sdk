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

#include <alibabacloud/ecs/model/DescribeImagePipelinesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeImagePipelinesResult::DescribeImagePipelinesResult() :
	ServiceResult()
{}

DescribeImagePipelinesResult::DescribeImagePipelinesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImagePipelinesResult::~DescribeImagePipelinesResult()
{}

void DescribeImagePipelinesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImagePipelineNode = value["ImagePipeline"]["ImagePipelineSet"];
	for (auto valueImagePipelineImagePipelineSet : allImagePipelineNode)
	{
		ImagePipelineSet imagePipelineObject;
		if(!valueImagePipelineImagePipelineSet["CreationTime"].isNull())
			imagePipelineObject.creationTime = valueImagePipelineImagePipelineSet["CreationTime"].asString();
		if(!valueImagePipelineImagePipelineSet["DeleteInstanceOnFailure"].isNull())
			imagePipelineObject.deleteInstanceOnFailure = valueImagePipelineImagePipelineSet["DeleteInstanceOnFailure"].asString() == "true";
		if(!valueImagePipelineImagePipelineSet["InstanceType"].isNull())
			imagePipelineObject.instanceType = valueImagePipelineImagePipelineSet["InstanceType"].asString();
		if(!valueImagePipelineImagePipelineSet["InternetMaxBandwidthOut"].isNull())
			imagePipelineObject.internetMaxBandwidthOut = std::stoi(valueImagePipelineImagePipelineSet["InternetMaxBandwidthOut"].asString());
		if(!valueImagePipelineImagePipelineSet["ImagePipelineId"].isNull())
			imagePipelineObject.imagePipelineId = valueImagePipelineImagePipelineSet["ImagePipelineId"].asString();
		if(!valueImagePipelineImagePipelineSet["VSwitchId"].isNull())
			imagePipelineObject.vSwitchId = valueImagePipelineImagePipelineSet["VSwitchId"].asString();
		if(!valueImagePipelineImagePipelineSet["SystemDiskSize"].isNull())
			imagePipelineObject.systemDiskSize = std::stoi(valueImagePipelineImagePipelineSet["SystemDiskSize"].asString());
		if(!valueImagePipelineImagePipelineSet["Description"].isNull())
			imagePipelineObject.description = valueImagePipelineImagePipelineSet["Description"].asString();
		if(!valueImagePipelineImagePipelineSet["BaseImage"].isNull())
			imagePipelineObject.baseImage = valueImagePipelineImagePipelineSet["BaseImage"].asString();
		if(!valueImagePipelineImagePipelineSet["ResourceGroupId"].isNull())
			imagePipelineObject.resourceGroupId = valueImagePipelineImagePipelineSet["ResourceGroupId"].asString();
		if(!valueImagePipelineImagePipelineSet["ImageName"].isNull())
			imagePipelineObject.imageName = valueImagePipelineImagePipelineSet["ImageName"].asString();
		if(!valueImagePipelineImagePipelineSet["BaseImageType"].isNull())
			imagePipelineObject.baseImageType = valueImagePipelineImagePipelineSet["BaseImageType"].asString();
		if(!valueImagePipelineImagePipelineSet["Name"].isNull())
			imagePipelineObject.name = valueImagePipelineImagePipelineSet["Name"].asString();
		if(!valueImagePipelineImagePipelineSet["BuildContent"].isNull())
			imagePipelineObject.buildContent = valueImagePipelineImagePipelineSet["BuildContent"].asString();
		if(!valueImagePipelineImagePipelineSet["RepairMode"].isNull())
			imagePipelineObject.repairMode = valueImagePipelineImagePipelineSet["RepairMode"].asString();
		if(!valueImagePipelineImagePipelineSet["TestContent"].isNull())
			imagePipelineObject.testContent = valueImagePipelineImagePipelineSet["TestContent"].asString();
		if(!valueImagePipelineImagePipelineSet["ImageFamily"].isNull())
			imagePipelineObject.imageFamily = valueImagePipelineImagePipelineSet["ImageFamily"].asString();
		if(!valueImagePipelineImagePipelineSet["NvmeSupport"].isNull())
			imagePipelineObject.nvmeSupport = valueImagePipelineImagePipelineSet["NvmeSupport"].asString();
		auto allTagsNode = valueImagePipelineImagePipelineSet["Tags"]["Tag"];
		for (auto valueImagePipelineImagePipelineSetTagsTag : allTagsNode)
		{
			ImagePipelineSet::Tag tagsObject;
			if(!valueImagePipelineImagePipelineSetTagsTag["TagValue"].isNull())
				tagsObject.tagValue = valueImagePipelineImagePipelineSetTagsTag["TagValue"].asString();
			if(!valueImagePipelineImagePipelineSetTagsTag["TagKey"].isNull())
				tagsObject.tagKey = valueImagePipelineImagePipelineSetTagsTag["TagKey"].asString();
			imagePipelineObject.tags.push_back(tagsObject);
		}
		auto importImageOptionsNode = value["ImportImageOptions"];
		if(!importImageOptionsNode["Architecture"].isNull())
			imagePipelineObject.importImageOptions.architecture = importImageOptionsNode["Architecture"].asString();
		if(!importImageOptionsNode["OSType"].isNull())
			imagePipelineObject.importImageOptions.oSType = importImageOptionsNode["OSType"].asString();
		if(!importImageOptionsNode["Platform"].isNull())
			imagePipelineObject.importImageOptions.platform = importImageOptionsNode["Platform"].asString();
		if(!importImageOptionsNode["BootMode"].isNull())
			imagePipelineObject.importImageOptions.bootMode = importImageOptionsNode["BootMode"].asString();
		if(!importImageOptionsNode["LicenseType"].isNull())
			imagePipelineObject.importImageOptions.licenseType = importImageOptionsNode["LicenseType"].asString();
		if(!importImageOptionsNode["RetainImportedImage"].isNull())
			imagePipelineObject.importImageOptions.retainImportedImage = importImageOptionsNode["RetainImportedImage"].asString() == "true";
		auto allDiskDeviceMappingsNode = importImageOptionsNode["DiskDeviceMappings"]["DiskDeviceMapping"];
		for (auto importImageOptionsNodeDiskDeviceMappingsDiskDeviceMapping : allDiskDeviceMappingsNode)
		{
			ImagePipelineSet::ImportImageOptions::DiskDeviceMapping diskDeviceMappingObject;
			if(!importImageOptionsNodeDiskDeviceMappingsDiskDeviceMapping["OSSBucket"].isNull())
				diskDeviceMappingObject.oSSBucket = importImageOptionsNodeDiskDeviceMappingsDiskDeviceMapping["OSSBucket"].asString();
			if(!importImageOptionsNodeDiskDeviceMappingsDiskDeviceMapping["OSSObject"].isNull())
				diskDeviceMappingObject.oSSObject = importImageOptionsNodeDiskDeviceMappingsDiskDeviceMapping["OSSObject"].asString();
			if(!importImageOptionsNodeDiskDeviceMappingsDiskDeviceMapping["Format"].isNull())
				diskDeviceMappingObject.format = importImageOptionsNodeDiskDeviceMappingsDiskDeviceMapping["Format"].asString();
			if(!importImageOptionsNodeDiskDeviceMappingsDiskDeviceMapping["DiskImageSize"].isNull())
				diskDeviceMappingObject.diskImageSize = std::stoi(importImageOptionsNodeDiskDeviceMappingsDiskDeviceMapping["DiskImageSize"].asString());
			imagePipelineObject.importImageOptions.diskDeviceMappings.push_back(diskDeviceMappingObject);
		}
		auto featuresNode = importImageOptionsNode["Features"];
		if(!featuresNode["NvmeSupport"].isNull())
			imagePipelineObject.importImageOptions.features.nvmeSupport = featuresNode["NvmeSupport"].asString();
		auto advancedOptionsNode = value["AdvancedOptions"];
		if(!advancedOptionsNode["RetainCloudAssistant"].isNull())
			imagePipelineObject.advancedOptions.retainCloudAssistant = advancedOptionsNode["RetainCloudAssistant"].asString() == "true";
		if(!advancedOptionsNode["SkipBuildImage"].isNull())
			imagePipelineObject.advancedOptions.skipBuildImage = advancedOptionsNode["SkipBuildImage"].asString() == "true";
		if(!advancedOptionsNode["SkipCheckImage"].isNull())
			imagePipelineObject.advancedOptions.skipCheckImage = advancedOptionsNode["SkipCheckImage"].asString() == "true";
		if(!advancedOptionsNode["ImageNameSuffix"].isNull())
			imagePipelineObject.advancedOptions.imageNameSuffix = advancedOptionsNode["ImageNameSuffix"].asString();
		auto imageOptionsNode = value["ImageOptions"];
		if(!imageOptionsNode["ImageName"].isNull())
			imagePipelineObject.imageOptions.imageName = imageOptionsNode["ImageName"].asString();
		if(!imageOptionsNode["ImageFamily"].isNull())
			imagePipelineObject.imageOptions.imageFamily = imageOptionsNode["ImageFamily"].asString();
		if(!imageOptionsNode["Description"].isNull())
			imagePipelineObject.imageOptions.description = imageOptionsNode["Description"].asString();
		auto allImageTagsNode = imageOptionsNode["ImageTags"]["ImageTag"];
		for (auto imageOptionsNodeImageTagsImageTag : allImageTagsNode)
		{
			ImagePipelineSet::ImageOptions::ImageTag imageTagObject;
			if(!imageOptionsNodeImageTagsImageTag["TagKey"].isNull())
				imageTagObject.tagKey = imageOptionsNodeImageTagsImageTag["TagKey"].asString();
			if(!imageOptionsNodeImageTagsImageTag["TagValue"].isNull())
				imageTagObject.tagValue = imageOptionsNodeImageTagsImageTag["TagValue"].asString();
			imagePipelineObject.imageOptions.imageTags.push_back(imageTagObject);
		}
		auto imageFeaturesNode = imageOptionsNode["ImageFeatures"];
		if(!imageFeaturesNode["NvmeSupport"].isNull())
			imagePipelineObject.imageOptions.imageFeatures.nvmeSupport = imageFeaturesNode["NvmeSupport"].asString();
		auto allToRegionIds = value["ToRegionIds"]["ToRegionId"];
		for (auto value : allToRegionIds)
			imagePipelineObject.toRegionIds.push_back(value.asString());
		auto allAddAccounts = value["AddAccounts"]["AddAccount"];
		for (auto value : allAddAccounts)
			imagePipelineObject.addAccounts.push_back(value.asString());
		imagePipeline_.push_back(imagePipelineObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

int DescribeImagePipelinesResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeImagePipelinesResult::getNextToken()const
{
	return nextToken_;
}

int DescribeImagePipelinesResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<DescribeImagePipelinesResult::ImagePipelineSet> DescribeImagePipelinesResult::getImagePipeline()const
{
	return imagePipeline_;
}

