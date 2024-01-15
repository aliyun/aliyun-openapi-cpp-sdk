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

#include <alibabacloud/linkvisual/model/TriggerRecordRequest.h>

using AlibabaCloud::Linkvisual::Model::TriggerRecordRequest;

TriggerRecordRequest::TriggerRecordRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "TriggerRecord") {
  setMethod(HttpRequest::Method::Post);
}

TriggerRecordRequest::~TriggerRecordRequest() {}

std::string TriggerRecordRequest::getIotId() const {
  return iotId_;
}

void TriggerRecordRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

int TriggerRecordRequest::getPreRecordDuration() const {
  return preRecordDuration_;
}

void TriggerRecordRequest::setPreRecordDuration(int preRecordDuration) {
  preRecordDuration_ = preRecordDuration;
  setParameter(std::string("PreRecordDuration"), std::to_string(preRecordDuration));
}

std::string TriggerRecordRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void TriggerRecordRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

int TriggerRecordRequest::getRecordDuration() const {
  return recordDuration_;
}

void TriggerRecordRequest::setRecordDuration(int recordDuration) {
  recordDuration_ = recordDuration;
  setParameter(std::string("RecordDuration"), std::to_string(recordDuration));
}

int TriggerRecordRequest::getStreamType() const {
  return streamType_;
}

void TriggerRecordRequest::setStreamType(int streamType) {
  streamType_ = streamType;
  setParameter(std::string("StreamType"), std::to_string(streamType));
}

std::string TriggerRecordRequest::getProductKey() const {
  return productKey_;
}

void TriggerRecordRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string TriggerRecordRequest::getApiProduct() const {
  return apiProduct_;
}

void TriggerRecordRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string TriggerRecordRequest::getApiRevision() const {
  return apiRevision_;
}

void TriggerRecordRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string TriggerRecordRequest::getDeviceName() const {
  return deviceName_;
}

void TriggerRecordRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

