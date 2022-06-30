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

#include <alibabacloud/facebody/model/SearchFaceRequest.h>

using AlibabaCloud::Facebody::Model::SearchFaceRequest;

SearchFaceRequest::SearchFaceRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "SearchFace") {
  setMethod(HttpRequest::Method::Post);
}

SearchFaceRequest::~SearchFaceRequest() {}

long SearchFaceRequest::getMaxFaceNum() const {
  return maxFaceNum_;
}

void SearchFaceRequest::setMaxFaceNum(long maxFaceNum) {
  maxFaceNum_ = maxFaceNum;
  setBodyParameter(std::string("MaxFaceNum"), std::to_string(maxFaceNum));
}

bool SearchFaceRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void SearchFaceRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

float SearchFaceRequest::getQualityScoreThreshold() const {
  return qualityScoreThreshold_;
}

void SearchFaceRequest::setQualityScoreThreshold(float qualityScoreThreshold) {
  qualityScoreThreshold_ = qualityScoreThreshold;
  setBodyParameter(std::string("QualityScoreThreshold"), std::to_string(qualityScoreThreshold));
}

int SearchFaceRequest::getLimit() const {
  return limit_;
}

void SearchFaceRequest::setLimit(int limit) {
  limit_ = limit;
  setBodyParameter(std::string("Limit"), std::to_string(limit));
}

std::string SearchFaceRequest::getOssFile() const {
  return ossFile_;
}

void SearchFaceRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::string SearchFaceRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void SearchFaceRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

std::string SearchFaceRequest::getDbNames() const {
  return dbNames_;
}

void SearchFaceRequest::setDbNames(const std::string &dbNames) {
  dbNames_ = dbNames;
  setBodyParameter(std::string("DbNames"), dbNames);
}

std::string SearchFaceRequest::getDbName() const {
  return dbName_;
}

void SearchFaceRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setBodyParameter(std::string("DbName"), dbName);
}

std::string SearchFaceRequest::getImageUrl() const {
  return imageUrl_;
}

void SearchFaceRequest::setImageUrl(const std::string &imageUrl) {
  imageUrl_ = imageUrl;
  setBodyParameter(std::string("ImageUrl"), imageUrl);
}

