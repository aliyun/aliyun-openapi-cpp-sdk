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

#include <alibabacloud/retailcloud/model/UpdateAppRequest.h>

using AlibabaCloud::Retailcloud::Model::UpdateAppRequest;

UpdateAppRequest::UpdateAppRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "UpdateApp")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateAppRequest::~UpdateAppRequest()
{}

std::string UpdateAppRequest::getBizTitle()const
{
	return bizTitle_;
}

void UpdateAppRequest::setBizTitle(const std::string& bizTitle)
{
	bizTitle_ = bizTitle;
	setBodyParameter("BizTitle", bizTitle);
}

std::string UpdateAppRequest::getServiceType()const
{
	return serviceType_;
}

void UpdateAppRequest::setServiceType(const std::string& serviceType)
{
	serviceType_ = serviceType;
	setBodyParameter("ServiceType", serviceType);
}

std::vector<UpdateAppRequest::UserRoles> UpdateAppRequest::getUserRoles()const
{
	return userRoles_;
}

void UpdateAppRequest::setUserRoles(const std::vector<UserRoles>& userRoles)
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

long UpdateAppRequest::getAppId()const
{
	return appId_;
}

void UpdateAppRequest::setAppId(long appId)
{
	appId_ = appId;
	setBodyParameter("AppId", std::to_string(appId));
}

std::string UpdateAppRequest::getOperatingSystem()const
{
	return operatingSystem_;
}

void UpdateAppRequest::setOperatingSystem(const std::string& operatingSystem)
{
	operatingSystem_ = operatingSystem;
	setBodyParameter("OperatingSystem", operatingSystem);
}

std::string UpdateAppRequest::getDescription()const
{
	return description_;
}

void UpdateAppRequest::setDescription(const std::string& description)
{
	description_ = description;
	setBodyParameter("Description", description);
}

std::string UpdateAppRequest::getLanguage()const
{
	return language_;
}

void UpdateAppRequest::setLanguage(const std::string& language)
{
	language_ = language;
	setBodyParameter("Language", language);
}

std::vector<int> UpdateAppRequest::getMiddleWareIdList()const
{
	return middleWareIdList_;
}

void UpdateAppRequest::setMiddleWareIdList(const std::vector<int>& middleWareIdList)
{
	middleWareIdList_ = middleWareIdList;
	for(int dep1 = 0; dep1!= middleWareIdList.size(); dep1++) {
		setBodyParameter("MiddleWareIdList."+ std::to_string(dep1), std::to_string(middleWareIdList.at(dep1)));
	}
}

