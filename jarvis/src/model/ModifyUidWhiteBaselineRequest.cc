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

#include <alibabacloud/jarvis/model/ModifyUidWhiteBaselineRequest.h>

using AlibabaCloud::Jarvis::Model::ModifyUidWhiteBaselineRequest;

ModifyUidWhiteBaselineRequest::ModifyUidWhiteBaselineRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "ModifyUidWhiteBaseline")
{}

ModifyUidWhiteBaselineRequest::~ModifyUidWhiteBaselineRequest()
{}

long ModifyUidWhiteBaselineRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyUidWhiteBaselineRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyUidWhiteBaselineRequest::getRemark()const
{
	return remark_;
}

void ModifyUidWhiteBaselineRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setCoreParameter("Remark", remark);
}

std::string ModifyUidWhiteBaselineRequest::getSourceCode()const
{
	return sourceCode_;
}

void ModifyUidWhiteBaselineRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setCoreParameter("SourceCode", sourceCode);
}

std::string ModifyUidWhiteBaselineRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyUidWhiteBaselineRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int ModifyUidWhiteBaselineRequest::getId()const
{
	return id_;
}

void ModifyUidWhiteBaselineRequest::setId(int id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

std::string ModifyUidWhiteBaselineRequest::getLang()const
{
	return lang_;
}

void ModifyUidWhiteBaselineRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

long ModifyUidWhiteBaselineRequest::getSrcUid()const
{
	return srcUid_;
}

void ModifyUidWhiteBaselineRequest::setSrcUid(long srcUid)
{
	srcUid_ = srcUid;
	setCoreParameter("SrcUid", std::to_string(srcUid));
}

