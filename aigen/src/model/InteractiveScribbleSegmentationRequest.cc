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

#include <alibabacloud/aigen/model/InteractiveScribbleSegmentationRequest.h>

using AlibabaCloud::Aigen::Model::InteractiveScribbleSegmentationRequest;

InteractiveScribbleSegmentationRequest::InteractiveScribbleSegmentationRequest()
    : RpcServiceRequest("aigen", "2024-01-11", "InteractiveScribbleSegmentation") {
  setMethod(HttpRequest::Method::Post);
}

InteractiveScribbleSegmentationRequest::~InteractiveScribbleSegmentationRequest() {}

std::string InteractiveScribbleSegmentationRequest::getPosScribbleImageUrl() const {
  return posScribbleImageUrl_;
}

void InteractiveScribbleSegmentationRequest::setPosScribbleImageUrl(const std::string &posScribbleImageUrl) {
  posScribbleImageUrl_ = posScribbleImageUrl;
  setBodyParameter(std::string("PosScribbleImageUrl"), posScribbleImageUrl);
}

std::string InteractiveScribbleSegmentationRequest::getIntegratedMaskUrl() const {
  return integratedMaskUrl_;
}

void InteractiveScribbleSegmentationRequest::setIntegratedMaskUrl(const std::string &integratedMaskUrl) {
  integratedMaskUrl_ = integratedMaskUrl;
  setBodyParameter(std::string("IntegratedMaskUrl"), integratedMaskUrl);
}

std::string InteractiveScribbleSegmentationRequest::getMaskImageUrl() const {
  return maskImageUrl_;
}

void InteractiveScribbleSegmentationRequest::setMaskImageUrl(const std::string &maskImageUrl) {
  maskImageUrl_ = maskImageUrl;
  setBodyParameter(std::string("MaskImageUrl"), maskImageUrl);
}

std::string InteractiveScribbleSegmentationRequest::getReturnForm() const {
  return returnForm_;
}

void InteractiveScribbleSegmentationRequest::setReturnForm(const std::string &returnForm) {
  returnForm_ = returnForm;
  setBodyParameter(std::string("ReturnForm"), returnForm);
}

std::string InteractiveScribbleSegmentationRequest::getNegScribbleImageUrl() const {
  return negScribbleImageUrl_;
}

void InteractiveScribbleSegmentationRequest::setNegScribbleImageUrl(const std::string &negScribbleImageUrl) {
  negScribbleImageUrl_ = negScribbleImageUrl;
  setBodyParameter(std::string("NegScribbleImageUrl"), negScribbleImageUrl);
}

std::string InteractiveScribbleSegmentationRequest::getReturnFormat() const {
  return returnFormat_;
}

void InteractiveScribbleSegmentationRequest::setReturnFormat(const std::string &returnFormat) {
  returnFormat_ = returnFormat;
  setBodyParameter(std::string("ReturnFormat"), returnFormat);
}

std::string InteractiveScribbleSegmentationRequest::getEdgeFeathering() const {
  return edgeFeathering_;
}

void InteractiveScribbleSegmentationRequest::setEdgeFeathering(const std::string &edgeFeathering) {
  edgeFeathering_ = edgeFeathering;
  setBodyParameter(std::string("EdgeFeathering"), edgeFeathering);
}

std::string InteractiveScribbleSegmentationRequest::getImageUrl() const {
  return imageUrl_;
}

void InteractiveScribbleSegmentationRequest::setImageUrl(const std::string &imageUrl) {
  imageUrl_ = imageUrl;
  setBodyParameter(std::string("ImageUrl"), imageUrl);
}

std::string InteractiveScribbleSegmentationRequest::getPostprocessOption() const {
  return postprocessOption_;
}

void InteractiveScribbleSegmentationRequest::setPostprocessOption(const std::string &postprocessOption) {
  postprocessOption_ = postprocessOption;
  setBodyParameter(std::string("PostprocessOption"), postprocessOption);
}

