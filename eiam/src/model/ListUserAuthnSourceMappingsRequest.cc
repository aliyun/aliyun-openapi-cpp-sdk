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

#include <alibabacloud/eiam/model/ListUserAuthnSourceMappingsRequest.h>

using AlibabaCloud::Eiam::Model::ListUserAuthnSourceMappingsRequest;

ListUserAuthnSourceMappingsRequest::ListUserAuthnSourceMappingsRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "ListUserAuthnSourceMappings") {
  setMethod(HttpRequest::Method::Post);
}

ListUserAuthnSourceMappingsRequest::~ListUserAuthnSourceMappingsRequest() {}

std::string ListUserAuthnSourceMappingsRequest::getUserId() const {
  return userId_;
}

void ListUserAuthnSourceMappingsRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string ListUserAuthnSourceMappingsRequest::getNextToken() const {
  return nextToken_;
}

void ListUserAuthnSourceMappingsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListUserAuthnSourceMappingsRequest::getIdentityProviderId() const {
  return identityProviderId_;
}

void ListUserAuthnSourceMappingsRequest::setIdentityProviderId(const std::string &identityProviderId) {
  identityProviderId_ = identityProviderId;
  setParameter(std::string("IdentityProviderId"), identityProviderId);
}

std::string ListUserAuthnSourceMappingsRequest::getPreviousToken() const {
  return previousToken_;
}

void ListUserAuthnSourceMappingsRequest::setPreviousToken(const std::string &previousToken) {
  previousToken_ = previousToken;
  setParameter(std::string("PreviousToken"), previousToken);
}

std::string ListUserAuthnSourceMappingsRequest::getUserExternalId() const {
  return userExternalId_;
}

void ListUserAuthnSourceMappingsRequest::setUserExternalId(const std::string &userExternalId) {
  userExternalId_ = userExternalId;
  setParameter(std::string("UserExternalId"), userExternalId);
}

std::string ListUserAuthnSourceMappingsRequest::getInstanceId() const {
  return instanceId_;
}

void ListUserAuthnSourceMappingsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int ListUserAuthnSourceMappingsRequest::getMaxResults() const {
  return maxResults_;
}

void ListUserAuthnSourceMappingsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

