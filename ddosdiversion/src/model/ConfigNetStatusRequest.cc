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

#include <alibabacloud/ddosdiversion/model/ConfigNetStatusRequest.h>

using AlibabaCloud::DdosDiversion::Model::ConfigNetStatusRequest;

ConfigNetStatusRequest::ConfigNetStatusRequest()
    : RpcServiceRequest("ddosdiversion", "2023-07-01", "ConfigNetStatus") {
  setMethod(HttpRequest::Method::Post);
}

ConfigNetStatusRequest::~ConfigNetStatusRequest() {}

std::vector<ConfigNetStatusRequest::std::string> ConfigNetStatusRequest::getRegions() const {
  return regions_;
}

void ConfigNetStatusRequest::setRegions(const std::vector<ConfigNetStatusRequest::std::string> &regions) {
  regions_ = regions;
  for(int dep1 = 0; dep1 != regions.size(); dep1++) {
    setParameter(std::string("Regions") + "." + std::to_string(dep1 + 1), regions[dep1]);
  }
}

std::vector<ConfigNetStatusRequest::std::string> ConfigNetStatusRequest::getSubNets() const {
  return subNets_;
}

void ConfigNetStatusRequest::setSubNets(const std::vector<ConfigNetStatusRequest::std::string> &subNets) {
  subNets_ = subNets;
  for(int dep1 = 0; dep1 != subNets.size(); dep1++) {
    setParameter(std::string("SubNets") + "." + std::to_string(dep1 + 1), subNets[dep1]);
  }
}

std::string ConfigNetStatusRequest::getNet() const {
  return net_;
}

void ConfigNetStatusRequest::setNet(const std::string &net) {
  net_ = net;
  setParameter(std::string("Net"), net);
}

std::string ConfigNetStatusRequest::getSaleId() const {
  return saleId_;
}

void ConfigNetStatusRequest::setSaleId(const std::string &saleId) {
  saleId_ = saleId;
  setParameter(std::string("SaleId"), saleId);
}

std::string ConfigNetStatusRequest::getStatus() const {
  return status_;
}

void ConfigNetStatusRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

