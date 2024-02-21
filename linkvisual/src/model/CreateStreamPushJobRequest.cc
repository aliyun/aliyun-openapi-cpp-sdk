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

#include <alibabacloud/linkvisual/model/CreateStreamPushJobRequest.h>

using AlibabaCloud::Linkvisual::Model::CreateStreamPushJobRequest;

CreateStreamPushJobRequest::CreateStreamPushJobRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "CreateStreamPushJob") {
  setMethod(HttpRequest::Method::Post);
}

CreateStreamPushJobRequest::~CreateStreamPushJobRequest() {}

std::string CreateStreamPushJobRequest::getIotId() const {
  return iotId_;
}

void CreateStreamPushJobRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string CreateStreamPushJobRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void CreateStreamPushJobRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

int CreateStreamPushJobRequest::getStreamType() const {
  return streamType_;
}

void CreateStreamPushJobRequest::setStreamType(int streamType) {
  streamType_ = streamType;
  setParameter(std::string("StreamType"), std::to_string(streamType));
}

std::string CreateStreamPushJobRequest::getProductKey() const {
  return productKey_;
}

void CreateStreamPushJobRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

int CreateStreamPushJobRequest::getJobType() const {
  return jobType_;
}

void CreateStreamPushJobRequest::setJobType(int jobType) {
  jobType_ = jobType;
  setParameter(std::string("JobType"), std::to_string(jobType));
}

std::string CreateStreamPushJobRequest::getPushUrl() const {
  return pushUrl_;
}

void CreateStreamPushJobRequest::setPushUrl(const std::string &pushUrl) {
  pushUrl_ = pushUrl;
  setParameter(std::string("PushUrl"), pushUrl);
}

std::string CreateStreamPushJobRequest::getApiProduct() const {
  return apiProduct_;
}

void CreateStreamPushJobRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string CreateStreamPushJobRequest::getApiRevision() const {
  return apiRevision_;
}

void CreateStreamPushJobRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string CreateStreamPushJobRequest::getDeviceName() const {
  return deviceName_;
}

void CreateStreamPushJobRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

