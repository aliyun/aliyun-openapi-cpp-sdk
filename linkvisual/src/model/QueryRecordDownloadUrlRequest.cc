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

#include <alibabacloud/linkvisual/model/QueryRecordDownloadUrlRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryRecordDownloadUrlRequest;

QueryRecordDownloadUrlRequest::QueryRecordDownloadUrlRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryRecordDownloadUrl") {
  setMethod(HttpRequest::Method::Post);
}

QueryRecordDownloadUrlRequest::~QueryRecordDownloadUrlRequest() {}

std::string QueryRecordDownloadUrlRequest::getIotId() const {
  return iotId_;
}

void QueryRecordDownloadUrlRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string QueryRecordDownloadUrlRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void QueryRecordDownloadUrlRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

std::string QueryRecordDownloadUrlRequest::getProductKey() const {
  return productKey_;
}

void QueryRecordDownloadUrlRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string QueryRecordDownloadUrlRequest::getFileName() const {
  return fileName_;
}

void QueryRecordDownloadUrlRequest::setFileName(const std::string &fileName) {
  fileName_ = fileName;
  setParameter(std::string("FileName"), fileName);
}

std::string QueryRecordDownloadUrlRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryRecordDownloadUrlRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryRecordDownloadUrlRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryRecordDownloadUrlRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string QueryRecordDownloadUrlRequest::getDeviceName() const {
  return deviceName_;
}

void QueryRecordDownloadUrlRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

