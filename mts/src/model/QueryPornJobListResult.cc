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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allPornJobList = value["PornJobList"]["PornJob"];
	for (auto value : allPornJobList)
	{
		PornJob pornJobListObject;
		if(!value["Id"].isNull())
			pornJobListObject.id = value["Id"].asString();
		if(!value["UserData"].isNull())
			pornJobListObject.userData = value["UserData"].asString();
		if(!value["PipelineId"].isNull())
			pornJobListObject.pipelineId = value["PipelineId"].asString();
		if(!value["State"].isNull())
			pornJobListObject.state = value["State"].asString();
		if(!value["Code"].isNull())
			pornJobListObject.code = value["Code"].asString();
		if(!value["Message"].isNull())
			pornJobListObject.message = value["Message"].asString();
		if(!value["CreationTime"].isNull())
			pornJobListObject.creationTime = value["CreationTime"].asString();
		auto inputNode = value["Input"];
		if(!inputNode["Bucket"].isNull())
			pornJobListObject.input.bucket = inputNode["Bucket"].asString();
		if(!inputNode["Location"].isNull())
			pornJobListObject.input.location = inputNode["Location"].asString();
		if(!inputNode["Object"].isNull())
			pornJobListObject.input.object = inputNode["Object"].asString();
		auto pornConfigNode = value["PornConfig"];
		if(!pornConfigNode["Interval"].isNull())
			pornJobListObject.pornConfig.interval = pornConfigNode["Interval"].asString();
		if(!pornConfigNode["BizType"].isNull())
			pornJobListObject.pornConfig.bizType = pornConfigNode["BizType"].asString();
		auto outputFileNode = pornConfigNode["OutputFile"];
		if(!outputFileNode["Bucket"].isNull())
			pornJobListObject.pornConfig.outputFile.bucket = outputFileNode["Bucket"].asString();
		if(!outputFileNode["Location"].isNull())
			pornJobListObject.pornConfig.outputFile.location = outputFileNode["Location"].asString();
		if(!outputFileNode["Object"].isNull())
			pornJobListObject.pornConfig.outputFile.object = outputFileNode["Object"].asString();
		auto censorPornResultNode = value["CensorPornResult"];
		if(!censorPornResultNode["Label"].isNull())
			pornJobListObject.censorPornResult.label = censorPornResultNode["Label"].asString();
		if(!censorPornResultNode["Suggestion"].isNull())
			pornJobListObject.censorPornResult.suggestion = censorPornResultNode["Suggestion"].asString();
		if(!censorPornResultNode["MaxScore"].isNull())
			pornJobListObject.censorPornResult.maxScore = censorPornResultNode["MaxScore"].asString();
		if(!censorPornResultNode["AverageScore"].isNull())
			pornJobListObject.censorPornResult.averageScore = censorPornResultNode["AverageScore"].asString();
		auto allPornCounterList = value["PornCounterList"]["Counter"];
		for (auto value : allPornCounterList)
		{
			PornJob::CensorPornResult::Counter counterObject;
			if(!value["Count"].isNull())
				counterObject.count = std::stoi(value["Count"].asString());
			if(!value["Label"].isNull())
				counterObject.label = value["Label"].asString();
			pornJobListObject.censorPornResult.pornCounterList.push_back(counterObject);
		}
		auto allPornTopList = value["PornTopList"]["Top"];
		for (auto value : allPornTopList)
		{
			PornJob::CensorPornResult::Top topObject;
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
			pornJobListObject.censorPornResult.pornTopList.push_back(topObject);
		}
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

