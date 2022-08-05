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

#include <alibabacloud/lmztest/model/RpcHttpRequest.h>

using AlibabaCloud::LmzTest::Model::RpcHttpRequest;

RpcHttpRequest::RpcHttpRequest()
    : RpcServiceRequest("lmztest", "2010-10-11", "RpcHttp") {
  setMethod(HttpRequest::Method::Post);
}

RpcHttpRequest::~RpcHttpRequest() {}

std::string RpcHttpRequest::getNews() const {
  return news_;
}

void RpcHttpRequest::setNews(const std::string &news) {
  news_ = news;
  setParameter(std::string("News"), news);
}

std::string RpcHttpRequest::getCodes() const {
  return codes_;
}

void RpcHttpRequest::setCodes(const std::string &codes) {
  codes_ = codes;
  setParameter(std::string("Codes"), codes);
}

std::string RpcHttpRequest::getNumber() const {
  return number_;
}

void RpcHttpRequest::setNumber(const std::string &number) {
  number_ = number;
  setParameter(std::string("Number"), number);
}

std::string RpcHttpRequest::getMonkey() const {
  return monkey_;
}

void RpcHttpRequest::setMonkey(const std::string &monkey) {
  monkey_ = monkey;
  setParameter(std::string("Monkey"), monkey);
}

std::string RpcHttpRequest::getWorld() const {
  return world_;
}

void RpcHttpRequest::setWorld(const std::string &world) {
  world_ = world;
  setParameter(std::string("World"), world);
}

std::string RpcHttpRequest::getParam() const {
  return param_;
}

void RpcHttpRequest::setParam(const std::string &param) {
  param_ = param;
  setParameter(std::string("Param"), param);
}

std::string RpcHttpRequest::getOld() const {
  return old_;
}

void RpcHttpRequest::setOld(const std::string &old) {
  old_ = old;
  setParameter(std::string("Old"), old);
}

std::string RpcHttpRequest::getName() const {
  return name_;
}

void RpcHttpRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string RpcHttpRequest::getId() const {
  return id_;
}

void RpcHttpRequest::setId(const std::string &id) {
  id_ = id;
  setParameter(std::string("Id"), id);
}

std::string RpcHttpRequest::getNone() const {
  return none_;
}

void RpcHttpRequest::setNone(const std::string &none) {
  none_ = none;
  setParameter(std::string("None"), none);
}

