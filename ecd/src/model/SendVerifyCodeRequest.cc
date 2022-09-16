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

#include <alibabacloud/ecd/model/SendVerifyCodeRequest.h>

using AlibabaCloud::Ecd::Model::SendVerifyCodeRequest;

SendVerifyCodeRequest::SendVerifyCodeRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "SendVerifyCode") {
  setMethod(HttpRequest::Method::Post);
}

SendVerifyCodeRequest::~SendVerifyCodeRequest() {}

std::string SendVerifyCodeRequest::getVerifyCodeAction() const {
  return verifyCodeAction_;
}

void SendVerifyCodeRequest::setVerifyCodeAction(const std::string &verifyCodeAction) {
  verifyCodeAction_ = verifyCodeAction;
  setParameter(std::string("VerifyCodeAction"), verifyCodeAction);
}

std::string SendVerifyCodeRequest::getExtraInfo() const {
  return extraInfo_;
}

void SendVerifyCodeRequest::setExtraInfo(const std::string &extraInfo) {
  extraInfo_ = extraInfo;
  setParameter(std::string("ExtraInfo"), extraInfo);
}

std::string SendVerifyCodeRequest::getRegionId() const {
  return regionId_;
}

void SendVerifyCodeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

