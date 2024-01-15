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

#include <alibabacloud/linkvisual/model/DetectUserFaceByUrlRequest.h>

using AlibabaCloud::Linkvisual::Model::DetectUserFaceByUrlRequest;

DetectUserFaceByUrlRequest::DetectUserFaceByUrlRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "DetectUserFaceByUrl") {
  setMethod(HttpRequest::Method::Post);
}

DetectUserFaceByUrlRequest::~DetectUserFaceByUrlRequest() {}

std::string DetectUserFaceByUrlRequest::getFacePicUrl() const {
  return facePicUrl_;
}

void DetectUserFaceByUrlRequest::setFacePicUrl(const std::string &facePicUrl) {
  facePicUrl_ = facePicUrl;
  setParameter(std::string("FacePicUrl"), facePicUrl);
}

std::string DetectUserFaceByUrlRequest::getApiProduct() const {
  return apiProduct_;
}

void DetectUserFaceByUrlRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string DetectUserFaceByUrlRequest::getApiRevision() const {
  return apiRevision_;
}

void DetectUserFaceByUrlRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

