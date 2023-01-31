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

#include <alibabacloud/vpc/model/AttachVbrToVpconnRequest.h>

using AlibabaCloud::Vpc::Model::AttachVbrToVpconnRequest;

AttachVbrToVpconnRequest::AttachVbrToVpconnRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "AttachVbrToVpconn") {
  setMethod(HttpRequest::Method::Post);
}

AttachVbrToVpconnRequest::~AttachVbrToVpconnRequest() {}

bool AttachVbrToVpconnRequest::getDryRun() const {
  return dryRun_;
}

void AttachVbrToVpconnRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string AttachVbrToVpconnRequest::getVpconnId() const {
  return vpconnId_;
}

void AttachVbrToVpconnRequest::setVpconnId(const std::string &vpconnId) {
  vpconnId_ = vpconnId;
  setParameter(std::string("VpconnId"), vpconnId);
}

std::string AttachVbrToVpconnRequest::getVbrId() const {
  return vbrId_;
}

void AttachVbrToVpconnRequest::setVbrId(const std::string &vbrId) {
  vbrId_ = vbrId;
  setParameter(std::string("VbrId"), vbrId);
}

std::string AttachVbrToVpconnRequest::getToken() const {
  return token_;
}

void AttachVbrToVpconnRequest::setToken(const std::string &token) {
  token_ = token;
  setParameter(std::string("Token"), token);
}

std::string AttachVbrToVpconnRequest::getRegionId() const {
  return regionId_;
}

void AttachVbrToVpconnRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

