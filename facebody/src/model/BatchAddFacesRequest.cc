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

BatchAddFacesRequest::BatchAddFacesRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "BatchAddFaces") {
  setMethod(HttpRequest::Method::Post);
}

BatchAddFacesRequest::~BatchAddFacesRequest() {}

std::string BatchAddFacesRequest::getEntityId() const {
  return entityId_;
}

void BatchAddFacesRequest::setEntityId(const std::string &entityId) {
  entityId_ = entityId;
  setBodyParameter(std::string("EntityId"), entityId);
}

bool BatchAddFacesRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void BatchAddFacesRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

float BatchAddFacesRequest::getQualityScoreThreshold() const {
  return qualityScoreThreshold_;
}

void BatchAddFacesRequest::setQualityScoreThreshold(float qualityScoreThreshold) {
  qualityScoreThreshold_ = qualityScoreThreshold;
  setBodyParameter(std::string("QualityScoreThreshold"), std::to_string(qualityScoreThreshold));
}

float BatchAddFacesRequest::getSimilarityScoreThresholdBetweenEntity() const {
  return similarityScoreThresholdBetweenEntity_;
}

void BatchAddFacesRequest::setSimilarityScoreThresholdBetweenEntity(float similarityScoreThresholdBetweenEntity) {
  similarityScoreThresholdBetweenEntity_ = similarityScoreThresholdBetweenEntity;
  setBodyParameter(std::string("SimilarityScoreThresholdBetweenEntity"), std::to_string(similarityScoreThresholdBetweenEntity));
}

std::string BatchAddFacesRequest::getOssFile() const {
  return ossFile_;
}

void BatchAddFacesRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

float BatchAddFacesRequest::getSimilarityScoreThresholdInEntity() const {
  return similarityScoreThresholdInEntity_;
}

void BatchAddFacesRequest::setSimilarityScoreThresholdInEntity(float similarityScoreThresholdInEntity) {
  similarityScoreThresholdInEntity_ = similarityScoreThresholdInEntity;
  setBodyParameter(std::string("SimilarityScoreThresholdInEntity"), std::to_string(similarityScoreThresholdInEntity));
}

std::string BatchAddFacesRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void BatchAddFacesRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

std::string BatchAddFacesRequest::getDbName() const {
  return dbName_;
}

void BatchAddFacesRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setBodyParameter(std::string("DbName"), dbName);
}

std::vector<BatchAddFacesRequest::Faces> BatchAddFacesRequest::getFaces() const {
  return faces_;
}

void BatchAddFacesRequest::setFaces(const std::vector<BatchAddFacesRequest::Faces> &faces) {
  faces_ = faces;
  for(int dep1 = 0; dep1 != faces.size(); dep1++) {
    setBodyParameter(std::string("Faces") + "." + std::to_string(dep1 + 1) + ".ExtraData", faces[dep1].extraData);
    setBodyParameter(std::string("Faces") + "." + std::to_string(dep1 + 1) + ".ImageURL", faces[dep1].imageURL);
  }
}

