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

#include <alibabacloud/alinlp/model/GetMedicineChMedicalRequest.h>

using AlibabaCloud::Alinlp::Model::GetMedicineChMedicalRequest;

GetMedicineChMedicalRequest::GetMedicineChMedicalRequest()
    : RpcServiceRequest("alinlp", "2020-06-29", "GetMedicineChMedical") {
  setMethod(HttpRequest::Method::Post);
}

GetMedicineChMedicalRequest::~GetMedicineChMedicalRequest() {}

std::string GetMedicineChMedicalRequest::getFactory() const {
  return factory_;
}

void GetMedicineChMedicalRequest::setFactory(const std::string &factory) {
  factory_ = factory;
  setBodyParameter(std::string("Factory"), factory);
}

std::string GetMedicineChMedicalRequest::getSpecification() const {
  return specification_;
}

void GetMedicineChMedicalRequest::setSpecification(const std::string &specification) {
  specification_ = specification;
  setBodyParameter(std::string("Specification"), specification);
}

std::string GetMedicineChMedicalRequest::getUnit() const {
  return unit_;
}

void GetMedicineChMedicalRequest::setUnit(const std::string &unit) {
  unit_ = unit;
  setBodyParameter(std::string("Unit"), unit);
}

std::string GetMedicineChMedicalRequest::getServiceCode() const {
  return serviceCode_;
}

void GetMedicineChMedicalRequest::setServiceCode(const std::string &serviceCode) {
  serviceCode_ = serviceCode;
  setBodyParameter(std::string("ServiceCode"), serviceCode);
}

std::string GetMedicineChMedicalRequest::getName() const {
  return name_;
}

void GetMedicineChMedicalRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

