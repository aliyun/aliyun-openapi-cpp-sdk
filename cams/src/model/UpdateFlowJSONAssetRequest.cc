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

#include <alibabacloud/cams/model/UpdateFlowJSONAssetRequest.h>

using AlibabaCloud::Cams::Model::UpdateFlowJSONAssetRequest;

UpdateFlowJSONAssetRequest::UpdateFlowJSONAssetRequest()
    : RpcServiceRequest("cams", "2020-06-06", "UpdateFlowJSONAsset") {
  setMethod(HttpRequest::Method::Post);
}

UpdateFlowJSONAssetRequest::~UpdateFlowJSONAssetRequest() {}

std::string UpdateFlowJSONAssetRequest::getFilePath() const {
  return filePath_;
}

void UpdateFlowJSONAssetRequest::setFilePath(const std::string &filePath) {
  filePath_ = filePath;
  setBodyParameter(std::string("FilePath"), filePath);
}

std::string UpdateFlowJSONAssetRequest::getApiCode() const {
  return apiCode_;
}

void UpdateFlowJSONAssetRequest::setApiCode(const std::string &apiCode) {
  apiCode_ = apiCode;
  setParameter(std::string("ApiCode"), apiCode);
}

std::string UpdateFlowJSONAssetRequest::getProdCode() const {
  return prodCode_;
}

void UpdateFlowJSONAssetRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

std::string UpdateFlowJSONAssetRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void UpdateFlowJSONAssetRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setBodyParameter(std::string("CustSpaceId"), custSpaceId);
}

std::string UpdateFlowJSONAssetRequest::getFlowId() const {
  return flowId_;
}

void UpdateFlowJSONAssetRequest::setFlowId(const std::string &flowId) {
  flowId_ = flowId;
  setBodyParameter(std::string("FlowId"), flowId);
}

