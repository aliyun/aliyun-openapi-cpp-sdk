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

#include <alibabacloud/linkvisual/model/RemoveFaceDeviceFromDeviceGroupRequest.h>

using AlibabaCloud::Linkvisual::Model::RemoveFaceDeviceFromDeviceGroupRequest;

RemoveFaceDeviceFromDeviceGroupRequest::RemoveFaceDeviceFromDeviceGroupRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "RemoveFaceDeviceFromDeviceGroup") {
  setMethod(HttpRequest::Method::Post);
}

RemoveFaceDeviceFromDeviceGroupRequest::~RemoveFaceDeviceFromDeviceGroupRequest() {}

std::string RemoveFaceDeviceFromDeviceGroupRequest::getIsolationId() const {
  return isolationId_;
}

void RemoveFaceDeviceFromDeviceGroupRequest::setIsolationId(const std::string &isolationId) {
  isolationId_ = isolationId;
  setParameter(std::string("IsolationId"), isolationId);
}

std::string RemoveFaceDeviceFromDeviceGroupRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void RemoveFaceDeviceFromDeviceGroupRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

std::string RemoveFaceDeviceFromDeviceGroupRequest::getDeviceGroupId() const {
  return deviceGroupId_;
}

void RemoveFaceDeviceFromDeviceGroupRequest::setDeviceGroupId(const std::string &deviceGroupId) {
  deviceGroupId_ = deviceGroupId;
  setParameter(std::string("DeviceGroupId"), deviceGroupId);
}

std::string RemoveFaceDeviceFromDeviceGroupRequest::getProductKey() const {
  return productKey_;
}

void RemoveFaceDeviceFromDeviceGroupRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string RemoveFaceDeviceFromDeviceGroupRequest::getApiProduct() const {
  return apiProduct_;
}

void RemoveFaceDeviceFromDeviceGroupRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string RemoveFaceDeviceFromDeviceGroupRequest::getApiRevision() const {
  return apiRevision_;
}

void RemoveFaceDeviceFromDeviceGroupRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string RemoveFaceDeviceFromDeviceGroupRequest::getDeviceName() const {
  return deviceName_;
}

void RemoveFaceDeviceFromDeviceGroupRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

