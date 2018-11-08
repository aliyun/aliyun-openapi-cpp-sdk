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

#include <alibabacloud/mts/model/QueryCensorJobListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryCensorJobListResult::QueryCensorJobListResult() :
	ServiceResult()
{}

QueryCensorJobListResult::QueryCensorJobListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryCensorJobListResult::~QueryCensorJobListResult()
{}

void QueryCensorJobListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allCensorJobList = value["CensorJobList"]["CensorJob"];
	for (auto value : allCensorJobList)
	{
		CensorJob censorJobListObject;
		if(!value["Id"].isNull())
			censorJobListObject.id = value["Id"].asString();
		if(!value["UserData"].isNull())
			censorJobListObject.userData = value["UserData"].asString();
		if(!value["PipelineId"].isNull())
			censorJobListObject.pipelineId = value["PipelineId"].asString();
		if(!value["State"].isNull())
			censorJobListObject.state = value["State"].asString();
		if(!value["Code"].isNull())
			censorJobListObject.code = value["Code"].asString();
		if(!value["Message"].isNull())
			censorJobListObject.message = value["Message"].asString();
		if(!value["CreationTime"].isNull())
			censorJobListObject.creationTime = value["CreationTime"].asString();
		if(!value["TitleCensorResult"].isNull())
			censorJobListObject.titleCensorResult = value["TitleCensorResult"].asString();
		if(!value["DescCensorResult"].isNull())
			censorJobListObject.descCensorResult = value["DescCensorResult"].asString();
		if(!value["BarrageCensorResult"].isNull())
			censorJobListObject.barrageCensorResult = value["BarrageCensorResult"].asString();
		if(!value["ResultSaveObject"].isNull())
			censorJobListObject.resultSaveObject = value["ResultSaveObject"].asString();
		auto allImageCensorResults = value["ImageCensorResults"]["ImageCensorResult"];
		for (auto value : allImageCensorResults)
		{
			CensorJob::ImageCensorResult imageCensorResultsObject;
			if(!value["ImageLocation"].isNull())
				imageCensorResultsObject.imageLocation = value["ImageLocation"].asString();
			if(!value["ImageBucket"].isNull())
				imageCensorResultsObject.imageBucket = value["ImageBucket"].asString();
			if(!value["ImageObject"].isNull())
				imageCensorResultsObject.imageObject = value["ImageObject"].asString();
			if(!value["Result"].isNull())
				imageCensorResultsObject.result = value["Result"].asString();
			censorJobListObject.imageCensorResults.push_back(imageCensorResultsObject);
		}
		auto inputNode = value["Input"];
		if(!inputNode["Bucket"].isNull())
			censorJobListObject.input.bucket = inputNode["Bucket"].asString();
		if(!inputNode["Location"].isNull())
			censorJobListObject.input.location = inputNode["Location"].asString();
		if(!inputNode["Object"].isNull())
			censorJobListObject.input.object = inputNode["Object"].asString();
		auto censorConfigNode = value["CensorConfig"];
		if(!censorConfigNode["Interval"].isNull())
			censorJobListObject.censorConfig.interval = censorConfigNode["Interval"].asString();
		if(!censorConfigNode["BizType"].isNull())
			censorJobListObject.censorConfig.bizType = censorConfigNode["BizType"].asString();
		if(!censorConfigNode["SaveType"].isNull())
			censorJobListObject.censorConfig.saveType = censorConfigNode["SaveType"].asString();
		if(!censorConfigNode["Scenes"].isNull())
			censorJobListObject.censorConfig.scenes = censorConfigNode["Scenes"].asString();
		auto outputFileNode = censorConfigNode["OutputFile"];
		if(!outputFileNode["Bucket"].isNull())
			censorJobListObject.censorConfig.outputFile.bucket = outputFileNode["Bucket"].asString();
		if(!outputFileNode["Location"].isNull())
			censorJobListObject.censorConfig.outputFile.location = outputFileNode["Location"].asString();
		if(!outputFileNode["Object"].isNull())
			censorJobListObject.censorConfig.outputFile.object = outputFileNode["Object"].asString();
		auto censorPornResultNode = value["CensorPornResult"];
		if(!censorPornResultNode["Label"].isNull())
			censorJobListObject.censorPornResult.label = censorPornResultNode["Label"].asString();
		if(!censorPornResultNode["Suggestion"].isNull())
			censorJobListObject.censorPornResult.suggestion = censorPornResultNode["Suggestion"].asString();
		if(!censorPornResultNode["MaxScore"].isNull())
			censorJobListObject.censorPornResult.maxScore = censorPornResultNode["MaxScore"].asString();
		if(!censorPornResultNode["AverageScore"].isNull())
			censorJobListObject.censorPornResult.averageScore = censorPornResultNode["AverageScore"].asString();
		auto allPornCounterList = value["PornCounterList"]["Counter"];
		for (auto value : allPornCounterList)
		{
			CensorJob::CensorPornResult::Counter counterObject;
			if(!value["Count"].isNull())
				counterObject.count = std::stoi(value["Count"].asString());
			if(!value["Label"].isNull())
				counterObject.label = value["Label"].asString();
			censorJobListObject.censorPornResult.pornCounterList.push_back(counterObject);
		}
		auto allPornTopList = value["PornTopList"]["Top"];
		for (auto value : allPornTopList)
		{
			CensorJob::CensorPornResult::Top topObject;
			if(!value["Label"].isNull())
				topObject.label = value["Label"].asString();
			if(!value["Score"].isNull())
				topObject.score = value["Score"].asString();
			if(!value["Timestamp"].isNull())
				topObject.timestamp = value["Timestamp"].asString();
			if(!value["Index"].isNull())
				topObject.index = value["Index"].asString();
			if(!value["Object"].isNull())
				topObject.object = value["Object"].asString();
			censorJobListObject.censorPornResult.pornTopList.push_back(topObject);
		}
		auto censorTerrorismResultNode = value["CensorTerrorismResult"];
		if(!censorTerrorismResultNode["Label"].isNull())
			censorJobListObject.censorTerrorismResult.label = censorTerrorismResultNode["Label"].asString();
		if(!censorTerrorismResultNode["Suggestion"].isNull())
			censorJobListObject.censorTerrorismResult.suggestion = censorTerrorismResultNode["Suggestion"].asString();
		if(!censorTerrorismResultNode["MaxScore"].isNull())
			censorJobListObject.censorTerrorismResult.maxScore = censorTerrorismResultNode["MaxScore"].asString();
		if(!censorTerrorismResultNode["AverageScore"].isNull())
			censorJobListObject.censorTerrorismResult.averageScore = censorTerrorismResultNode["AverageScore"].asString();
		auto allTerrorismCounterList = value["TerrorismCounterList"]["Counter"];
		for (auto value : allTerrorismCounterList)
		{
			CensorJob::CensorTerrorismResult::Counter1 counter1Object;
			if(!value["Count"].isNull())
				counter1Object.count = std::stoi(value["Count"].asString());
			if(!value["Label"].isNull())
				counter1Object.label = value["Label"].asString();
			censorJobListObject.censorTerrorismResult.terrorismCounterList.push_back(counter1Object);
		}
		auto allTerrorismTopList = value["TerrorismTopList"]["Top"];
		for (auto value : allTerrorismTopList)
		{
			CensorJob::CensorTerrorismResult::Top2 top2Object;
			if(!value["Label"].isNull())
				top2Object.label = value["Label"].asString();
			if(!value["Score"].isNull())
				top2Object.score = value["Score"].asString();
			if(!value["Timestamp"].isNull())
				top2Object.timestamp = value["Timestamp"].asString();
			if(!value["Index"].isNull())
				top2Object.index = value["Index"].asString();
			if(!value["Object"].isNull())
				top2Object.object = value["Object"].asString();
			censorJobListObject.censorTerrorismResult.terrorismTopList.push_back(top2Object);
		}
		censorJobList_.push_back(censorJobListObject);
	}
	auto allNonExistIds = value["NonExistIds"]["String"];
	for (const auto &item : allNonExistIds)
		nonExistIds_.push_back(item.asString());

}

std::vector<QueryCensorJobListResult::CensorJob> QueryCensorJobListResult::getCensorJobList()const
{
	return censorJobList_;
}

std::vector<std::string> QueryCensorJobListResult::getNonExistIds()const
{
	return nonExistIds_;
}

