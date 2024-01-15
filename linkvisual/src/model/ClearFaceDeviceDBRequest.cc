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

#include <alibabacloud/linkvisual/model/ClearFaceDeviceDBRequest.h>

using AlibabaCloud::Linkvisual::Model::ClearFaceDeviceDBRequest;

ClearFaceDeviceDBRequest::ClearFaceDeviceDBRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "ClearFaceDeviceDB") {
  setMethod(HttpRequest::Method::Post);
}

ClearFaceDeviceDBRequest::~ClearFaceDeviceDBRequest() {}

std::string ClearFaceDeviceDBRequest::getIsolationId() const {
  return isolationId_;
}

void ClearFaceDeviceDBRequest::setIsolationId(const std::string &isolationId) {
  isolationId_ = isolationId;
  setParameter(std::string("IsolationId"), isolationId);
}

std::string ClearFaceDeviceDBRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void ClearFaceDeviceDBRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

std::string ClearFaceDeviceDBRequest::getProductKey() const {
  return productKey_;
}

void ClearFaceDeviceDBRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string ClearFaceDeviceDBRequest::getApiProduct() const {
  return apiProduct_;
}

void ClearFaceDeviceDBRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string ClearFaceDeviceDBRequest::getApiRevision() const {
  return apiRevision_;
}

void ClearFaceDeviceDBRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string ClearFaceDeviceDBRequest::getDeviceName() const {
  return deviceName_;
}

void ClearFaceDeviceDBRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

