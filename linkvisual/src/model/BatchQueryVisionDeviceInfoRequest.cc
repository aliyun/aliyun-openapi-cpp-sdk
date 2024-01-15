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

#include <alibabacloud/linkvisual/model/BatchQueryVisionDeviceInfoRequest.h>

using AlibabaCloud::Linkvisual::Model::BatchQueryVisionDeviceInfoRequest;

BatchQueryVisionDeviceInfoRequest::BatchQueryVisionDeviceInfoRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "BatchQueryVisionDeviceInfo") {
  setMethod(HttpRequest::Method::Post);
}

BatchQueryVisionDeviceInfoRequest::~BatchQueryVisionDeviceInfoRequest() {}

std::vector<std::string> BatchQueryVisionDeviceInfoRequest::getDeviceNameList() const {
  return deviceNameList_;
}

void BatchQueryVisionDeviceInfoRequest::setDeviceNameList(const std::vector<std::string> &deviceNameList) {
  deviceNameList_ = deviceNameList;
}

std::string BatchQueryVisionDeviceInfoRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void BatchQueryVisionDeviceInfoRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

std::vector<std::string> BatchQueryVisionDeviceInfoRequest::getIotIdList() const {
  return iotIdList_;
}

void BatchQueryVisionDeviceInfoRequest::setIotIdList(const std::vector<std::string> &iotIdList) {
  iotIdList_ = iotIdList;
}

std::string BatchQueryVisionDeviceInfoRequest::getProductKey() const {
  return productKey_;
}

void BatchQueryVisionDeviceInfoRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string BatchQueryVisionDeviceInfoRequest::getApiProduct() const {
  return apiProduct_;
}

void BatchQueryVisionDeviceInfoRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string BatchQueryVisionDeviceInfoRequest::getApiRevision() const {
  return apiRevision_;
}

void BatchQueryVisionDeviceInfoRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

