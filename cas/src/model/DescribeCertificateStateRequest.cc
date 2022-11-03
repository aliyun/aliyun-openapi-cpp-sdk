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

#include <alibabacloud/cas/model/DescribeCertificateStateRequest.h>

using AlibabaCloud::Cas::Model::DescribeCertificateStateRequest;

DescribeCertificateStateRequest::DescribeCertificateStateRequest()
    : RpcServiceRequest("cas", "2020-04-07", "DescribeCertificateState") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCertificateStateRequest::~DescribeCertificateStateRequest() {}

std::string DescribeCertificateStateRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeCertificateStateRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long DescribeCertificateStateRequest::getOrderId() const {
  return orderId_;
}

void DescribeCertificateStateRequest::setOrderId(long orderId) {
  orderId_ = orderId;
  setParameter(std::string("OrderId"), std::to_string(orderId));
}

