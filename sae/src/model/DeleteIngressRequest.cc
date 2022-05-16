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

#include <alibabacloud/sae/model/DeleteIngressRequest.h>

using AlibabaCloud::Sae::Model::DeleteIngressRequest;

DeleteIngressRequest::DeleteIngressRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/ingress/Ingress"};
  setMethod(HttpRequest::Method::Delete);
}

DeleteIngressRequest::~DeleteIngressRequest() {}

long DeleteIngressRequest::getIngressId() const {
  return ingressId_;
}

void DeleteIngressRequest::setIngressId(long ingressId) {
  ingressId_ = ingressId;
  setParameter(std::string("IngressId"), std::to_string(ingressId));
}

