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

#include <alibabacloud/dms-enterprise/model/ListSQLReviewOriginSQLRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListSQLReviewOriginSQLRequest;

ListSQLReviewOriginSQLRequest::ListSQLReviewOriginSQLRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ListSQLReviewOriginSQL") {
  setMethod(HttpRequest::Method::Post);
}

ListSQLReviewOriginSQLRequest::~ListSQLReviewOriginSQLRequest() {}

long ListSQLReviewOriginSQLRequest::getTid() const {
  return tid_;
}

void ListSQLReviewOriginSQLRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

long ListSQLReviewOriginSQLRequest::getOrderId() const {
  return orderId_;
}

void ListSQLReviewOriginSQLRequest::setOrderId(long orderId) {
  orderId_ = orderId;
  setParameter(std::string("OrderId"), std::to_string(orderId));
}

ListSQLReviewOriginSQLRequest::OrderActionDetail ListSQLReviewOriginSQLRequest::getOrderActionDetail() const {
  return orderActionDetail_;
}

void ListSQLReviewOriginSQLRequest::setOrderActionDetail(const ListSQLReviewOriginSQLRequest::OrderActionDetail &orderActionDetail) {
  orderActionDetail_ = orderActionDetail;
  setParameter(std::string("OrderActionDetail") + ".CheckStatusResult", orderActionDetail.checkStatusResult);
  setParameter(std::string("OrderActionDetail") + ".SQLReviewResult", orderActionDetail.sQLReviewResult);
  setParameter(std::string("OrderActionDetail") + ".Page.PageSize", std::to_string(orderActionDetail.page.pageSize));
  setParameter(std::string("OrderActionDetail") + ".Page.PageNumber", std::to_string(orderActionDetail.page.pageNumber));
  setParameter(std::string("OrderActionDetail") + ".FileId", std::to_string(orderActionDetail.fileId));
}

std::string ListSQLReviewOriginSQLRequest::getOrderActionName() const {
  return orderActionName_;
}

void ListSQLReviewOriginSQLRequest::setOrderActionName(const std::string &orderActionName) {
  orderActionName_ = orderActionName;
  setParameter(std::string("OrderActionName"), orderActionName);
}

