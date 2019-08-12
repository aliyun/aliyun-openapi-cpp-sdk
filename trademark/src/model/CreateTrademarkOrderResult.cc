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

#include <alibabacloud/trademark/model/CreateTrademarkOrderResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Trademark;
using namespace AlibabaCloud::Trademark::Model;

CreateTrademarkOrderResult::CreateTrademarkOrderResult() :
	ServiceResult()
{}

CreateTrademarkOrderResult::CreateTrademarkOrderResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateTrademarkOrderResult::~CreateTrademarkOrderResult()
{}

void CreateTrademarkOrderResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["OrderId"].isNull())
		orderId_ = std::stol(value["OrderId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();

}

std::string CreateTrademarkOrderResult::getErrorMsg()const
{
	return errorMsg_;
}

long CreateTrademarkOrderResult::getOrderId()const
{
	return orderId_;
}

bool CreateTrademarkOrderResult::getSuccess()const
{
	return success_;
}

