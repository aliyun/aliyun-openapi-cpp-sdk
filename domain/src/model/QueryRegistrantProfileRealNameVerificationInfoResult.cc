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

#include <alibabacloud/domain/model/QueryRegistrantProfileRealNameVerificationInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

QueryRegistrantProfileRealNameVerificationInfoResult::QueryRegistrantProfileRealNameVerificationInfoResult() :
	ServiceResult()
{}

QueryRegistrantProfileRealNameVerificationInfoResult::QueryRegistrantProfileRealNameVerificationInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryRegistrantProfileRealNameVerificationInfoResult::~QueryRegistrantProfileRealNameVerificationInfoResult()
{}

void QueryRegistrantProfileRealNameVerificationInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["IdentityCredentialType"].isNull())
		identityCredentialType_ = value["IdentityCredentialType"].asString();
	if(!value["ModificationDate"].isNull())
		modificationDate_ = value["ModificationDate"].asString();
	if(!value["IdentityCredential"].isNull())
		identityCredential_ = value["IdentityCredential"].asString();
	if(!value["SubmissionDate"].isNull())
		submissionDate_ = value["SubmissionDate"].asString();
	if(!value["IdentityCredentialNo"].isNull())
		identityCredentialNo_ = value["IdentityCredentialNo"].asString();
	if(!value["RegistrantProfileId"].isNull())
		registrantProfileId_ = std::stol(value["RegistrantProfileId"].asString());
	if(!value["IdentityCredentialUrl"].isNull())
		identityCredentialUrl_ = value["IdentityCredentialUrl"].asString();

}

std::string QueryRegistrantProfileRealNameVerificationInfoResult::getIdentityCredentialType()const
{
	return identityCredentialType_;
}

std::string QueryRegistrantProfileRealNameVerificationInfoResult::getModificationDate()const
{
	return modificationDate_;
}

std::string QueryRegistrantProfileRealNameVerificationInfoResult::getIdentityCredential()const
{
	return identityCredential_;
}

std::string QueryRegistrantProfileRealNameVerificationInfoResult::getSubmissionDate()const
{
	return submissionDate_;
}

std::string QueryRegistrantProfileRealNameVerificationInfoResult::getIdentityCredentialNo()const
{
	return identityCredentialNo_;
}

long QueryRegistrantProfileRealNameVerificationInfoResult::getRegistrantProfileId()const
{
	return registrantProfileId_;
}

std::string QueryRegistrantProfileRealNameVerificationInfoResult::getIdentityCredentialUrl()const
{
	return identityCredentialUrl_;
}

