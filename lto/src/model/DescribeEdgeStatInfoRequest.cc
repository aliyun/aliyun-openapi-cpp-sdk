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

#include <alibabacloud/lto/model/DescribeEdgeStatInfoRequest.h>

using AlibabaCloud::Lto::Model::DescribeEdgeStatInfoRequest;

DescribeEdgeStatInfoRequest::DescribeEdgeStatInfoRequest()
    : RpcServiceRequest("lto", "2021-07-07", "DescribeEdgeStatInfo") {
  setMethod(HttpRequest::Method::Post);
}

DescribeEdgeStatInfoRequest::~DescribeEdgeStatInfoRequest() {}

std::string DescribeEdgeStatInfoRequest::getEdgeDn() const {
  return edgeDn_;
}

void DescribeEdgeStatInfoRequest::setEdgeDn(const std::string &edgeDn) {
  edgeDn_ = edgeDn;
  setParameter(std::string("EdgeDn"), edgeDn);
}

std::string DescribeEdgeStatInfoRequest::getEdgePk() const {
  return edgePk_;
}

void DescribeEdgeStatInfoRequest::setEdgePk(const std::string &edgePk) {
  edgePk_ = edgePk;
  setParameter(std::string("EdgePk"), edgePk);
}

std::string DescribeEdgeStatInfoRequest::getRegionId() const {
  return regionId_;
}

void DescribeEdgeStatInfoRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

