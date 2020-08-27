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

#include <alibabacloud/vcs/model/CreateUserRequest.h>

using AlibabaCloud::Vcs::Model::CreateUserRequest;

CreateUserRequest::CreateUserRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "CreateUser")
{
	setMethod(HttpRequest::Method::Post);
}

CreateUserRequest::~CreateUserRequest()
{}

std::string CreateUserRequest::getCorpId()const
{
	return corpId_;
}

void CreateUserRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

int CreateUserRequest::getGender()const
{
	return gender_;
}

void CreateUserRequest::setGender(int gender)
{
	gender_ = gender;
	setBodyParameter("Gender", std::to_string(gender));
}

std::string CreateUserRequest::getPlateNo()const
{
	return plateNo_;
}

void CreateUserRequest::setPlateNo(const std::string& plateNo)
{
	plateNo_ = plateNo;
	setBodyParameter("PlateNo", plateNo);
}

std::string CreateUserRequest::getIdNumber()const
{
	return idNumber_;
}

void CreateUserRequest::setIdNumber(const std::string& idNumber)
{
	idNumber_ = idNumber;
	setBodyParameter("IdNumber", idNumber);
}

std::string CreateUserRequest::getFaceImageUrl()const
{
	return faceImageUrl_;
}

void CreateUserRequest::setFaceImageUrl(const std::string& faceImageUrl)
{
	faceImageUrl_ = faceImageUrl;
	setBodyParameter("FaceImageUrl", faceImageUrl);
}

std::string CreateUserRequest::getAttachment()const
{
	return attachment_;
}

void CreateUserRequest::setAttachment(const std::string& attachment)
{
	attachment_ = attachment;
	setBodyParameter("Attachment", attachment);
}

std::string CreateUserRequest::getIsvSubId()const
{
	return isvSubId_;
}

void CreateUserRequest::setIsvSubId(const std::string& isvSubId)
{
	isvSubId_ = isvSubId;
	setBodyParameter("IsvSubId", isvSubId);
}

std::string CreateUserRequest::getAddress()const
{
	return address_;
}

void CreateUserRequest::setAddress(const std::string& address)
{
	address_ = address;
	setBodyParameter("Address", address);
}

long CreateUserRequest::getUserGroupId()const
{
	return userGroupId_;
}

void CreateUserRequest::setUserGroupId(long userGroupId)
{
	userGroupId_ = userGroupId;
	setBodyParameter("UserGroupId", std::to_string(userGroupId));
}

std::string CreateUserRequest::getPhoneNo()const
{
	return phoneNo_;
}

void CreateUserRequest::setPhoneNo(const std::string& phoneNo)
{
	phoneNo_ = phoneNo;
	setBodyParameter("PhoneNo", phoneNo);
}

std::string CreateUserRequest::getBizId()const
{
	return bizId_;
}

void CreateUserRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setBodyParameter("BizId", bizId);
}

int CreateUserRequest::getAge()const
{
	return age_;
}

void CreateUserRequest::setAge(int age)
{
	age_ = age;
	setBodyParameter("Age", std::to_string(age));
}

std::string CreateUserRequest::getUserName()const
{
	return userName_;
}

void CreateUserRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setBodyParameter("UserName", userName);
}

