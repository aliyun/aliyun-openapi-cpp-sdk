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

#include <alibabacloud/amptest/model/HuichengetRequest.h>

using AlibabaCloud::AmpTest::Model::HuichengetRequest;

HuichengetRequest::HuichengetRequest()
    : RpcServiceRequest("amptest", "2020-12-30", "Huichenget") {
  setMethod(HttpRequest::Method::Post);
}

HuichengetRequest::~HuichengetRequest() {}

std::string HuichengetRequest::getAdd() const {
  return add_;
}

void HuichengetRequest::setAdd(const std::string &add) {
  add_ = add;
  setParameter(std::string("Add"), add);
}

std::string HuichengetRequest::getAddress() const {
  return address_;
}

void HuichengetRequest::setAddress(const std::string &address) {
  address_ = address;
  setParameter(std::string("Address"), address);
}

std::string HuichengetRequest::getSix() const {
  return six_;
}

void HuichengetRequest::setSix(const std::string &six) {
  six_ = six;
  setParameter(std::string("Six"), six);
}

std::string HuichengetRequest::getEnight() const {
  return enight_;
}

void HuichengetRequest::setEnight(const std::string &enight) {
  enight_ = enight;
  setParameter(std::string("Enight"), enight);
}

std::string HuichengetRequest::getNewName() const {
  return newName_;
}

void HuichengetRequest::setNewName(const std::string &newName) {
  newName_ = newName;
  setParameter(std::string("NewName"), newName);
}

std::string HuichengetRequest::getList() const {
  return list_;
}

void HuichengetRequest::setList(const std::string &list) {
  list_ = list;
  setParameter(std::string("List"), list);
}

std::string HuichengetRequest::getTwo() const {
  return two_;
}

void HuichengetRequest::setTwo(const std::string &two) {
  two_ = two;
  setParameter(std::string("Two"), two);
}

std::string HuichengetRequest::getThree() const {
  return three_;
}

void HuichengetRequest::setThree(const std::string &three) {
  three_ = three;
  setParameter(std::string("Three"), three);
}

std::string HuichengetRequest::getNigh() const {
  return nigh_;
}

void HuichengetRequest::setNigh(const std::string &nigh) {
  nigh_ = nigh;
  setParameter(std::string("Nigh"), nigh);
}

std::string HuichengetRequest::getRed() const {
  return red_;
}

void HuichengetRequest::setRed(const std::string &red) {
  red_ = red;
  setParameter(std::string("Red"), red);
}

std::string HuichengetRequest::getApple() const {
  return apple_;
}

void HuichengetRequest::setApple(const std::string &apple) {
  apple_ = apple;
  setParameter(std::string("Apple"), apple);
}

std::string HuichengetRequest::getTea() const {
  return tea_;
}

void HuichengetRequest::setTea(const std::string &tea) {
  tea_ = tea;
  setParameter(std::string("Tea"), tea);
}

std::string HuichengetRequest::getBlue() const {
  return blue_;
}

void HuichengetRequest::setBlue(const std::string &blue) {
  blue_ = blue;
  setParameter(std::string("Blue"), blue);
}

std::string HuichengetRequest::getWhite() const {
  return white_;
}

void HuichengetRequest::setWhite(const std::string &white) {
  white_ = white;
  setParameter(std::string("White"), white);
}

std::string HuichengetRequest::getFour() const {
  return four_;
}

void HuichengetRequest::setFour(const std::string &four) {
  four_ = four;
  setParameter(std::string("Four"), four);
}

std::string HuichengetRequest::getNow() const {
  return now_;
}

void HuichengetRequest::setNow(const std::string &now) {
  now_ = now;
  setParameter(std::string("Now"), now);
}

std::string HuichengetRequest::getTen() const {
  return ten_;
}

void HuichengetRequest::setTen(const std::string &ten) {
  ten_ = ten;
  setParameter(std::string("Ten"), ten);
}

std::string HuichengetRequest::getFive() const {
  return five_;
}

void HuichengetRequest::setFive(const std::string &five) {
  five_ = five;
  setParameter(std::string("Five"), five);
}

