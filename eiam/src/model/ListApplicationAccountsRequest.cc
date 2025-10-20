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

#include <alibabacloud/eiam/model/ListApplicationAccountsRequest.h>

using AlibabaCloud::Eiam::Model::ListApplicationAccountsRequest;

ListApplicationAccountsRequest::ListApplicationAccountsRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "ListApplicationAccounts") {
  setMethod(HttpRequest::Method::Post);
}

ListApplicationAccountsRequest::~ListApplicationAccountsRequest() {}

long ListApplicationAccountsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListApplicationAccountsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long ListApplicationAccountsRequest::getPageSize() const {
  return pageSize_;
}

void ListApplicationAccountsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListApplicationAccountsRequest::getApplicationId() const {
  return applicationId_;
}

void ListApplicationAccountsRequest::setApplicationId(const std::string &applicationId) {
  applicationId_ = applicationId;
  setParameter(std::string("ApplicationId"), applicationId);
}

std::string ListApplicationAccountsRequest::getInstanceId() const {
  return instanceId_;
}

void ListApplicationAccountsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

