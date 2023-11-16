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

#include <alibabacloud/csas/model/ListSoftwareForUserDeviceRequest.h>

using AlibabaCloud::Csas::Model::ListSoftwareForUserDeviceRequest;

ListSoftwareForUserDeviceRequest::ListSoftwareForUserDeviceRequest()
    : RpcServiceRequest("csas", "2023-01-20", "ListSoftwareForUserDevice") {
  setMethod(HttpRequest::Method::Get);
}

ListSoftwareForUserDeviceRequest::~ListSoftwareForUserDeviceRequest() {}

std::string ListSoftwareForUserDeviceRequest::getDeviceTag() const {
  return deviceTag_;
}

void ListSoftwareForUserDeviceRequest::setDeviceTag(const std::string &deviceTag) {
  deviceTag_ = deviceTag;
  setParameter(std::string("DeviceTag"), deviceTag);
}

long ListSoftwareForUserDeviceRequest::getCurrentPage() const {
  return currentPage_;
}

void ListSoftwareForUserDeviceRequest::setCurrentPage(long currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListSoftwareForUserDeviceRequest::getSourceIp() const {
  return sourceIp_;
}

void ListSoftwareForUserDeviceRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long ListSoftwareForUserDeviceRequest::getPageSize() const {
  return pageSize_;
}

void ListSoftwareForUserDeviceRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

