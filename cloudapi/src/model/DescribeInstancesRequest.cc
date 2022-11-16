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

#include <alibabacloud/cloudapi/model/DescribeInstancesRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeInstancesRequest;

DescribeInstancesRequest::DescribeInstancesRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DescribeInstances") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstancesRequest::~DescribeInstancesRequest() {}

std::string DescribeInstancesRequest::getLanguage() const {
  return language_;
}

void DescribeInstancesRequest::setLanguage(const std::string &language) {
  language_ = language;
  setParameter(std::string("Language"), language);
}

std::string DescribeInstancesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeInstancesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeInstancesRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeInstancesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeInstancesRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeInstancesRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

bool DescribeInstancesRequest::getEnableTagAuthorization() const {
  return enableTagAuthorization_;
}

void DescribeInstancesRequest::setEnableTagAuthorization(bool enableTagAuthorization) {
  enableTagAuthorization_ = enableTagAuthorization;
  setParameter(std::string("EnableTagAuthorization"), enableTagAuthorization ? "true" : "false");
}

std::vector<DescribeInstancesRequest::Tag> DescribeInstancesRequest::getTag() const {
  return tag_;
}

void DescribeInstancesRequest::setTag(const std::vector<DescribeInstancesRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

