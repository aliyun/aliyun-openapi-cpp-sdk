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

#include <alibabacloud/vpc/model/CreateVpconnFromVbrRequest.h>

using AlibabaCloud::Vpc::Model::CreateVpconnFromVbrRequest;

CreateVpconnFromVbrRequest::CreateVpconnFromVbrRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateVpconnFromVbr") {
  setMethod(HttpRequest::Method::Post);
}

CreateVpconnFromVbrRequest::~CreateVpconnFromVbrRequest() {}

bool CreateVpconnFromVbrRequest::getDryRun() const {
  return dryRun_;
}

void CreateVpconnFromVbrRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateVpconnFromVbrRequest::getOrderMode() const {
  return orderMode_;
}

void CreateVpconnFromVbrRequest::setOrderMode(const std::string &orderMode) {
  orderMode_ = orderMode;
  setParameter(std::string("OrderMode"), orderMode);
}

std::string CreateVpconnFromVbrRequest::getVbrId() const {
  return vbrId_;
}

void CreateVpconnFromVbrRequest::setVbrId(const std::string &vbrId) {
  vbrId_ = vbrId;
  setParameter(std::string("VbrId"), vbrId);
}

std::string CreateVpconnFromVbrRequest::getToken() const {
  return token_;
}

void CreateVpconnFromVbrRequest::setToken(const std::string &token) {
  token_ = token;
  setParameter(std::string("Token"), token);
}

std::string CreateVpconnFromVbrRequest::getRegionId() const {
  return regionId_;
}

void CreateVpconnFromVbrRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

