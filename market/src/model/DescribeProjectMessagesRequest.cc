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

#include <alibabacloud/market/model/DescribeProjectMessagesRequest.h>

using AlibabaCloud::Market::Model::DescribeProjectMessagesRequest;

DescribeProjectMessagesRequest::DescribeProjectMessagesRequest()
    : RpcServiceRequest("market", "2015-11-01", "DescribeProjectMessages") {
  setMethod(HttpRequest::Method::Post);
}

DescribeProjectMessagesRequest::~DescribeProjectMessagesRequest() {}

std::string DescribeProjectMessagesRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeProjectMessagesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int DescribeProjectMessagesRequest::getPageIndex() const {
  return pageIndex_;
}

void DescribeProjectMessagesRequest::setPageIndex(int pageIndex) {
  pageIndex_ = pageIndex;
  setParameter(std::string("PageIndex"), std::to_string(pageIndex));
}

