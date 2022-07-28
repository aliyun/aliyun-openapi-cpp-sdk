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

#include <alibabacloud/dbs/model/DescribeNodeCidrListRequest.h>

using AlibabaCloud::Dbs::Model::DescribeNodeCidrListRequest;

DescribeNodeCidrListRequest::DescribeNodeCidrListRequest()
    : RpcServiceRequest("dbs", "2019-03-06", "DescribeNodeCidrList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeNodeCidrListRequest::~DescribeNodeCidrListRequest() {}

std::string DescribeNodeCidrListRequest::getClientToken() const {
  return clientToken_;
}

void DescribeNodeCidrListRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeNodeCidrListRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeNodeCidrListRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string DescribeNodeCidrListRequest::getRegion() const {
  return region_;
}

void DescribeNodeCidrListRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

