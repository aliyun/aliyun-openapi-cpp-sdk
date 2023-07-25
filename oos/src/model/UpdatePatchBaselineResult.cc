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

#include <alibabacloud/oos/model/UpdatePatchBaselineResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Oos;
using namespace AlibabaCloud::Oos::Model;

UpdatePatchBaselineResult::UpdatePatchBaselineResult() :
	ServiceResult()
{}

UpdatePatchBaselineResult::UpdatePatchBaselineResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdatePatchBaselineResult::~UpdatePatchBaselineResult()
{}

void UpdatePatchBaselineResult::parse(const std::string &payload)
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
	if(!patchBaselineNode["RejectedPatchesAction"].isNull())
		patchBaseline_.rejectedPatchesAction = patchBaselineNode["RejectedPatchesAction"].asString();
	if(!patchBaselineNode["ApprovedPatchesEnableNonSecurity"].isNull())
		patchBaseline_.approvedPatchesEnableNonSecurity = patchBaselineNode["ApprovedPatchesEnableNonSecurity"].asString() == "true";
	auto allTagsNode = patchBaselineNode["Tags"]["TagsItem"];
	for (auto patchBaselineNodeTagsTagsItem : allTagsNode)
	{
		PatchBaseline::TagsItem tagsItemObject;
		if(!patchBaselineNodeTagsTagsItem["TagKey"].isNull())
			tagsItemObject.tagKey = patchBaselineNodeTagsTagsItem["TagKey"].asString();
		if(!patchBaselineNodeTagsTagsItem["TagValue"].isNull())
			tagsItemObject.tagValue = patchBaselineNodeTagsTagsItem["TagValue"].asString();
		patchBaseline_.tags.push_back(tagsItemObject);
	}
		auto allRejectedPatches = patchBaselineNode["RejectedPatches"]["RejectedPatches"];
		for (auto value : allRejectedPatches)
			patchBaseline_.rejectedPatches.push_back(value.asString());
		auto allApprovedPatches = patchBaselineNode["ApprovedPatches"]["ApprovedPatches"];
		for (auto value : allApprovedPatches)
			patchBaseline_.approvedPatches.push_back(value.asString());
		auto allSources = patchBaselineNode["Sources"]["Sources"];
		for (auto value : allSources)
			patchBaseline_.sources.push_back(value.asString());

}

UpdatePatchBaselineResult::PatchBaseline UpdatePatchBaselineResult::getPatchBaseline()const
{
	return patchBaseline_;
}

