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

#include <alibabacloud/domain/model/QueryEmailVerificationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

QueryEmailVerificationResult::QueryEmailVerificationResult() :
	ServiceResult()
{}

QueryEmailVerificationResult::QueryEmailVerificationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryEmailVerificationResult::~QueryEmailVerificationResult()
{}

void QueryEmailVerificationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["VerificationStatus"].isNull())
		verificationStatus_ = std::stoi(value["VerificationStatus"].asString());
	if(!value["GmtCreate"].isNull())
		gmtCreate_ = value["GmtCreate"].asString();
	if(!value["Email"].isNull())
		email_ = value["Email"].asString();
	if(!value["EmailVerificationNo"].isNull())
		emailVerificationNo_ = value["EmailVerificationNo"].asString();
	if(!value["ConfirmIp"].isNull())
		confirmIp_ = value["ConfirmIp"].asString();
	if(!value["UserId"].isNull())
		userId_ = value["UserId"].asString();
	if(!value["GmtModified"].isNull())
		gmtModified_ = value["GmtModified"].asString();
	if(!value["SendIp"].isNull())
		sendIp_ = value["SendIp"].asString();
	if(!value["VerificationTime"].isNull())
		verificationTime_ = value["VerificationTime"].asString();
	if(!value["TokenSendTime"].isNull())
		tokenSendTime_ = value["TokenSendTime"].asString();

}

int QueryEmailVerificationResult::getVerificationStatus()const
{
	return verificationStatus_;
}

std::string QueryEmailVerificationResult::getGmtCreate()const
{
	return gmtCreate_;
}

std::string QueryEmailVerificationResult::getEmail()const
{
	return email_;
}

std::string QueryEmailVerificationResult::getEmailVerificationNo()const
{
	return emailVerificationNo_;
}

std::string QueryEmailVerificationResult::getConfirmIp()const
{
	return confirmIp_;
}

std::string QueryEmailVerificationResult::getUserId()const
{
	return userId_;
}

std::string QueryEmailVerificationResult::getGmtModified()const
{
	return gmtModified_;
}

std::string QueryEmailVerificationResult::getSendIp()const
{
	return sendIp_;
}

std::string QueryEmailVerificationResult::getVerificationTime()const
{
	return verificationTime_;
}

std::string QueryEmailVerificationResult::getTokenSendTime()const
{
	return tokenSendTime_;
}

