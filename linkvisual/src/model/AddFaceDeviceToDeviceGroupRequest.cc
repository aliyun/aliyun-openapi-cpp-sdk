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

#include <alibabacloud/linkvisual/model/AddFaceDeviceToDeviceGroupRequest.h>

using AlibabaCloud::Linkvisual::Model::AddFaceDeviceToDeviceGroupRequest;

AddFaceDeviceToDeviceGroupRequest::AddFaceDeviceToDeviceGroupRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "AddFaceDeviceToDeviceGroup") {
  setMethod(HttpRequest::Method::Post);
}

AddFaceDeviceToDeviceGroupRequest::~AddFaceDeviceToDeviceGroupRequest() {}

std::string AddFaceDeviceToDeviceGroupRequest::getIsolationId() const {
  return isolationId_;
}

void AddFaceDeviceToDeviceGroupRequest::setIsolationId(const std::string &isolationId) {
  isolationId_ = isolationId;
  setParameter(std::string("IsolationId"), isolationId);
}

std::string AddFaceDeviceToDeviceGroupRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void AddFaceDeviceToDeviceGroupRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

std::string AddFaceDeviceToDeviceGroupRequest::getDeviceGroupId() const {
  return deviceGroupId_;
}

void AddFaceDeviceToDeviceGroupRequest::setDeviceGroupId(const std::string &deviceGroupId) {
  deviceGroupId_ = deviceGroupId;
  setParameter(std::string("DeviceGroupId"), deviceGroupId);
}

std::string AddFaceDeviceToDeviceGroupRequest::getProductKey() const {
  return productKey_;
}

void AddFaceDeviceToDeviceGroupRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string AddFaceDeviceToDeviceGroupRequest::getApiProduct() const {
  return apiProduct_;
}

void AddFaceDeviceToDeviceGroupRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string AddFaceDeviceToDeviceGroupRequest::getApiRevision() const {
  return apiRevision_;
}

void AddFaceDeviceToDeviceGroupRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string AddFaceDeviceToDeviceGroupRequest::getDeviceName() const {
  return deviceName_;
}

void AddFaceDeviceToDeviceGroupRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

