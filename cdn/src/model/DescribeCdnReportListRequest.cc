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

#include <alibabacloud/cdn/model/DescribeCdnReportListRequest.h>

using AlibabaCloud::Cdn::Model::DescribeCdnReportListRequest;

DescribeCdnReportListRequest::DescribeCdnReportListRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeCdnReportList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCdnReportListRequest::~DescribeCdnReportListRequest() {}

long DescribeCdnReportListRequest::getReportId() const {
  return reportId_;
}

void DescribeCdnReportListRequest::setReportId(long reportId) {
  reportId_ = reportId;
  setParameter(std::string("ReportId"), std::to_string(reportId));
}

long DescribeCdnReportListRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCdnReportListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

