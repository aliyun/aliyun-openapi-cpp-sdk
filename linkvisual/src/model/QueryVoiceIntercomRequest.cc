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

#include <alibabacloud/linkvisual/model/QueryVoiceIntercomRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryVoiceIntercomRequest;

QueryVoiceIntercomRequest::QueryVoiceIntercomRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryVoiceIntercom") {
  setMethod(HttpRequest::Method::Post);
}

QueryVoiceIntercomRequest::~QueryVoiceIntercomRequest() {}

std::string QueryVoiceIntercomRequest::getScheme() const {
  return scheme_;
}

void QueryVoiceIntercomRequest::setScheme(const std::string &scheme) {
  scheme_ = scheme;
  setParameter(std::string("Scheme"), scheme);
}

std::string QueryVoiceIntercomRequest::getIotId() const {
  return iotId_;
}

void QueryVoiceIntercomRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string QueryVoiceIntercomRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void QueryVoiceIntercomRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

std::string QueryVoiceIntercomRequest::getProductKey() const {
  return productKey_;
}

void QueryVoiceIntercomRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string QueryVoiceIntercomRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryVoiceIntercomRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryVoiceIntercomRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryVoiceIntercomRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string QueryVoiceIntercomRequest::getDeviceName() const {
  return deviceName_;
}

void QueryVoiceIntercomRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

