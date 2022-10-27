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

#include <alibabacloud/ehpc/model/DescribeEstackImageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

DescribeEstackImageResult::DescribeEstackImageResult() :
	ServiceResult()
{}

DescribeEstackImageResult::DescribeEstackImageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEstackImageResult::~DescribeEstackImageResult()
{}

void DescribeEstackImageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImageListNode = value["ImageList"]["ImageListInfo"];
	for (auto valueImageListImageListInfo : allImageListNode)
	{
		ImageListInfo imageListObject;
		if(!valueImageListImageListInfo["ImageName"].isNull())
			imageListObject.imageName = valueImageListImageListInfo["ImageName"].asString();
		if(!valueImageListImageListInfo["ImageSize"].isNull())
			imageListObject.imageSize = std::stoi(valueImageListImageListInfo["ImageSize"].asString());
		if(!valueImageListImageListInfo["RecentUpdateTime"].isNull())
			imageListObject.recentUpdateTime = valueImageListImageListInfo["RecentUpdateTime"].asString();
		if(!valueImageListImageListInfo["ImageUrl"].isNull())
			imageListObject.imageUrl = valueImageListImageListInfo["ImageUrl"].asString();
		if(!valueImageListImageListInfo["ImageType"].isNull())
			imageListObject.imageType = valueImageListImageListInfo["ImageType"].asString();
		imageList_.push_back(imageListObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeEstackImageResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeEstackImageResult::getPageSize()const
{
	return pageSize_;
}

int DescribeEstackImageResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeEstackImageResult::ImageListInfo> DescribeEstackImageResult::getImageList()const
{
	return imageList_;
}

