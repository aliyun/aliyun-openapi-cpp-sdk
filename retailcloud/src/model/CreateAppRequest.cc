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

#include <alibabacloud/retailcloud/model/CreateAppRequest.h>

using AlibabaCloud::Retailcloud::Model::CreateAppRequest;

CreateAppRequest::CreateAppRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "CreateApp")
{
	setMethod(HttpRequest::Method::Post);
}

CreateAppRequest::~CreateAppRequest()
{}

std::string CreateAppRequest::getBizTitle()const
{
	return bizTitle_;
}

void CreateAppRequest::setBizTitle(const std::string& bizTitle)
{
	bizTitle_ = bizTitle;
	setBodyParameter("BizTitle", bizTitle);
}

std::string CreateAppRequest::getOperatingSystem()const
{
	return operatingSystem_;
}

void CreateAppRequest::setOperatingSystem(const std::string& operatingSystem)
{
	operatingSystem_ = operatingSystem;
	setBodyParameter("OperatingSystem", operatingSystem);
}

std::string CreateAppRequest::getDescription()const
{
	return description_;
}

void CreateAppRequest::setDescription(const std::string& description)
{
	description_ = description;
	setBodyParameter("Description", description);
}

std::string CreateAppRequest::getLanguage()const
{
	return language_;
}

void CreateAppRequest::setLanguage(const std::string& language)
{
	language_ = language;
	setBodyParameter("Language", language);
}

std::string CreateAppRequest::getTitle()const
{
	return title_;
}

void CreateAppRequest::setTitle(const std::string& title)
{
	title_ = title;
	setBodyParameter("Title", title);
}

std::string CreateAppRequest::getGroupName()const
{
	return groupName_;
}

void CreateAppRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setBodyParameter("GroupName", groupName);
}

std::vector<int> CreateAppRequest::getMiddleWareIdList()const
{
	return middleWareIdList_;
}

void CreateAppRequest::setMiddleWareIdList(const std::vector<int>& middleWareIdList)
{
	middleWareIdList_ = middleWareIdList;
	for(int dep1 = 0; dep1!= middleWareIdList.size(); dep1++) {
		setBodyParameter("MiddleWareIdList."+ std::to_string(dep1), std::to_string(middleWareIdList.at(dep1)));
	}
}

int CreateAppRequest::getStateType()const
{
	return stateType_;
}

void CreateAppRequest::setStateType(int stateType)
{
	stateType_ = stateType;
	setBodyParameter("StateType", std::to_string(stateType));
}

std::string CreateAppRequest::getServiceType()const
{
	return serviceType_;
}

void CreateAppRequest::setServiceType(const std::string& serviceType)
{
	serviceType_ = serviceType;
	setBodyParameter("ServiceType", serviceType);
}

std::vector<CreateAppRequest::UserRoles> CreateAppRequest::getUserRoles()const
{
	return userRoles_;
}

void CreateAppRequest::setUserRoles(const std::vector<UserRoles>& userRoles)
{
	userRoles_ = userRoles;
	for(int dep1 = 0; dep1!= userRoles.size(); dep1++) {
		auto userRolesObj = userRoles.at(dep1);
		std::string userRolesObjStr = "UserRoles." + std::to_string(dep1 + 1);
		setParameter(userRolesObjStr + ".RoleName", userRolesObj.roleName);
		setParameter(userRolesObjStr + ".UserType", userRolesObj.userType);
		setParameter(userRolesObjStr + ".UserId", userRolesObj.userId);
	}
}

std::string CreateAppRequest::getBizCode()const
{
	return bizCode_;
}

void CreateAppRequest::setBizCode(const std::string& bizCode)
{
	bizCode_ = bizCode;
	setBodyParameter("BizCode", bizCode);
}

std::string CreateAppRequest::get_Namespace()const
{
	return _namespace_;
}

void CreateAppRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setBodyParameter("_Namespace", _namespace);
}

