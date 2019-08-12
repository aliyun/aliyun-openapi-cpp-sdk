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

#include <alibabacloud/ram/model/SetPasswordPolicyRequest.h>

using AlibabaCloud::Ram::Model::SetPasswordPolicyRequest;

SetPasswordPolicyRequest::SetPasswordPolicyRequest() :
	RpcServiceRequest("ram", "2015-05-01", "SetPasswordPolicy")
{}

SetPasswordPolicyRequest::~SetPasswordPolicyRequest()
{}

bool SetPasswordPolicyRequest::getRequireNumbers()const
{
	return requireNumbers_;
}

void SetPasswordPolicyRequest::setRequireNumbers(bool requireNumbers)
{
	requireNumbers_ = requireNumbers;
	setCoreParameter("RequireNumbers", requireNumbers);
}

int SetPasswordPolicyRequest::getPasswordReusePrevention()const
{
	return passwordReusePrevention_;
}

void SetPasswordPolicyRequest::setPasswordReusePrevention(int passwordReusePrevention)
{
	passwordReusePrevention_ = passwordReusePrevention;
	setCoreParameter("PasswordReusePrevention", passwordReusePrevention);
}

bool SetPasswordPolicyRequest::getRequireUppercaseCharacters()const
{
	return requireUppercaseCharacters_;
}

void SetPasswordPolicyRequest::setRequireUppercaseCharacters(bool requireUppercaseCharacters)
{
	requireUppercaseCharacters_ = requireUppercaseCharacters;
	setCoreParameter("RequireUppercaseCharacters", requireUppercaseCharacters);
}

int SetPasswordPolicyRequest::getMaxPasswordAge()const
{
	return maxPasswordAge_;
}

void SetPasswordPolicyRequest::setMaxPasswordAge(int maxPasswordAge)
{
	maxPasswordAge_ = maxPasswordAge;
	setCoreParameter("MaxPasswordAge", maxPasswordAge);
}

int SetPasswordPolicyRequest::getMaxLoginAttemps()const
{
	return maxLoginAttemps_;
}

void SetPasswordPolicyRequest::setMaxLoginAttemps(int maxLoginAttemps)
{
	maxLoginAttemps_ = maxLoginAttemps;
	setCoreParameter("MaxLoginAttemps", maxLoginAttemps);
}

bool SetPasswordPolicyRequest::getHardExpiry()const
{
	return hardExpiry_;
}

void SetPasswordPolicyRequest::setHardExpiry(bool hardExpiry)
{
	hardExpiry_ = hardExpiry;
	setCoreParameter("HardExpiry", hardExpiry);
}

int SetPasswordPolicyRequest::getMinimumPasswordLength()const
{
	return minimumPasswordLength_;
}

void SetPasswordPolicyRequest::setMinimumPasswordLength(int minimumPasswordLength)
{
	minimumPasswordLength_ = minimumPasswordLength;
	setCoreParameter("MinimumPasswordLength", minimumPasswordLength);
}

bool SetPasswordPolicyRequest::getRequireLowercaseCharacters()const
{
	return requireLowercaseCharacters_;
}

void SetPasswordPolicyRequest::setRequireLowercaseCharacters(bool requireLowercaseCharacters)
{
	requireLowercaseCharacters_ = requireLowercaseCharacters;
	setCoreParameter("RequireLowercaseCharacters", requireLowercaseCharacters);
}

bool SetPasswordPolicyRequest::getRequireSymbols()const
{
	return requireSymbols_;
}

void SetPasswordPolicyRequest::setRequireSymbols(bool requireSymbols)
{
	requireSymbols_ = requireSymbols;
	setCoreParameter("RequireSymbols", requireSymbols);
}

