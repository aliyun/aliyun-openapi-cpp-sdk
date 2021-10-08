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

#include <alibabacloud/facebody/model/BatchAddFacesRequest.h>

using AlibabaCloud::Facebody::Model::BatchAddFacesRequest;

BatchAddFacesRequest::BatchAddFacesRequest() :
	RpcServiceRequest("facebody", "2019-12-30", "BatchAddFaces")
{
	setMethod(HttpRequest::Method::Post);
}

BatchAddFacesRequest::~BatchAddFacesRequest()
{}

std::string BatchAddFacesRequest::getEntityId()const
{
	return entityId_;
}

void BatchAddFacesRequest::setEntityId(const std::string& entityId)
{
	entityId_ = entityId;
	setBodyParameter("EntityId", entityId);
}

float BatchAddFacesRequest::getQualityScoreThreshold()const
{
	return qualityScoreThreshold_;
}

void BatchAddFacesRequest::setQualityScoreThreshold(float qualityScoreThreshold)
{
	qualityScoreThreshold_ = qualityScoreThreshold;
	setBodyParameter("QualityScoreThreshold", std::to_string(qualityScoreThreshold));
}

float BatchAddFacesRequest::getSimilarityScoreThresholdBetweenEntity()const
{
	return similarityScoreThresholdBetweenEntity_;
}

void BatchAddFacesRequest::setSimilarityScoreThresholdBetweenEntity(float similarityScoreThresholdBetweenEntity)
{
	similarityScoreThresholdBetweenEntity_ = similarityScoreThresholdBetweenEntity;
	setBodyParameter("SimilarityScoreThresholdBetweenEntity", std::to_string(similarityScoreThresholdBetweenEntity));
}

float BatchAddFacesRequest::getSimilarityScoreThresholdInEntity()const
{
	return similarityScoreThresholdInEntity_;
}

void BatchAddFacesRequest::setSimilarityScoreThresholdInEntity(float similarityScoreThresholdInEntity)
{
	similarityScoreThresholdInEntity_ = similarityScoreThresholdInEntity;
	setBodyParameter("SimilarityScoreThresholdInEntity", std::to_string(similarityScoreThresholdInEntity));
}

std::string BatchAddFacesRequest::getDbName()const
{
	return dbName_;
}

void BatchAddFacesRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setBodyParameter("DbName", dbName);
}

Array BatchAddFacesRequest::getFaces()const
{
	return faces_;
}

void BatchAddFacesRequest::setFaces(const Array& faces)
{
	faces_ = faces;
	setBodyParameter("Faces", std::to_string(faces));
}

