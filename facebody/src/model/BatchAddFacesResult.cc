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

#include <alibabacloud/facebody/model/BatchAddFacesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Facebody;
using namespace AlibabaCloud::Facebody::Model;

BatchAddFacesResult::BatchAddFacesResult() :
	ServiceResult()
{}

BatchAddFacesResult::BatchAddFacesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BatchAddFacesResult::~BatchAddFacesResult()
{}

void BatchAddFacesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allInsertedFacesNode = dataNode["InsertedFaces"]["insertedFacesItem"];
	for (auto dataNodeInsertedFacesinsertedFacesItem : allInsertedFacesNode)
	{
		Data::InsertedFacesItem insertedFacesItemObject;
		if(!dataNodeInsertedFacesinsertedFacesItem["ImageURL"].isNull())
			insertedFacesItemObject.imageURL = dataNodeInsertedFacesinsertedFacesItem["ImageURL"].asString();
		if(!dataNodeInsertedFacesinsertedFacesItem["FaceId"].isNull())
			insertedFacesItemObject.faceId = dataNodeInsertedFacesinsertedFacesItem["FaceId"].asString();
		if(!dataNodeInsertedFacesinsertedFacesItem["QualitieScore"].isNull())
			insertedFacesItemObject.qualitieScore = std::stof(dataNodeInsertedFacesinsertedFacesItem["QualitieScore"].asString());
		data_.insertedFaces.push_back(insertedFacesItemObject);
	}
	auto allFailedFacesNode = dataNode["FailedFaces"]["failedFacesItem"];
	for (auto dataNodeFailedFacesfailedFacesItem : allFailedFacesNode)
	{
		Data::FailedFacesItem failedFacesItemObject;
		if(!dataNodeFailedFacesfailedFacesItem["ImageURL"].isNull())
			failedFacesItemObject.imageURL = dataNodeFailedFacesfailedFacesItem["ImageURL"].asString();
		if(!dataNodeFailedFacesfailedFacesItem["Code"].isNull())
			failedFacesItemObject.code = dataNodeFailedFacesfailedFacesItem["Code"].asString();
		if(!dataNodeFailedFacesfailedFacesItem["Message"].isNull())
			failedFacesItemObject.message = dataNodeFailedFacesfailedFacesItem["Message"].asString();
		data_.failedFaces.push_back(failedFacesItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string BatchAddFacesResult::getMessage()const
{
	return message_;
}

BatchAddFacesResult::Data BatchAddFacesResult::getData()const
{
	return data_;
}

std::string BatchAddFacesResult::getCode()const
{
	return code_;
}

