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

#include <alibabacloud/aicontent/model/Personalizedtxt2imgQueryImageAssetRequest.h>

using AlibabaCloud::AiContent::Model::Personalizedtxt2imgQueryImageAssetRequest;

Personalizedtxt2imgQueryImageAssetRequest::Personalizedtxt2imgQueryImageAssetRequest()
    : RoaServiceRequest("aicontent", "20240611") {
  setResourcePath("/api/v1/personalizedtxt2img/queryImageAsset"};
  setMethod(HttpRequest::Method::Get);
}

Personalizedtxt2imgQueryImageAssetRequest::~Personalizedtxt2imgQueryImageAssetRequest() {}

std::string Personalizedtxt2imgQueryImageAssetRequest::getImageId() const {
  return imageId_;
}

void Personalizedtxt2imgQueryImageAssetRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("imageId"), imageId);
}

std::string Personalizedtxt2imgQueryImageAssetRequest::getModelId() const {
  return modelId_;
}

void Personalizedtxt2imgQueryImageAssetRequest::setModelId(const std::string &modelId) {
  modelId_ = modelId;
  setParameter(std::string("modelId"), modelId);
}

std::string Personalizedtxt2imgQueryImageAssetRequest::getEncodeFormat() const {
  return encodeFormat_;
}

void Personalizedtxt2imgQueryImageAssetRequest::setEncodeFormat(const std::string &encodeFormat) {
  encodeFormat_ = encodeFormat;
  setParameter(std::string("encodeFormat"), encodeFormat);
}

std::string Personalizedtxt2imgQueryImageAssetRequest::getPromptId() const {
  return promptId_;
}

void Personalizedtxt2imgQueryImageAssetRequest::setPromptId(const std::string &promptId) {
  promptId_ = promptId;
  setParameter(std::string("promptId"), promptId);
}

