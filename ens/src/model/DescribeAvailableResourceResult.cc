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

#include <alibabacloud/ens/model/DescribeAvailableResourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeAvailableResourceResult::DescribeAvailableResourceResult() :
	ServiceResult()
{}

DescribeAvailableResourceResult::DescribeAvailableResourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAvailableResourceResult::~DescribeAvailableResourceResult()
{}

void DescribeAvailableResourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImagesNode = value["Images"]["Image"];
	for (auto valueImagesImage : allImagesNode)
	{
		Image imagesObject;
		if(!valueImagesImage["ImageId"].isNull())
			imagesObject.imageId = valueImagesImage["ImageId"].asString();
		if(!valueImagesImage["ImageName"].isNull())
			imagesObject.imageName = valueImagesImage["ImageName"].asString();
		images_.push_back(imagesObject);
	}
	auto allSupportResourcesNode = value["SupportResources"]["SupportResource"];
	for (auto valueSupportResourcesSupportResource : allSupportResourcesNode)
	{
		SupportResource supportResourcesObject;
		if(!valueSupportResourcesSupportResource["DataDiskSize"].isNull())
			supportResourcesObject.dataDiskSize = valueSupportResourcesSupportResource["DataDiskSize"].asString();
		if(!valueSupportResourcesSupportResource["EnsRegionId"].isNull())
			supportResourcesObject.ensRegionId = valueSupportResourcesSupportResource["EnsRegionId"].asString();
		if(!valueSupportResourcesSupportResource["InstanceSpec"].isNull())
			supportResourcesObject.instanceSpec = valueSupportResourcesSupportResource["InstanceSpec"].asString();
		if(!valueSupportResourcesSupportResource["SupportResourcesCount"].isNull())
			supportResourcesObject.supportResourcesCount = valueSupportResourcesSupportResource["SupportResourcesCount"].asString();
		if(!valueSupportResourcesSupportResource["SystemDiskSize"].isNull())
			supportResourcesObject.systemDiskSize = valueSupportResourcesSupportResource["SystemDiskSize"].asString();
		supportResources_.push_back(supportResourcesObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());

}

std::vector<DescribeAvailableResourceResult::Image> DescribeAvailableResourceResult::getImages()const
{
	return images_;
}

std::vector<DescribeAvailableResourceResult::SupportResource> DescribeAvailableResourceResult::getSupportResources()const
{
	return supportResources_;
}

int DescribeAvailableResourceResult::getCode()const
{
	return code_;
}

