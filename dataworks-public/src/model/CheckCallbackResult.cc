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

#include <alibabacloud/dataworks-public/model/CheckCallbackResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

CheckCallbackResult::CheckCallbackResult() :
	ServiceResult()
{}

CheckCallbackResult::CheckCallbackResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CheckCallbackResult::~CheckCallbackResult()
{}

void CheckCallbackResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ReturnCode"].isNull())
		returnCode_ = value["ReturnCode"].asString();
	if(!value["ReturnValue"].isNull())
		returnValue_ = value["ReturnValue"].asString() == "true";

}

std::string CheckCallbackResult::getReturnCode()const
{
	return returnCode_;
}

bool CheckCallbackResult::getReturnValue()const
{
	return returnValue_;
}

