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

#include <alibabacloud/ehpc/model/DescribeGWSImagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

DescribeGWSImagesResult::DescribeGWSImagesResult() :
	ServiceResult()
{}

DescribeGWSImagesResult::DescribeGWSImagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGWSImagesResult::~DescribeGWSImagesResult()
{}

void DescribeGWSImagesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allImages = value["Images"]["ImageInfo"];
	for (auto value : allImages)
	{
		ImageInfo imagesObject;
		if(!value["ImageId"].isNull())
			imagesObject.imageId = value["ImageId"].asString();
		if(!value["Status"].isNull())
			imagesObject.status = value["Status"].asString();
		if(!value["CreateTime"].isNull())
			imagesObject.createTime = value["CreateTime"].asString();
		if(!value["Name"].isNull())
			imagesObject.name = value["Name"].asString();
		if(!value["ImageType"].isNull())
			imagesObject.imageType = value["ImageType"].asString();
		if(!value["Progress"].isNull())
			imagesObject.progress = value["Progress"].asString();
		if(!value["Size"].isNull())
			imagesObject.size = std::stoi(value["Size"].asString());
		images_.push_back(imagesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeGWSImagesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeGWSImagesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeGWSImagesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeGWSImagesResult::ImageInfo> DescribeGWSImagesResult::getImages()const
{
	return images_;
}

