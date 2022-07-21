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

#include <alibabacloud/domain/model/QueryDomainRealNameVerificationInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

QueryDomainRealNameVerificationInfoResult::QueryDomainRealNameVerificationInfoResult() :
	ServiceResult()
{}

QueryDomainRealNameVerificationInfoResult::QueryDomainRealNameVerificationInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDomainRealNameVerificationInfoResult::~QueryDomainRealNameVerificationInfoResult()
{}

void QueryDomainRealNameVerificationInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["IdentityCredentialType"].isNull())
		identityCredentialType_ = value["IdentityCredentialType"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["IdentityCredential"].isNull())
		identityCredential_ = value["IdentityCredential"].asString();
	if(!value["SubmissionDate"].isNull())
		submissionDate_ = value["SubmissionDate"].asString();
	if(!value["IdentityCredentialNo"].isNull())
		identityCredentialNo_ = value["IdentityCredentialNo"].asString();
	if(!value["IdentityCredentialUrl"].isNull())
		identityCredentialUrl_ = value["IdentityCredentialUrl"].asString();

}

std::string QueryDomainRealNameVerificationInfoResult::getIdentityCredentialType()const
{
	return identityCredentialType_;
}

std::string QueryDomainRealNameVerificationInfoResult::getInstanceId()const
{
	return instanceId_;
}

std::string QueryDomainRealNameVerificationInfoResult::getDomainName()const
{
	return domainName_;
}

std::string QueryDomainRealNameVerificationInfoResult::getIdentityCredential()const
{
	return identityCredential_;
}

std::string QueryDomainRealNameVerificationInfoResult::getSubmissionDate()const
{
	return submissionDate_;
}

std::string QueryDomainRealNameVerificationInfoResult::getIdentityCredentialNo()const
{
	return identityCredentialNo_;
}

std::string QueryDomainRealNameVerificationInfoResult::getIdentityCredentialUrl()const
{
	return identityCredentialUrl_;
}

