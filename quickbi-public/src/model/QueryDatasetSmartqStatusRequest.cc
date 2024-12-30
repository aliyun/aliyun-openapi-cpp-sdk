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

#include <alibabacloud/quickbi-public/model/QueryDatasetSmartqStatusRequest.h>

using AlibabaCloud::Quickbi_public::Model::QueryDatasetSmartqStatusRequest;

QueryDatasetSmartqStatusRequest::QueryDatasetSmartqStatusRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "QueryDatasetSmartqStatus") {
  setMethod(HttpRequest::Method::Post);
}

QueryDatasetSmartqStatusRequest::~QueryDatasetSmartqStatusRequest() {}

std::string QueryDatasetSmartqStatusRequest::getAccessPoint() const {
  return accessPoint_;
}

void QueryDatasetSmartqStatusRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string QueryDatasetSmartqStatusRequest::getSignType() const {
  return signType_;
}

void QueryDatasetSmartqStatusRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string QueryDatasetSmartqStatusRequest::getCubeId() const {
  return cubeId_;
}

void QueryDatasetSmartqStatusRequest::setCubeId(const std::string &cubeId) {
  cubeId_ = cubeId;
  setParameter(std::string("CubeId"), cubeId);
}

