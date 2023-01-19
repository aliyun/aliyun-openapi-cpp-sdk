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

#include <alibabacloud/sas/model/ModifyAccessKeyLeakDealRequest.h>

using AlibabaCloud::Sas::Model::ModifyAccessKeyLeakDealRequest;

ModifyAccessKeyLeakDealRequest::ModifyAccessKeyLeakDealRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ModifyAccessKeyLeakDeal") {
  setMethod(HttpRequest::Method::Post);
}

ModifyAccessKeyLeakDealRequest::~ModifyAccessKeyLeakDealRequest() {}

std::string ModifyAccessKeyLeakDealRequest::getRemark() const {
  return remark_;
}

void ModifyAccessKeyLeakDealRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string ModifyAccessKeyLeakDealRequest::getType() const {
  return type_;
}

void ModifyAccessKeyLeakDealRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string ModifyAccessKeyLeakDealRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyAccessKeyLeakDealRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::vector<long> ModifyAccessKeyLeakDealRequest::getIdList() const {
  return idList_;
}

void ModifyAccessKeyLeakDealRequest::setIdList(const std::vector<long> &idList) {
  idList_ = idList;
}

long ModifyAccessKeyLeakDealRequest::getId() const {
  return id_;
}

void ModifyAccessKeyLeakDealRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

