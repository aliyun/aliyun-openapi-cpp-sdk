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

#include <alibabacloud/cloudwf/model/OnoffGroupApRadioRequest.h>

using AlibabaCloud::Cloudwf::Model::OnoffGroupApRadioRequest;

OnoffGroupApRadioRequest::OnoffGroupApRadioRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "OnoffGroupApRadio")
{
	setMethod(HttpRequest::Method::Post);
}

OnoffGroupApRadioRequest::~OnoffGroupApRadioRequest()
{}

long OnoffGroupApRadioRequest::getApgroupId()const
{
	return apgroupId_;
}

void OnoffGroupApRadioRequest::setApgroupId(long apgroupId)
{
	apgroupId_ = apgroupId;
	setParameter("ApgroupId", std::to_string(apgroupId));
}

std::string OnoffGroupApRadioRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OnoffGroupApRadioRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int OnoffGroupApRadioRequest::getDisabled()const
{
	return disabled_;
}

void OnoffGroupApRadioRequest::setDisabled(int disabled)
{
	disabled_ = disabled;
	setParameter("Disabled", std::to_string(disabled));
}

