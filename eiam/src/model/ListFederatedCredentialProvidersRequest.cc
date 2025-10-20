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

#include <alibabacloud/eiam/model/ListFederatedCredentialProvidersRequest.h>

using AlibabaCloud::Eiam::Model::ListFederatedCredentialProvidersRequest;

ListFederatedCredentialProvidersRequest::ListFederatedCredentialProvidersRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "ListFederatedCredentialProviders") {
  setMethod(HttpRequest::Method::Post);
}

ListFederatedCredentialProvidersRequest::~ListFederatedCredentialProvidersRequest() {}

std::string ListFederatedCredentialProvidersRequest::getFederatedCredentialProviderName() const {
  return federatedCredentialProviderName_;
}

void ListFederatedCredentialProvidersRequest::setFederatedCredentialProviderName(const std::string &federatedCredentialProviderName) {
  federatedCredentialProviderName_ = federatedCredentialProviderName;
  setParameter(std::string("FederatedCredentialProviderName"), federatedCredentialProviderName);
}

std::string ListFederatedCredentialProvidersRequest::getNextToken() const {
  return nextToken_;
}

void ListFederatedCredentialProvidersRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListFederatedCredentialProvidersRequest::getFederatedCredentialProviderType() const {
  return federatedCredentialProviderType_;
}

void ListFederatedCredentialProvidersRequest::setFederatedCredentialProviderType(const std::string &federatedCredentialProviderType) {
  federatedCredentialProviderType_ = federatedCredentialProviderType;
  setParameter(std::string("FederatedCredentialProviderType"), federatedCredentialProviderType);
}

std::string ListFederatedCredentialProvidersRequest::getPreviousToken() const {
  return previousToken_;
}

void ListFederatedCredentialProvidersRequest::setPreviousToken(const std::string &previousToken) {
  previousToken_ = previousToken;
  setParameter(std::string("PreviousToken"), previousToken);
}

std::string ListFederatedCredentialProvidersRequest::getInstanceId() const {
  return instanceId_;
}

void ListFederatedCredentialProvidersRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int ListFederatedCredentialProvidersRequest::getMaxResults() const {
  return maxResults_;
}

void ListFederatedCredentialProvidersRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

