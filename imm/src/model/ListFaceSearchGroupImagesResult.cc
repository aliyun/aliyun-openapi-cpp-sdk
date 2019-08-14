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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allImages = value["Images"]["ImagesItem"];
	for (auto value : allImages)
	{
		ImagesItem imagesObject;
		if(!value["User"].isNull())
			imagesObject.user = value["User"].asString();
		if(!value["ImageId"].isNull())
			imagesObject.imageId = value["ImageId"].asString();
		if(!value["ImageUri"].isNull())
			imagesObject.imageUri = value["ImageUri"].asString();
		if(!value["ImageMd5"].isNull())
			imagesObject.imageMd5 = value["ImageMd5"].asString();
		if(!value["Roll"].isNull())
			imagesObject.roll = std::stof(value["Roll"].asString());
		if(!value["FaceId"].isNull())
			imagesObject.faceId = value["FaceId"].asString();
		if(!value["Yaw"].isNull())
			imagesObject.yaw = std::stof(value["Yaw"].asString());
		if(!value["Quality"].isNull())
			imagesObject.quality = std::stof(value["Quality"].asString());
		if(!value["Glasses"].isNull())
			imagesObject.glasses = std::stoi(value["Glasses"].asString());
		if(!value["Hat"].isNull())
			imagesObject.hat = std::stoi(value["Hat"].asString());
		if(!value["Pitch"].isNull())
			imagesObject.pitch = std::stof(value["Pitch"].asString());
		if(!value["Age"].isNull())
			imagesObject.age = std::stoi(value["Age"].asString());
		if(!value["Gender"].isNull())
			imagesObject.gender = value["Gender"].asString();
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

