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

#include <alibabacloud/linkvisual/model/QueryGbSubDeviceListRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryGbSubDeviceListRequest;

QueryGbSubDeviceListRequest::QueryGbSubDeviceListRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryGbSubDeviceList") {
  setMethod(HttpRequest::Method::Post);
}

QueryGbSubDeviceListRequest::~QueryGbSubDeviceListRequest() {}

std::string QueryGbSubDeviceListRequest::getIotId() const {
  return iotId_;
}

void QueryGbSubDeviceListRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string QueryGbSubDeviceListRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void QueryGbSubDeviceListRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

int QueryGbSubDeviceListRequest::getPageSize() const {
  return pageSize_;
}

void QueryGbSubDeviceListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string QueryGbSubDeviceListRequest::getProductKey() const {
  return productKey_;
}

void QueryGbSubDeviceListRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string QueryGbSubDeviceListRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryGbSubDeviceListRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryGbSubDeviceListRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryGbSubDeviceListRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string QueryGbSubDeviceListRequest::getDeviceName() const {
  return deviceName_;
}

void QueryGbSubDeviceListRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

int QueryGbSubDeviceListRequest::getPageStart() const {
  return pageStart_;
}

void QueryGbSubDeviceListRequest::setPageStart(int pageStart) {
  pageStart_ = pageStart;
  setParameter(std::string("PageStart"), std::to_string(pageStart));
}

