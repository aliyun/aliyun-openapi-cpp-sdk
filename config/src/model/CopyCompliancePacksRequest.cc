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

#include <alibabacloud/config/model/CopyCompliancePacksRequest.h>

using AlibabaCloud::Config::Model::CopyCompliancePacksRequest;

CopyCompliancePacksRequest::CopyCompliancePacksRequest()
    : RpcServiceRequest("config", "2020-09-07", "CopyCompliancePacks") {
  setMethod(HttpRequest::Method::Post);
}

CopyCompliancePacksRequest::~CopyCompliancePacksRequest() {}

std::string CopyCompliancePacksRequest::getDesAggregatorIds() const {
  return desAggregatorIds_;
}

void CopyCompliancePacksRequest::setDesAggregatorIds(const std::string &desAggregatorIds) {
  desAggregatorIds_ = desAggregatorIds;
  setParameter(std::string("DesAggregatorIds"), desAggregatorIds);
}

std::string CopyCompliancePacksRequest::getSrcAggregatorId() const {
  return srcAggregatorId_;
}

void CopyCompliancePacksRequest::setSrcAggregatorId(const std::string &srcAggregatorId) {
  srcAggregatorId_ = srcAggregatorId;
  setParameter(std::string("SrcAggregatorId"), srcAggregatorId);
}

std::string CopyCompliancePacksRequest::getSrcCompliancePackIds() const {
  return srcCompliancePackIds_;
}

void CopyCompliancePacksRequest::setSrcCompliancePackIds(const std::string &srcCompliancePackIds) {
  srcCompliancePackIds_ = srcCompliancePackIds;
  setParameter(std::string("SrcCompliancePackIds"), srcCompliancePackIds);
}

