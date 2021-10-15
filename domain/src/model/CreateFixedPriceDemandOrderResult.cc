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

#include <alibabacloud/domain/model/CreateFixedPriceDemandOrderResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

CreateFixedPriceDemandOrderResult::CreateFixedPriceDemandOrderResult() :
	ServiceResult()
{}

CreateFixedPriceDemandOrderResult::CreateFixedPriceDemandOrderResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateFixedPriceDemandOrderResult::~CreateFixedPriceDemandOrderResult()
{}

void CreateFixedPriceDemandOrderResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto moduleNode = value["Module"];
	if(!moduleNode["OrderNo"].isNull())
		module_.orderNo = moduleNode["OrderNo"].asString();
	if(!moduleNode["Price"].isNull())
		module_.price = std::stol(moduleNode["Price"].asString());
	if(!moduleNode["Domain"].isNull())
		module_.domain = moduleNode["Domain"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int CreateFixedPriceDemandOrderResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string CreateFixedPriceDemandOrderResult::getErrorCode()const
{
	return errorCode_;
}

CreateFixedPriceDemandOrderResult::Module CreateFixedPriceDemandOrderResult::getModule()const
{
	return module_;
}

bool CreateFixedPriceDemandOrderResult::getSuccess()const
{
	return success_;
}

