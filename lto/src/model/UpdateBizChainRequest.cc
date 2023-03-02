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

#include <alibabacloud/lto/model/UpdateBizChainRequest.h>

using AlibabaCloud::Lto::Model::UpdateBizChainRequest;

UpdateBizChainRequest::UpdateBizChainRequest()
    : RpcServiceRequest("lto", "2021-07-07", "UpdateBizChain") {
  setMethod(HttpRequest::Method::Post);
}

UpdateBizChainRequest::~UpdateBizChainRequest() {}

std::string UpdateBizChainRequest::getRemark() const {
  return remark_;
}

void UpdateBizChainRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string UpdateBizChainRequest::getBizChainId() const {
  return bizChainId_;
}

void UpdateBizChainRequest::setBizChainId(const std::string &bizChainId) {
  bizChainId_ = bizChainId;
  setParameter(std::string("BizChainId"), bizChainId);
}

std::string UpdateBizChainRequest::getRegionId() const {
  return regionId_;
}

void UpdateBizChainRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateBizChainRequest::getName() const {
  return name_;
}

void UpdateBizChainRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

