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

#include <alibabacloud/ens/model/DescribeAICImagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeAICImagesResult::DescribeAICImagesResult() :
	ServiceResult()
{}

DescribeAICImagesResult::DescribeAICImagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAICImagesResult::~DescribeAICImagesResult()
{}

void DescribeAICImagesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImagesNode = value["Images"]["ImagesItem"];
	for (auto valueImagesImagesItem : allImagesNode)
	{
		ImagesItem imagesObject;
		if(!valueImagesImagesItem["ImageUrl"].isNull())
			imagesObject.imageUrl = valueImagesImagesItem["ImageUrl"].asString();
		if(!valueImagesImagesItem["ImageId"].isNull())
			imagesObject.imageId = valueImagesImagesItem["ImageId"].asString();
		if(!valueImagesImagesItem["User"].isNull())
			imagesObject.user = valueImagesImagesItem["User"].asString();
		if(!valueImagesImagesItem["Status"].isNull())
			imagesObject.status = valueImagesImagesItem["Status"].asString();
		if(!valueImagesImagesItem["CreationTime"].isNull())
			imagesObject.creationTime = valueImagesImagesItem["CreationTime"].asString();
		if(!valueImagesImagesItem["Description"].isNull())
			imagesObject.description = valueImagesImagesItem["Description"].asString();
		images_.push_back(imagesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeAICImagesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeAICImagesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeAICImagesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeAICImagesResult::ImagesItem> DescribeAICImagesResult::getImages()const
{
	return images_;
}

