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

#include <alibabacloud/ddosbgp/model/ModifyRemarkRequest.h>

using AlibabaCloud::Ddosbgp::Model::ModifyRemarkRequest;

ModifyRemarkRequest::ModifyRemarkRequest()
    : RpcServiceRequest("ddosbgp", "2018-07-20", "ModifyRemark") {
  setMethod(HttpRequest::Method::Post);
}

ModifyRemarkRequest::~ModifyRemarkRequest() {}

std::string ModifyRemarkRequest::getRemark() const {
  return remark_;
}

void ModifyRemarkRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string ModifyRemarkRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyRemarkRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifyRemarkRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyRemarkRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyRemarkRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyRemarkRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifyRemarkRequest::getRegionId() const {
  return regionId_;
}

void ModifyRemarkRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyRemarkRequest::getLang() const {
  return lang_;
}

void ModifyRemarkRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

