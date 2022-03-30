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

#include <alibabacloud/live/model/ListPlaylistItemsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

ListPlaylistItemsResult::ListPlaylistItemsResult() :
	ServiceResult()
{}

ListPlaylistItemsResult::ListPlaylistItemsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPlaylistItemsResult::~ListPlaylistItemsResult()
{}

void ListPlaylistItemsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allProgramItemsNode = value["ProgramItems"]["ProgramItem"];
	for (auto valueProgramItemsProgramItem : allProgramItemsNode)
	{
		ProgramItem programItemsObject;
		if(!valueProgramItemsProgramItem["Index"].isNull())
			programItemsObject.index = std::stoi(valueProgramItemsProgramItem["Index"].asString());
		if(!valueProgramItemsProgramItem["ResourceType"].isNull())
			programItemsObject.resourceType = valueProgramItemsProgramItem["ResourceType"].asString();
		if(!valueProgramItemsProgramItem["ProgramItemId"].isNull())
			programItemsObject.programItemId = valueProgramItemsProgramItem["ProgramItemId"].asString();
		if(!valueProgramItemsProgramItem["ProgramId"].isNull())
			programItemsObject.programId = valueProgramItemsProgramItem["ProgramId"].asString();
		if(!valueProgramItemsProgramItem["ProgramItemName"].isNull())
			programItemsObject.programItemName = valueProgramItemsProgramItem["ProgramItemName"].asString();
		if(!valueProgramItemsProgramItem["ResourceValue"].isNull())
			programItemsObject.resourceValue = valueProgramItemsProgramItem["ResourceValue"].asString();
		programItems_.push_back(programItemsObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

std::vector<ListPlaylistItemsResult::ProgramItem> ListPlaylistItemsResult::getProgramItems()const
{
	return programItems_;
}

int ListPlaylistItemsResult::getTotal()const
{
	return total_;
}

