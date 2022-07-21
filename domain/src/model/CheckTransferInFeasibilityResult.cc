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

#include <alibabacloud/domain/model/CheckTransferInFeasibilityResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

CheckTransferInFeasibilityResult::CheckTransferInFeasibilityResult() :
	ServiceResult()
{}

CheckTransferInFeasibilityResult::CheckTransferInFeasibilityResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CheckTransferInFeasibilityResult::~CheckTransferInFeasibilityResult()
{}

void CheckTransferInFeasibilityResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["CanTransfer"].isNull())
		canTransfer_ = value["CanTransfer"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ProductId"].isNull())
		productId_ = value["ProductId"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();

}

bool CheckTransferInFeasibilityResult::getCanTransfer()const
{
	return canTransfer_;
}

std::string CheckTransferInFeasibilityResult::getMessage()const
{
	return message_;
}

std::string CheckTransferInFeasibilityResult::getProductId()const
{
	return productId_;
}

std::string CheckTransferInFeasibilityResult::getCode()const
{
	return code_;
}

