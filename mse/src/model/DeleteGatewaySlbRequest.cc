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

#include <alibabacloud/mse/model/DeleteGatewaySlbRequest.h>

using AlibabaCloud::Mse::Model::DeleteGatewaySlbRequest;

DeleteGatewaySlbRequest::DeleteGatewaySlbRequest()
    : RpcServiceRequest("mse", "2019-05-31", "DeleteGatewaySlb") {
  setMethod(HttpRequest::Method::Post);
}

DeleteGatewaySlbRequest::~DeleteGatewaySlbRequest() {}

bool DeleteGatewaySlbRequest::getDeleteSlb() const {
  return deleteSlb_;
}

void DeleteGatewaySlbRequest::setDeleteSlb(bool deleteSlb) {
  deleteSlb_ = deleteSlb;
  setParameter(std::string("DeleteSlb"), deleteSlb ? "true" : "false");
}

std::string DeleteGatewaySlbRequest::getMseSessionId() const {
  return mseSessionId_;
}

void DeleteGatewaySlbRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string DeleteGatewaySlbRequest::getSlbId() const {
  return slbId_;
}

void DeleteGatewaySlbRequest::setSlbId(const std::string &slbId) {
  slbId_ = slbId;
  setParameter(std::string("SlbId"), slbId);
}

std::string DeleteGatewaySlbRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void DeleteGatewaySlbRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

std::string DeleteGatewaySlbRequest::getId() const {
  return id_;
}

void DeleteGatewaySlbRequest::setId(const std::string &id) {
  id_ = id;
  setParameter(std::string("Id"), id);
}

std::string DeleteGatewaySlbRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void DeleteGatewaySlbRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

