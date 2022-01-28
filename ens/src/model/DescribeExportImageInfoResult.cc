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

#include <alibabacloud/ens/model/DescribeExportImageInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeExportImageInfoResult::DescribeExportImageInfoResult() :
	ServiceResult()
{}

DescribeExportImageInfoResult::DescribeExportImageInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeExportImageInfoResult::~DescribeExportImageInfoResult()
{}

void DescribeExportImageInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImagesNode = value["Images"]["Image"];
	for (auto valueImagesImage : allImagesNode)
	{
		Image imagesObject;
		if(!valueImagesImage["Architecture"].isNull())
			imagesObject.architecture = valueImagesImage["Architecture"].asString();
		if(!valueImagesImage["CreationTime"].isNull())
			imagesObject.creationTime = valueImagesImage["CreationTime"].asString();
		if(!valueImagesImage["ExportedImageURL"].isNull())
			imagesObject.exportedImageURL = valueImagesImage["ExportedImageURL"].asString();
		if(!valueImagesImage["ImageExportStatus"].isNull())
			imagesObject.imageExportStatus = valueImagesImage["ImageExportStatus"].asString();
		if(!valueImagesImage["ImageId"].isNull())
			imagesObject.imageId = valueImagesImage["ImageId"].asString();
		if(!valueImagesImage["ImageName"].isNull())
			imagesObject.imageName = valueImagesImage["ImageName"].asString();
		if(!valueImagesImage["ImageOwnerAlias"].isNull())
			imagesObject.imageOwnerAlias = valueImagesImage["ImageOwnerAlias"].asString();
		if(!valueImagesImage["Platform"].isNull())
			imagesObject.platform = valueImagesImage["Platform"].asString();
		images_.push_back(imagesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeExportImageInfoResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeExportImageInfoResult::getPageSize()const
{
	return pageSize_;
}

int DescribeExportImageInfoResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeExportImageInfoResult::Image> DescribeExportImageInfoResult::getImages()const
{
	return images_;
}

