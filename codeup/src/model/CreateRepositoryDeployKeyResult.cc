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

#include <alibabacloud/codeup/model/CreateRepositoryDeployKeyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Codeup;
using namespace AlibabaCloud::Codeup::Model;

CreateRepositoryDeployKeyResult::CreateRepositoryDeployKeyResult() :
	ServiceResult()
{}

CreateRepositoryDeployKeyResult::CreateRepositoryDeployKeyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateRepositoryDeployKeyResult::~CreateRepositoryDeployKeyResult()
{}

void CreateRepositoryDeployKeyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["Id"].isNull())
		result_.id = std::stol(resultNode["Id"].asString());
	if(!resultNode["Title"].isNull())
		result_.title = resultNode["Title"].asString();
	if(!resultNode["Key"].isNull())
		result_.key = resultNode["Key"].asString();
	if(!resultNode["FingerPrint"].isNull())
		result_.fingerPrint = resultNode["FingerPrint"].asString();
	if(!resultNode["CreatedAt"].isNull())
		result_.createdAt = resultNode["CreatedAt"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string CreateRepositoryDeployKeyResult::getErrorCode()const
{
	return errorCode_;
}

std::string CreateRepositoryDeployKeyResult::getErrorMessage()const
{
	return errorMessage_;
}

bool CreateRepositoryDeployKeyResult::getSuccess()const
{
	return success_;
}

CreateRepositoryDeployKeyResult::Result CreateRepositoryDeployKeyResult::getResult()const
{
	return result_;
}

