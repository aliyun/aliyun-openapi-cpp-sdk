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

#include <alibabacloud/ens/model/AllocateEipAddressRequest.h>

using AlibabaCloud::Ens::Model::AllocateEipAddressRequest;

AllocateEipAddressRequest::AllocateEipAddressRequest()
    : RpcServiceRequest("ens", "2017-11-10", "AllocateEipAddress") {
  setMethod(HttpRequest::Method::Post);
}

AllocateEipAddressRequest::~AllocateEipAddressRequest() {}

int AllocateEipAddressRequest::getMinCount() const {
  return minCount_;
}

void AllocateEipAddressRequest::setMinCount(int minCount) {
  minCount_ = minCount;
  setParameter(std::string("MinCount"), std::to_string(minCount));
}

std::string AllocateEipAddressRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void AllocateEipAddressRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

int AllocateEipAddressRequest::getCount() const {
  return count_;
}

void AllocateEipAddressRequest::setCount(int count) {
  count_ = count;
  setParameter(std::string("Count"), std::to_string(count));
}

