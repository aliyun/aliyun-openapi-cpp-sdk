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

#include <alibabacloud/linkvisual/model/QueryDeviceEventRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryDeviceEventRequest;

QueryDeviceEventRequest::QueryDeviceEventRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryDeviceEvent") {
  setMethod(HttpRequest::Method::Post);
}

QueryDeviceEventRequest::~QueryDeviceEventRequest() {}

std::string QueryDeviceEventRequest::getIotId() const {
  return iotId_;
}

void QueryDeviceEventRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string QueryDeviceEventRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void QueryDeviceEventRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

int QueryDeviceEventRequest::getPageSize() const {
  return pageSize_;
}

void QueryDeviceEventRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long QueryDeviceEventRequest::getEndTime() const {
  return endTime_;
}

void QueryDeviceEventRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long QueryDeviceEventRequest::getBeginTime() const {
  return beginTime_;
}

void QueryDeviceEventRequest::setBeginTime(long beginTime) {
  beginTime_ = beginTime;
  setParameter(std::string("BeginTime"), std::to_string(beginTime));
}

int QueryDeviceEventRequest::getCurrentPage() const {
  return currentPage_;
}

void QueryDeviceEventRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string QueryDeviceEventRequest::getProductKey() const {
  return productKey_;
}

void QueryDeviceEventRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string QueryDeviceEventRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryDeviceEventRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryDeviceEventRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryDeviceEventRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string QueryDeviceEventRequest::getDeviceName() const {
  return deviceName_;
}

void QueryDeviceEventRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

int QueryDeviceEventRequest::getEventType() const {
  return eventType_;
}

void QueryDeviceEventRequest::setEventType(int eventType) {
  eventType_ = eventType;
  setParameter(std::string("EventType"), std::to_string(eventType));
}

