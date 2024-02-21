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

#include <alibabacloud/linkvisual/model/QueryStreamPushJobRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryStreamPushJobRequest;

QueryStreamPushJobRequest::QueryStreamPushJobRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryStreamPushJob") {
  setMethod(HttpRequest::Method::Post);
}

QueryStreamPushJobRequest::~QueryStreamPushJobRequest() {}

std::string QueryStreamPushJobRequest::getJobId() const {
  return jobId_;
}

void QueryStreamPushJobRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string QueryStreamPushJobRequest::getIotId() const {
  return iotId_;
}

void QueryStreamPushJobRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string QueryStreamPushJobRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void QueryStreamPushJobRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

std::string QueryStreamPushJobRequest::getProductKey() const {
  return productKey_;
}

void QueryStreamPushJobRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string QueryStreamPushJobRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryStreamPushJobRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryStreamPushJobRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryStreamPushJobRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string QueryStreamPushJobRequest::getDeviceName() const {
  return deviceName_;
}

void QueryStreamPushJobRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

