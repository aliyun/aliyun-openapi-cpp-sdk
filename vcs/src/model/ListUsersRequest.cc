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

#include <alibabacloud/vcs/model/ListUsersRequest.h>

using AlibabaCloud::Vcs::Model::ListUsersRequest;

ListUsersRequest::ListUsersRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "ListUsers")
{
	setMethod(HttpRequest::Method::Post);
}

ListUsersRequest::~ListUsersRequest()
{}

std::map<std::string, std::string> ListUsersRequest::getUserList()const
{
	return userList_;
}

void ListUsersRequest::setUserList(const std::map<std::string, std::string>& userList)
{
	userList_ = userList;
	setJsonParameters("UserList", userList);
}

std::string ListUsersRequest::getCorpId()const
{
	return corpId_;
}

void ListUsersRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

int ListUsersRequest::getGender()const
{
	return gender_;
}

void ListUsersRequest::setGender(int gender)
{
	gender_ = gender;
	setBodyParameter("Gender", std::to_string(gender));
}

std::string ListUsersRequest::getPlateNo()const
{
	return plateNo_;
}

void ListUsersRequest::setPlateNo(const std::string& plateNo)
{
	plateNo_ = plateNo;
	setBodyParameter("PlateNo", plateNo);
}

std::string ListUsersRequest::getIdNumber()const
{
	return idNumber_;
}

void ListUsersRequest::setIdNumber(const std::string& idNumber)
{
	idNumber_ = idNumber;
	setBodyParameter("IdNumber", idNumber);
}

std::string ListUsersRequest::getFaceImageUrl()const
{
	return faceImageUrl_;
}

void ListUsersRequest::setFaceImageUrl(const std::string& faceImageUrl)
{
	faceImageUrl_ = faceImageUrl;
	setBodyParameter("FaceImageUrl", faceImageUrl);
}

std::map<std::string, std::string> ListUsersRequest::getPersonList()const
{
	return personList_;
}

void ListUsersRequest::setPersonList(const std::map<std::string, std::string>& personList)
{
	personList_ = personList;
	setJsonParameters("PersonList", personList);
}

long ListUsersRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListUsersRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListUsersRequest::getAttachment()const
{
	return attachment_;
}

void ListUsersRequest::setAttachment(const std::string& attachment)
{
	attachment_ = attachment;
	setBodyParameter("Attachment", attachment);
}

long ListUsersRequest::getPageSize()const
{
	return pageSize_;
}

void ListUsersRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string ListUsersRequest::getIsvSubId()const
{
	return isvSubId_;
}

void ListUsersRequest::setIsvSubId(const std::string& isvSubId)
{
	isvSubId_ = isvSubId;
	setBodyParameter("IsvSubId", isvSubId);
}

std::string ListUsersRequest::getAddress()const
{
	return address_;
}

void ListUsersRequest::setAddress(const std::string& address)
{
	address_ = address;
	setBodyParameter("Address", address);
}

long ListUsersRequest::getUserGroupId()const
{
	return userGroupId_;
}

void ListUsersRequest::setUserGroupId(long userGroupId)
{
	userGroupId_ = userGroupId;
	setBodyParameter("UserGroupId", std::to_string(userGroupId));
}

std::string ListUsersRequest::getPhoneNo()const
{
	return phoneNo_;
}

void ListUsersRequest::setPhoneNo(const std::string& phoneNo)
{
	phoneNo_ = phoneNo;
	setBodyParameter("PhoneNo", phoneNo);
}

std::string ListUsersRequest::getBizId()const
{
	return bizId_;
}

void ListUsersRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setBodyParameter("BizId", bizId);
}

int ListUsersRequest::getAge()const
{
	return age_;
}

void ListUsersRequest::setAge(int age)
{
	age_ = age;
	setBodyParameter("Age", std::to_string(age));
}

std::string ListUsersRequest::getMatchingRateThreshold()const
{
	return matchingRateThreshold_;
}

void ListUsersRequest::setMatchingRateThreshold(const std::string& matchingRateThreshold)
{
	matchingRateThreshold_ = matchingRateThreshold;
	setBodyParameter("MatchingRateThreshold", matchingRateThreshold);
}

std::string ListUsersRequest::getUserName()const
{
	return userName_;
}

void ListUsersRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setBodyParameter("UserName", userName);
}

