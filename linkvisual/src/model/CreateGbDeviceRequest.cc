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

#include <alibabacloud/linkvisual/model/CreateGbDeviceRequest.h>

using AlibabaCloud::Linkvisual::Model::CreateGbDeviceRequest;

CreateGbDeviceRequest::CreateGbDeviceRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "CreateGbDevice") {
  setMethod(HttpRequest::Method::Post);
}

CreateGbDeviceRequest::~CreateGbDeviceRequest() {}

std::string CreateGbDeviceRequest::getSubProductKey() const {
  return subProductKey_;
}

void CreateGbDeviceRequest::setSubProductKey(const std::string &subProductKey) {
  subProductKey_ = subProductKey;
  setParameter(std::string("SubProductKey"), subProductKey);
}

std::string CreateGbDeviceRequest::getGbId() const {
  return gbId_;
}

void CreateGbDeviceRequest::setGbId(const std::string &gbId) {
  gbId_ = gbId;
  setParameter(std::string("GbId"), gbId);
}

std::string CreateGbDeviceRequest::getDescription() const {
  return description_;
}

void CreateGbDeviceRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

int CreateGbDeviceRequest::getDeviceType() const {
  return deviceType_;
}

void CreateGbDeviceRequest::setDeviceType(int deviceType) {
  deviceType_ = deviceType;
  setParameter(std::string("DeviceType"), std::to_string(deviceType));
}

std::string CreateGbDeviceRequest::getPassword() const {
  return password_;
}

void CreateGbDeviceRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string CreateGbDeviceRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void CreateGbDeviceRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

int CreateGbDeviceRequest::getDeviceProtocol() const {
  return deviceProtocol_;
}

void CreateGbDeviceRequest::setDeviceProtocol(int deviceProtocol) {
  deviceProtocol_ = deviceProtocol;
  setParameter(std::string("DeviceProtocol"), std::to_string(deviceProtocol));
}

std::string CreateGbDeviceRequest::getProductKey() const {
  return productKey_;
}

void CreateGbDeviceRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string CreateGbDeviceRequest::getMediaNetProtocol() const {
  return mediaNetProtocol_;
}

void CreateGbDeviceRequest::setMediaNetProtocol(const std::string &mediaNetProtocol) {
  mediaNetProtocol_ = mediaNetProtocol;
  setParameter(std::string("MediaNetProtocol"), mediaNetProtocol);
}

std::string CreateGbDeviceRequest::getApiProduct() const {
  return apiProduct_;
}

void CreateGbDeviceRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string CreateGbDeviceRequest::getApiRevision() const {
  return apiRevision_;
}

void CreateGbDeviceRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string CreateGbDeviceRequest::getDeviceName() const {
  return deviceName_;
}

void CreateGbDeviceRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

