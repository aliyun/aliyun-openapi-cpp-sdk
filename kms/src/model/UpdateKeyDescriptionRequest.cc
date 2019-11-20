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

#include <alibabacloud/kms/model/UpdateKeyDescriptionRequest.h>

using AlibabaCloud::Kms::Model::UpdateKeyDescriptionRequest;

UpdateKeyDescriptionRequest::UpdateKeyDescriptionRequest() :
	RpcServiceRequest("kms", "2016-01-20", "UpdateKeyDescription")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateKeyDescriptionRequest::~UpdateKeyDescriptionRequest()
{}

std::string UpdateKeyDescriptionRequest::getKeyId()const
{
	return keyId_;
}

void UpdateKeyDescriptionRequest::setKeyId(const std::string& keyId)
{
	keyId_ = keyId;
	setCoreParameter("KeyId", keyId);
}

std::string UpdateKeyDescriptionRequest::getDescription()const
{
	return description_;
}

void UpdateKeyDescriptionRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

