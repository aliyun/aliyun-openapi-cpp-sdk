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

#include <alibabacloud/oos/model/RegisterDefaultPatchBaselineResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Oos;
using namespace AlibabaCloud::Oos::Model;

RegisterDefaultPatchBaselineResult::RegisterDefaultPatchBaselineResult() :
	ServiceResult()
{}

RegisterDefaultPatchBaselineResult::RegisterDefaultPatchBaselineResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RegisterDefaultPatchBaselineResult::~RegisterDefaultPatchBaselineResult()
{}

void RegisterDefaultPatchBaselineResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto patchBaselineNode = value["PatchBaseline"];
	if(!patchBaselineNode["OperationSystem"].isNull())
		patchBaseline_.operationSystem = patchBaselineNode["OperationSystem"].asString();
	if(!patchBaselineNode["Description"].isNull())
		patchBaseline_.description = patchBaselineNode["Description"].asString();
	if(!patchBaselineNode["UpdatedDate"].isNull())
		patchBaseline_.updatedDate = patchBaselineNode["UpdatedDate"].asString();
	if(!patchBaselineNode["UpdatedBy"].isNull())
		patchBaseline_.updatedBy = patchBaselineNode["UpdatedBy"].asString();
	if(!patchBaselineNode["CreatedBy"].isNull())
		patchBaseline_.createdBy = patchBaselineNode["CreatedBy"].asString();
	if(!patchBaselineNode["CreatedDate"].isNull())
		patchBaseline_.createdDate = patchBaselineNode["CreatedDate"].asString();
	if(!patchBaselineNode["Name"].isNull())
		patchBaseline_.name = patchBaselineNode["Name"].asString();
	if(!patchBaselineNode["ApprovalRules"].isNull())
		patchBaseline_.approvalRules = patchBaselineNode["ApprovalRules"].asString();
	if(!patchBaselineNode["Id"].isNull())
		patchBaseline_.id = patchBaselineNode["Id"].asString();
	if(!patchBaselineNode["ShareType"].isNull())
		patchBaseline_.shareType = patchBaselineNode["ShareType"].asString();

}

RegisterDefaultPatchBaselineResult::PatchBaseline RegisterDefaultPatchBaselineResult::getPatchBaseline()const
{
	return patchBaseline_;
}

