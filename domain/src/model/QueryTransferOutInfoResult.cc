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

#include <alibabacloud/domain/model/QueryTransferOutInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

QueryTransferOutInfoResult::QueryTransferOutInfoResult() :
	ServiceResult()
{}

QueryTransferOutInfoResult::QueryTransferOutInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryTransferOutInfoResult::~QueryTransferOutInfoResult()
{}

void QueryTransferOutInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Status"].isNull())
		status_ = std::stoi(value["Status"].asString());
	if(!value["Email"].isNull())
		email_ = value["Email"].asString();
	if(!value["ExpirationDate"].isNull())
		expirationDate_ = value["ExpirationDate"].asString();
	if(!value["ResultMsg"].isNull())
		resultMsg_ = value["ResultMsg"].asString();
	if(!value["PendingRequestDate"].isNull())
		pendingRequestDate_ = value["PendingRequestDate"].asString();
	if(!value["ResultCode"].isNull())
		resultCode_ = value["ResultCode"].asString();
	if(!value["TransferAuthorizationCodeSendDate"].isNull())
		transferAuthorizationCodeSendDate_ = value["TransferAuthorizationCodeSendDate"].asString();

}

int QueryTransferOutInfoResult::getStatus()const
{
	return status_;
}

std::string QueryTransferOutInfoResult::getEmail()const
{
	return email_;
}

std::string QueryTransferOutInfoResult::getExpirationDate()const
{
	return expirationDate_;
}

std::string QueryTransferOutInfoResult::getResultMsg()const
{
	return resultMsg_;
}

std::string QueryTransferOutInfoResult::getPendingRequestDate()const
{
	return pendingRequestDate_;
}

std::string QueryTransferOutInfoResult::getResultCode()const
{
	return resultCode_;
}

std::string QueryTransferOutInfoResult::getTransferAuthorizationCodeSendDate()const
{
	return transferAuthorizationCodeSendDate_;
}

