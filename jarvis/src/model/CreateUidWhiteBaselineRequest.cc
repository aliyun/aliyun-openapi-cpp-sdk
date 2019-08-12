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

#include <alibabacloud/jarvis/model/CreateUidWhiteBaselineRequest.h>

using AlibabaCloud::Jarvis::Model::CreateUidWhiteBaselineRequest;

CreateUidWhiteBaselineRequest::CreateUidWhiteBaselineRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "CreateUidWhiteBaseline")
{}

CreateUidWhiteBaselineRequest::~CreateUidWhiteBaselineRequest()
{}

long CreateUidWhiteBaselineRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateUidWhiteBaselineRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateUidWhiteBaselineRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateUidWhiteBaselineRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string CreateUidWhiteBaselineRequest::getRemark()const
{
	return remark_;
}

void CreateUidWhiteBaselineRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setCoreParameter("Remark", remark);
}

std::string CreateUidWhiteBaselineRequest::getLang()const
{
	return lang_;
}

void CreateUidWhiteBaselineRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

long CreateUidWhiteBaselineRequest::getSrcUid()const
{
	return srcUid_;
}

void CreateUidWhiteBaselineRequest::setSrcUid(long srcUid)
{
	srcUid_ = srcUid;
	setCoreParameter("SrcUid", srcUid);
}

std::string CreateUidWhiteBaselineRequest::getSourceCode()const
{
	return sourceCode_;
}

void CreateUidWhiteBaselineRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setCoreParameter("SourceCode", sourceCode);
}

