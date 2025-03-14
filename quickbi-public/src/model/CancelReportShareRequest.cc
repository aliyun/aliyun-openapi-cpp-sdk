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

#include <alibabacloud/quickbi-public/model/CancelReportShareRequest.h>

using AlibabaCloud::Quickbi_public::Model::CancelReportShareRequest;

CancelReportShareRequest::CancelReportShareRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "CancelReportShare") {
  setMethod(HttpRequest::Method::Post);
}

CancelReportShareRequest::~CancelReportShareRequest() {}

std::string CancelReportShareRequest::getReportId() const {
  return reportId_;
}

void CancelReportShareRequest::setReportId(const std::string &reportId) {
  reportId_ = reportId;
  setParameter(std::string("ReportId"), reportId);
}

std::string CancelReportShareRequest::getAccessPoint() const {
  return accessPoint_;
}

void CancelReportShareRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string CancelReportShareRequest::getShareToIds() const {
  return shareToIds_;
}

void CancelReportShareRequest::setShareToIds(const std::string &shareToIds) {
  shareToIds_ = shareToIds;
  setParameter(std::string("ShareToIds"), shareToIds);
}

std::string CancelReportShareRequest::getSignType() const {
  return signType_;
}

void CancelReportShareRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

int CancelReportShareRequest::getShareToType() const {
  return shareToType_;
}

void CancelReportShareRequest::setShareToType(int shareToType) {
  shareToType_ = shareToType;
  setParameter(std::string("ShareToType"), std::to_string(shareToType));
}

