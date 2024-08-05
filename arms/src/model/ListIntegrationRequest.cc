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

#include <alibabacloud/arms/model/ListIntegrationRequest.h>

using AlibabaCloud::ARMS::Model::ListIntegrationRequest;

ListIntegrationRequest::ListIntegrationRequest()
    : RpcServiceRequest("arms", "2019-08-08", "ListIntegration") {
  setMethod(HttpRequest::Method::Get);
}

ListIntegrationRequest::~ListIntegrationRequest() {}

bool ListIntegrationRequest::getIsDetail() const {
  return isDetail_;
}

void ListIntegrationRequest::setIsDetail(bool isDetail) {
  isDetail_ = isDetail;
  setParameter(std::string("IsDetail"), isDetail ? "true" : "false");
}

long ListIntegrationRequest::getSize() const {
  return size_;
}

void ListIntegrationRequest::setSize(long size) {
  size_ = size;
  setParameter(std::string("Size"), std::to_string(size));
}

std::string ListIntegrationRequest::getIntegrationName() const {
  return integrationName_;
}

void ListIntegrationRequest::setIntegrationName(const std::string &integrationName) {
  integrationName_ = integrationName;
  setParameter(std::string("IntegrationName"), integrationName);
}

long ListIntegrationRequest::getPage() const {
  return page_;
}

void ListIntegrationRequest::setPage(long page) {
  page_ = page;
  setParameter(std::string("Page"), std::to_string(page));
}

std::string ListIntegrationRequest::getIntegrationProductType() const {
  return integrationProductType_;
}

void ListIntegrationRequest::setIntegrationProductType(const std::string &integrationProductType) {
  integrationProductType_ = integrationProductType;
  setParameter(std::string("IntegrationProductType"), integrationProductType);
}

