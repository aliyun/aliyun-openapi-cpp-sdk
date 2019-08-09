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

#include <alibabacloud/mts/model/QueryFpShotJobListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryFpShotJobListResult::QueryFpShotJobListResult() :
	ServiceResult()
{}

QueryFpShotJobListResult::QueryFpShotJobListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryFpShotJobListResult::~QueryFpShotJobListResult()
{}

void QueryFpShotJobListResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allFpShotJobList = value["FpShotJobList"]["FpShotJob"];
	for (auto value : allFpShotJobList)
	{
		FpShotJob fpShotJobListObject;
		if(!value["Id"].isNull())
			fpShotJobListObject.id = value["Id"].asString();
		if(!value["UserData"].isNull())
			fpShotJobListObject.userData = value["UserData"].asString();
		if(!value["PipelineId"].isNull())
			fpShotJobListObject.pipelineId = value["PipelineId"].asString();
		if(!value["FileId"].isNull())
			fpShotJobListObject.fileId = value["FileId"].asString();
		if(!value["State"].isNull())
			fpShotJobListObject.state = value["State"].asString();
		if(!value["Code"].isNull())
			fpShotJobListObject.code = value["Code"].asString();
		if(!value["Message"].isNull())
			fpShotJobListObject.message = value["Message"].asString();
		if(!value["CreationTime"].isNull())
			fpShotJobListObject.creationTime = value["CreationTime"].asString();
		if(!value["FinishTime"].isNull())
			fpShotJobListObject.finishTime = value["FinishTime"].asString();
		auto inputFileNode = value["InputFile"];
		if(!inputFileNode["Bucket"].isNull())
			fpShotJobListObject.inputFile.bucket = inputFileNode["Bucket"].asString();
		if(!inputFileNode["Location"].isNull())
			fpShotJobListObject.inputFile.location = inputFileNode["Location"].asString();
		if(!inputFileNode["Object"].isNull())
			fpShotJobListObject.inputFile.object = inputFileNode["Object"].asString();
		auto fpShotConfigNode = value["FpShotConfig"];
		if(!fpShotConfigNode["PrimaryKey"].isNull())
			fpShotJobListObject.fpShotConfig.primaryKey = fpShotConfigNode["PrimaryKey"].asString();
		if(!fpShotConfigNode["SaveType"].isNull())
			fpShotJobListObject.fpShotConfig.saveType = fpShotConfigNode["SaveType"].asString();
		auto fpShotResultNode = value["FpShotResult"];
		auto allFpShots = value["FpShots"]["FpShot"];
		for (auto value : allFpShots)
		{
			FpShotJob::FpShotResult::FpShot fpShotObject;
			if(!value["PrimaryKey"].isNull())
				fpShotObject.primaryKey = value["PrimaryKey"].asString();
			if(!value["Similarity"].isNull())
				fpShotObject.similarity = value["Similarity"].asString();
			auto allFpShotSlices = value["FpShotSlices"]["FpShotSlice"];
			for (auto value : allFpShotSlices)
			{
				FpShotJob::FpShotResult::FpShot::FpShotSlice fpShotSlicesObject;
				auto inputNode = value["Input"];
				if(!inputNode["Start"].isNull())
					fpShotSlicesObject.input.start = inputNode["Start"].asString();
				if(!inputNode["Duration"].isNull())
					fpShotSlicesObject.input.duration = inputNode["Duration"].asString();
				auto duplicationNode = value["Duplication"];
				if(!duplicationNode["Start"].isNull())
					fpShotSlicesObject.duplication.start = duplicationNode["Start"].asString();
				if(!duplicationNode["Duration"].isNull())
					fpShotSlicesObject.duplication.duration = duplicationNode["Duration"].asString();
				fpShotObject.fpShotSlices.push_back(fpShotSlicesObject);
			}
			fpShotJobListObject.fpShotResult.fpShots.push_back(fpShotObject);
		}
		auto allAudioFpShots = value["AudioFpShots"]["FpShot"];
		for (auto value : allAudioFpShots)
		{
			FpShotJob::FpShotResult::FpShot fpShotObject;
			if(!value["PrimaryKey"].isNull())
				fpShotObject.primaryKey = value["PrimaryKey"].asString();
			if(!value["Similarity"].isNull())
				fpShotObject.similarity = value["Similarity"].asString();
			auto allFpShotSlices = value["FpShotSlices"]["FpShotSlice"];
			for (auto value : allFpShotSlices)
			{
				FpShotJob::FpShotResult::FpShot::FpShotSlice fpShotSlicesObject;
				auto inputNode = value["Input"];
				if(!inputNode["Start"].isNull())
					fpShotSlicesObject.input.start = inputNode["Start"].asString();
				if(!inputNode["Duration"].isNull())
					fpShotSlicesObject.input.duration = inputNode["Duration"].asString();
				auto duplicationNode = value["Duplication"];
				if(!duplicationNode["Start"].isNull())
					fpShotSlicesObject.duplication.start = duplicationNode["Start"].asString();
				if(!duplicationNode["Duration"].isNull())
					fpShotSlicesObject.duplication.duration = duplicationNode["Duration"].asString();
				fpShotObject.fpShotSlices.push_back(fpShotSlicesObject);
			}
			fpShotJobListObject.fpShotResult.audioFpShots.push_back(fpShotObject);
		}
		fpShotJobList_.push_back(fpShotJobListObject);
	}
	auto allNonExistIds = value["NonExistIds"]["String"];
	for (const auto &item : allNonExistIds)
		nonExistIds_.push_back(item.asString());
	auto allNonExistPrimaryKeys = value["NonExistPrimaryKeys"]["String"];
	for (const auto &item : allNonExistPrimaryKeys)
		nonExistPrimaryKeys_.push_back(item.asString());
	if(!value["NextPageToken"].isNull())
		nextPageToken_ = value["NextPageToken"].asString();

}

std::string QueryFpShotJobListResult::getNextPageToken()const
{
	return nextPageToken_;
}

std::vector<std::string> QueryFpShotJobListResult::getNonExistPrimaryKeys()const
{
	return nonExistPrimaryKeys_;
}

std::vector<QueryFpShotJobListResult::FpShotJob> QueryFpShotJobListResult::getFpShotJobList()const
{
	return fpShotJobList_;
}

std::vector<std::string> QueryFpShotJobListResult::getNonExistIds()const
{
	return nonExistIds_;
}

