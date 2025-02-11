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

#include <alibabacloud/cloudauth/model/DeepfakeDetectRequest.h>

using AlibabaCloud::Cloudauth::Model::DeepfakeDetectRequest;

DeepfakeDetectRequest::DeepfakeDetectRequest()
    : RpcServiceRequest("cloudauth", "2019-03-07", "DeepfakeDetect") {
  setMethod(HttpRequest::Method::Post);
}

DeepfakeDetectRequest::~DeepfakeDetectRequest() {}

std::string DeepfakeDetectRequest::getFaceBase64() const {
  return faceBase64_;
}

void DeepfakeDetectRequest::setFaceBase64(const std::string &faceBase64) {
  faceBase64_ = faceBase64;
  setBodyParameter(std::string("FaceBase64"), faceBase64);
}

std::string DeepfakeDetectRequest::getOuterOrderNo() const {
  return outerOrderNo_;
}

void DeepfakeDetectRequest::setOuterOrderNo(const std::string &outerOrderNo) {
  outerOrderNo_ = outerOrderNo;
  setParameter(std::string("OuterOrderNo"), outerOrderNo);
}

std::string DeepfakeDetectRequest::getFaceUrl() const {
  return faceUrl_;
}

void DeepfakeDetectRequest::setFaceUrl(const std::string &faceUrl) {
  faceUrl_ = faceUrl;
  setParameter(std::string("FaceUrl"), faceUrl);
}

std::string DeepfakeDetectRequest::getFaceInputType() const {
  return faceInputType_;
}

void DeepfakeDetectRequest::setFaceInputType(const std::string &faceInputType) {
  faceInputType_ = faceInputType;
  setParameter(std::string("FaceInputType"), faceInputType);
}

