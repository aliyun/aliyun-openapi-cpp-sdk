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

#include <alibabacloud/rds-data/model/CommitTransactionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds_data;
using namespace AlibabaCloud::Rds_data::Model;

CommitTransactionResult::CommitTransactionResult() :
	ServiceResult()
{}

CommitTransactionResult::CommitTransactionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CommitTransactionResult::~CommitTransactionResult()
{}

void CommitTransactionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TransactionStatus"].isNull())
		data_.transactionStatus = dataNode["TransactionStatus"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string CommitTransactionResult::getMessage()const
{
	return message_;
}

CommitTransactionResult::Data CommitTransactionResult::getData()const
{
	return data_;
}

std::string CommitTransactionResult::getCode()const
{
	return code_;
}

bool CommitTransactionResult::getSuccess()const
{
	return success_;
}

