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

#include <alibabacloud/appstream-center/model/ListOtaTaskRequest.h>

using AlibabaCloud::Appstream_center::Model::ListOtaTaskRequest;

ListOtaTaskRequest::ListOtaTaskRequest()
    : RpcServiceRequest("appstream-center", "2021-09-01", "ListOtaTask") {
  setMethod(HttpRequest::Method::Post);
}

ListOtaTaskRequest::~ListOtaTaskRequest() {}

std::string ListOtaTaskRequest::getOtaType() const {
  return otaType_;
}

void ListOtaTaskRequest::setOtaType(const std::string &otaType) {
  otaType_ = otaType;
  setBodyParameter(std::string("OtaType"), otaType);
}

int ListOtaTaskRequest::getPageNumber() const {
  return pageNumber_;
}

void ListOtaTaskRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListOtaTaskRequest::getAppInstanceGroupId() const {
  return appInstanceGroupId_;
}

void ListOtaTaskRequest::setAppInstanceGroupId(const std::string &appInstanceGroupId) {
  appInstanceGroupId_ = appInstanceGroupId;
  setBodyParameter(std::string("AppInstanceGroupId"), appInstanceGroupId);
}

int ListOtaTaskRequest::getPageSize() const {
  return pageSize_;
}

void ListOtaTaskRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

