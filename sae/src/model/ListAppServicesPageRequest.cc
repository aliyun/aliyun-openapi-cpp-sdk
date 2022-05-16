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

#include <alibabacloud/sae/model/ListAppServicesPageRequest.h>

using AlibabaCloud::Sae::Model::ListAppServicesPageRequest;

ListAppServicesPageRequest::ListAppServicesPageRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/service/listAppServicesPage"};
  setMethod(HttpRequest::Method::Get);
}

ListAppServicesPageRequest::~ListAppServicesPageRequest() {}

std::string ListAppServicesPageRequest::getServiceType() const {
  return serviceType_;
}

void ListAppServicesPageRequest::setServiceType(const std::string &serviceType) {
  serviceType_ = serviceType;
  setParameter(std::string("ServiceType"), serviceType);
}

std::string ListAppServicesPageRequest::getAppId() const {
  return appId_;
}

void ListAppServicesPageRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

int ListAppServicesPageRequest::getPageSize() const {
  return pageSize_;
}

void ListAppServicesPageRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int ListAppServicesPageRequest::getPageNumber() const {
  return pageNumber_;
}

void ListAppServicesPageRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

