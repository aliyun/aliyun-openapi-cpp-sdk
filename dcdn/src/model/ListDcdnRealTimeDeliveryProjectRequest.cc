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

#include <alibabacloud/dcdn/model/ListDcdnRealTimeDeliveryProjectRequest.h>

using AlibabaCloud::Dcdn::Model::ListDcdnRealTimeDeliveryProjectRequest;

ListDcdnRealTimeDeliveryProjectRequest::ListDcdnRealTimeDeliveryProjectRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "ListDcdnRealTimeDeliveryProject") {
  setMethod(HttpRequest::Method::Post);
}

ListDcdnRealTimeDeliveryProjectRequest::~ListDcdnRealTimeDeliveryProjectRequest() {}

std::string ListDcdnRealTimeDeliveryProjectRequest::getDomainName() const {
  return domainName_;
}

void ListDcdnRealTimeDeliveryProjectRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

int ListDcdnRealTimeDeliveryProjectRequest::getPageSize() const {
  return pageSize_;
}

void ListDcdnRealTimeDeliveryProjectRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int ListDcdnRealTimeDeliveryProjectRequest::getPageNumber() const {
  return pageNumber_;
}

void ListDcdnRealTimeDeliveryProjectRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListDcdnRealTimeDeliveryProjectRequest::getBusinessType() const {
  return businessType_;
}

void ListDcdnRealTimeDeliveryProjectRequest::setBusinessType(const std::string &businessType) {
  businessType_ = businessType;
  setParameter(std::string("BusinessType"), businessType);
}

