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

#include <alibabacloud/linkvisual/model/DeleteRecordRequest.h>

using AlibabaCloud::Linkvisual::Model::DeleteRecordRequest;

DeleteRecordRequest::DeleteRecordRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "DeleteRecord") {
  setMethod(HttpRequest::Method::Post);
}

DeleteRecordRequest::~DeleteRecordRequest() {}

std::string DeleteRecordRequest::getIotId() const {
  return iotId_;
}

void DeleteRecordRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string DeleteRecordRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void DeleteRecordRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

std::string DeleteRecordRequest::getProductKey() const {
  return productKey_;
}

void DeleteRecordRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::vector<std::string> DeleteRecordRequest::getFileNameList() const {
  return fileNameList_;
}

void DeleteRecordRequest::setFileNameList(const std::vector<std::string> &fileNameList) {
  fileNameList_ = fileNameList;
}

std::string DeleteRecordRequest::getApiProduct() const {
  return apiProduct_;
}

void DeleteRecordRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string DeleteRecordRequest::getApiRevision() const {
  return apiRevision_;
}

void DeleteRecordRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string DeleteRecordRequest::getDeviceName() const {
  return deviceName_;
}

void DeleteRecordRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

