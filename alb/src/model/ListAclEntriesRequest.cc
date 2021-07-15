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

#include <alibabacloud/alb/model/ListAclEntriesRequest.h>

using AlibabaCloud::Alb::Model::ListAclEntriesRequest;

ListAclEntriesRequest::ListAclEntriesRequest()
    : RpcServiceRequest("alb", "2020-06-16", "ListAclEntries") {
  setMethod(HttpRequest::Method::Post);
}

ListAclEntriesRequest::~ListAclEntriesRequest() {}

std::string ListAclEntriesRequest::getNextToken() const {
  return nextToken_;
}

void ListAclEntriesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListAclEntriesRequest::getAclId() const {
  return aclId_;
}

void ListAclEntriesRequest::setAclId(const std::string &aclId) {
  aclId_ = aclId;
  setParameter(std::string("AclId"), aclId);
}

int ListAclEntriesRequest::getMaxResults() const {
  return maxResults_;
}

void ListAclEntriesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

