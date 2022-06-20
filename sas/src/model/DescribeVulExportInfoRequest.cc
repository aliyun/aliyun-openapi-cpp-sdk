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

#include <alibabacloud/sas/model/DescribeVulExportInfoRequest.h>

using AlibabaCloud::Sas::Model::DescribeVulExportInfoRequest;

DescribeVulExportInfoRequest::DescribeVulExportInfoRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeVulExportInfo") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVulExportInfoRequest::~DescribeVulExportInfoRequest() {}

std::string DescribeVulExportInfoRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeVulExportInfoRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long DescribeVulExportInfoRequest::getExportId() const {
  return exportId_;
}

void DescribeVulExportInfoRequest::setExportId(long exportId) {
  exportId_ = exportId;
  setParameter(std::string("ExportId"), std::to_string(exportId));
}

