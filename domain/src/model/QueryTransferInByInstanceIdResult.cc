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

#include <alibabacloud/domain/model/QueryTransferInByInstanceIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

QueryTransferInByInstanceIdResult::QueryTransferInByInstanceIdResult() :
	ServiceResult()
{}

QueryTransferInByInstanceIdResult::QueryTransferInByInstanceIdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryTransferInByInstanceIdResult::~QueryTransferInByInstanceIdResult()
{}

void QueryTransferInByInstanceIdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Status"].isNull())
		status_ = std::stoi(value["Status"].asString());
	if(!value["TransferAuthorizationCodeSubmissionDate"].isNull())
		transferAuthorizationCodeSubmissionDate_ = value["TransferAuthorizationCodeSubmissionDate"].asString();
	if(!value["Email"].isNull())
		email_ = value["Email"].asString();
	if(!value["ProgressBarType"].isNull())
		progressBarType_ = std::stoi(value["ProgressBarType"].asString());
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["SubmissionDateLong"].isNull())
		submissionDateLong_ = std::stol(value["SubmissionDateLong"].asString());
	if(!value["SubmissionDate"].isNull())
		submissionDate_ = value["SubmissionDate"].asString();
	if(!value["SimpleTransferInStatus"].isNull())
		simpleTransferInStatus_ = value["SimpleTransferInStatus"].asString();
	if(!value["TransferAuthorizationCodeSubmissionDateLong"].isNull())
		transferAuthorizationCodeSubmissionDateLong_ = std::stol(value["TransferAuthorizationCodeSubmissionDateLong"].asString());
	if(!value["ExpirationDateLong"].isNull())
		expirationDateLong_ = std::stol(value["ExpirationDateLong"].asString());
	if(!value["ExpirationDate"].isNull())
		expirationDate_ = value["ExpirationDate"].asString();
	if(!value["NeedMailCheck"].isNull())
		needMailCheck_ = value["NeedMailCheck"].asString() == "true";
	if(!value["UserId"].isNull())
		userId_ = value["UserId"].asString();
	if(!value["ModificationDate"].isNull())
		modificationDate_ = value["ModificationDate"].asString();
	if(!value["ResultDateLong"].isNull())
		resultDateLong_ = std::stol(value["ResultDateLong"].asString());
	if(!value["ResultMsg"].isNull())
		resultMsg_ = value["ResultMsg"].asString();
	if(!value["WhoisMailStatus"].isNull())
		whoisMailStatus_ = value["WhoisMailStatus"].asString() == "true";
	if(!value["ModificationDateLong"].isNull())
		modificationDateLong_ = std::stol(value["ModificationDateLong"].asString());
	if(!value["ResultCode"].isNull())
		resultCode_ = value["ResultCode"].asString();
	if(!value["ResultDate"].isNull())
		resultDate_ = value["ResultDate"].asString();

}

int QueryTransferInByInstanceIdResult::getStatus()const
{
	return status_;
}

std::string QueryTransferInByInstanceIdResult::getTransferAuthorizationCodeSubmissionDate()const
{
	return transferAuthorizationCodeSubmissionDate_;
}

std::string QueryTransferInByInstanceIdResult::getEmail()const
{
	return email_;
}

int QueryTransferInByInstanceIdResult::getProgressBarType()const
{
	return progressBarType_;
}

std::string QueryTransferInByInstanceIdResult::getInstanceId()const
{
	return instanceId_;
}

std::string QueryTransferInByInstanceIdResult::getDomainName()const
{
	return domainName_;
}

long QueryTransferInByInstanceIdResult::getSubmissionDateLong()const
{
	return submissionDateLong_;
}

std::string QueryTransferInByInstanceIdResult::getSubmissionDate()const
{
	return submissionDate_;
}

std::string QueryTransferInByInstanceIdResult::getSimpleTransferInStatus()const
{
	return simpleTransferInStatus_;
}

long QueryTransferInByInstanceIdResult::getTransferAuthorizationCodeSubmissionDateLong()const
{
	return transferAuthorizationCodeSubmissionDateLong_;
}

long QueryTransferInByInstanceIdResult::getExpirationDateLong()const
{
	return expirationDateLong_;
}

std::string QueryTransferInByInstanceIdResult::getExpirationDate()const
{
	return expirationDate_;
}

bool QueryTransferInByInstanceIdResult::getNeedMailCheck()const
{
	return needMailCheck_;
}

std::string QueryTransferInByInstanceIdResult::getUserId()const
{
	return userId_;
}

std::string QueryTransferInByInstanceIdResult::getModificationDate()const
{
	return modificationDate_;
}

long QueryTransferInByInstanceIdResult::getResultDateLong()const
{
	return resultDateLong_;
}

std::string QueryTransferInByInstanceIdResult::getResultMsg()const
{
	return resultMsg_;
}

bool QueryTransferInByInstanceIdResult::getWhoisMailStatus()const
{
	return whoisMailStatus_;
}

long QueryTransferInByInstanceIdResult::getModificationDateLong()const
{
	return modificationDateLong_;
}

std::string QueryTransferInByInstanceIdResult::getResultCode()const
{
	return resultCode_;
}

std::string QueryTransferInByInstanceIdResult::getResultDate()const
{
	return resultDate_;
}

