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
	auto allCensorJobListNode = value["CensorJobList"]["CensorJob"];
	for (auto valueCensorJobListCensorJob : allCensorJobListNode)
	{
		CensorJob censorJobListObject;
		if(!valueCensorJobListCensorJob["CreationTime"].isNull())
			censorJobListObject.creationTime = valueCensorJobListCensorJob["CreationTime"].asString();
		if(!valueCensorJobListCensorJob["State"].isNull())
			censorJobListObject.state = valueCensorJobListCensorJob["State"].asString();
		if(!valueCensorJobListCensorJob["TitleCensorResult"].isNull())
			censorJobListObject.titleCensorResult = valueCensorJobListCensorJob["TitleCensorResult"].asString();
		if(!valueCensorJobListCensorJob["Message"].isNull())
			censorJobListObject.message = valueCensorJobListCensorJob["Message"].asString();
		if(!valueCensorJobListCensorJob["BarrageCensorResult"].isNull())
			censorJobListObject.barrageCensorResult = valueCensorJobListCensorJob["BarrageCensorResult"].asString();
		if(!valueCensorJobListCensorJob["DescCensorResult"].isNull())
			censorJobListObject.descCensorResult = valueCensorJobListCensorJob["DescCensorResult"].asString();
		if(!valueCensorJobListCensorJob["ResultSaveObject"].isNull())
			censorJobListObject.resultSaveObject = valueCensorJobListCensorJob["ResultSaveObject"].asString();
		if(!valueCensorJobListCensorJob["UserData"].isNull())
			censorJobListObject.userData = valueCensorJobListCensorJob["UserData"].asString();
		if(!valueCensorJobListCensorJob["Code"].isNull())
			censorJobListObject.code = valueCensorJobListCensorJob["Code"].asString();
		if(!valueCensorJobListCensorJob["PipelineId"].isNull())
			censorJobListObject.pipelineId = valueCensorJobListCensorJob["PipelineId"].asString();
		if(!valueCensorJobListCensorJob["Id"].isNull())
			censorJobListObject.id = valueCensorJobListCensorJob["Id"].asString();
		auto allImageCensorResultsNode = valueCensorJobListCensorJob["ImageCensorResults"]["ImageCensorResult"];
		for (auto valueCensorJobListCensorJobImageCensorResultsImageCensorResult : allImageCensorResultsNode)
		{
			CensorJob::ImageCensorResult imageCensorResultsObject;
			if(!valueCensorJobListCensorJobImageCensorResultsImageCensorResult["ImageBucket"].isNull())
				imageCensorResultsObject.imageBucket = valueCensorJobListCensorJobImageCensorResultsImageCensorResult["ImageBucket"].asString();
			if(!valueCensorJobListCensorJobImageCensorResultsImageCensorResult["Result"].isNull())
				imageCensorResultsObject.result = valueCensorJobListCensorJobImageCensorResultsImageCensorResult["Result"].asString();
			if(!valueCensorJobListCensorJobImageCensorResultsImageCensorResult["ImageLocation"].isNull())
				imageCensorResultsObject.imageLocation = valueCensorJobListCensorJobImageCensorResultsImageCensorResult["ImageLocation"].asString();
			if(!valueCensorJobListCensorJobImageCensorResultsImageCensorResult["ImageObject"].isNull())
				imageCensorResultsObject.imageObject = valueCensorJobListCensorJobImageCensorResultsImageCensorResult["ImageObject"].asString();
			censorJobListObject.imageCensorResults.push_back(imageCensorResultsObject);
		}
		auto censorTerrorismResultNode = value["CensorTerrorismResult"];
		if(!censorTerrorismResultNode["Suggestion"].isNull())
			censorJobListObject.censorTerrorismResult.suggestion = censorTerrorismResultNode["Suggestion"].asString();
		if(!censorTerrorismResultNode["AverageScore"].isNull())
			censorJobListObject.censorTerrorismResult.averageScore = censorTerrorismResultNode["AverageScore"].asString();
		if(!censorTerrorismResultNode["Label"].isNull())
			censorJobListObject.censorTerrorismResult.label = censorTerrorismResultNode["Label"].asString();
		if(!censorTerrorismResultNode["MaxScore"].isNull())
			censorJobListObject.censorTerrorismResult.maxScore = censorTerrorismResultNode["MaxScore"].asString();
		auto allTerrorismTopListNode = censorTerrorismResultNode["TerrorismTopList"]["Top"];
		for (auto censorTerrorismResultNodeTerrorismTopListTop : allTerrorismTopListNode)
		{
			CensorJob::CensorTerrorismResult::Top topObject;
			if(!censorTerrorismResultNodeTerrorismTopListTop["Index"].isNull())
				topObject.index = censorTerrorismResultNodeTerrorismTopListTop["Index"].asString();
			if(!censorTerrorismResultNodeTerrorismTopListTop["Score"].isNull())
				topObject.score = censorTerrorismResultNodeTerrorismTopListTop["Score"].asString();
			if(!censorTerrorismResultNodeTerrorismTopListTop["Timestamp"].isNull())
				topObject.timestamp = censorTerrorismResultNodeTerrorismTopListTop["Timestamp"].asString();
			if(!censorTerrorismResultNodeTerrorismTopListTop["Object"].isNull())
				topObject.object = censorTerrorismResultNodeTerrorismTopListTop["Object"].asString();
			if(!censorTerrorismResultNodeTerrorismTopListTop["Label"].isNull())
				topObject.label = censorTerrorismResultNodeTerrorismTopListTop["Label"].asString();
			censorJobListObject.censorTerrorismResult.terrorismTopList.push_back(topObject);
		}
		auto allTerrorismCounterListNode = censorTerrorismResultNode["TerrorismCounterList"]["Counter"];
		for (auto censorTerrorismResultNodeTerrorismCounterListCounter : allTerrorismCounterListNode)
		{
			CensorJob::CensorTerrorismResult::Counter counterObject;
			if(!censorTerrorismResultNodeTerrorismCounterListCounter["Label"].isNull())
				counterObject.label = censorTerrorismResultNodeTerrorismCounterListCounter["Label"].asString();
			if(!censorTerrorismResultNodeTerrorismCounterListCounter["Count"].isNull())
				counterObject.count = std::stoi(censorTerrorismResultNodeTerrorismCounterListCounter["Count"].asString());
			censorJobListObject.censorTerrorismResult.terrorismCounterList.push_back(counterObject);
		}
		auto inputNode = value["Input"];
		if(!inputNode["Object"].isNull())
			censorJobListObject.input.object = inputNode["Object"].asString();
		if(!inputNode["Location"].isNull())
			censorJobListObject.input.location = inputNode["Location"].asString();
		if(!inputNode["Bucket"].isNull())
			censorJobListObject.input.bucket = inputNode["Bucket"].asString();
		auto censorConfigNode = value["CensorConfig"];
		if(!censorConfigNode["Interval"].isNull())
			censorJobListObject.censorConfig.interval = censorConfigNode["Interval"].asString();
		if(!censorConfigNode["SaveType"].isNull())
			censorJobListObject.censorConfig.saveType = censorConfigNode["SaveType"].asString();
		if(!censorConfigNode["Scenes"].isNull())
			censorJobListObject.censorConfig.scenes = censorConfigNode["Scenes"].asString();
		if(!censorConfigNode["BizType"].isNull())
			censorJobListObject.censorConfig.bizType = censorConfigNode["BizType"].asString();
		auto outputFileNode = censorConfigNode["OutputFile"];
		if(!outputFileNode["Object"].isNull())
			censorJobListObject.censorConfig.outputFile.object = outputFileNode["Object"].asString();
		if(!outputFileNode["Location"].isNull())
			censorJobListObject.censorConfig.outputFile.location = outputFileNode["Location"].asString();
		if(!outputFileNode["Bucket"].isNull())
			censorJobListObject.censorConfig.outputFile.bucket = outputFileNode["Bucket"].asString();
		auto censorPornResultNode = value["CensorPornResult"];
		if(!censorPornResultNode["Suggestion"].isNull())
			censorJobListObject.censorPornResult.suggestion = censorPornResultNode["Suggestion"].asString();
		if(!censorPornResultNode["AverageScore"].isNull())
			censorJobListObject.censorPornResult.averageScore = censorPornResultNode["AverageScore"].asString();
		if(!censorPornResultNode["Label"].isNull())
			censorJobListObject.censorPornResult.label = censorPornResultNode["Label"].asString();
		if(!censorPornResultNode["MaxScore"].isNull())
			censorJobListObject.censorPornResult.maxScore = censorPornResultNode["MaxScore"].asString();
		auto allPornCounterListNode = censorPornResultNode["PornCounterList"]["Counter"];
		for (auto censorPornResultNodePornCounterListCounter : allPornCounterListNode)
		{
			CensorJob::CensorPornResult::Counter1 counter1Object;
			if(!censorPornResultNodePornCounterListCounter["Label"].isNull())
				counter1Object.label = censorPornResultNodePornCounterListCounter["Label"].asString();
			if(!censorPornResultNodePornCounterListCounter["Count"].isNull())
				counter1Object.count = std::stoi(censorPornResultNodePornCounterListCounter["Count"].asString());
			censorJobListObject.censorPornResult.pornCounterList.push_back(counter1Object);
		}
		auto allPornTopListNode = censorPornResultNode["PornTopList"]["Top"];
		for (auto censorPornResultNodePornTopListTop : allPornTopListNode)
		{
			CensorJob::CensorPornResult::Top2 top2Object;
			if(!censorPornResultNodePornTopListTop["Index"].isNull())
				top2Object.index = censorPornResultNodePornTopListTop["Index"].asString();
			if(!censorPornResultNodePornTopListTop["Score"].isNull())
				top2Object.score = censorPornResultNodePornTopListTop["Score"].asString();
			if(!censorPornResultNodePornTopListTop["Timestamp"].isNull())
				top2Object.timestamp = censorPornResultNodePornTopListTop["Timestamp"].asString();
			if(!censorPornResultNodePornTopListTop["Object"].isNull())
				top2Object.object = censorPornResultNodePornTopListTop["Object"].asString();
			if(!censorPornResultNodePornTopListTop["Label"].isNull())
				top2Object.label = censorPornResultNodePornTopListTop["Label"].asString();
			censorJobListObject.censorPornResult.pornTopList.push_back(top2Object);
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

