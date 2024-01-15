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

#include <alibabacloud/linkvisual/model/DeleteFaceDeviceGroupRequest.h>

using AlibabaCloud::Linkvisual::Model::DeleteFaceDeviceGroupRequest;

DeleteFaceDeviceGroupRequest::DeleteFaceDeviceGroupRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "DeleteFaceDeviceGroup") {
  setMethod(HttpRequest::Method::Post);
}

DeleteFaceDeviceGroupRequest::~DeleteFaceDeviceGroupRequest() {}

std::string DeleteFaceDeviceGroupRequest::getIsolationId() const {
  return isolationId_;
}

void DeleteFaceDeviceGroupRequest::setIsolationId(const std::string &isolationId) {
  isolationId_ = isolationId;
  setParameter(std::string("IsolationId"), isolationId);
}

std::string DeleteFaceDeviceGroupRequest::getDeviceGroupId() const {
  return deviceGroupId_;
}

void DeleteFaceDeviceGroupRequest::setDeviceGroupId(const std::string &deviceGroupId) {
  deviceGroupId_ = deviceGroupId;
  setParameter(std::string("DeviceGroupId"), deviceGroupId);
}

std::string DeleteFaceDeviceGroupRequest::getApiProduct() const {
  return apiProduct_;
}

void DeleteFaceDeviceGroupRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string DeleteFaceDeviceGroupRequest::getApiRevision() const {
  return apiRevision_;
}

void DeleteFaceDeviceGroupRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

