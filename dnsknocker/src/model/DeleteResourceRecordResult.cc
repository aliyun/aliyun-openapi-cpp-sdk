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

#include <alibabacloud/dnsknocker/model/DeleteResourceRecordResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DnsKnocker;
using namespace AlibabaCloud::DnsKnocker::Model;

DeleteResourceRecordResult::DeleteResourceRecordResult() :
	ServiceResult()
{}

DeleteResourceRecordResult::DeleteResourceRecordResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteResourceRecordResult::~DeleteResourceRecordResult()
{}

void DeleteResourceRecordResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ResultCode"].isNull())
		resultCode_ = value["ResultCode"].asString();
	if(!value["ResultMessage"].isNull())
		resultMessage_ = value["ResultMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["TransactionId"].isNull())
		transactionId_ = value["TransactionId"].asString();

}

std::string DeleteResourceRecordResult::getResultMessage()const
{
	return resultMessage_;
}

std::string DeleteResourceRecordResult::getResultCode()const
{
	return resultCode_;
}

std::string DeleteResourceRecordResult::getSuccess()const
{
	return success_;
}

std::string DeleteResourceRecordResult::getTransactionId()const
{
	return transactionId_;
}

