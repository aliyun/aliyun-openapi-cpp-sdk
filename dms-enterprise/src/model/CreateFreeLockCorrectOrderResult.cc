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

#include <alibabacloud/dms-enterprise/model/CreateFreeLockCorrectOrderResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

CreateFreeLockCorrectOrderResult::CreateFreeLockCorrectOrderResult() :
	ServiceResult()
{}

CreateFreeLockCorrectOrderResult::CreateFreeLockCorrectOrderResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateFreeLockCorrectOrderResult::~CreateFreeLockCorrectOrderResult()
{}

void CreateFreeLockCorrectOrderResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCreateOrderResult = value["CreateOrderResult"]["OrderIds"];
	for (const auto &item : allCreateOrderResult)
		createOrderResult_.push_back(item.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::vector<std::string> CreateFreeLockCorrectOrderResult::getCreateOrderResult()const
{
	return createOrderResult_;
}

std::string CreateFreeLockCorrectOrderResult::getErrorCode()const
{
	return errorCode_;
}

std::string CreateFreeLockCorrectOrderResult::getErrorMessage()const
{
	return errorMessage_;
}

bool CreateFreeLockCorrectOrderResult::getSuccess()const
{
	return success_;
}

