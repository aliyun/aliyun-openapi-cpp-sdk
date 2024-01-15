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

#include <alibabacloud/linkvisual/model/SetDeviceRecordLifeCycleRequest.h>

using AlibabaCloud::Linkvisual::Model::SetDeviceRecordLifeCycleRequest;

SetDeviceRecordLifeCycleRequest::SetDeviceRecordLifeCycleRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "SetDeviceRecordLifeCycle") {
  setMethod(HttpRequest::Method::Post);
}

SetDeviceRecordLifeCycleRequest::~SetDeviceRecordLifeCycleRequest() {}

std::string SetDeviceRecordLifeCycleRequest::getIotId() const {
  return iotId_;
}

void SetDeviceRecordLifeCycleRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string SetDeviceRecordLifeCycleRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void SetDeviceRecordLifeCycleRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

int SetDeviceRecordLifeCycleRequest::getDay() const {
  return day_;
}

void SetDeviceRecordLifeCycleRequest::setDay(int day) {
  day_ = day;
  setParameter(std::string("Day"), std::to_string(day));
}

std::string SetDeviceRecordLifeCycleRequest::getProductKey() const {
  return productKey_;
}

void SetDeviceRecordLifeCycleRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string SetDeviceRecordLifeCycleRequest::getApiProduct() const {
  return apiProduct_;
}

void SetDeviceRecordLifeCycleRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string SetDeviceRecordLifeCycleRequest::getApiRevision() const {
  return apiRevision_;
}

void SetDeviceRecordLifeCycleRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string SetDeviceRecordLifeCycleRequest::getDeviceName() const {
  return deviceName_;
}

void SetDeviceRecordLifeCycleRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

