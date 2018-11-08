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

#include <alibabacloud/mts/model/RegisterMediaDetailPersonResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

RegisterMediaDetailPersonResult::RegisterMediaDetailPersonResult() :
	ServiceResult()
{}

RegisterMediaDetailPersonResult::RegisterMediaDetailPersonResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RegisterMediaDetailPersonResult::~RegisterMediaDetailPersonResult()
{}

void RegisterMediaDetailPersonResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allRegisteredPersonages = value["RegisteredPersonages"]["RegisteredPersonage"];
	for (auto value : allRegisteredPersonages)
	{
		RegisteredPersonage registeredPersonagesObject;
		if(!value["PersonName"].isNull())
			registeredPersonagesObject.personName = value["PersonName"].asString();
		if(!value["FaceId"].isNull())
			registeredPersonagesObject.faceId = value["FaceId"].asString();
		if(!value["Target"].isNull())
			registeredPersonagesObject.target = value["Target"].asString();
		if(!value["Quality"].isNull())
			registeredPersonagesObject.quality = value["Quality"].asString();
		if(!value["Gender"].isNull())
			registeredPersonagesObject.gender = value["Gender"].asString();
		if(!value["ImageId"].isNull())
			registeredPersonagesObject.imageId = value["ImageId"].asString();
		auto imageFileNode = value["ImageFile"];
		if(!imageFileNode["Bucket"].isNull())
			registeredPersonagesObject.imageFile.bucket = imageFileNode["Bucket"].asString();
		if(!imageFileNode["Location"].isNull())
			registeredPersonagesObject.imageFile.location = imageFileNode["Location"].asString();
		if(!imageFileNode["Object"].isNull())
			registeredPersonagesObject.imageFile.object = imageFileNode["Object"].asString();
		registeredPersonages_.push_back(registeredPersonagesObject);
	}
	auto allFailedImages = value["FailedImages"]["FailedImage"];
	for (auto value : allFailedImages)
	{
		FailedImage failedImagesObject;
		if(!value["Code"].isNull())
			failedImagesObject.code = value["Code"].asString();
		if(!value["Success"].isNull())
			failedImagesObject.success = value["Success"].asString();
		auto imageFile1Node = value["ImageFile"];
		if(!imageFile1Node["Bucket"].isNull())
			failedImagesObject.imageFile1.bucket = imageFile1Node["Bucket"].asString();
		if(!imageFile1Node["Location"].isNull())
			failedImagesObject.imageFile1.location = imageFile1Node["Location"].asString();
		if(!imageFile1Node["Object"].isNull())
			failedImagesObject.imageFile1.object = imageFile1Node["Object"].asString();
		failedImages_.push_back(failedImagesObject);
	}

}

std::vector<RegisterMediaDetailPersonResult::RegisteredPersonage> RegisterMediaDetailPersonResult::getRegisteredPersonages()const
{
	return registeredPersonages_;
}

std::vector<RegisterMediaDetailPersonResult::FailedImage> RegisterMediaDetailPersonResult::getFailedImages()const
{
	return failedImages_;
}

