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

#include <alibabacloud/linkvisual/model/DeleteStreamPushJobRequest.h>

using AlibabaCloud::Linkvisual::Model::DeleteStreamPushJobRequest;

DeleteStreamPushJobRequest::DeleteStreamPushJobRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "DeleteStreamPushJob") {
  setMethod(HttpRequest::Method::Post);
}

DeleteStreamPushJobRequest::~DeleteStreamPushJobRequest() {}

std::string DeleteStreamPushJobRequest::getJobId() const {
  return jobId_;
}

void DeleteStreamPushJobRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string DeleteStreamPushJobRequest::getIotId() const {
  return iotId_;
}

void DeleteStreamPushJobRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string DeleteStreamPushJobRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void DeleteStreamPushJobRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

std::string DeleteStreamPushJobRequest::getProductKey() const {
  return productKey_;
}

void DeleteStreamPushJobRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string DeleteStreamPushJobRequest::getApiProduct() const {
  return apiProduct_;
}

void DeleteStreamPushJobRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string DeleteStreamPushJobRequest::getApiRevision() const {
  return apiRevision_;
}

void DeleteStreamPushJobRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string DeleteStreamPushJobRequest::getDeviceName() const {
  return deviceName_;
}

void DeleteStreamPushJobRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

