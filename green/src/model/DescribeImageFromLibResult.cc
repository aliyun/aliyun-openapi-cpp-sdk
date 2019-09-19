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

#include <alibabacloud/green/model/DescribeImageFromLibResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeImageFromLibResult::DescribeImageFromLibResult() :
	ServiceResult()
{}

DescribeImageFromLibResult::DescribeImageFromLibResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImageFromLibResult::~DescribeImageFromLibResult()
{}

void DescribeImageFromLibResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImageFromLibListNode = value["ImageFromLibList"]["ImageFromLib"];
	for (auto valueImageFromLibListImageFromLib : allImageFromLibListNode)
	{
		ImageFromLib imageFromLibListObject;
		if(!valueImageFromLibListImageFromLib["Image"].isNull())
			imageFromLibListObject.image = valueImageFromLibListImageFromLib["Image"].asString();
		if(!valueImageFromLibListImageFromLib["Thumbnail"].isNull())
			imageFromLibListObject.thumbnail = valueImageFromLibListImageFromLib["Thumbnail"].asString();
		if(!valueImageFromLibListImageFromLib["Id"].isNull())
			imageFromLibListObject.id = std::stol(valueImageFromLibListImageFromLib["Id"].asString());
		if(!valueImageFromLibListImageFromLib["ImageHitCount"].isNull())
			imageFromLibListObject.imageHitCount = std::stol(valueImageFromLibListImageFromLib["ImageHitCount"].asString());
		if(!valueImageFromLibListImageFromLib["VideoHitCount"].isNull())
			imageFromLibListObject.videoHitCount = std::stol(valueImageFromLibListImageFromLib["VideoHitCount"].asString());
		if(!valueImageFromLibListImageFromLib["CreateTime"].isNull())
			imageFromLibListObject.createTime = valueImageFromLibListImageFromLib["CreateTime"].asString();
		imageFromLibList_.push_back(imageFromLibListObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeImageFromLibResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeImageFromLibResult::getPageSize()const
{
	return pageSize_;
}

int DescribeImageFromLibResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeImageFromLibResult::ImageFromLib> DescribeImageFromLibResult::getImageFromLibList()const
{
	return imageFromLibList_;
}

