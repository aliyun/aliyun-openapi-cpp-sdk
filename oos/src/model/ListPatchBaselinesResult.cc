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

#include <alibabacloud/oos/model/ListPatchBaselinesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Oos;
using namespace AlibabaCloud::Oos::Model;

ListPatchBaselinesResult::ListPatchBaselinesResult() :
	ServiceResult()
{}

ListPatchBaselinesResult::ListPatchBaselinesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPatchBaselinesResult::~ListPatchBaselinesResult()
{}

void ListPatchBaselinesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPatchBaselinesNode = value["PatchBaselines"]["PatchBaseline"];
	for (auto valuePatchBaselinesPatchBaseline : allPatchBaselinesNode)
	{
		PatchBaseline patchBaselinesObject;
		if(!valuePatchBaselinesPatchBaseline["OperationSystem"].isNull())
			patchBaselinesObject.operationSystem = valuePatchBaselinesPatchBaseline["OperationSystem"].asString();
		if(!valuePatchBaselinesPatchBaseline["IsDefault"].isNull())
			patchBaselinesObject.isDefault = valuePatchBaselinesPatchBaseline["IsDefault"].asString() == "true";
		if(!valuePatchBaselinesPatchBaseline["Description"].isNull())
			patchBaselinesObject.description = valuePatchBaselinesPatchBaseline["Description"].asString();
		if(!valuePatchBaselinesPatchBaseline["UpdatedDate"].isNull())
			patchBaselinesObject.updatedDate = valuePatchBaselinesPatchBaseline["UpdatedDate"].asString();
		if(!valuePatchBaselinesPatchBaseline["UpdatedBy"].isNull())
			patchBaselinesObject.updatedBy = valuePatchBaselinesPatchBaseline["UpdatedBy"].asString();
		if(!valuePatchBaselinesPatchBaseline["CreatedBy"].isNull())
			patchBaselinesObject.createdBy = valuePatchBaselinesPatchBaseline["CreatedBy"].asString();
		if(!valuePatchBaselinesPatchBaseline["CreatedDate"].isNull())
			patchBaselinesObject.createdDate = valuePatchBaselinesPatchBaseline["CreatedDate"].asString();
		if(!valuePatchBaselinesPatchBaseline["Name"].isNull())
			patchBaselinesObject.name = valuePatchBaselinesPatchBaseline["Name"].asString();
		if(!valuePatchBaselinesPatchBaseline["Id"].isNull())
			patchBaselinesObject.id = valuePatchBaselinesPatchBaseline["Id"].asString();
		if(!valuePatchBaselinesPatchBaseline["ShareType"].isNull())
			patchBaselinesObject.shareType = valuePatchBaselinesPatchBaseline["ShareType"].asString();
		if(!valuePatchBaselinesPatchBaseline["ApprovedPatchesEnableNonSecurity"].isNull())
			patchBaselinesObject.approvedPatchesEnableNonSecurity = valuePatchBaselinesPatchBaseline["ApprovedPatchesEnableNonSecurity"].asString() == "true";
		auto allTagsNode = valuePatchBaselinesPatchBaseline["Tags"]["TagsItem"];
		for (auto valuePatchBaselinesPatchBaselineTagsTagsItem : allTagsNode)
		{
			PatchBaseline::TagsItem tagsObject;
			if(!valuePatchBaselinesPatchBaselineTagsTagsItem["TagKey"].isNull())
				tagsObject.tagKey = valuePatchBaselinesPatchBaselineTagsTagsItem["TagKey"].asString();
			if(!valuePatchBaselinesPatchBaselineTagsTagsItem["TagValue"].isNull())
				tagsObject.tagValue = valuePatchBaselinesPatchBaselineTagsTagsItem["TagValue"].asString();
			patchBaselinesObject.tags.push_back(tagsObject);
		}
		auto allApprovedPatches = value["ApprovedPatches"]["ApprovedPatches"];
		for (auto value : allApprovedPatches)
			patchBaselinesObject.approvedPatches.push_back(value.asString());
		auto allSources = value["Sources"]["Sources"];
		for (auto value : allSources)
			patchBaselinesObject.sources.push_back(value.asString());
		patchBaselines_.push_back(patchBaselinesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::string ListPatchBaselinesResult::getNextToken()const
{
	return nextToken_;
}

int ListPatchBaselinesResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListPatchBaselinesResult::PatchBaseline> ListPatchBaselinesResult::getPatchBaselines()const
{
	return patchBaselines_;
}

