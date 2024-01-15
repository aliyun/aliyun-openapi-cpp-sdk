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

#include <alibabacloud/linkvisual/model/StopTriggeredRecordRequest.h>

using AlibabaCloud::Linkvisual::Model::StopTriggeredRecordRequest;

StopTriggeredRecordRequest::StopTriggeredRecordRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "StopTriggeredRecord") {
  setMethod(HttpRequest::Method::Post);
}

StopTriggeredRecordRequest::~StopTriggeredRecordRequest() {}

std::string StopTriggeredRecordRequest::getIotId() const {
  return iotId_;
}

void StopTriggeredRecordRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string StopTriggeredRecordRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void StopTriggeredRecordRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

std::string StopTriggeredRecordRequest::getProductKey() const {
  return productKey_;
}

void StopTriggeredRecordRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string StopTriggeredRecordRequest::getRecordId() const {
  return recordId_;
}

void StopTriggeredRecordRequest::setRecordId(const std::string &recordId) {
  recordId_ = recordId;
  setParameter(std::string("RecordId"), recordId);
}

std::string StopTriggeredRecordRequest::getApiProduct() const {
  return apiProduct_;
}

void StopTriggeredRecordRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string StopTriggeredRecordRequest::getApiRevision() const {
  return apiRevision_;
}

void StopTriggeredRecordRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string StopTriggeredRecordRequest::getDeviceName() const {
  return deviceName_;
}

void StopTriggeredRecordRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

