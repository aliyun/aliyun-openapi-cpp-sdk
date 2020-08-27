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

#include <alibabacloud/vcs/model/UpdateUserRequest.h>

using AlibabaCloud::Vcs::Model::UpdateUserRequest;

UpdateUserRequest::UpdateUserRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "UpdateUser")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateUserRequest::~UpdateUserRequest()
{}

std::string UpdateUserRequest::getCorpId()const
{
	return corpId_;
}

void UpdateUserRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string UpdateUserRequest::getFaceImageContent()const
{
	return faceImageContent_;
}

void UpdateUserRequest::setFaceImageContent(const std::string& faceImageContent)
{
	faceImageContent_ = faceImageContent;
	setBodyParameter("FaceImageContent", faceImageContent);
}

int UpdateUserRequest::getGender()const
{
	return gender_;
}

void UpdateUserRequest::setGender(int gender)
{
	gender_ = gender;
	setBodyParameter("Gender", std::to_string(gender));
}

std::string UpdateUserRequest::getPlateNo()const
{
	return plateNo_;
}

void UpdateUserRequest::setPlateNo(const std::string& plateNo)
{
	plateNo_ = plateNo;
	setBodyParameter("PlateNo", plateNo);
}

std::string UpdateUserRequest::getIdNumber()const
{
	return idNumber_;
}

void UpdateUserRequest::setIdNumber(const std::string& idNumber)
{
	idNumber_ = idNumber;
	setBodyParameter("IdNumber", idNumber);
}

std::string UpdateUserRequest::getFaceImageUrl()const
{
	return faceImageUrl_;
}

void UpdateUserRequest::setFaceImageUrl(const std::string& faceImageUrl)
{
	faceImageUrl_ = faceImageUrl;
	setBodyParameter("FaceImageUrl", faceImageUrl);
}

long UpdateUserRequest::getUserId()const
{
	return userId_;
}

void UpdateUserRequest::setUserId(long userId)
{
	userId_ = userId;
	setBodyParameter("UserId", std::to_string(userId));
}

std::string UpdateUserRequest::getAttachment()const
{
	return attachment_;
}

void UpdateUserRequest::setAttachment(const std::string& attachment)
{
	attachment_ = attachment;
	setBodyParameter("Attachment", attachment);
}

std::string UpdateUserRequest::getIsvSubId()const
{
	return isvSubId_;
}

void UpdateUserRequest::setIsvSubId(const std::string& isvSubId)
{
	isvSubId_ = isvSubId;
	setBodyParameter("IsvSubId", isvSubId);
}

std::string UpdateUserRequest::getAddress()const
{
	return address_;
}

void UpdateUserRequest::setAddress(const std::string& address)
{
	address_ = address;
	setBodyParameter("Address", address);
}

long UpdateUserRequest::getUserGroupId()const
{
	return userGroupId_;
}

void UpdateUserRequest::setUserGroupId(long userGroupId)
{
	userGroupId_ = userGroupId;
	setBodyParameter("UserGroupId", std::to_string(userGroupId));
}

std::string UpdateUserRequest::getPhoneNo()const
{
	return phoneNo_;
}

void UpdateUserRequest::setPhoneNo(const std::string& phoneNo)
{
	phoneNo_ = phoneNo;
	setBodyParameter("PhoneNo", phoneNo);
}

std::string UpdateUserRequest::getBizId()const
{
	return bizId_;
}

void UpdateUserRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setBodyParameter("BizId", bizId);
}

int UpdateUserRequest::getAge()const
{
	return age_;
}

void UpdateUserRequest::setAge(int age)
{
	age_ = age;
	setBodyParameter("Age", std::to_string(age));
}

std::string UpdateUserRequest::getUserName()const
{
	return userName_;
}

void UpdateUserRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setBodyParameter("UserName", userName);
}

