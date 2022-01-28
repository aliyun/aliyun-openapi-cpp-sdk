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

#include <alibabacloud/ens/model/AssociateEipAddressRequest.h>

using AlibabaCloud::Ens::Model::AssociateEipAddressRequest;

AssociateEipAddressRequest::AssociateEipAddressRequest()
    : RpcServiceRequest("ens", "2017-11-10", "AssociateEipAddress") {
  setMethod(HttpRequest::Method::Post);
}

AssociateEipAddressRequest::~AssociateEipAddressRequest() {}

std::string AssociateEipAddressRequest::getEip() const {
  return eip_;
}

void AssociateEipAddressRequest::setEip(const std::string &eip) {
  eip_ = eip;
  setParameter(std::string("Eip"), eip);
}

std::string AssociateEipAddressRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void AssociateEipAddressRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::string AssociateEipAddressRequest::getInstanceIdInternetIp() const {
  return instanceIdInternetIp_;
}

void AssociateEipAddressRequest::setInstanceIdInternetIp(const std::string &instanceIdInternetIp) {
  instanceIdInternetIp_ = instanceIdInternetIp;
  setParameter(std::string("InstanceIdInternetIp"), instanceIdInternetIp);
}

