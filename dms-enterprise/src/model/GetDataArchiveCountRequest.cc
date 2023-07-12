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

#include <alibabacloud/dms-enterprise/model/GetDataArchiveCountRequest.h>

using AlibabaCloud::Dms_enterprise::Model::GetDataArchiveCountRequest;

GetDataArchiveCountRequest::GetDataArchiveCountRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "GetDataArchiveCount") {
  setMethod(HttpRequest::Method::Post);
}

GetDataArchiveCountRequest::~GetDataArchiveCountRequest() {}

std::string GetDataArchiveCountRequest::getSearchDateType() const {
  return searchDateType_;
}

void GetDataArchiveCountRequest::setSearchDateType(const std::string &searchDateType) {
  searchDateType_ = searchDateType;
  setParameter(std::string("SearchDateType"), searchDateType);
}

long GetDataArchiveCountRequest::getTid() const {
  return tid_;
}

void GetDataArchiveCountRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string GetDataArchiveCountRequest::getPluginType() const {
  return pluginType_;
}

void GetDataArchiveCountRequest::setPluginType(const std::string &pluginType) {
  pluginType_ = pluginType;
  setParameter(std::string("PluginType"), pluginType);
}

std::string GetDataArchiveCountRequest::getOrderResultType() const {
  return orderResultType_;
}

void GetDataArchiveCountRequest::setOrderResultType(const std::string &orderResultType) {
  orderResultType_ = orderResultType;
  setParameter(std::string("OrderResultType"), orderResultType);
}

