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

#include <alibabacloud/captcha/model/VerifyIntelligentCaptchaRequest.h>

using AlibabaCloud::Captcha::Model::VerifyIntelligentCaptchaRequest;

VerifyIntelligentCaptchaRequest::VerifyIntelligentCaptchaRequest()
    : RpcServiceRequest("captcha", "2023-03-05", "VerifyIntelligentCaptcha") {
  setMethod(HttpRequest::Method::Post);
}

VerifyIntelligentCaptchaRequest::~VerifyIntelligentCaptchaRequest() {}

std::string VerifyIntelligentCaptchaRequest::getCaptchaVerifyParam() const {
  return captchaVerifyParam_;
}

void VerifyIntelligentCaptchaRequest::setCaptchaVerifyParam(const std::string &captchaVerifyParam) {
  captchaVerifyParam_ = captchaVerifyParam;
  setBodyParameter(std::string("CaptchaVerifyParam"), captchaVerifyParam);
}

std::string VerifyIntelligentCaptchaRequest::getSceneId() const {
  return sceneId_;
}

void VerifyIntelligentCaptchaRequest::setSceneId(const std::string &sceneId) {
  sceneId_ = sceneId;
  setBodyParameter(std::string("SceneId"), sceneId);
}

