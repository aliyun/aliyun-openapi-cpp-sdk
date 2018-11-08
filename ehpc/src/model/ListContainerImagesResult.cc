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

#include <alibabacloud/ehpc/model/ListContainerImagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

ListContainerImagesResult::ListContainerImagesResult() :
	ServiceResult()
{}

ListContainerImagesResult::ListContainerImagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListContainerImagesResult::~ListContainerImagesResult()
{}

void ListContainerImagesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allImages = value["Images"]["ImagesItem"];
	for (auto value : allImages)
	{
		ImagesItem imagesObject;
		if(!value["System"].isNull())
			imagesObject.system = value["System"].asString();
		if(!value["Type"].isNull())
			imagesObject.type = value["Type"].asString();
		if(!value["Status"].isNull())
			imagesObject.status = value["Status"].asString();
		if(!value["ImageId"].isNull())
			imagesObject.imageId = value["ImageId"].asString();
		if(!value["UpdateDateTime"].isNull())
			imagesObject.updateDateTime = value["UpdateDateTime"].asString();
		if(!value["Repository"].isNull())
			imagesObject.repository = value["Repository"].asString();
		if(!value["Tag"].isNull())
			imagesObject.tag = value["Tag"].asString();
		images_.push_back(imagesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["DBInfo"].isNull())
		dBInfo_ = value["DBInfo"].asString();

}

int ListContainerImagesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListContainerImagesResult::getDBInfo()const
{
	return dBInfo_;
}

int ListContainerImagesResult::getPageSize()const
{
	return pageSize_;
}

int ListContainerImagesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListContainerImagesResult::ImagesItem> ListContainerImagesResult::getImages()const
{
	return images_;
}

