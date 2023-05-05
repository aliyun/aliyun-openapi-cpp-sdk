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

#include <alibabacloud/ecd/model/DescribeCdsFileShareLinksRequest.h>

using AlibabaCloud::Ecd::Model::DescribeCdsFileShareLinksRequest;

DescribeCdsFileShareLinksRequest::DescribeCdsFileShareLinksRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DescribeCdsFileShareLinks") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCdsFileShareLinksRequest::~DescribeCdsFileShareLinksRequest() {}

std::vector<std::string> DescribeCdsFileShareLinksRequest::getCreators() const {
  return creators_;
}

void DescribeCdsFileShareLinksRequest::setCreators(const std::vector<std::string> &creators) {
  creators_ = creators;
}

std::string DescribeCdsFileShareLinksRequest::getShareId() const {
  return shareId_;
}

void DescribeCdsFileShareLinksRequest::setShareId(const std::string &shareId) {
  shareId_ = shareId;
  setParameter(std::string("ShareId"), shareId);
}

std::string DescribeCdsFileShareLinksRequest::getCdsId() const {
  return cdsId_;
}

void DescribeCdsFileShareLinksRequest::setCdsId(const std::string &cdsId) {
  cdsId_ = cdsId;
  setParameter(std::string("CdsId"), cdsId);
}

std::string DescribeCdsFileShareLinksRequest::getShareName() const {
  return shareName_;
}

void DescribeCdsFileShareLinksRequest::setShareName(const std::string &shareName) {
  shareName_ = shareName;
  setParameter(std::string("ShareName"), shareName);
}

std::string DescribeCdsFileShareLinksRequest::getNextToken() const {
  return nextToken_;
}

void DescribeCdsFileShareLinksRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int DescribeCdsFileShareLinksRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeCdsFileShareLinksRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string DescribeCdsFileShareLinksRequest::getStatus() const {
  return status_;
}

void DescribeCdsFileShareLinksRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

