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

#include <alibabacloud/quickbi-public/model/QueryDatasetInfoRequest.h>

using AlibabaCloud::Quickbi_public::Model::QueryDatasetInfoRequest;

QueryDatasetInfoRequest::QueryDatasetInfoRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "QueryDatasetInfo") {
  setMethod(HttpRequest::Method::Post);
}

QueryDatasetInfoRequest::~QueryDatasetInfoRequest() {}

std::string QueryDatasetInfoRequest::getAccessPoint() const {
  return accessPoint_;
}

void QueryDatasetInfoRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string QueryDatasetInfoRequest::getSignType() const {
  return signType_;
}

void QueryDatasetInfoRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string QueryDatasetInfoRequest::getDatasetId() const {
  return datasetId_;
}

void QueryDatasetInfoRequest::setDatasetId(const std::string &datasetId) {
  datasetId_ = datasetId;
  setParameter(std::string("DatasetId"), datasetId);
}

