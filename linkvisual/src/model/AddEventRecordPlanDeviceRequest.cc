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

#include <alibabacloud/linkvisual/model/AddEventRecordPlanDeviceRequest.h>

using AlibabaCloud::Linkvisual::Model::AddEventRecordPlanDeviceRequest;

AddEventRecordPlanDeviceRequest::AddEventRecordPlanDeviceRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "AddEventRecordPlanDevice") {
  setMethod(HttpRequest::Method::Post);
}

AddEventRecordPlanDeviceRequest::~AddEventRecordPlanDeviceRequest() {}

std::string AddEventRecordPlanDeviceRequest::getIotId() const {
  return iotId_;
}

void AddEventRecordPlanDeviceRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string AddEventRecordPlanDeviceRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void AddEventRecordPlanDeviceRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

int AddEventRecordPlanDeviceRequest::getStreamType() const {
  return streamType_;
}

void AddEventRecordPlanDeviceRequest::setStreamType(int streamType) {
  streamType_ = streamType;
  setParameter(std::string("StreamType"), std::to_string(streamType));
}

std::string AddEventRecordPlanDeviceRequest::getProductKey() const {
  return productKey_;
}

void AddEventRecordPlanDeviceRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string AddEventRecordPlanDeviceRequest::getApiProduct() const {
  return apiProduct_;
}

void AddEventRecordPlanDeviceRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string AddEventRecordPlanDeviceRequest::getApiRevision() const {
  return apiRevision_;
}

void AddEventRecordPlanDeviceRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string AddEventRecordPlanDeviceRequest::getDeviceName() const {
  return deviceName_;
}

void AddEventRecordPlanDeviceRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

std::string AddEventRecordPlanDeviceRequest::getPlanId() const {
  return planId_;
}

void AddEventRecordPlanDeviceRequest::setPlanId(const std::string &planId) {
  planId_ = planId;
  setParameter(std::string("PlanId"), planId);
}

