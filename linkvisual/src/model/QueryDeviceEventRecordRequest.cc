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

#include <alibabacloud/linkvisual/model/QueryDeviceEventRecordRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryDeviceEventRecordRequest;

QueryDeviceEventRecordRequest::QueryDeviceEventRecordRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryDeviceEventRecord") {
  setMethod(HttpRequest::Method::Post);
}

QueryDeviceEventRecordRequest::~QueryDeviceEventRecordRequest() {}

std::string QueryDeviceEventRecordRequest::getEventId() const {
  return eventId_;
}

void QueryDeviceEventRecordRequest::setEventId(const std::string &eventId) {
  eventId_ = eventId;
  setParameter(std::string("EventId"), eventId);
}

std::string QueryDeviceEventRecordRequest::getIotId() const {
  return iotId_;
}

void QueryDeviceEventRecordRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string QueryDeviceEventRecordRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void QueryDeviceEventRecordRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

std::string QueryDeviceEventRecordRequest::getProductKey() const {
  return productKey_;
}

void QueryDeviceEventRecordRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string QueryDeviceEventRecordRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryDeviceEventRecordRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryDeviceEventRecordRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryDeviceEventRecordRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string QueryDeviceEventRecordRequest::getDeviceName() const {
  return deviceName_;
}

void QueryDeviceEventRecordRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

