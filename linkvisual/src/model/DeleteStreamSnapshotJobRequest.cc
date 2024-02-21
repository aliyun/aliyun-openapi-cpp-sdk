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

#include <alibabacloud/linkvisual/model/DeleteStreamSnapshotJobRequest.h>

using AlibabaCloud::Linkvisual::Model::DeleteStreamSnapshotJobRequest;

DeleteStreamSnapshotJobRequest::DeleteStreamSnapshotJobRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "DeleteStreamSnapshotJob") {
  setMethod(HttpRequest::Method::Post);
}

DeleteStreamSnapshotJobRequest::~DeleteStreamSnapshotJobRequest() {}

std::string DeleteStreamSnapshotJobRequest::getIotId() const {
  return iotId_;
}

void DeleteStreamSnapshotJobRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string DeleteStreamSnapshotJobRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void DeleteStreamSnapshotJobRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

int DeleteStreamSnapshotJobRequest::getStreamType() const {
  return streamType_;
}

void DeleteStreamSnapshotJobRequest::setStreamType(int streamType) {
  streamType_ = streamType;
  setParameter(std::string("StreamType"), std::to_string(streamType));
}

std::string DeleteStreamSnapshotJobRequest::getProductKey() const {
  return productKey_;
}

void DeleteStreamSnapshotJobRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string DeleteStreamSnapshotJobRequest::getApiProduct() const {
  return apiProduct_;
}

void DeleteStreamSnapshotJobRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string DeleteStreamSnapshotJobRequest::getApiRevision() const {
  return apiRevision_;
}

void DeleteStreamSnapshotJobRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string DeleteStreamSnapshotJobRequest::getDeviceName() const {
  return deviceName_;
}

void DeleteStreamSnapshotJobRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

