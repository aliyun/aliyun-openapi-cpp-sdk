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

#include <alibabacloud/linkvisual/model/CreateStreamSnapshotJobRequest.h>

using AlibabaCloud::Linkvisual::Model::CreateStreamSnapshotJobRequest;

CreateStreamSnapshotJobRequest::CreateStreamSnapshotJobRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "CreateStreamSnapshotJob") {
  setMethod(HttpRequest::Method::Post);
}

CreateStreamSnapshotJobRequest::~CreateStreamSnapshotJobRequest() {}

std::string CreateStreamSnapshotJobRequest::getIotId() const {
  return iotId_;
}

void CreateStreamSnapshotJobRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string CreateStreamSnapshotJobRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void CreateStreamSnapshotJobRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

int CreateStreamSnapshotJobRequest::getStreamType() const {
  return streamType_;
}

void CreateStreamSnapshotJobRequest::setStreamType(int streamType) {
  streamType_ = streamType;
  setParameter(std::string("StreamType"), std::to_string(streamType));
}

std::string CreateStreamSnapshotJobRequest::getProductKey() const {
  return productKey_;
}

void CreateStreamSnapshotJobRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

int CreateStreamSnapshotJobRequest::getSnapshotInterval() const {
  return snapshotInterval_;
}

void CreateStreamSnapshotJobRequest::setSnapshotInterval(int snapshotInterval) {
  snapshotInterval_ = snapshotInterval;
  setParameter(std::string("SnapshotInterval"), std::to_string(snapshotInterval));
}

std::string CreateStreamSnapshotJobRequest::getApiProduct() const {
  return apiProduct_;
}

void CreateStreamSnapshotJobRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string CreateStreamSnapshotJobRequest::getApiRevision() const {
  return apiRevision_;
}

void CreateStreamSnapshotJobRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string CreateStreamSnapshotJobRequest::getDeviceName() const {
  return deviceName_;
}

void CreateStreamSnapshotJobRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

