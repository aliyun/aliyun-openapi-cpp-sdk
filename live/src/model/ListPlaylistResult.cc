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

#include <alibabacloud/live/model/ListPlaylistResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

ListPlaylistResult::ListPlaylistResult() :
	ServiceResult()
{}

ListPlaylistResult::ListPlaylistResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPlaylistResult::~ListPlaylistResult()
{}

void ListPlaylistResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allProgramListNode = value["ProgramList"]["ProgramInfo"];
	for (auto valueProgramListProgramInfo : allProgramListNode)
	{
		ProgramInfo programListObject;
		if(!valueProgramListProgramInfo["CasterId"].isNull())
			programListObject.casterId = valueProgramListProgramInfo["CasterId"].asString();
		if(!valueProgramListProgramInfo["DomainName"].isNull())
			programListObject.domainName = valueProgramListProgramInfo["DomainName"].asString();
		if(!valueProgramListProgramInfo["ProgramId"].isNull())
			programListObject.programId = valueProgramListProgramInfo["ProgramId"].asString();
		if(!valueProgramListProgramInfo["ProgramName"].isNull())
			programListObject.programName = valueProgramListProgramInfo["ProgramName"].asString();
		if(!valueProgramListProgramInfo["RepeatNumber"].isNull())
			programListObject.repeatNumber = std::stoi(valueProgramListProgramInfo["RepeatNumber"].asString());
		if(!valueProgramListProgramInfo["Status"].isNull())
			programListObject.status = std::stoi(valueProgramListProgramInfo["Status"].asString());
		programList_.push_back(programListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

std::vector<ListPlaylistResult::ProgramInfo> ListPlaylistResult::getProgramList()const
{
	return programList_;
}

int ListPlaylistResult::getTotal()const
{
	return total_;
}

