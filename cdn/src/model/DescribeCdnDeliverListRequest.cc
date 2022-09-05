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

#include <alibabacloud/cdn/model/DescribeCdnDeliverListRequest.h>

using AlibabaCloud::Cdn::Model::DescribeCdnDeliverListRequest;

DescribeCdnDeliverListRequest::DescribeCdnDeliverListRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeCdnDeliverList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCdnDeliverListRequest::~DescribeCdnDeliverListRequest() {}

long DescribeCdnDeliverListRequest::getDeliverId() const {
  return deliverId_;
}

void DescribeCdnDeliverListRequest::setDeliverId(long deliverId) {
  deliverId_ = deliverId;
  setParameter(std::string("DeliverId"), std::to_string(deliverId));
}

long DescribeCdnDeliverListRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCdnDeliverListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

