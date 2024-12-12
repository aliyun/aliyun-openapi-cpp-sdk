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

#include <alibabacloud/dms-enterprise/model/DeleteAbacPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

DeleteAbacPolicyResult::DeleteAbacPolicyResult() :
	ServiceResult()
{}

DeleteAbacPolicyResult::DeleteAbacPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteAbacPolicyResult::~DeleteAbacPolicyResult()
{}

void DeleteAbacPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["DeletePolicyResult"].isNull())
		deletePolicyResult_ = value["DeletePolicyResult"].asString() == "true";

}

bool DeleteAbacPolicyResult::getDeletePolicyResult()const
{
	return deletePolicyResult_;
}

std::string DeleteAbacPolicyResult::getErrorCode()const
{
	return errorCode_;
}

std::string DeleteAbacPolicyResult::getErrorMessage()const
{
	return errorMessage_;
}

bool DeleteAbacPolicyResult::getSuccess()const
{
	return success_;
}

