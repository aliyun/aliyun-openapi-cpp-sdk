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

#include <alibabacloud/linkvisual/model/DeleteRecordPlanDeviceRequest.h>

using AlibabaCloud::Linkvisual::Model::DeleteRecordPlanDeviceRequest;

DeleteRecordPlanDeviceRequest::DeleteRecordPlanDeviceRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "DeleteRecordPlanDevice") {
  setMethod(HttpRequest::Method::Post);
}

DeleteRecordPlanDeviceRequest::~DeleteRecordPlanDeviceRequest() {}

std::string DeleteRecordPlanDeviceRequest::getIotId() const {
  return iotId_;
}

void DeleteRecordPlanDeviceRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string DeleteRecordPlanDeviceRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void DeleteRecordPlanDeviceRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

int DeleteRecordPlanDeviceRequest::getStreamType() const {
  return streamType_;
}

void DeleteRecordPlanDeviceRequest::setStreamType(int streamType) {
  streamType_ = streamType;
  setParameter(std::string("StreamType"), std::to_string(streamType));
}

std::string DeleteRecordPlanDeviceRequest::getProductKey() const {
  return productKey_;
}

void DeleteRecordPlanDeviceRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string DeleteRecordPlanDeviceRequest::getApiProduct() const {
  return apiProduct_;
}

void DeleteRecordPlanDeviceRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string DeleteRecordPlanDeviceRequest::getApiRevision() const {
  return apiRevision_;
}

void DeleteRecordPlanDeviceRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string DeleteRecordPlanDeviceRequest::getDeviceName() const {
  return deviceName_;
}

void DeleteRecordPlanDeviceRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

