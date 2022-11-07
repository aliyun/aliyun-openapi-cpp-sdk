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

#include <alibabacloud/cc5g/model/ListDiagnoseInfoForSingleCardRequest.h>

using AlibabaCloud::CC5G::Model::ListDiagnoseInfoForSingleCardRequest;

ListDiagnoseInfoForSingleCardRequest::ListDiagnoseInfoForSingleCardRequest()
    : RpcServiceRequest("cc5g", "2022-03-14", "ListDiagnoseInfoForSingleCard") {
  setMethod(HttpRequest::Method::Post);
}

ListDiagnoseInfoForSingleCardRequest::~ListDiagnoseInfoForSingleCardRequest() {}

std::string ListDiagnoseInfoForSingleCardRequest::getSource() const {
  return source_;
}

void ListDiagnoseInfoForSingleCardRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

std::string ListDiagnoseInfoForSingleCardRequest::getNextToken() const {
  return nextToken_;
}

void ListDiagnoseInfoForSingleCardRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListDiagnoseInfoForSingleCardRequest::getSourceType() const {
  return sourceType_;
}

void ListDiagnoseInfoForSingleCardRequest::setSourceType(const std::string &sourceType) {
  sourceType_ = sourceType;
  setParameter(std::string("SourceType"), sourceType);
}

std::string ListDiagnoseInfoForSingleCardRequest::getRegionNo() const {
  return regionNo_;
}

void ListDiagnoseInfoForSingleCardRequest::setRegionNo(const std::string &regionNo) {
  regionNo_ = regionNo;
  setParameter(std::string("RegionNo"), regionNo);
}

std::string ListDiagnoseInfoForSingleCardRequest::getWirelessCloudConnectorId() const {
  return wirelessCloudConnectorId_;
}

void ListDiagnoseInfoForSingleCardRequest::setWirelessCloudConnectorId(const std::string &wirelessCloudConnectorId) {
  wirelessCloudConnectorId_ = wirelessCloudConnectorId;
  setParameter(std::string("WirelessCloudConnectorId"), wirelessCloudConnectorId);
}

int ListDiagnoseInfoForSingleCardRequest::getMaxResults() const {
  return maxResults_;
}

void ListDiagnoseInfoForSingleCardRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListDiagnoseInfoForSingleCardRequest::getStatus() const {
  return status_;
}

void ListDiagnoseInfoForSingleCardRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

