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

#include <alibabacloud/vcs/model/UpdateProfileRequest.h>

using AlibabaCloud::Vcs::Model::UpdateProfileRequest;

UpdateProfileRequest::UpdateProfileRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "UpdateProfile")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateProfileRequest::~UpdateProfileRequest()
{}

std::string UpdateProfileRequest::getCorpId()const
{
	return corpId_;
}

void UpdateProfileRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

int UpdateProfileRequest::getGender()const
{
	return gender_;
}

void UpdateProfileRequest::setGender(int gender)
{
	gender_ = gender;
	setBodyParameter("Gender", std::to_string(gender));
}

std::string UpdateProfileRequest::getPlateNo()const
{
	return plateNo_;
}

void UpdateProfileRequest::setPlateNo(const std::string& plateNo)
{
	plateNo_ = plateNo;
	setBodyParameter("PlateNo", plateNo);
}

std::string UpdateProfileRequest::getIdNumber()const
{
	return idNumber_;
}

void UpdateProfileRequest::setIdNumber(const std::string& idNumber)
{
	idNumber_ = idNumber;
	setBodyParameter("IdNumber", idNumber);
}

std::string UpdateProfileRequest::getFaceUrl()const
{
	return faceUrl_;
}

void UpdateProfileRequest::setFaceUrl(const std::string& faceUrl)
{
	faceUrl_ = faceUrl;
	setBodyParameter("FaceUrl", faceUrl);
}

long UpdateProfileRequest::getProfileId()const
{
	return profileId_;
}

void UpdateProfileRequest::setProfileId(long profileId)
{
	profileId_ = profileId;
	setBodyParameter("ProfileId", std::to_string(profileId));
}

std::string UpdateProfileRequest::getLiveAddress()const
{
	return liveAddress_;
}

void UpdateProfileRequest::setLiveAddress(const std::string& liveAddress)
{
	liveAddress_ = liveAddress;
	setBodyParameter("LiveAddress", liveAddress);
}

std::string UpdateProfileRequest::getIsvSubId()const
{
	return isvSubId_;
}

void UpdateProfileRequest::setIsvSubId(const std::string& isvSubId)
{
	isvSubId_ = isvSubId;
	setBodyParameter("IsvSubId", isvSubId);
}

std::string UpdateProfileRequest::getSceneType()const
{
	return sceneType_;
}

void UpdateProfileRequest::setSceneType(const std::string& sceneType)
{
	sceneType_ = sceneType;
	setBodyParameter("SceneType", sceneType);
}

std::string UpdateProfileRequest::getPhoneNo()const
{
	return phoneNo_;
}

void UpdateProfileRequest::setPhoneNo(const std::string& phoneNo)
{
	phoneNo_ = phoneNo;
	setBodyParameter("PhoneNo", phoneNo);
}

long UpdateProfileRequest::getCatalogId()const
{
	return catalogId_;
}

void UpdateProfileRequest::setCatalogId(long catalogId)
{
	catalogId_ = catalogId;
	setBodyParameter("CatalogId", std::to_string(catalogId));
}

std::string UpdateProfileRequest::getName()const
{
	return name_;
}

void UpdateProfileRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

std::string UpdateProfileRequest::getBizId()const
{
	return bizId_;
}

void UpdateProfileRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setBodyParameter("BizId", bizId);
}

