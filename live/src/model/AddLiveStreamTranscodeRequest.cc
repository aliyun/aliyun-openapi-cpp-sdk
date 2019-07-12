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

#include <alibabacloud/live/model/AddLiveStreamTranscodeRequest.h>

using AlibabaCloud::Live::Model::AddLiveStreamTranscodeRequest;

AddLiveStreamTranscodeRequest::AddLiveStreamTranscodeRequest() :
	RpcServiceRequest("live", "2016-11-01", "AddLiveStreamTranscode")
{}

AddLiveStreamTranscodeRequest::~AddLiveStreamTranscodeRequest()
{}

std::string AddLiveStreamTranscodeRequest::getApp()const
{
	return app_;
}

void AddLiveStreamTranscodeRequest::setApp(const std::string& app)
{
	app_ = app;
	setCoreParameter("App", app);
}

std::string AddLiveStreamTranscodeRequest::get_Template()const
{
	return _template_;
}

void AddLiveStreamTranscodeRequest::set_Template(const std::string& _template)
{
	_template_ = _template;
	setCoreParameter("_Template", _template);
}

std::string AddLiveStreamTranscodeRequest::getSecurityToken()const
{
	return securityToken_;
}

void AddLiveStreamTranscodeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string AddLiveStreamTranscodeRequest::getDomain()const
{
	return domain_;
}

void AddLiveStreamTranscodeRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setCoreParameter("Domain", domain);
}

long AddLiveStreamTranscodeRequest::getOwnerId()const
{
	return ownerId_;
}

void AddLiveStreamTranscodeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

