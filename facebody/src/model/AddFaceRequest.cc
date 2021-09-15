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

#include <alibabacloud/facebody/model/AddFaceRequest.h>

using AlibabaCloud::Facebody::Model::AddFaceRequest;

AddFaceRequest::AddFaceRequest() :
	RpcServiceRequest("facebody", "2019-12-30", "AddFace")
{
	setMethod(HttpRequest::Method::Post);
}

AddFaceRequest::~AddFaceRequest()
{}

std::string AddFaceRequest::getEntityId()const
{
	return entityId_;
}

void AddFaceRequest::setEntityId(const std::string& entityId)
{
	entityId_ = entityId;
	setBodyParameter("EntityId", entityId);
}

float AddFaceRequest::getQualityScoreThreshold()const
{
	return qualityScoreThreshold_;
}

void AddFaceRequest::setQualityScoreThreshold(float qualityScoreThreshold)
{
	qualityScoreThreshold_ = qualityScoreThreshold;
	setBodyParameter("QualityScoreThreshold", std::to_string(qualityScoreThreshold));
}

float AddFaceRequest::getSimilarityScoreThresholdBetweenEntity()const
{
	return similarityScoreThresholdBetweenEntity_;
}

void AddFaceRequest::setSimilarityScoreThresholdBetweenEntity(float similarityScoreThresholdBetweenEntity)
{
	similarityScoreThresholdBetweenEntity_ = similarityScoreThresholdBetweenEntity;
	setBodyParameter("SimilarityScoreThresholdBetweenEntity", std::to_string(similarityScoreThresholdBetweenEntity));
}

std::string AddFaceRequest::getExtraData()const
{
	return extraData_;
}

void AddFaceRequest::setExtraData(const std::string& extraData)
{
	extraData_ = extraData;
	setBodyParameter("ExtraData", extraData);
}

float AddFaceRequest::getSimilarityScoreThresholdInEntity()const
{
	return similarityScoreThresholdInEntity_;
}

void AddFaceRequest::setSimilarityScoreThresholdInEntity(float similarityScoreThresholdInEntity)
{
	similarityScoreThresholdInEntity_ = similarityScoreThresholdInEntity;
	setBodyParameter("SimilarityScoreThresholdInEntity", std::to_string(similarityScoreThresholdInEntity));
}

std::string AddFaceRequest::getDbName()const
{
	return dbName_;
}

void AddFaceRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setBodyParameter("DbName", dbName);
}

std::string AddFaceRequest::getImageUrl()const
{
	return imageUrl_;
}

void AddFaceRequest::setImageUrl(const std::string& imageUrl)
{
	imageUrl_ = imageUrl;
	setBodyParameter("ImageUrl", imageUrl);
}

