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

#include <alibabacloud/imm/model/GetFaceSearchImageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

GetFaceSearchImageResult::GetFaceSearchImageResult() :
	ServiceResult()
{}

GetFaceSearchImageResult::GetFaceSearchImageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetFaceSearchImageResult::~GetFaceSearchImageResult()
{}

void GetFaceSearchImageResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allAxis = value["Axis"]["Axis"];
	for (const auto &item : allAxis)
		axis_.push_back(item.asString());
	if(!value["GroupName"].isNull())
		groupName_ = value["GroupName"].asString();
	if(!value["GroupId"].isNull())
		groupId_ = value["GroupId"].asString();
	if(!value["Gender"].isNull())
		gender_ = value["Gender"].asString();
	if(!value["Age"].isNull())
		age_ = std::stoi(value["Age"].asString());
	if(!value["Pitch"].isNull())
		pitch_ = std::stof(value["Pitch"].asString());
	if(!value["ImageUri"].isNull())
		imageUri_ = value["ImageUri"].asString();
	if(!value["ImageMd5"].isNull())
		imageMd5_ = value["ImageMd5"].asString();
	if(!value["Roll"].isNull())
		roll_ = std::stof(value["Roll"].asString());
	if(!value["FaceId"].isNull())
		faceId_ = value["FaceId"].asString();
	if(!value["Yaw"].isNull())
		yaw_ = std::stof(value["Yaw"].asString());
	if(!value["Quality"].isNull())
		quality_ = std::stof(value["Quality"].asString());
	if(!value["Hat"].isNull())
		hat_ = std::stoi(value["Hat"].asString());
	if(!value["Glasses"].isNull())
		glasses_ = std::stoi(value["Glasses"].asString());
	if(!value["ImageId"].isNull())
		imageId_ = value["ImageId"].asString();
	if(!value["User"].isNull())
		user_ = value["User"].asString();

}

std::string GetFaceSearchImageResult::getGroupName()const
{
	return groupName_;
}

std::string GetFaceSearchImageResult::getFaceId()const
{
	return faceId_;
}

std::string GetFaceSearchImageResult::getUser()const
{
	return user_;
}

std::string GetFaceSearchImageResult::getGender()const
{
	return gender_;
}

std::string GetFaceSearchImageResult::getImageUri()const
{
	return imageUri_;
}

float GetFaceSearchImageResult::getYaw()const
{
	return yaw_;
}

std::string GetFaceSearchImageResult::getGroupId()const
{
	return groupId_;
}

float GetFaceSearchImageResult::getQuality()const
{
	return quality_;
}

float GetFaceSearchImageResult::getPitch()const
{
	return pitch_;
}

int GetFaceSearchImageResult::getGlasses()const
{
	return glasses_;
}

std::string GetFaceSearchImageResult::getImageId()const
{
	return imageId_;
}

int GetFaceSearchImageResult::getHat()const
{
	return hat_;
}

float GetFaceSearchImageResult::getRoll()const
{
	return roll_;
}

std::vector<std::string> GetFaceSearchImageResult::getAxis()const
{
	return axis_;
}

int GetFaceSearchImageResult::getAge()const
{
	return age_;
}

std::string GetFaceSearchImageResult::getImageMd5()const
{
	return imageMd5_;
}

