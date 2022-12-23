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

#include <alibabacloud/facebody/model/DetectIPCPedestrianOptimizedRequest.h>

using AlibabaCloud::Facebody::Model::DetectIPCPedestrianOptimizedRequest;

DetectIPCPedestrianOptimizedRequest::DetectIPCPedestrianOptimizedRequest()
    : RoaServiceRequest("facebody", "2020-09-10") {
  setResourcePath("/viapi/k8s/facebody/detect-ipc-pedestrian-optimized"};
  setMethod(HttpRequest::Method::Post);
}

DetectIPCPedestrianOptimizedRequest::~DetectIPCPedestrianOptimizedRequest() {}

long DetectIPCPedestrianOptimizedRequest::getHeight() const {
  return height_;
}

void DetectIPCPedestrianOptimizedRequest::setHeight(long height) {
  height_ = height;
  setBodyParameter(std::string("height"), std::to_string(height));
}

std::string DetectIPCPedestrianOptimizedRequest::getImageData() const {
  return imageData_;
}

void DetectIPCPedestrianOptimizedRequest::setImageData(const std::string &imageData) {
  imageData_ = imageData;
  setBodyParameter(std::string("imageData"), imageData);
}

long DetectIPCPedestrianOptimizedRequest::getWidth() const {
  return width_;
}

void DetectIPCPedestrianOptimizedRequest::setWidth(long width) {
  width_ = width;
  setBodyParameter(std::string("width"), std::to_string(width));
}

