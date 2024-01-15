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

#include <alibabacloud/linkvisual/model/TransferDeviceInstanceRequest.h>

using AlibabaCloud::Linkvisual::Model::TransferDeviceInstanceRequest;

TransferDeviceInstanceRequest::TransferDeviceInstanceRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "TransferDeviceInstance") {
  setMethod(HttpRequest::Method::Post);
}

TransferDeviceInstanceRequest::~TransferDeviceInstanceRequest() {}

std::vector<std::string> TransferDeviceInstanceRequest::getDeviceNameList() const {
  return deviceNameList_;
}

void TransferDeviceInstanceRequest::setDeviceNameList(const std::vector<std::string> &deviceNameList) {
  deviceNameList_ = deviceNameList;
}

std::string TransferDeviceInstanceRequest::getSourceInstanceId() const {
  return sourceInstanceId_;
}

void TransferDeviceInstanceRequest::setSourceInstanceId(const std::string &sourceInstanceId) {
  sourceInstanceId_ = sourceInstanceId;
  setParameter(std::string("SourceInstanceId"), sourceInstanceId);
}

std::string TransferDeviceInstanceRequest::getProductKey() const {
  return productKey_;
}

void TransferDeviceInstanceRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string TransferDeviceInstanceRequest::getTargetInstanceId() const {
  return targetInstanceId_;
}

void TransferDeviceInstanceRequest::setTargetInstanceId(const std::string &targetInstanceId) {
  targetInstanceId_ = targetInstanceId;
  setParameter(std::string("TargetInstanceId"), targetInstanceId);
}

std::string TransferDeviceInstanceRequest::getApiProduct() const {
  return apiProduct_;
}

void TransferDeviceInstanceRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string TransferDeviceInstanceRequest::getApiRevision() const {
  return apiRevision_;
}

void TransferDeviceInstanceRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

