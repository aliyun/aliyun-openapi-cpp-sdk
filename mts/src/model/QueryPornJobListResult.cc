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

#include <alibabacloud/mts/model/QueryPornJobListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryPornJobListResult::QueryPornJobListResult() :
	ServiceResult()
{}

QueryPornJobListResult::QueryPornJobListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryPornJobListResult::~QueryPornJobListResult()
{}

void QueryPornJobListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPornJobListNode = value["PornJobList"]["PornJob"];
	for (auto valuePornJobListPornJob : allPornJobListNode)
	{
		PornJob pornJobListObject;
		if(!valuePornJobListPornJob["CreationTime"].isNull())
			pornJobListObject.creationTime = valuePornJobListPornJob["CreationTime"].asString();
		if(!valuePornJobListPornJob["State"].isNull())
			pornJobListObject.state = valuePornJobListPornJob["State"].asString();
		if(!valuePornJobListPornJob["UserData"].isNull())
			pornJobListObject.userData = valuePornJobListPornJob["UserData"].asString();
		if(!valuePornJobListPornJob["Code"].isNull())
			pornJobListObject.code = valuePornJobListPornJob["Code"].asString();
		if(!valuePornJobListPornJob["Message"].isNull())
			pornJobListObject.message = valuePornJobListPornJob["Message"].asString();
		if(!valuePornJobListPornJob["PipelineId"].isNull())
			pornJobListObject.pipelineId = valuePornJobListPornJob["PipelineId"].asString();
		if(!valuePornJobListPornJob["Id"].isNull())
			pornJobListObject.id = valuePornJobListPornJob["Id"].asString();
		auto pornConfigNode = value["PornConfig"];
		if(!pornConfigNode["Interval"].isNull())
			pornJobListObject.pornConfig.interval = pornConfigNode["Interval"].asString();
		if(!pornConfigNode["BizType"].isNull())
			pornJobListObject.pornConfig.bizType = pornConfigNode["BizType"].asString();
		auto outputFileNode = pornConfigNode["OutputFile"];
		if(!outputFileNode["Object"].isNull())
			pornJobListObject.pornConfig.outputFile.object = outputFileNode["Object"].asString();
		if(!outputFileNode["Location"].isNull())
			pornJobListObject.pornConfig.outputFile.location = outputFileNode["Location"].asString();
		if(!outputFileNode["Bucket"].isNull())
			pornJobListObject.pornConfig.outputFile.bucket = outputFileNode["Bucket"].asString();
		auto censorPornResultNode = value["CensorPornResult"];
		if(!censorPornResultNode["Suggestion"].isNull())
			pornJobListObject.censorPornResult.suggestion = censorPornResultNode["Suggestion"].asString();
		if(!censorPornResultNode["AverageScore"].isNull())
			pornJobListObject.censorPornResult.averageScore = censorPornResultNode["AverageScore"].asString();
		if(!censorPornResultNode["Label"].isNull())
			pornJobListObject.censorPornResult.label = censorPornResultNode["Label"].asString();
		if(!censorPornResultNode["MaxScore"].isNull())
			pornJobListObject.censorPornResult.maxScore = censorPornResultNode["MaxScore"].asString();
		auto allPornCounterListNode = censorPornResultNode["PornCounterList"]["Counter"];
		for (auto censorPornResultNodePornCounterListCounter : allPornCounterListNode)
		{
			PornJob::CensorPornResult::Counter counterObject;
			if(!censorPornResultNodePornCounterListCounter["Label"].isNull())
				counterObject.label = censorPornResultNodePornCounterListCounter["Label"].asString();
			if(!censorPornResultNodePornCounterListCounter["Count"].isNull())
				counterObject.count = std::stoi(censorPornResultNodePornCounterListCounter["Count"].asString());
			pornJobListObject.censorPornResult.pornCounterList.push_back(counterObject);
		}
		auto allPornTopListNode = censorPornResultNode["PornTopList"]["Top"];
		for (auto censorPornResultNodePornTopListTop : allPornTopListNode)
		{
			PornJob::CensorPornResult::Top topObject;
			if(!censorPornResultNodePornTopListTop["Index"].isNull())
				topObject.index = censorPornResultNodePornTopListTop["Index"].asString();
			if(!censorPornResultNodePornTopListTop["Score"].isNull())
				topObject.score = censorPornResultNodePornTopListTop["Score"].asString();
			if(!censorPornResultNodePornTopListTop["Timestamp"].isNull())
				topObject.timestamp = censorPornResultNodePornTopListTop["Timestamp"].asString();
			if(!censorPornResultNodePornTopListTop["Object"].isNull())
				topObject.object = censorPornResultNodePornTopListTop["Object"].asString();
			if(!censorPornResultNodePornTopListTop["Label"].isNull())
				topObject.label = censorPornResultNodePornTopListTop["Label"].asString();
			pornJobListObject.censorPornResult.pornTopList.push_back(topObject);
		}
		auto inputNode = value["Input"];
		if(!inputNode["Object"].isNull())
			pornJobListObject.input.object = inputNode["Object"].asString();
		if(!inputNode["Location"].isNull())
			pornJobListObject.input.location = inputNode["Location"].asString();
		if(!inputNode["Bucket"].isNull())
			pornJobListObject.input.bucket = inputNode["Bucket"].asString();
		pornJobList_.push_back(pornJobListObject);
	}
	auto allNonExistIds = value["NonExistIds"]["String"];
	for (const auto &item : allNonExistIds)
		nonExistIds_.push_back(item.asString());

}

std::vector<QueryPornJobListResult::PornJob> QueryPornJobListResult::getPornJobList()const
{
	return pornJobList_;
}

std::vector<std::string> QueryPornJobListResult::getNonExistIds()const
{
	return nonExistIds_;
}

