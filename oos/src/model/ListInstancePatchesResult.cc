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

#include <alibabacloud/oos/model/ListInstancePatchesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Oos;
using namespace AlibabaCloud::Oos::Model;

ListInstancePatchesResult::ListInstancePatchesResult() :
	ServiceResult()
{}

ListInstancePatchesResult::ListInstancePatchesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInstancePatchesResult::~ListInstancePatchesResult()
{}

void ListInstancePatchesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPatchesNode = value["Patches"]["Patch"];
	for (auto valuePatchesPatch : allPatchesNode)
	{
		Patch patchesObject;
		if(!valuePatchesPatch["Severity"].isNull())
			patchesObject.severity = valuePatchesPatch["Severity"].asString();
		if(!valuePatchesPatch["Status"].isNull())
			patchesObject.status = valuePatchesPatch["Status"].asString();
		if(!valuePatchesPatch["InstalledTime"].isNull())
			patchesObject.installedTime = valuePatchesPatch["InstalledTime"].asString();
		if(!valuePatchesPatch["KBId"].isNull())
			patchesObject.kBId = valuePatchesPatch["KBId"].asString();
		if(!valuePatchesPatch["Title"].isNull())
			patchesObject.title = valuePatchesPatch["Title"].asString();
		if(!valuePatchesPatch["Classification"].isNull())
			patchesObject.classification = valuePatchesPatch["Classification"].asString();
		patches_.push_back(patchesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::string ListInstancePatchesResult::getNextToken()const
{
	return nextToken_;
}

int ListInstancePatchesResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListInstancePatchesResult::Patch> ListInstancePatchesResult::getPatches()const
{
	return patches_;
}

