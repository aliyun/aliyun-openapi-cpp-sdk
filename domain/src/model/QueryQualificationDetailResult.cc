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

#include <alibabacloud/domain/model/QueryQualificationDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

QueryQualificationDetailResult::QueryQualificationDetailResult() :
	ServiceResult()
{}

QueryQualificationDetailResult::QueryQualificationDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryQualificationDetailResult::~QueryQualificationDetailResult()
{}

void QueryQualificationDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCredentialsNode = value["Credentials"]["QualificationCredential"];
	for (auto valueCredentialsQualificationCredential : allCredentialsNode)
	{
		QualificationCredential credentialsObject;
		if(!valueCredentialsQualificationCredential["CredentialType"].isNull())
			credentialsObject.credentialType = valueCredentialsQualificationCredential["CredentialType"].asString();
		if(!valueCredentialsQualificationCredential["CredentialNo"].isNull())
			credentialsObject.credentialNo = valueCredentialsQualificationCredential["CredentialNo"].asString();
		if(!valueCredentialsQualificationCredential["CredentialUrl"].isNull())
			credentialsObject.credentialUrl = valueCredentialsQualificationCredential["CredentialUrl"].asString();
		credentials_.push_back(credentialsObject);
	}
	if(!value["AuditStatus"].isNull())
		auditStatus_ = std::stoi(value["AuditStatus"].asString());
	if(!value["TrackId"].isNull())
		trackId_ = value["TrackId"].asString();

}

int QueryQualificationDetailResult::getAuditStatus()const
{
	return auditStatus_;
}

std::vector<QueryQualificationDetailResult::QualificationCredential> QueryQualificationDetailResult::getCredentials()const
{
	return credentials_;
}

std::string QueryQualificationDetailResult::getTrackId()const
{
	return trackId_;
}

