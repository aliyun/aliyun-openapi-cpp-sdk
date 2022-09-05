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

#include <alibabacloud/cdn/model/DisableRealtimeLogDeliveryRequest.h>

using AlibabaCloud::Cdn::Model::DisableRealtimeLogDeliveryRequest;

DisableRealtimeLogDeliveryRequest::DisableRealtimeLogDeliveryRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DisableRealtimeLogDelivery") {
  setMethod(HttpRequest::Method::Get);
}

DisableRealtimeLogDeliveryRequest::~DisableRealtimeLogDeliveryRequest() {}

long DisableRealtimeLogDeliveryRequest::getOwnerId() const {
  return ownerId_;
}

void DisableRealtimeLogDeliveryRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DisableRealtimeLogDeliveryRequest::getDomain() const {
  return domain_;
}

void DisableRealtimeLogDeliveryRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

