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

#include <alibabacloud/linkvisual/model/EnableGbSubDeviceRequest.h>

using AlibabaCloud::Linkvisual::Model::EnableGbSubDeviceRequest;

EnableGbSubDeviceRequest::EnableGbSubDeviceRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "EnableGbSubDevice") {
  setMethod(HttpRequest::Method::Post);
}

EnableGbSubDeviceRequest::~EnableGbSubDeviceRequest() {}

std::string EnableGbSubDeviceRequest::getIotId() const {
  return iotId_;
}

void EnableGbSubDeviceRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string EnableGbSubDeviceRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void EnableGbSubDeviceRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

std::string EnableGbSubDeviceRequest::getProductKey() const {
  return productKey_;
}

void EnableGbSubDeviceRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string EnableGbSubDeviceRequest::getSubDeviceId() const {
  return subDeviceId_;
}

void EnableGbSubDeviceRequest::setSubDeviceId(const std::string &subDeviceId) {
  subDeviceId_ = subDeviceId;
  setParameter(std::string("SubDeviceId"), subDeviceId);
}

std::string EnableGbSubDeviceRequest::getApiProduct() const {
  return apiProduct_;
}

void EnableGbSubDeviceRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string EnableGbSubDeviceRequest::getApiRevision() const {
  return apiRevision_;
}

void EnableGbSubDeviceRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string EnableGbSubDeviceRequest::getDeviceName() const {
  return deviceName_;
}

void EnableGbSubDeviceRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

