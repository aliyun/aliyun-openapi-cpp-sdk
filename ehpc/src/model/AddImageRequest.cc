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

#include <alibabacloud/ehpc/model/AddImageRequest.h>

using AlibabaCloud::EHPC::Model::AddImageRequest;

AddImageRequest::AddImageRequest()
    : RpcServiceRequest("ehpc", "2023-07-01", "AddImage") {
  setMethod(HttpRequest::Method::Post);
}

AddImageRequest::~AddImageRequest() {}

std::string AddImageRequest::getImageType() const {
  return imageType_;
}

void AddImageRequest::setImageType(const std::string &imageType) {
  imageType_ = imageType;
  setParameter(std::string("ImageType"), imageType);
}

std::string AddImageRequest::getDescription() const {
  return description_;
}

void AddImageRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string AddImageRequest::getName() const {
  return name_;
}

void AddImageRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string AddImageRequest::getImageVersion() const {
  return imageVersion_;
}

void AddImageRequest::setImageVersion(const std::string &imageVersion) {
  imageVersion_ = imageVersion;
  setParameter(std::string("ImageVersion"), imageVersion);
}

AddImageRequest::ContainerImageSpec AddImageRequest::getContainerImageSpec() const {
  return containerImageSpec_;
}

void AddImageRequest::setContainerImageSpec(const AddImageRequest::ContainerImageSpec &containerImageSpec) {
  containerImageSpec_ = containerImageSpec;
  setParameter(std::string("ContainerImageSpec") + ".IsACREnterprise", containerImageSpec.isACREnterprise ? "true" : "false");
  setParameter(std::string("ContainerImageSpec") + ".RegistryUrl", containerImageSpec.registryUrl);
  setParameter(std::string("ContainerImageSpec") + ".RegistryCredential.Server", containerImageSpec.registryCredential.server);
  setParameter(std::string("ContainerImageSpec") + ".RegistryCredential.Password", containerImageSpec.registryCredential.password);
  setParameter(std::string("ContainerImageSpec") + ".RegistryCredential.UserName", containerImageSpec.registryCredential.userName);
  setParameter(std::string("ContainerImageSpec") + ".RegistryCriId", containerImageSpec.registryCriId);
  setParameter(std::string("ContainerImageSpec") + ".IsACRRegistry", containerImageSpec.isACRRegistry ? "true" : "false");
}

AddImageRequest::VMImageSpec AddImageRequest::getVMImageSpec() const {
  return vMImageSpec_;
}

void AddImageRequest::setVMImageSpec(const AddImageRequest::VMImageSpec &vMImageSpec) {
  vMImageSpec_ = vMImageSpec;
  setParameter(std::string("VMImageSpec") + ".ImageId", vMImageSpec.imageId);
}

