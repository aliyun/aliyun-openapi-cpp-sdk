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

#include <alibabacloud/linkvisual/model/UpdateGbDeviceRequest.h>

using AlibabaCloud::Linkvisual::Model::UpdateGbDeviceRequest;

UpdateGbDeviceRequest::UpdateGbDeviceRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "UpdateGbDevice") {
  setMethod(HttpRequest::Method::Post);
}

UpdateGbDeviceRequest::~UpdateGbDeviceRequest() {}

std::string UpdateGbDeviceRequest::getGbId() const {
  return gbId_;
}

void UpdateGbDeviceRequest::setGbId(const std::string &gbId) {
  gbId_ = gbId;
  setParameter(std::string("GbId"), gbId);
}

std::string UpdateGbDeviceRequest::getDescription() const {
  return description_;
}

void UpdateGbDeviceRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateGbDeviceRequest::getPassword() const {
  return password_;
}

void UpdateGbDeviceRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string UpdateGbDeviceRequest::getIotId() const {
  return iotId_;
}

void UpdateGbDeviceRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string UpdateGbDeviceRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void UpdateGbDeviceRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

std::string UpdateGbDeviceRequest::getProductKey() const {
  return productKey_;
}

void UpdateGbDeviceRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string UpdateGbDeviceRequest::getApiProduct() const {
  return apiProduct_;
}

void UpdateGbDeviceRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string UpdateGbDeviceRequest::getApiRevision() const {
  return apiRevision_;
}

void UpdateGbDeviceRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string UpdateGbDeviceRequest::getDeviceName() const {
  return deviceName_;
}

void UpdateGbDeviceRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

