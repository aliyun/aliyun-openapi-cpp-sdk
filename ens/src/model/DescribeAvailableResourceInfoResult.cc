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

#include <alibabacloud/ens/model/DescribeAvailableResourceInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeAvailableResourceInfoResult::DescribeAvailableResourceInfoResult() :
	ServiceResult()
{}

DescribeAvailableResourceInfoResult::DescribeAvailableResourceInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAvailableResourceInfoResult::~DescribeAvailableResourceInfoResult()
{}

void DescribeAvailableResourceInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImagesNode = value["Images"]["Image"];
	for (auto valueImagesImage : allImagesNode)
	{
		Image imagesObject;
		if(!valueImagesImage["ImageSize"].isNull())
			imagesObject.imageSize = std::stoi(valueImagesImage["ImageSize"].asString());
		if(!valueImagesImage["ImageName"].isNull())
			imagesObject.imageName = valueImagesImage["ImageName"].asString();
		if(!valueImagesImage["ImageId"].isNull())
			imagesObject.imageId = valueImagesImage["ImageId"].asString();
		images_.push_back(imagesObject);
	}
	auto allSupportResourcesNode = value["SupportResources"]["SupportResource"];
	for (auto valueSupportResourcesSupportResource : allSupportResourcesNode)
	{
		SupportResource supportResourcesObject;
		if(!valueSupportResourcesSupportResource["DataDiskMaxSize"].isNull())
			supportResourcesObject.dataDiskMaxSize = std::stoi(valueSupportResourcesSupportResource["DataDiskMaxSize"].asString());
		if(!valueSupportResourcesSupportResource["SystemDiskMinSize"].isNull())
			supportResourcesObject.systemDiskMinSize = std::stoi(valueSupportResourcesSupportResource["SystemDiskMinSize"].asString());
		if(!valueSupportResourcesSupportResource["SystemDiskMaxSize"].isNull())
			supportResourcesObject.systemDiskMaxSize = std::stoi(valueSupportResourcesSupportResource["SystemDiskMaxSize"].asString());
		if(!valueSupportResourcesSupportResource["DataDiskMinSize"].isNull())
			supportResourcesObject.dataDiskMinSize = std::stoi(valueSupportResourcesSupportResource["DataDiskMinSize"].asString());
		auto allEnsRegionIdsExtendsNode = valueSupportResourcesSupportResource["EnsRegionIdsExtends"]["EnsRegionId"];
		for (auto valueSupportResourcesSupportResourceEnsRegionIdsExtendsEnsRegionId : allEnsRegionIdsExtendsNode)
		{
			SupportResource::EnsRegionId ensRegionIdsExtendsObject;
			if(!valueSupportResourcesSupportResourceEnsRegionIdsExtendsEnsRegionId["EnsRegionId"].isNull())
				ensRegionIdsExtendsObject.ensRegionId = valueSupportResourcesSupportResourceEnsRegionIdsExtendsEnsRegionId["EnsRegionId"].asString();
			if(!valueSupportResourcesSupportResourceEnsRegionIdsExtendsEnsRegionId["EnName"].isNull())
				ensRegionIdsExtendsObject.enName = valueSupportResourcesSupportResourceEnsRegionIdsExtendsEnsRegionId["EnName"].asString();
			if(!valueSupportResourcesSupportResourceEnsRegionIdsExtendsEnsRegionId["Area"].isNull())
				ensRegionIdsExtendsObject.area = valueSupportResourcesSupportResourceEnsRegionIdsExtendsEnsRegionId["Area"].asString();
			if(!valueSupportResourcesSupportResourceEnsRegionIdsExtendsEnsRegionId["Name"].isNull())
				ensRegionIdsExtendsObject.name = valueSupportResourcesSupportResourceEnsRegionIdsExtendsEnsRegionId["Name"].asString();
			if(!valueSupportResourcesSupportResourceEnsRegionIdsExtendsEnsRegionId["Province"].isNull())
				ensRegionIdsExtendsObject.province = valueSupportResourcesSupportResourceEnsRegionIdsExtendsEnsRegionId["Province"].asString();
			if(!valueSupportResourcesSupportResourceEnsRegionIdsExtendsEnsRegionId["Isp"].isNull())
				ensRegionIdsExtendsObject.isp = valueSupportResourcesSupportResourceEnsRegionIdsExtendsEnsRegionId["Isp"].asString();
			supportResourcesObject.ensRegionIdsExtends.push_back(ensRegionIdsExtendsObject);
		}
		auto allBandwidthTypes = value["BandwidthTypes"]["BandwidthType"];
		for (auto value : allBandwidthTypes)
			supportResourcesObject.bandwidthTypes.push_back(value.asString());
		auto allEnsRegionIds = value["EnsRegionIds"]["EnsRegionId"];
		for (auto value : allEnsRegionIds)
			supportResourcesObject.ensRegionIds.push_back(value.asString());
		auto allInstanceSpeces = value["InstanceSpeces"]["InstanceSpec"];
		for (auto value : allInstanceSpeces)
			supportResourcesObject.instanceSpeces.push_back(value.asString());
		auto allIsp = value["Isp"]["Isp"];
		for (auto value : allIsp)
			supportResourcesObject.isp.push_back(value.asString());
		supportResources_.push_back(supportResourcesObject);
	}

}

std::vector<DescribeAvailableResourceInfoResult::Image> DescribeAvailableResourceInfoResult::getImages()const
{
	return images_;
}

std::vector<DescribeAvailableResourceInfoResult::SupportResource> DescribeAvailableResourceInfoResult::getSupportResources()const
{
	return supportResources_;
}

