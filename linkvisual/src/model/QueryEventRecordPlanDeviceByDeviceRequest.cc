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

#include <alibabacloud/linkvisual/model/QueryEventRecordPlanDeviceByDeviceRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryEventRecordPlanDeviceByDeviceRequest;

QueryEventRecordPlanDeviceByDeviceRequest::QueryEventRecordPlanDeviceByDeviceRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryEventRecordPlanDeviceByDevice") {
  setMethod(HttpRequest::Method::Post);
}

QueryEventRecordPlanDeviceByDeviceRequest::~QueryEventRecordPlanDeviceByDeviceRequest() {}

std::string QueryEventRecordPlanDeviceByDeviceRequest::getIotId() const {
  return iotId_;
}

void QueryEventRecordPlanDeviceByDeviceRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string QueryEventRecordPlanDeviceByDeviceRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void QueryEventRecordPlanDeviceByDeviceRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

int QueryEventRecordPlanDeviceByDeviceRequest::getStreamType() const {
  return streamType_;
}

void QueryEventRecordPlanDeviceByDeviceRequest::setStreamType(int streamType) {
  streamType_ = streamType;
  setParameter(std::string("StreamType"), std::to_string(streamType));
}

std::string QueryEventRecordPlanDeviceByDeviceRequest::getProductKey() const {
  return productKey_;
}

void QueryEventRecordPlanDeviceByDeviceRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string QueryEventRecordPlanDeviceByDeviceRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryEventRecordPlanDeviceByDeviceRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryEventRecordPlanDeviceByDeviceRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryEventRecordPlanDeviceByDeviceRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string QueryEventRecordPlanDeviceByDeviceRequest::getDeviceName() const {
  return deviceName_;
}

void QueryEventRecordPlanDeviceByDeviceRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

