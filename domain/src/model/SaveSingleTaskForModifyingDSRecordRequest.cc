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

#include <alibabacloud/domain/model/SaveSingleTaskForModifyingDSRecordRequest.h>

using AlibabaCloud::Domain::Model::SaveSingleTaskForModifyingDSRecordRequest;

SaveSingleTaskForModifyingDSRecordRequest::SaveSingleTaskForModifyingDSRecordRequest() :
	RpcServiceRequest("domain", "2018-01-29", "SaveSingleTaskForModifyingDSRecord")
{
	setMethod(HttpRequest::Method::Post);
}

SaveSingleTaskForModifyingDSRecordRequest::~SaveSingleTaskForModifyingDSRecordRequest()
{}

int SaveSingleTaskForModifyingDSRecordRequest::getKeyTag()const
{
	return keyTag_;
}

void SaveSingleTaskForModifyingDSRecordRequest::setKeyTag(int keyTag)
{
	keyTag_ = keyTag;
	setCoreParameter("KeyTag", std::to_string(keyTag));
}

std::string SaveSingleTaskForModifyingDSRecordRequest::getDomainName()const
{
	return domainName_;
}

void SaveSingleTaskForModifyingDSRecordRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string SaveSingleTaskForModifyingDSRecordRequest::getUserClientIp()const
{
	return userClientIp_;
}

void SaveSingleTaskForModifyingDSRecordRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

int SaveSingleTaskForModifyingDSRecordRequest::getDigestType()const
{
	return digestType_;
}

void SaveSingleTaskForModifyingDSRecordRequest::setDigestType(int digestType)
{
	digestType_ = digestType;
	setCoreParameter("DigestType", std::to_string(digestType));
}

std::string SaveSingleTaskForModifyingDSRecordRequest::getDigest()const
{
	return digest_;
}

void SaveSingleTaskForModifyingDSRecordRequest::setDigest(const std::string& digest)
{
	digest_ = digest;
	setCoreParameter("Digest", digest);
}

std::string SaveSingleTaskForModifyingDSRecordRequest::getLang()const
{
	return lang_;
}

void SaveSingleTaskForModifyingDSRecordRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

int SaveSingleTaskForModifyingDSRecordRequest::getAlgorithm()const
{
	return algorithm_;
}

void SaveSingleTaskForModifyingDSRecordRequest::setAlgorithm(int algorithm)
{
	algorithm_ = algorithm;
	setCoreParameter("Algorithm", std::to_string(algorithm));
}

