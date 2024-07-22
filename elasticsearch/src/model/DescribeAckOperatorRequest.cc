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

#include <alibabacloud/elasticsearch/model/DescribeAckOperatorRequest.h>

using AlibabaCloud::Elasticsearch::Model::DescribeAckOperatorRequest;

DescribeAckOperatorRequest::DescribeAckOperatorRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/ack-clusters/[ClusterId]/operator"};
  setMethod(HttpRequest::Method::Get);
}

DescribeAckOperatorRequest::~DescribeAckOperatorRequest() {}

std::string DescribeAckOperatorRequest::getClusterId() const {
  return clusterId_;
}

void DescribeAckOperatorRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

