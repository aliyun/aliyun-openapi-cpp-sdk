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

#include <alibabacloud/ehpc/model/ListImagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

ListImagesResult::ListImagesResult() :
	ServiceResult()
{}

ListImagesResult::ListImagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListImagesResult::~ListImagesResult()
{}

void ListImagesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImagesNode = value["Images"]["Image"];
	for (auto valueImagesImage : allImagesNode)
	{
		Image imagesObject;
		if(!valueImagesImage["ImageType"].isNull())
			imagesObject.imageType = valueImagesImage["ImageType"].asString();
		if(!valueImagesImage["ImageId"].isNull())
			imagesObject.imageId = valueImagesImage["ImageId"].asString();
		if(!valueImagesImage["AppId"].isNull())
			imagesObject.appId = valueImagesImage["AppId"].asString();
		if(!valueImagesImage["Name"].isNull())
			imagesObject.name = valueImagesImage["Name"].asString();
		if(!valueImagesImage["Version"].isNull())
			imagesObject.version = valueImagesImage["Version"].asString();
		if(!valueImagesImage["Label"].isNull())
			imagesObject.label = valueImagesImage["Label"].asString();
		if(!valueImagesImage["Description"].isNull())
			imagesObject.description = valueImagesImage["Description"].asString();
		if(!valueImagesImage["Size"].isNull())
			imagesObject.size = valueImagesImage["Size"].asString();
		if(!valueImagesImage["CreateTime"].isNull())
			imagesObject.createTime = valueImagesImage["CreateTime"].asString();
		if(!valueImagesImage["Status"].isNull())
			imagesObject.status = valueImagesImage["Status"].asString();
		images_.push_back(imagesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());

}

int ListImagesResult::getTotalCount()const
{
	return totalCount_;
}

long ListImagesResult::getPageSize()const
{
	return pageSize_;
}

long ListImagesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListImagesResult::Image> ListImagesResult::getImages()const
{
	return images_;
}

bool ListImagesResult::getSuccess()const
{
	return success_;
}

