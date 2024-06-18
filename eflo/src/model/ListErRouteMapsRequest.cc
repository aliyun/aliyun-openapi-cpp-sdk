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

#include <alibabacloud/eflo/model/ListErRouteMapsRequest.h>

using AlibabaCloud::Eflo::Model::ListErRouteMapsRequest;

ListErRouteMapsRequest::ListErRouteMapsRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "ListErRouteMaps") {
  setMethod(HttpRequest::Method::Post);
}

ListErRouteMapsRequest::~ListErRouteMapsRequest() {}

std::string ListErRouteMapsRequest::getReceptionInstanceType() const {
  return receptionInstanceType_;
}

void ListErRouteMapsRequest::setReceptionInstanceType(const std::string &receptionInstanceType) {
  receptionInstanceType_ = receptionInstanceType;
  setBodyParameter(std::string("ReceptionInstanceType"), receptionInstanceType);
}

std::string ListErRouteMapsRequest::getReceptionInstanceId() const {
  return receptionInstanceId_;
}

void ListErRouteMapsRequest::setReceptionInstanceId(const std::string &receptionInstanceId) {
  receptionInstanceId_ = receptionInstanceId;
  setBodyParameter(std::string("ReceptionInstanceId"), receptionInstanceId);
}

int ListErRouteMapsRequest::getErRouteMapNum() const {
  return erRouteMapNum_;
}

void ListErRouteMapsRequest::setErRouteMapNum(int erRouteMapNum) {
  erRouteMapNum_ = erRouteMapNum;
  setBodyParameter(std::string("ErRouteMapNum"), std::to_string(erRouteMapNum));
}

int ListErRouteMapsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListErRouteMapsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListErRouteMapsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListErRouteMapsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setBodyParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListErRouteMapsRequest::getRouteMapAction() const {
  return routeMapAction_;
}

void ListErRouteMapsRequest::setRouteMapAction(const std::string &routeMapAction) {
  routeMapAction_ = routeMapAction;
  setBodyParameter(std::string("RouteMapAction"), routeMapAction);
}

std::string ListErRouteMapsRequest::getTransmissionInstanceType() const {
  return transmissionInstanceType_;
}

void ListErRouteMapsRequest::setTransmissionInstanceType(const std::string &transmissionInstanceType) {
  transmissionInstanceType_ = transmissionInstanceType;
  setBodyParameter(std::string("TransmissionInstanceType"), transmissionInstanceType);
}

std::string ListErRouteMapsRequest::getRegionId() const {
  return regionId_;
}

void ListErRouteMapsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int ListErRouteMapsRequest::getPageSize() const {
  return pageSize_;
}

void ListErRouteMapsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListErRouteMapsRequest::getTransmissionInstanceName() const {
  return transmissionInstanceName_;
}

void ListErRouteMapsRequest::setTransmissionInstanceName(const std::string &transmissionInstanceName) {
  transmissionInstanceName_ = transmissionInstanceName;
  setBodyParameter(std::string("TransmissionInstanceName"), transmissionInstanceName);
}

std::string ListErRouteMapsRequest::getDestinationCidrBlock() const {
  return destinationCidrBlock_;
}

void ListErRouteMapsRequest::setDestinationCidrBlock(const std::string &destinationCidrBlock) {
  destinationCidrBlock_ = destinationCidrBlock;
  setBodyParameter(std::string("DestinationCidrBlock"), destinationCidrBlock);
}

std::string ListErRouteMapsRequest::getErId() const {
  return erId_;
}

void ListErRouteMapsRequest::setErId(const std::string &erId) {
  erId_ = erId;
  setBodyParameter(std::string("ErId"), erId);
}

std::string ListErRouteMapsRequest::getErRouteMapId() const {
  return erRouteMapId_;
}

void ListErRouteMapsRequest::setErRouteMapId(const std::string &erRouteMapId) {
  erRouteMapId_ = erRouteMapId;
  setBodyParameter(std::string("ErRouteMapId"), erRouteMapId);
}

std::string ListErRouteMapsRequest::getReceptionInstanceName() const {
  return receptionInstanceName_;
}

void ListErRouteMapsRequest::setReceptionInstanceName(const std::string &receptionInstanceName) {
  receptionInstanceName_ = receptionInstanceName;
  setBodyParameter(std::string("ReceptionInstanceName"), receptionInstanceName);
}

bool ListErRouteMapsRequest::getEnablePage() const {
  return enablePage_;
}

void ListErRouteMapsRequest::setEnablePage(bool enablePage) {
  enablePage_ = enablePage;
  setBodyParameter(std::string("EnablePage"), enablePage ? "true" : "false");
}

std::string ListErRouteMapsRequest::getTransmissionInstanceId() const {
  return transmissionInstanceId_;
}

void ListErRouteMapsRequest::setTransmissionInstanceId(const std::string &transmissionInstanceId) {
  transmissionInstanceId_ = transmissionInstanceId;
  setBodyParameter(std::string("TransmissionInstanceId"), transmissionInstanceId);
}

