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

#include <alibabacloud/linkvisual/model/CheckFaceUserDoExistOnDeviceRequest.h>

using AlibabaCloud::Linkvisual::Model::CheckFaceUserDoExistOnDeviceRequest;

CheckFaceUserDoExistOnDeviceRequest::CheckFaceUserDoExistOnDeviceRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "CheckFaceUserDoExistOnDevice") {
  setMethod(HttpRequest::Method::Post);
}

CheckFaceUserDoExistOnDeviceRequest::~CheckFaceUserDoExistOnDeviceRequest() {}

std::string CheckFaceUserDoExistOnDeviceRequest::getIsolationId() const {
  return isolationId_;
}

void CheckFaceUserDoExistOnDeviceRequest::setIsolationId(const std::string &isolationId) {
  isolationId_ = isolationId;
  setParameter(std::string("IsolationId"), isolationId);
}

std::string CheckFaceUserDoExistOnDeviceRequest::getUserId() const {
  return userId_;
}

void CheckFaceUserDoExistOnDeviceRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string CheckFaceUserDoExistOnDeviceRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void CheckFaceUserDoExistOnDeviceRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

std::string CheckFaceUserDoExistOnDeviceRequest::getProductKey() const {
  return productKey_;
}

void CheckFaceUserDoExistOnDeviceRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string CheckFaceUserDoExistOnDeviceRequest::getApiProduct() const {
  return apiProduct_;
}

void CheckFaceUserDoExistOnDeviceRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string CheckFaceUserDoExistOnDeviceRequest::getApiRevision() const {
  return apiRevision_;
}

void CheckFaceUserDoExistOnDeviceRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string CheckFaceUserDoExistOnDeviceRequest::getDeviceName() const {
  return deviceName_;
}

void CheckFaceUserDoExistOnDeviceRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

