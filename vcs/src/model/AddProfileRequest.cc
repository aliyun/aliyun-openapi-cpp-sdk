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

#include <alibabacloud/vcs/model/AddProfileRequest.h>

using AlibabaCloud::Vcs::Model::AddProfileRequest;

AddProfileRequest::AddProfileRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "AddProfile")
{
	setMethod(HttpRequest::Method::Post);
}

AddProfileRequest::~AddProfileRequest()
{}

std::string AddProfileRequest::getCorpId()const
{
	return corpId_;
}

void AddProfileRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

int AddProfileRequest::getGender()const
{
	return gender_;
}

void AddProfileRequest::setGender(int gender)
{
	gender_ = gender;
	setBodyParameter("Gender", std::to_string(gender));
}

std::string AddProfileRequest::getPlateNo()const
{
	return plateNo_;
}

void AddProfileRequest::setPlateNo(const std::string& plateNo)
{
	plateNo_ = plateNo;
	setBodyParameter("PlateNo", plateNo);
}

std::string AddProfileRequest::getIdNumber()const
{
	return idNumber_;
}

void AddProfileRequest::setIdNumber(const std::string& idNumber)
{
	idNumber_ = idNumber;
	setBodyParameter("IdNumber", idNumber);
}

std::string AddProfileRequest::getFaceUrl()const
{
	return faceUrl_;
}

void AddProfileRequest::setFaceUrl(const std::string& faceUrl)
{
	faceUrl_ = faceUrl;
	setBodyParameter("FaceUrl", faceUrl);
}

std::string AddProfileRequest::getLiveAddress()const
{
	return liveAddress_;
}

void AddProfileRequest::setLiveAddress(const std::string& liveAddress)
{
	liveAddress_ = liveAddress;
	setBodyParameter("LiveAddress", liveAddress);
}

std::string AddProfileRequest::getIsvSubId()const
{
	return isvSubId_;
}

void AddProfileRequest::setIsvSubId(const std::string& isvSubId)
{
	isvSubId_ = isvSubId;
	setBodyParameter("IsvSubId", isvSubId);
}

std::string AddProfileRequest::getSceneType()const
{
	return sceneType_;
}

void AddProfileRequest::setSceneType(const std::string& sceneType)
{
	sceneType_ = sceneType;
	setBodyParameter("SceneType", sceneType);
}

std::string AddProfileRequest::getPhoneNo()const
{
	return phoneNo_;
}

void AddProfileRequest::setPhoneNo(const std::string& phoneNo)
{
	phoneNo_ = phoneNo;
	setBodyParameter("PhoneNo", phoneNo);
}

long AddProfileRequest::getCatalogId()const
{
	return catalogId_;
}

void AddProfileRequest::setCatalogId(long catalogId)
{
	catalogId_ = catalogId;
	setBodyParameter("CatalogId", std::to_string(catalogId));
}

std::string AddProfileRequest::getName()const
{
	return name_;
}

void AddProfileRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

std::string AddProfileRequest::getBizId()const
{
	return bizId_;
}

void AddProfileRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setBodyParameter("BizId", bizId);
}

