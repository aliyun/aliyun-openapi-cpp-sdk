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

#include <alibabacloud/quickbi-public/model/AddWorkspaceUsersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

AddWorkspaceUsersResult::AddWorkspaceUsersResult() :
	ServiceResult()
{}

AddWorkspaceUsersResult::AddWorkspaceUsersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AddWorkspaceUsersResult::~AddWorkspaceUsersResult()
{}

void AddWorkspaceUsersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["Failure"].isNull())
		result_.failure = std::stoi(resultNode["Failure"].asString());
	if(!resultNode["FailureDetail"].isNull())
		result_.failureDetail = resultNode["FailureDetail"].asString();
	if(!resultNode["Success"].isNull())
		result_.success = std::stoi(resultNode["Success"].asString());
	if(!resultNode["Total"].isNull())
		result_.total = std::stoi(resultNode["Total"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool AddWorkspaceUsersResult::getSuccess()const
{
	return success_;
}

AddWorkspaceUsersResult::Result AddWorkspaceUsersResult::getResult()const
{
	return result_;
}

