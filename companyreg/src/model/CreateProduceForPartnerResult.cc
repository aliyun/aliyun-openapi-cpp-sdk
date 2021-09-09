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

#include <alibabacloud/companyreg/model/CreateProduceForPartnerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

CreateProduceForPartnerResult::CreateProduceForPartnerResult() :
	ServiceResult()
{}

CreateProduceForPartnerResult::CreateProduceForPartnerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateProduceForPartnerResult::~CreateProduceForPartnerResult()
{}

void CreateProduceForPartnerResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["BizId"].isNull())
		bizId_ = value["BizId"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string CreateProduceForPartnerResult::getErrorMsg()const
{
	return errorMsg_;
}

std::string CreateProduceForPartnerResult::getErrorCode()const
{
	return errorCode_;
}

std::string CreateProduceForPartnerResult::getBizId()const
{
	return bizId_;
}

bool CreateProduceForPartnerResult::getSuccess()const
{
	return success_;
}

