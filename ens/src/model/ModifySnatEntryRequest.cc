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

#include <alibabacloud/ens/model/ModifySnatEntryRequest.h>

using AlibabaCloud::Ens::Model::ModifySnatEntryRequest;

ModifySnatEntryRequest::ModifySnatEntryRequest()
    : RpcServiceRequest("ens", "2017-11-10", "ModifySnatEntry") {
  setMethod(HttpRequest::Method::Post);
}

ModifySnatEntryRequest::~ModifySnatEntryRequest() {}

std::string ModifySnatEntryRequest::getSnatIp() const {
  return snatIp_;
}

void ModifySnatEntryRequest::setSnatIp(const std::string &snatIp) {
  snatIp_ = snatIp;
  setParameter(std::string("SnatIp"), snatIp);
}

bool ModifySnatEntryRequest::getEipAffinity() const {
  return eipAffinity_;
}

void ModifySnatEntryRequest::setEipAffinity(bool eipAffinity) {
  eipAffinity_ = eipAffinity;
  setParameter(std::string("EipAffinity"), eipAffinity ? "true" : "false");
}

std::string ModifySnatEntryRequest::getSnatEntryId() const {
  return snatEntryId_;
}

void ModifySnatEntryRequest::setSnatEntryId(const std::string &snatEntryId) {
  snatEntryId_ = snatEntryId;
  setParameter(std::string("SnatEntryId"), snatEntryId);
}

std::string ModifySnatEntryRequest::getSnatEntryName() const {
  return snatEntryName_;
}

void ModifySnatEntryRequest::setSnatEntryName(const std::string &snatEntryName) {
  snatEntryName_ = snatEntryName;
  setParameter(std::string("SnatEntryName"), snatEntryName);
}

bool ModifySnatEntryRequest::getIspAffinity() const {
  return ispAffinity_;
}

void ModifySnatEntryRequest::setIspAffinity(bool ispAffinity) {
  ispAffinity_ = ispAffinity;
  setParameter(std::string("IspAffinity"), ispAffinity ? "true" : "false");
}

