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

#include <alibabacloud/linkvisual/model/AddFaceDeviceGroupRequest.h>

using AlibabaCloud::Linkvisual::Model::AddFaceDeviceGroupRequest;

AddFaceDeviceGroupRequest::AddFaceDeviceGroupRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "AddFaceDeviceGroup") {
  setMethod(HttpRequest::Method::Post);
}

AddFaceDeviceGroupRequest::~AddFaceDeviceGroupRequest() {}

std::string AddFaceDeviceGroupRequest::getIsolationId() const {
  return isolationId_;
}

void AddFaceDeviceGroupRequest::setIsolationId(const std::string &isolationId) {
  isolationId_ = isolationId;
  setParameter(std::string("IsolationId"), isolationId);
}

std::string AddFaceDeviceGroupRequest::getApiProduct() const {
  return apiProduct_;
}

void AddFaceDeviceGroupRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string AddFaceDeviceGroupRequest::getApiRevision() const {
  return apiRevision_;
}

void AddFaceDeviceGroupRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string AddFaceDeviceGroupRequest::getDeviceGroupName() const {
  return deviceGroupName_;
}

void AddFaceDeviceGroupRequest::setDeviceGroupName(const std::string &deviceGroupName) {
  deviceGroupName_ = deviceGroupName;
  setParameter(std::string("DeviceGroupName"), deviceGroupName);
}

