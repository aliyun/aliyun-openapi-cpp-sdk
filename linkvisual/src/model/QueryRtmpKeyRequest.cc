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

#include <alibabacloud/linkvisual/model/QueryRtmpKeyRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryRtmpKeyRequest;

QueryRtmpKeyRequest::QueryRtmpKeyRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryRtmpKey") {
  setMethod(HttpRequest::Method::Post);
}

QueryRtmpKeyRequest::~QueryRtmpKeyRequest() {}

std::string QueryRtmpKeyRequest::getIotId() const {
  return iotId_;
}

void QueryRtmpKeyRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string QueryRtmpKeyRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void QueryRtmpKeyRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

std::string QueryRtmpKeyRequest::getProductKey() const {
  return productKey_;
}

void QueryRtmpKeyRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string QueryRtmpKeyRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryRtmpKeyRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryRtmpKeyRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryRtmpKeyRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string QueryRtmpKeyRequest::getDeviceName() const {
  return deviceName_;
}

void QueryRtmpKeyRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

