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

#include <alibabacloud/quickbi-public/model/QueryDatasetDetailInfoRequest.h>

using AlibabaCloud::Quickbi_public::Model::QueryDatasetDetailInfoRequest;

QueryDatasetDetailInfoRequest::QueryDatasetDetailInfoRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "QueryDatasetDetailInfo") {
  setMethod(HttpRequest::Method::Post);
}

QueryDatasetDetailInfoRequest::~QueryDatasetDetailInfoRequest() {}

std::string QueryDatasetDetailInfoRequest::getAccessPoint() const {
  return accessPoint_;
}

void QueryDatasetDetailInfoRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string QueryDatasetDetailInfoRequest::getSignType() const {
  return signType_;
}

void QueryDatasetDetailInfoRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string QueryDatasetDetailInfoRequest::getDatasetId() const {
  return datasetId_;
}

void QueryDatasetDetailInfoRequest::setDatasetId(const std::string &datasetId) {
  datasetId_ = datasetId;
  setParameter(std::string("DatasetId"), datasetId);
}

