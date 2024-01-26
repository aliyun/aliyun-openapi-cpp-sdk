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

#include <alibabacloud/captcha/model/VerifyCaptchaRequest.h>

using AlibabaCloud::Captcha::Model::VerifyCaptchaRequest;

VerifyCaptchaRequest::VerifyCaptchaRequest()
    : RpcServiceRequest("captcha", "2023-03-05", "VerifyCaptcha") {
  setMethod(HttpRequest::Method::Post);
}

VerifyCaptchaRequest::~VerifyCaptchaRequest() {}

std::string VerifyCaptchaRequest::getCaptchaVerifyParam() const {
  return captchaVerifyParam_;
}

void VerifyCaptchaRequest::setCaptchaVerifyParam(const std::string &captchaVerifyParam) {
  captchaVerifyParam_ = captchaVerifyParam;
  setParameter(std::string("CaptchaVerifyParam"), captchaVerifyParam);
}

