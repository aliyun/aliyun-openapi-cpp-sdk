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

#include <alibabacloud/alimt/model/GetImageDiagnoseRequest.h>

using AlibabaCloud::Alimt::Model::GetImageDiagnoseRequest;

GetImageDiagnoseRequest::GetImageDiagnoseRequest()
    : RpcServiceRequest("alimt", "2018-10-12", "GetImageDiagnose") {
  setMethod(HttpRequest::Method::Post);
}

GetImageDiagnoseRequest::~GetImageDiagnoseRequest() {}

std::string GetImageDiagnoseRequest::getUrl() const {
  return url_;
}

void GetImageDiagnoseRequest::setUrl(const std::string &url) {
  url_ = url;
  setBodyParameter(std::string("Url"), url);
}

std::string GetImageDiagnoseRequest::getExtra() const {
  return extra_;
}

void GetImageDiagnoseRequest::setExtra(const std::string &extra) {
  extra_ = extra;
  setBodyParameter(std::string("Extra"), extra);
}

