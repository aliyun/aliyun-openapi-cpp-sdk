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

#include <alibabacloud/cloudauth/model/DescribeVerifySDKRequest.h>

using AlibabaCloud::Cloudauth::Model::DescribeVerifySDKRequest;

DescribeVerifySDKRequest::DescribeVerifySDKRequest()
    : RpcServiceRequest("cloudauth", "2019-03-07", "DescribeVerifySDK") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVerifySDKRequest::~DescribeVerifySDKRequest() {}

std::string DescribeVerifySDKRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeVerifySDKRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeVerifySDKRequest::getLang() const {
  return lang_;
}

void DescribeVerifySDKRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeVerifySDKRequest::getTaskId() const {
  return taskId_;
}

void DescribeVerifySDKRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

