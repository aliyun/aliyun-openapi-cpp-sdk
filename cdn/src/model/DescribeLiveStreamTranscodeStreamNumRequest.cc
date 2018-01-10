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

#include <alibabacloud/cdn/model/DescribeLiveStreamTranscodeStreamNumRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeLiveStreamTranscodeStreamNumRequest::DescribeLiveStreamTranscodeStreamNumRequest() :
	CdnRequest("DescribeLiveStreamTranscodeStreamNum")
{}

DescribeLiveStreamTranscodeStreamNumRequest::~DescribeLiveStreamTranscodeStreamNumRequest()
{}

std::string DescribeLiveStreamTranscodeStreamNumRequest::getPullDomain()const
{
	return pullDomain_;
}

void DescribeLiveStreamTranscodeStreamNumRequest::setPullDomain(const std::string& pullDomain)
{
	pullDomain_ = pullDomain;
	setParameter("PullDomain", pullDomain);
}

std::string DescribeLiveStreamTranscodeStreamNumRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveStreamTranscodeStreamNumRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeLiveStreamTranscodeStreamNumRequest::getPushDomain()const
{
	return pushDomain_;
}

void DescribeLiveStreamTranscodeStreamNumRequest::setPushDomain(const std::string& pushDomain)
{
	pushDomain_ = pushDomain;
	setParameter("PushDomain", pushDomain);
}

long DescribeLiveStreamTranscodeStreamNumRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveStreamTranscodeStreamNumRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLiveStreamTranscodeStreamNumRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLiveStreamTranscodeStreamNumRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

