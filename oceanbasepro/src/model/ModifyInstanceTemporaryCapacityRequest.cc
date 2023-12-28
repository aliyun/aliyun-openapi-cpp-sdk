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

#include <alibabacloud/oceanbasepro/model/ModifyInstanceTemporaryCapacityRequest.h>

using AlibabaCloud::OceanBasePro::Model::ModifyInstanceTemporaryCapacityRequest;

ModifyInstanceTemporaryCapacityRequest::ModifyInstanceTemporaryCapacityRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "ModifyInstanceTemporaryCapacity") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInstanceTemporaryCapacityRequest::~ModifyInstanceTemporaryCapacityRequest() {}

std::string ModifyInstanceTemporaryCapacityRequest::getDiskSize() const {
  return diskSize_;
}

void ModifyInstanceTemporaryCapacityRequest::setDiskSize(const std::string &diskSize) {
  diskSize_ = diskSize;
  setBodyParameter(std::string("DiskSize"), diskSize);
}

std::string ModifyInstanceTemporaryCapacityRequest::getSpec() const {
  return spec_;
}

void ModifyInstanceTemporaryCapacityRequest::setSpec(const std::string &spec) {
  spec_ = spec;
  setBodyParameter(std::string("Spec"), spec);
}

std::string ModifyInstanceTemporaryCapacityRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyInstanceTemporaryCapacityRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyInstanceTemporaryCapacityRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ModifyInstanceTemporaryCapacityRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setBodyParameter(std::string("AcceptLanguage"), acceptLanguage);
}

