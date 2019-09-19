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

#include <alibabacloud/imm/model/ListFaceSearchGroupImagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

ListFaceSearchGroupImagesResult::ListFaceSearchGroupImagesResult() :
	ServiceResult()
{}

ListFaceSearchGroupImagesResult::ListFaceSearchGroupImagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFaceSearchGroupImagesResult::~ListFaceSearchGroupImagesResult()
{}

void ListFaceSearchGroupImagesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImagesNode = value["Images"]["ImagesItem"];
	for (auto valueImagesImagesItem : allImagesNode)
	{
		ImagesItem imagesObject;
		if(!valueImagesImagesItem["User"].isNull())
			imagesObject.user = valueImagesImagesItem["User"].asString();
		if(!valueImagesImagesItem["ImageId"].isNull())
			imagesObject.imageId = valueImagesImagesItem["ImageId"].asString();
		if(!valueImagesImagesItem["ImageUri"].isNull())
			imagesObject.imageUri = valueImagesImagesItem["ImageUri"].asString();
		if(!valueImagesImagesItem["ImageMd5"].isNull())
			imagesObject.imageMd5 = valueImagesImagesItem["ImageMd5"].asString();
		if(!valueImagesImagesItem["Roll"].isNull())
			imagesObject.roll = std::stof(valueImagesImagesItem["Roll"].asString());
		if(!valueImagesImagesItem["FaceId"].isNull())
			imagesObject.faceId = valueImagesImagesItem["FaceId"].asString();
		if(!valueImagesImagesItem["Yaw"].isNull())
			imagesObject.yaw = std::stof(valueImagesImagesItem["Yaw"].asString());
		if(!valueImagesImagesItem["Quality"].isNull())
			imagesObject.quality = std::stof(valueImagesImagesItem["Quality"].asString());
		if(!valueImagesImagesItem["Glasses"].isNull())
			imagesObject.glasses = std::stoi(valueImagesImagesItem["Glasses"].asString());
		if(!valueImagesImagesItem["Hat"].isNull())
			imagesObject.hat = std::stoi(valueImagesImagesItem["Hat"].asString());
		if(!valueImagesImagesItem["Pitch"].isNull())
			imagesObject.pitch = std::stof(valueImagesImagesItem["Pitch"].asString());
		if(!valueImagesImagesItem["Age"].isNull())
			imagesObject.age = std::stoi(valueImagesImagesItem["Age"].asString());
		if(!valueImagesImagesItem["Gender"].isNull())
			imagesObject.gender = valueImagesImagesItem["Gender"].asString();
		auto allAxis = value["Axis"]["Axis"];
		for (auto value : allAxis)
			imagesObject.axis.push_back(value.asString());
		images_.push_back(imagesObject);
	}
	if(!value["NextMarker"].isNull())
		nextMarker_ = value["NextMarker"].asString();
	if(!value["GroupName"].isNull())
		groupName_ = value["GroupName"].asString();
	if(!value["GroupId"].isNull())
		groupId_ = value["GroupId"].asString();

}

std::string ListFaceSearchGroupImagesResult::getGroupName()const
{
	return groupName_;
}

std::vector<ListFaceSearchGroupImagesResult::ImagesItem> ListFaceSearchGroupImagesResult::getImages()const
{
	return images_;
}

std::string ListFaceSearchGroupImagesResult::getNextMarker()const
{
	return nextMarker_;
}

std::string ListFaceSearchGroupImagesResult::getGroupId()const
{
	return groupId_;
}

