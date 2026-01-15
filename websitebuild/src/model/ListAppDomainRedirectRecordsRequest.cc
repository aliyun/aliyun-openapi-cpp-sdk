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

#include <alibabacloud/websitebuild/model/ListAppDomainRedirectRecordsRequest.h>

using AlibabaCloud::WebsiteBuild::Model::ListAppDomainRedirectRecordsRequest;

ListAppDomainRedirectRecordsRequest::ListAppDomainRedirectRecordsRequest()
    : RpcServiceRequest("websitebuild", "2025-04-29", "ListAppDomainRedirectRecords") {
  setMethod(HttpRequest::Method::Post);
}

ListAppDomainRedirectRecordsRequest::~ListAppDomainRedirectRecordsRequest() {}

std::string ListAppDomainRedirectRecordsRequest::getNextToken() const {
  return nextToken_;
}

void ListAppDomainRedirectRecordsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListAppDomainRedirectRecordsRequest::getBizId() const {
  return bizId_;
}

void ListAppDomainRedirectRecordsRequest::setBizId(const std::string &bizId) {
  bizId_ = bizId;
  setParameter(std::string("BizId"), bizId);
}

int ListAppDomainRedirectRecordsRequest::getMaxResults() const {
  return maxResults_;
}

void ListAppDomainRedirectRecordsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

