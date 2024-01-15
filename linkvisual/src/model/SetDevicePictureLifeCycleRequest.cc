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

#include <alibabacloud/linkvisual/model/SetDevicePictureLifeCycleRequest.h>

using AlibabaCloud::Linkvisual::Model::SetDevicePictureLifeCycleRequest;

SetDevicePictureLifeCycleRequest::SetDevicePictureLifeCycleRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "SetDevicePictureLifeCycle") {
  setMethod(HttpRequest::Method::Post);
}

SetDevicePictureLifeCycleRequest::~SetDevicePictureLifeCycleRequest() {}

std::string SetDevicePictureLifeCycleRequest::getIotId() const {
  return iotId_;
}

void SetDevicePictureLifeCycleRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string SetDevicePictureLifeCycleRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void SetDevicePictureLifeCycleRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

int SetDevicePictureLifeCycleRequest::getDay() const {
  return day_;
}

void SetDevicePictureLifeCycleRequest::setDay(int day) {
  day_ = day;
  setParameter(std::string("Day"), std::to_string(day));
}

std::string SetDevicePictureLifeCycleRequest::getProductKey() const {
  return productKey_;
}

void SetDevicePictureLifeCycleRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string SetDevicePictureLifeCycleRequest::getApiProduct() const {
  return apiProduct_;
}

void SetDevicePictureLifeCycleRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string SetDevicePictureLifeCycleRequest::getApiRevision() const {
  return apiRevision_;
}

void SetDevicePictureLifeCycleRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string SetDevicePictureLifeCycleRequest::getDeviceName() const {
  return deviceName_;
}

void SetDevicePictureLifeCycleRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

