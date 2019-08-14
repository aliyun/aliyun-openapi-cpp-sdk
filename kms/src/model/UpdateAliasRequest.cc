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

#include <alibabacloud/kms/model/UpdateAliasRequest.h>

using AlibabaCloud::Kms::Model::UpdateAliasRequest;

UpdateAliasRequest::UpdateAliasRequest() :
	RpcServiceRequest("kms", "2016-01-20", "UpdateAlias")
{}

UpdateAliasRequest::~UpdateAliasRequest()
{}

std::string UpdateAliasRequest::getAliasName()const
{
	return aliasName_;
}

void UpdateAliasRequest::setAliasName(const std::string& aliasName)
{
	aliasName_ = aliasName;
	setCoreParameter("AliasName", aliasName);
}

std::string UpdateAliasRequest::getKeyId()const
{
	return keyId_;
}

void UpdateAliasRequest::setKeyId(const std::string& keyId)
{
	keyId_ = keyId;
	setCoreParameter("KeyId", keyId);
}

