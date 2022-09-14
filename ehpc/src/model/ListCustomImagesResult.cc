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

#include <alibabacloud/ehpc/model/ListCustomImagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

ListCustomImagesResult::ListCustomImagesResult() :
	ServiceResult()
{}

ListCustomImagesResult::ListCustomImagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCustomImagesResult::~ListCustomImagesResult()
{}

void ListCustomImagesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImagesNode = value["Images"]["ImageInfo"];
	for (auto valueImagesImageInfo : allImagesNode)
	{
		ImageInfo imagesObject;
		if(!valueImagesImageInfo["ImageName"].isNull())
			imagesObject.imageName = valueImagesImageInfo["ImageName"].asString();
		if(!valueImagesImageInfo["ImageOwnerAlias"].isNull())
			imagesObject.imageOwnerAlias = valueImagesImageInfo["ImageOwnerAlias"].asString();
		if(!valueImagesImageInfo["Description"].isNull())
			imagesObject.description = valueImagesImageInfo["Description"].asString();
		if(!valueImagesImageInfo["ImageId"].isNull())
			imagesObject.imageId = valueImagesImageInfo["ImageId"].asString();
		auto baseOsTagNode = value["BaseOsTag"];
		if(!baseOsTagNode["Platform"].isNull())
			imagesObject.baseOsTag.platform = baseOsTagNode["Platform"].asString();
		if(!baseOsTagNode["OsTag"].isNull())
			imagesObject.baseOsTag.osTag = baseOsTagNode["OsTag"].asString();
		if(!baseOsTagNode["Version"].isNull())
			imagesObject.baseOsTag.version = baseOsTagNode["Version"].asString();
		if(!baseOsTagNode["Architecture"].isNull())
			imagesObject.baseOsTag.architecture = baseOsTagNode["Architecture"].asString();
		images_.push_back(imagesObject);
	}

}

std::vector<ListCustomImagesResult::ImageInfo> ListCustomImagesResult::getImages()const
{
	return images_;
}

