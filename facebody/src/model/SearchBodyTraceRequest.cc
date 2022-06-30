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

#include <alibabacloud/facebody/model/SearchBodyTraceRequest.h>

using AlibabaCloud::Facebody::Model::SearchBodyTraceRequest;

SearchBodyTraceRequest::SearchBodyTraceRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "SearchBodyTrace") {
  setMethod(HttpRequest::Method::Post);
}

SearchBodyTraceRequest::~SearchBodyTraceRequest() {}

float SearchBodyTraceRequest::getMinScore() const {
  return minScore_;
}

void SearchBodyTraceRequest::setMinScore(float minScore) {
  minScore_ = minScore;
  setBodyParameter(std::string("MinScore"), std::to_string(minScore));
}

bool SearchBodyTraceRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void SearchBodyTraceRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

long SearchBodyTraceRequest::getLimit() const {
  return limit_;
}

void SearchBodyTraceRequest::setLimit(long limit) {
  limit_ = limit;
  setBodyParameter(std::string("Limit"), std::to_string(limit));
}

std::string SearchBodyTraceRequest::getOssFile() const {
  return ossFile_;
}

void SearchBodyTraceRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::vector<SearchBodyTraceRequest::Images> SearchBodyTraceRequest::getImages() const {
  return images_;
}

void SearchBodyTraceRequest::setImages(const std::vector<SearchBodyTraceRequest::Images> &images) {
  images_ = images;
  for(int dep1 = 0; dep1 != images.size(); dep1++) {
    setBodyParameter(std::string("Images") + "." + std::to_string(dep1 + 1) + ".ImageURL", images[dep1].imageURL);
    setBodyParameter(std::string("Images") + "." + std::to_string(dep1 + 1) + ".ImageData", images[dep1].imageData);
  }
}

std::string SearchBodyTraceRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void SearchBodyTraceRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

long SearchBodyTraceRequest::getDbId() const {
  return dbId_;
}

void SearchBodyTraceRequest::setDbId(long dbId) {
  dbId_ = dbId;
  setBodyParameter(std::string("DbId"), std::to_string(dbId));
}

