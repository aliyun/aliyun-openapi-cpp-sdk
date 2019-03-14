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

#include <alibabacloud/ram/model/SetSecurityPreferenceRequest.h>

using AlibabaCloud::Ram::Model::SetSecurityPreferenceRequest;

SetSecurityPreferenceRequest::SetSecurityPreferenceRequest() :
	RpcServiceRequest("ram", "2015-05-01", "SetSecurityPreference")
{}

SetSecurityPreferenceRequest::~SetSecurityPreferenceRequest()
{}

bool SetSecurityPreferenceRequest::getAllowUserToManageAccessKeys()const
{
	return allowUserToManageAccessKeys_;
}

void SetSecurityPreferenceRequest::setAllowUserToManageAccessKeys(bool allowUserToManageAccessKeys)
{
	allowUserToManageAccessKeys_ = allowUserToManageAccessKeys;
	setParameter("AllowUserToManageAccessKeys", std::to_string(allowUserToManageAccessKeys));
}

bool SetSecurityPreferenceRequest::getAllowUserToManageMFADevices()const
{
	return allowUserToManageMFADevices_;
}

void SetSecurityPreferenceRequest::setAllowUserToManageMFADevices(bool allowUserToManageMFADevices)
{
	allowUserToManageMFADevices_ = allowUserToManageMFADevices;
	setParameter("AllowUserToManageMFADevices", std::to_string(allowUserToManageMFADevices));
}

bool SetSecurityPreferenceRequest::getAllowUserToManagePublicKeys()const
{
	return allowUserToManagePublicKeys_;
}

void SetSecurityPreferenceRequest::setAllowUserToManagePublicKeys(bool allowUserToManagePublicKeys)
{
	allowUserToManagePublicKeys_ = allowUserToManagePublicKeys;
	setParameter("AllowUserToManagePublicKeys", std::to_string(allowUserToManagePublicKeys));
}

bool SetSecurityPreferenceRequest::getEnableSaveMFATicket()const
{
	return enableSaveMFATicket_;
}

void SetSecurityPreferenceRequest::setEnableSaveMFATicket(bool enableSaveMFATicket)
{
	enableSaveMFATicket_ = enableSaveMFATicket;
	setParameter("EnableSaveMFATicket", std::to_string(enableSaveMFATicket));
}

std::string SetSecurityPreferenceRequest::getLoginNetworkMasks()const
{
	return loginNetworkMasks_;
}

void SetSecurityPreferenceRequest::setLoginNetworkMasks(const std::string& loginNetworkMasks)
{
	loginNetworkMasks_ = loginNetworkMasks;
	setParameter("LoginNetworkMasks", loginNetworkMasks);
}

bool SetSecurityPreferenceRequest::getAllowUserToChangePassword()const
{
	return allowUserToChangePassword_;
}

void SetSecurityPreferenceRequest::setAllowUserToChangePassword(bool allowUserToChangePassword)
{
	allowUserToChangePassword_ = allowUserToChangePassword;
	setParameter("AllowUserToChangePassword", std::to_string(allowUserToChangePassword));
}

int SetSecurityPreferenceRequest::getLoginSessionDuration()const
{
	return loginSessionDuration_;
}

void SetSecurityPreferenceRequest::setLoginSessionDuration(int loginSessionDuration)
{
	loginSessionDuration_ = loginSessionDuration;
	setParameter("LoginSessionDuration", std::to_string(loginSessionDuration));
}

