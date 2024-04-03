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

#include <alibabacloud/cloudauth/model/DescribePageFaceVerifyDataRequest.h>

using AlibabaCloud::Cloudauth::Model::DescribePageFaceVerifyDataRequest;

DescribePageFaceVerifyDataRequest::DescribePageFaceVerifyDataRequest()
    : RpcServiceRequest("cloudauth", "2019-03-07", "DescribePageFaceVerifyData") {
  setMethod(HttpRequest::Method::Post);
}

DescribePageFaceVerifyDataRequest::~DescribePageFaceVerifyDataRequest() {}

std::string DescribePageFaceVerifyDataRequest::getProductCode() const {
  return productCode_;
}

void DescribePageFaceVerifyDataRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

long DescribePageFaceVerifyDataRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribePageFaceVerifyDataRequest::setCurrentPage(long currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribePageFaceVerifyDataRequest::getStartDate() const {
  return startDate_;
}

void DescribePageFaceVerifyDataRequest::setStartDate(const std::string &startDate) {
  startDate_ = startDate;
  setParameter(std::string("StartDate"), startDate);
}

std::string DescribePageFaceVerifyDataRequest::getEndDate() const {
  return endDate_;
}

void DescribePageFaceVerifyDataRequest::setEndDate(const std::string &endDate) {
  endDate_ = endDate;
  setParameter(std::string("EndDate"), endDate);
}

long DescribePageFaceVerifyDataRequest::getSceneId() const {
  return sceneId_;
}

void DescribePageFaceVerifyDataRequest::setSceneId(long sceneId) {
  sceneId_ = sceneId;
  setParameter(std::string("SceneId"), std::to_string(sceneId));
}

long DescribePageFaceVerifyDataRequest::getPageSize() const {
  return pageSize_;
}

void DescribePageFaceVerifyDataRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

