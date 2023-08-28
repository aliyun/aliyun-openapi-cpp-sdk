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

#include <alibabacloud/eflo/model/CreateErRouteMapRequest.h>

using AlibabaCloud::Eflo::Model::CreateErRouteMapRequest;

CreateErRouteMapRequest::CreateErRouteMapRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "CreateErRouteMap") {
  setMethod(HttpRequest::Method::Post);
}

CreateErRouteMapRequest::~CreateErRouteMapRequest() {}

std::string CreateErRouteMapRequest::getReceptionInstanceType() const {
  return receptionInstanceType_;
}

void CreateErRouteMapRequest::setReceptionInstanceType(const std::string &receptionInstanceType) {
  receptionInstanceType_ = receptionInstanceType;
  setBodyParameter(std::string("ReceptionInstanceType"), receptionInstanceType);
}

std::string CreateErRouteMapRequest::getDescription() const {
  return description_;
}

void CreateErRouteMapRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string CreateErRouteMapRequest::getReceptionInstanceId() const {
  return receptionInstanceId_;
}

void CreateErRouteMapRequest::setReceptionInstanceId(const std::string &receptionInstanceId) {
  receptionInstanceId_ = receptionInstanceId;
  setBodyParameter(std::string("ReceptionInstanceId"), receptionInstanceId);
}

std::string CreateErRouteMapRequest::getRouteMapAction() const {
  return routeMapAction_;
}

void CreateErRouteMapRequest::setRouteMapAction(const std::string &routeMapAction) {
  routeMapAction_ = routeMapAction;
  setBodyParameter(std::string("RouteMapAction"), routeMapAction);
}

std::string CreateErRouteMapRequest::getTransmissionInstanceType() const {
  return transmissionInstanceType_;
}

void CreateErRouteMapRequest::setTransmissionInstanceType(const std::string &transmissionInstanceType) {
  transmissionInstanceType_ = transmissionInstanceType;
  setBodyParameter(std::string("TransmissionInstanceType"), transmissionInstanceType);
}

std::string CreateErRouteMapRequest::getRegionId() const {
  return regionId_;
}

void CreateErRouteMapRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string CreateErRouteMapRequest::getDestinationCidrBlock() const {
  return destinationCidrBlock_;
}

void CreateErRouteMapRequest::setDestinationCidrBlock(const std::string &destinationCidrBlock) {
  destinationCidrBlock_ = destinationCidrBlock;
  setBodyParameter(std::string("DestinationCidrBlock"), destinationCidrBlock);
}

std::string CreateErRouteMapRequest::getErId() const {
  return erId_;
}

void CreateErRouteMapRequest::setErId(const std::string &erId) {
  erId_ = erId;
  setBodyParameter(std::string("ErId"), erId);
}

int CreateErRouteMapRequest::getRouteMapNum() const {
  return routeMapNum_;
}

void CreateErRouteMapRequest::setRouteMapNum(int routeMapNum) {
  routeMapNum_ = routeMapNum;
  setBodyParameter(std::string("RouteMapNum"), std::to_string(routeMapNum));
}

std::string CreateErRouteMapRequest::getReceptionInstanceOwner() const {
  return receptionInstanceOwner_;
}

void CreateErRouteMapRequest::setReceptionInstanceOwner(const std::string &receptionInstanceOwner) {
  receptionInstanceOwner_ = receptionInstanceOwner;
  setBodyParameter(std::string("ReceptionInstanceOwner"), receptionInstanceOwner);
}

std::string CreateErRouteMapRequest::getTransmissionInstanceOwner() const {
  return transmissionInstanceOwner_;
}

void CreateErRouteMapRequest::setTransmissionInstanceOwner(const std::string &transmissionInstanceOwner) {
  transmissionInstanceOwner_ = transmissionInstanceOwner;
  setBodyParameter(std::string("TransmissionInstanceOwner"), transmissionInstanceOwner);
}

std::string CreateErRouteMapRequest::getTransmissionInstanceId() const {
  return transmissionInstanceId_;
}

void CreateErRouteMapRequest::setTransmissionInstanceId(const std::string &transmissionInstanceId) {
  transmissionInstanceId_ = transmissionInstanceId;
  setBodyParameter(std::string("TransmissionInstanceId"), transmissionInstanceId);
}

