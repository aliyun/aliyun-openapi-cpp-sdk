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

#include <alibabacloud/linkvisual/model/QueryStreamSnapshotJobRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryStreamSnapshotJobRequest;

QueryStreamSnapshotJobRequest::QueryStreamSnapshotJobRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryStreamSnapshotJob") {
  setMethod(HttpRequest::Method::Post);
}

QueryStreamSnapshotJobRequest::~QueryStreamSnapshotJobRequest() {}

std::string QueryStreamSnapshotJobRequest::getIotId() const {
  return iotId_;
}

void QueryStreamSnapshotJobRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string QueryStreamSnapshotJobRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void QueryStreamSnapshotJobRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

std::string QueryStreamSnapshotJobRequest::getProductKey() const {
  return productKey_;
}

void QueryStreamSnapshotJobRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string QueryStreamSnapshotJobRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryStreamSnapshotJobRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryStreamSnapshotJobRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryStreamSnapshotJobRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string QueryStreamSnapshotJobRequest::getDeviceName() const {
  return deviceName_;
}

void QueryStreamSnapshotJobRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

