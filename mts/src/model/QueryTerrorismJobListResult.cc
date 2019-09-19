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

#include <alibabacloud/mts/model/QueryTerrorismJobListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryTerrorismJobListResult::QueryTerrorismJobListResult() :
	ServiceResult()
{}

QueryTerrorismJobListResult::QueryTerrorismJobListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryTerrorismJobListResult::~QueryTerrorismJobListResult()
{}

void QueryTerrorismJobListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTerrorismJobListNode = value["TerrorismJobList"]["TerrorismJob"];
	for (auto valueTerrorismJobListTerrorismJob : allTerrorismJobListNode)
	{
		TerrorismJob terrorismJobListObject;
		if(!valueTerrorismJobListTerrorismJob["Id"].isNull())
			terrorismJobListObject.id = valueTerrorismJobListTerrorismJob["Id"].asString();
		if(!valueTerrorismJobListTerrorismJob["UserData"].isNull())
			terrorismJobListObject.userData = valueTerrorismJobListTerrorismJob["UserData"].asString();
		if(!valueTerrorismJobListTerrorismJob["PipelineId"].isNull())
			terrorismJobListObject.pipelineId = valueTerrorismJobListTerrorismJob["PipelineId"].asString();
		if(!valueTerrorismJobListTerrorismJob["State"].isNull())
			terrorismJobListObject.state = valueTerrorismJobListTerrorismJob["State"].asString();
		if(!valueTerrorismJobListTerrorismJob["Code"].isNull())
			terrorismJobListObject.code = valueTerrorismJobListTerrorismJob["Code"].asString();
		if(!valueTerrorismJobListTerrorismJob["Message"].isNull())
			terrorismJobListObject.message = valueTerrorismJobListTerrorismJob["Message"].asString();
		if(!valueTerrorismJobListTerrorismJob["CreationTime"].isNull())
			terrorismJobListObject.creationTime = valueTerrorismJobListTerrorismJob["CreationTime"].asString();
		auto inputNode = value["Input"];
		if(!inputNode["Bucket"].isNull())
			terrorismJobListObject.input.bucket = inputNode["Bucket"].asString();
		if(!inputNode["Location"].isNull())
			terrorismJobListObject.input.location = inputNode["Location"].asString();
		if(!inputNode["Object"].isNull())
			terrorismJobListObject.input.object = inputNode["Object"].asString();
		auto terrorismConfigNode = value["TerrorismConfig"];
		if(!terrorismConfigNode["Interval"].isNull())
			terrorismJobListObject.terrorismConfig.interval = terrorismConfigNode["Interval"].asString();
		if(!terrorismConfigNode["BizType"].isNull())
			terrorismJobListObject.terrorismConfig.bizType = terrorismConfigNode["BizType"].asString();
		auto outputFileNode = terrorismConfigNode["OutputFile"];
		if(!outputFileNode["Bucket"].isNull())
			terrorismJobListObject.terrorismConfig.outputFile.bucket = outputFileNode["Bucket"].asString();
		if(!outputFileNode["Location"].isNull())
			terrorismJobListObject.terrorismConfig.outputFile.location = outputFileNode["Location"].asString();
		if(!outputFileNode["Object"].isNull())
			terrorismJobListObject.terrorismConfig.outputFile.object = outputFileNode["Object"].asString();
		auto censorTerrorismResultNode = value["CensorTerrorismResult"];
		if(!censorTerrorismResultNode["Label"].isNull())
			terrorismJobListObject.censorTerrorismResult.label = censorTerrorismResultNode["Label"].asString();
		if(!censorTerrorismResultNode["Suggestion"].isNull())
			terrorismJobListObject.censorTerrorismResult.suggestion = censorTerrorismResultNode["Suggestion"].asString();
		if(!censorTerrorismResultNode["MaxScore"].isNull())
			terrorismJobListObject.censorTerrorismResult.maxScore = censorTerrorismResultNode["MaxScore"].asString();
		if(!censorTerrorismResultNode["AverageScore"].isNull())
			terrorismJobListObject.censorTerrorismResult.averageScore = censorTerrorismResultNode["AverageScore"].asString();
		auto allTerrorismCounterListNode = censorTerrorismResultNode["TerrorismCounterList"]["Counter"];
		for (auto censorTerrorismResultNodeTerrorismCounterListCounter : allTerrorismCounterListNode)
		{
			TerrorismJob::CensorTerrorismResult::Counter counterObject;
			if(!censorTerrorismResultNodeTerrorismCounterListCounter["Count"].isNull())
				counterObject.count = std::stoi(censorTerrorismResultNodeTerrorismCounterListCounter["Count"].asString());
			if(!censorTerrorismResultNodeTerrorismCounterListCounter["Label"].isNull())
				counterObject.label = censorTerrorismResultNodeTerrorismCounterListCounter["Label"].asString();
			terrorismJobListObject.censorTerrorismResult.terrorismCounterList.push_back(counterObject);
		}
		auto allTerrorismTopListNode = censorTerrorismResultNode["TerrorismTopList"]["Top"];
		for (auto censorTerrorismResultNodeTerrorismTopListTop : allTerrorismTopListNode)
		{
			TerrorismJob::CensorTerrorismResult::Top topObject;
			if(!censorTerrorismResultNodeTerrorismTopListTop["Label"].isNull())
				topObject.label = censorTerrorismResultNodeTerrorismTopListTop["Label"].asString();
			if(!censorTerrorismResultNodeTerrorismTopListTop["Score"].isNull())
				topObject.score = censorTerrorismResultNodeTerrorismTopListTop["Score"].asString();
			if(!censorTerrorismResultNodeTerrorismTopListTop["Timestamp"].isNull())
				topObject.timestamp = censorTerrorismResultNodeTerrorismTopListTop["Timestamp"].asString();
			if(!censorTerrorismResultNodeTerrorismTopListTop["Index"].isNull())
				topObject.index = censorTerrorismResultNodeTerrorismTopListTop["Index"].asString();
			if(!censorTerrorismResultNodeTerrorismTopListTop["Object"].isNull())
				topObject.object = censorTerrorismResultNodeTerrorismTopListTop["Object"].asString();
			terrorismJobListObject.censorTerrorismResult.terrorismTopList.push_back(topObject);
		}
		terrorismJobList_.push_back(terrorismJobListObject);
	}
	auto allNonExistIds = value["NonExistIds"]["String"];
	for (const auto &item : allNonExistIds)
		nonExistIds_.push_back(item.asString());

}

std::vector<QueryTerrorismJobListResult::TerrorismJob> QueryTerrorismJobListResult::getTerrorismJobList()const
{
	return terrorismJobList_;
}

std::vector<std::string> QueryTerrorismJobListResult::getNonExistIds()const
{
	return nonExistIds_;
}

