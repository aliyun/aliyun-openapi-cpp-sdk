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
		if(!valuePatchBaselinesPatchBaseline["Id"].isNull())
			patchBaselinesObject.id = valuePatchBaselinesPatchBaseline["Id"].asString();
		if(!valuePatchBaselinesPatchBaseline["Name"].isNull())
			patchBaselinesObject.name = valuePatchBaselinesPatchBaseline["Name"].asString();
		if(!valuePatchBaselinesPatchBaseline["CreatedDate"].isNull())
			patchBaselinesObject.createdDate = valuePatchBaselinesPatchBaseline["CreatedDate"].asString();
		if(!valuePatchBaselinesPatchBaseline["CreatedBy"].isNull())
			patchBaselinesObject.createdBy = valuePatchBaselinesPatchBaseline["CreatedBy"].asString();
		if(!valuePatchBaselinesPatchBaseline["UpdatedDate"].isNull())
			patchBaselinesObject.updatedDate = valuePatchBaselinesPatchBaseline["UpdatedDate"].asString();
		if(!valuePatchBaselinesPatchBaseline["UpdatedBy"].isNull())
			patchBaselinesObject.updatedBy = valuePatchBaselinesPatchBaseline["UpdatedBy"].asString();
		if(!valuePatchBaselinesPatchBaseline["Description"].isNull())
			patchBaselinesObject.description = valuePatchBaselinesPatchBaseline["Description"].asString();
		if(!valuePatchBaselinesPatchBaseline["ShareType"].isNull())
			patchBaselinesObject.shareType = valuePatchBaselinesPatchBaseline["ShareType"].asString();
		if(!valuePatchBaselinesPatchBaseline["OperationSystem"].isNull())
			patchBaselinesObject.operationSystem = valuePatchBaselinesPatchBaseline["OperationSystem"].asString();
		if(!valuePatchBaselinesPatchBaseline["IsDefault"].isNull())
			patchBaselinesObject.isDefault = valuePatchBaselinesPatchBaseline["IsDefault"].asString() == "true";
		patchBaselines_.push_back(patchBaselinesObject);
	}
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

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

