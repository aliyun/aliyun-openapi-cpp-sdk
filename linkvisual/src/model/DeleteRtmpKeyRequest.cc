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

#include <alibabacloud/linkvisual/model/DeleteRtmpKeyRequest.h>

using AlibabaCloud::Linkvisual::Model::DeleteRtmpKeyRequest;

DeleteRtmpKeyRequest::DeleteRtmpKeyRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "DeleteRtmpKey") {
  setMethod(HttpRequest::Method::Post);
}

DeleteRtmpKeyRequest::~DeleteRtmpKeyRequest() {}

int DeleteRtmpKeyRequest::getType() const {
  return type_;
}

void DeleteRtmpKeyRequest::setType(int type) {
  type_ = type;
  setParameter(std::string("Type"), std::to_string(type));
}

std::string DeleteRtmpKeyRequest::getIotId() const {
  return iotId_;
}

void DeleteRtmpKeyRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string DeleteRtmpKeyRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void DeleteRtmpKeyRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

std::string DeleteRtmpKeyRequest::getProductKey() const {
  return productKey_;
}

void DeleteRtmpKeyRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string DeleteRtmpKeyRequest::getApiProduct() const {
  return apiProduct_;
}

void DeleteRtmpKeyRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string DeleteRtmpKeyRequest::getApiRevision() const {
  return apiRevision_;
}

void DeleteRtmpKeyRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string DeleteRtmpKeyRequest::getDeviceName() const {
  return deviceName_;
}

void DeleteRtmpKeyRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

