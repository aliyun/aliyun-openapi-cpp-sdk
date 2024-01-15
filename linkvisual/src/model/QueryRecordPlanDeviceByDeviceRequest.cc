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

#include <alibabacloud/linkvisual/model/QueryRecordPlanDeviceByDeviceRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryRecordPlanDeviceByDeviceRequest;

QueryRecordPlanDeviceByDeviceRequest::QueryRecordPlanDeviceByDeviceRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryRecordPlanDeviceByDevice") {
  setMethod(HttpRequest::Method::Post);
}

QueryRecordPlanDeviceByDeviceRequest::~QueryRecordPlanDeviceByDeviceRequest() {}

std::string QueryRecordPlanDeviceByDeviceRequest::getIotId() const {
  return iotId_;
}

void QueryRecordPlanDeviceByDeviceRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string QueryRecordPlanDeviceByDeviceRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void QueryRecordPlanDeviceByDeviceRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

int QueryRecordPlanDeviceByDeviceRequest::getStreamType() const {
  return streamType_;
}

void QueryRecordPlanDeviceByDeviceRequest::setStreamType(int streamType) {
  streamType_ = streamType;
  setParameter(std::string("StreamType"), std::to_string(streamType));
}

std::string QueryRecordPlanDeviceByDeviceRequest::getProductKey() const {
  return productKey_;
}

void QueryRecordPlanDeviceByDeviceRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string QueryRecordPlanDeviceByDeviceRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryRecordPlanDeviceByDeviceRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryRecordPlanDeviceByDeviceRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryRecordPlanDeviceByDeviceRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string QueryRecordPlanDeviceByDeviceRequest::getDeviceName() const {
  return deviceName_;
}

void QueryRecordPlanDeviceByDeviceRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

