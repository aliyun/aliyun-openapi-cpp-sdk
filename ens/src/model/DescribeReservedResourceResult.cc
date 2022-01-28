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

#include <alibabacloud/ens/model/DescribeReservedResourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeReservedResourceResult::DescribeReservedResourceResult() :
	ServiceResult()
{}

DescribeReservedResourceResult::DescribeReservedResourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeReservedResourceResult::~DescribeReservedResourceResult()
{}

void DescribeReservedResourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImagesNode = value["Images"]["Image"];
	for (auto valueImagesImage : allImagesNode)
	{
		Image imagesObject;
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
		if(!valueSupportResourcesSupportResource["EnsRegionId"].isNull())
			supportResourcesObject.ensRegionId = valueSupportResourcesSupportResource["EnsRegionId"].asString();
		if(!valueSupportResourcesSupportResource["SupportResourcesCount"].isNull())
			supportResourcesObject.supportResourcesCount = valueSupportResourcesSupportResource["SupportResourcesCount"].asString();
		if(!valueSupportResourcesSupportResource["InstanceSpec"].isNull())
			supportResourcesObject.instanceSpec = valueSupportResourcesSupportResource["InstanceSpec"].asString();
		auto allDataDiskSizes = value["DataDiskSizes"]["DataDiskSize"];
		for (auto value : allDataDiskSizes)
			supportResourcesObject.dataDiskSizes.push_back(value.asString());
		auto allSystemDiskSizes = value["SystemDiskSizes"]["SystemDiskSize"];
		for (auto value : allSystemDiskSizes)
			supportResourcesObject.systemDiskSizes.push_back(value.asString());
		supportResources_.push_back(supportResourcesObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());

}

std::vector<DescribeReservedResourceResult::Image> DescribeReservedResourceResult::getImages()const
{
	return images_;
}

std::vector<DescribeReservedResourceResult::SupportResource> DescribeReservedResourceResult::getSupportResources()const
{
	return supportResources_;
}

int DescribeReservedResourceResult::getCode()const
{
	return code_;
}

