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

#include <alibabacloud/dataworks-public/model/ListProgramTypeCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListProgramTypeCountResult::ListProgramTypeCountResult() :
	ServiceResult()
{}

ListProgramTypeCountResult::ListProgramTypeCountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListProgramTypeCountResult::~ListProgramTypeCountResult()
{}

void ListProgramTypeCountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allProgramTypeAndCountsNode = value["ProgramTypeAndCounts"]["ProgramTypeAndCount"];
	for (auto valueProgramTypeAndCountsProgramTypeAndCount : allProgramTypeAndCountsNode)
	{
		ProgramTypeAndCount programTypeAndCountsObject;
		if(!valueProgramTypeAndCountsProgramTypeAndCount["Count"].isNull())
			programTypeAndCountsObject.count = std::stoi(valueProgramTypeAndCountsProgramTypeAndCount["Count"].asString());
		if(!valueProgramTypeAndCountsProgramTypeAndCount["ProgramType"].isNull())
			programTypeAndCountsObject.programType = valueProgramTypeAndCountsProgramTypeAndCount["ProgramType"].asString();
		programTypeAndCounts_.push_back(programTypeAndCountsObject);
	}

}

std::vector<ListProgramTypeCountResult::ProgramTypeAndCount> ListProgramTypeCountResult::getProgramTypeAndCounts()const
{
	return programTypeAndCounts_;
}

