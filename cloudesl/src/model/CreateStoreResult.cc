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

#include <alibabacloud/cloudesl/model/CreateStoreResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

CreateStoreResult::CreateStoreResult() :
	ServiceResult()
{}

CreateStoreResult::CreateStoreResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateStoreResult::~CreateStoreResult()
{}

void CreateStoreResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["StoreId"].isNull())
		storeId_ = value["StoreId"].asString();

}

std::string CreateStoreResult::getMessage()const
{
	return message_;
}

std::string CreateStoreResult::getStoreId()const
{
	return storeId_;
}

std::string CreateStoreResult::getErrorCode()const
{
	return errorCode_;
}

bool CreateStoreResult::getSuccess()const
{
	return success_;
}

