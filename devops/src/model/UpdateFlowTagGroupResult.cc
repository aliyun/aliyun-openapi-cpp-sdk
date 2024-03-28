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

#include <alibabacloud/devops/model/UpdateFlowTagGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

UpdateFlowTagGroupResult::UpdateFlowTagGroupResult() :
	ServiceResult()
{}

UpdateFlowTagGroupResult::UpdateFlowTagGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateFlowTagGroupResult::~UpdateFlowTagGroupResult()
{}

void UpdateFlowTagGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();

}

std::string UpdateFlowTagGroupResult::getRequestId()const
{
	return requestId_;
}

std::string UpdateFlowTagGroupResult::getErrorCode()const
{
	return errorCode_;
}

std::string UpdateFlowTagGroupResult::getErrorMessage()const
{
	return errorMessage_;
}

bool UpdateFlowTagGroupResult::getSuccess()const
{
	return success_;
}

