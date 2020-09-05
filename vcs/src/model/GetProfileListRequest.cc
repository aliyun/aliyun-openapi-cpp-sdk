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

#include <alibabacloud/vcs/model/GetProfileListRequest.h>

using AlibabaCloud::Vcs::Model::GetProfileListRequest;

GetProfileListRequest::GetProfileListRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "GetProfileList")
{
	setMethod(HttpRequest::Method::Post);
}

GetProfileListRequest::~GetProfileListRequest()
{}

std::map<std::string, std::string> GetProfileListRequest::getProfileIdList()const
{
	return profileIdList_;
}

void GetProfileListRequest::setProfileIdList(const std::map<std::string, std::string>& profileIdList)
{
	profileIdList_ = profileIdList;
	setJsonParameters("ProfileIdList", profileIdList);
}

std::string GetProfileListRequest::getCorpId()const
{
	return corpId_;
}

void GetProfileListRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

int GetProfileListRequest::getGender()const
{
	return gender_;
}

void GetProfileListRequest::setGender(int gender)
{
	gender_ = gender;
	setBodyParameter("Gender", std::to_string(gender));
}

std::string GetProfileListRequest::getPlateNo()const
{
	return plateNo_;
}

void GetProfileListRequest::setPlateNo(const std::string& plateNo)
{
	plateNo_ = plateNo;
	setBodyParameter("PlateNo", plateNo);
}

std::string GetProfileListRequest::getIdNumber()const
{
	return idNumber_;
}

void GetProfileListRequest::setIdNumber(const std::string& idNumber)
{
	idNumber_ = idNumber;
	setBodyParameter("IdNumber", idNumber);
}

long GetProfileListRequest::getPageNumber()const
{
	return pageNumber_;
}

void GetProfileListRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

std::string GetProfileListRequest::getFaceImageId()const
{
	return faceImageId_;
}

void GetProfileListRequest::setFaceImageId(const std::string& faceImageId)
{
	faceImageId_ = faceImageId;
	setBodyParameter("FaceImageId", faceImageId);
}

std::string GetProfileListRequest::getFaceUrl()const
{
	return faceUrl_;
}

void GetProfileListRequest::setFaceUrl(const std::string& faceUrl)
{
	faceUrl_ = faceUrl;
	setBodyParameter("FaceUrl", faceUrl);
}

long GetProfileListRequest::getPageSize()const
{
	return pageSize_;
}

void GetProfileListRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::map<std::string, std::string> GetProfileListRequest::getPersonIdList()const
{
	return personIdList_;
}

void GetProfileListRequest::setPersonIdList(const std::map<std::string, std::string>& personIdList)
{
	personIdList_ = personIdList;
	setJsonParameters("PersonIdList", personIdList);
}

std::string GetProfileListRequest::getLiveAddress()const
{
	return liveAddress_;
}

void GetProfileListRequest::setLiveAddress(const std::string& liveAddress)
{
	liveAddress_ = liveAddress;
	setBodyParameter("LiveAddress", liveAddress);
}

std::string GetProfileListRequest::getIsvSubId()const
{
	return isvSubId_;
}

void GetProfileListRequest::setIsvSubId(const std::string& isvSubId)
{
	isvSubId_ = isvSubId;
	setBodyParameter("IsvSubId", isvSubId);
}

std::string GetProfileListRequest::getSceneType()const
{
	return sceneType_;
}

void GetProfileListRequest::setSceneType(const std::string& sceneType)
{
	sceneType_ = sceneType;
	setBodyParameter("SceneType", sceneType);
}

std::string GetProfileListRequest::getPhoneNo()const
{
	return phoneNo_;
}

void GetProfileListRequest::setPhoneNo(const std::string& phoneNo)
{
	phoneNo_ = phoneNo;
	setBodyParameter("PhoneNo", phoneNo);
}

long GetProfileListRequest::getCatalogId()const
{
	return catalogId_;
}

void GetProfileListRequest::setCatalogId(long catalogId)
{
	catalogId_ = catalogId;
	setBodyParameter("CatalogId", std::to_string(catalogId));
}

std::string GetProfileListRequest::getName()const
{
	return name_;
}

void GetProfileListRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

std::string GetProfileListRequest::getBizId()const
{
	return bizId_;
}

void GetProfileListRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setBodyParameter("BizId", bizId);
}

std::string GetProfileListRequest::getMatchingRateThreshold()const
{
	return matchingRateThreshold_;
}

void GetProfileListRequest::setMatchingRateThreshold(const std::string& matchingRateThreshold)
{
	matchingRateThreshold_ = matchingRateThreshold;
	setBodyParameter("MatchingRateThreshold", matchingRateThreshold);
}

