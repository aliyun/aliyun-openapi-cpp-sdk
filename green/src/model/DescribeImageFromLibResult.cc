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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allImageFromLibList = value["ImageFromLibList"]["ImageFromLib"];
	for (auto value : allImageFromLibList)
	{
		ImageFromLib imageFromLibListObject;
		if(!value["Image"].isNull())
			imageFromLibListObject.image = value["Image"].asString();
		if(!value["Thumbnail"].isNull())
			imageFromLibListObject.thumbnail = value["Thumbnail"].asString();
		if(!value["Id"].isNull())
			imageFromLibListObject.id = std::stol(value["Id"].asString());
		if(!value["ImageHitCount"].isNull())
			imageFromLibListObject.imageHitCount = std::stol(value["ImageHitCount"].asString());
		if(!value["VideoHitCount"].isNull())
			imageFromLibListObject.videoHitCount = std::stol(value["VideoHitCount"].asString());
		if(!value["CreateTime"].isNull())
			imageFromLibListObject.createTime = value["CreateTime"].asString();
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

