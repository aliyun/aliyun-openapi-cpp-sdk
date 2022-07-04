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

#include <alibabacloud/quickbi-public/model/QueryShareListRequest.h>

using AlibabaCloud::Quickbi_public::Model::QueryShareListRequest;

QueryShareListRequest::QueryShareListRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "QueryShareList") {
  setMethod(HttpRequest::Method::Post);
}

QueryShareListRequest::~QueryShareListRequest() {}

std::string QueryShareListRequest::getReportId() const {
  return reportId_;
}

void QueryShareListRequest::setReportId(const std::string &reportId) {
  reportId_ = reportId;
  setParameter(std::string("ReportId"), reportId);
}

std::string QueryShareListRequest::getAccessPoint() const {
  return accessPoint_;
}

void QueryShareListRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string QueryShareListRequest::getSignType() const {
  return signType_;
}

void QueryShareListRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

