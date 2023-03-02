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

#include <alibabacloud/lto/model/AddBsnFabricBizChainRequest.h>

using AlibabaCloud::Lto::Model::AddBsnFabricBizChainRequest;

AddBsnFabricBizChainRequest::AddBsnFabricBizChainRequest()
    : RpcServiceRequest("lto", "2021-07-07", "AddBsnFabricBizChain") {
  setMethod(HttpRequest::Method::Post);
}

AddBsnFabricBizChainRequest::~AddBsnFabricBizChainRequest() {}

std::string AddBsnFabricBizChainRequest::getRemark() const {
  return remark_;
}

void AddBsnFabricBizChainRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string AddBsnFabricBizChainRequest::getRegionId() const {
  return regionId_;
}

void AddBsnFabricBizChainRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AddBsnFabricBizChainRequest::getName() const {
  return name_;
}

void AddBsnFabricBizChainRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string AddBsnFabricBizChainRequest::getAppCode() const {
  return appCode_;
}

void AddBsnFabricBizChainRequest::setAppCode(const std::string &appCode) {
  appCode_ = appCode;
  setParameter(std::string("AppCode"), appCode);
}

std::string AddBsnFabricBizChainRequest::getNodeList() const {
  return nodeList_;
}

void AddBsnFabricBizChainRequest::setNodeList(const std::string &nodeList) {
  nodeList_ = nodeList;
  setParameter(std::string("NodeList"), nodeList);
}

std::string AddBsnFabricBizChainRequest::getUserCode() const {
  return userCode_;
}

void AddBsnFabricBizChainRequest::setUserCode(const std::string &userCode) {
  userCode_ = userCode;
  setParameter(std::string("UserCode"), userCode);
}

