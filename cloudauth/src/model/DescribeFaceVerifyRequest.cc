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

#include <alibabacloud/cloudauth/model/DescribeFaceVerifyRequest.h>

using AlibabaCloud::Cloudauth::Model::DescribeFaceVerifyRequest;

DescribeFaceVerifyRequest::DescribeFaceVerifyRequest()
    : RpcServiceRequest("cloudauth", "2019-03-07", "DescribeFaceVerify") {
  setMethod(HttpRequest::Method::Post);
}

DescribeFaceVerifyRequest::~DescribeFaceVerifyRequest() {}

std::string DescribeFaceVerifyRequest::getCertifyId() const {
  return certifyId_;
}

void DescribeFaceVerifyRequest::setCertifyId(const std::string &certifyId) {
  certifyId_ = certifyId;
  setParameter(std::string("CertifyId"), certifyId);
}

std::string DescribeFaceVerifyRequest::getPictureReturnType() const {
  return pictureReturnType_;
}

void DescribeFaceVerifyRequest::setPictureReturnType(const std::string &pictureReturnType) {
  pictureReturnType_ = pictureReturnType;
  setParameter(std::string("PictureReturnType"), pictureReturnType);
}

long DescribeFaceVerifyRequest::getSceneId() const {
  return sceneId_;
}

void DescribeFaceVerifyRequest::setSceneId(long sceneId) {
  sceneId_ = sceneId;
  setParameter(std::string("SceneId"), std::to_string(sceneId));
}

