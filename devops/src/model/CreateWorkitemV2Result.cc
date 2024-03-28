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

#include <alibabacloud/devops/model/CreateWorkitemV2Result.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

CreateWorkitemV2Result::CreateWorkitemV2Result() :
	ServiceResult()
{}

CreateWorkitemV2Result::CreateWorkitemV2Result(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateWorkitemV2Result::~CreateWorkitemV2Result()
{}

void CreateWorkitemV2Result::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString();
	if(!value["workitemIdentifier"].isNull())
		workitemIdentifier_ = value["workitemIdentifier"].asString();

}

std::string CreateWorkitemV2Result::getWorkitemIdentifier()const
{
	return workitemIdentifier_;
}

std::string CreateWorkitemV2Result::getRequestId()const
{
	return requestId_;
}

std::string CreateWorkitemV2Result::getErrorCode()const
{
	return errorCode_;
}

std::string CreateWorkitemV2Result::getErrorMessage()const
{
	return errorMessage_;
}

std::string CreateWorkitemV2Result::getSuccess()const
{
	return success_;
}

