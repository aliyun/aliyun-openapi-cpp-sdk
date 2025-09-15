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

#include <alibabacloud/cas/model/ListPcaCaCertificateRequest.h>

using AlibabaCloud::Cas::Model::ListPcaCaCertificateRequest;

ListPcaCaCertificateRequest::ListPcaCaCertificateRequest()
    : RpcServiceRequest("cas", "2020-06-30", "ListPcaCaCertificate") {
  setMethod(HttpRequest::Method::Post);
}

ListPcaCaCertificateRequest::~ListPcaCaCertificateRequest() {}

std::string ListPcaCaCertificateRequest::getInnerAccessToken() const {
  return innerAccessToken_;
}

void ListPcaCaCertificateRequest::setInnerAccessToken(const std::string &innerAccessToken) {
  innerAccessToken_ = innerAccessToken;
  setParameter(std::string("InnerAccessToken"), innerAccessToken);
}

std::string ListPcaCaCertificateRequest::getNextToken() const {
  return nextToken_;
}

void ListPcaCaCertificateRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListPcaCaCertificateRequest::getMaxResults() const {
  return maxResults_;
}

void ListPcaCaCertificateRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

