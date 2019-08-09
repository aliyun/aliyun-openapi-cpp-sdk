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

#include <alibabacloud/emr/model/ListNotesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListNotesResult::ListNotesResult() :
	ServiceResult()
{}

ListNotesResult::ListNotesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNotesResult::~ListNotesResult()
{}

void ListNotesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allNotes = value["Notes"]["NoteInfo"];
	for (auto value : allNotes)
	{
		NoteInfo notesObject;
		if(!value["Id"].isNull())
			notesObject.id = value["Id"].asString();
		if(!value["Name"].isNull())
			notesObject.name = value["Name"].asString();
		if(!value["Type"].isNull())
			notesObject.type = value["Type"].asString();
		notes_.push_back(notesObject);
	}

}

std::vector<ListNotesResult::NoteInfo> ListNotesResult::getNotes()const
{
	return notes_;
}

