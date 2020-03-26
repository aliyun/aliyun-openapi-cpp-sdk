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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFpShotJobListNode = value["FpShotJobList"]["FpShotJob"];
	for (auto valueFpShotJobListFpShotJob : allFpShotJobListNode)
	{
		FpShotJob fpShotJobListObject;
		if(!valueFpShotJobListFpShotJob["Id"].isNull())
			fpShotJobListObject.id = valueFpShotJobListFpShotJob["Id"].asString();
		if(!valueFpShotJobListFpShotJob["UserData"].isNull())
			fpShotJobListObject.userData = valueFpShotJobListFpShotJob["UserData"].asString();
		if(!valueFpShotJobListFpShotJob["PipelineId"].isNull())
			fpShotJobListObject.pipelineId = valueFpShotJobListFpShotJob["PipelineId"].asString();
		if(!valueFpShotJobListFpShotJob["FileId"].isNull())
			fpShotJobListObject.fileId = valueFpShotJobListFpShotJob["FileId"].asString();
		if(!valueFpShotJobListFpShotJob["TransactionId"].isNull())
			fpShotJobListObject.transactionId = valueFpShotJobListFpShotJob["TransactionId"].asString();
		if(!valueFpShotJobListFpShotJob["TxHash"].isNull())
			fpShotJobListObject.txHash = valueFpShotJobListFpShotJob["TxHash"].asString();
		if(!valueFpShotJobListFpShotJob["State"].isNull())
			fpShotJobListObject.state = valueFpShotJobListFpShotJob["State"].asString();
		if(!valueFpShotJobListFpShotJob["Code"].isNull())
			fpShotJobListObject.code = valueFpShotJobListFpShotJob["Code"].asString();
		if(!valueFpShotJobListFpShotJob["Message"].isNull())
			fpShotJobListObject.message = valueFpShotJobListFpShotJob["Message"].asString();
		if(!valueFpShotJobListFpShotJob["CreationTime"].isNull())
			fpShotJobListObject.creationTime = valueFpShotJobListFpShotJob["CreationTime"].asString();
		if(!valueFpShotJobListFpShotJob["FinishTime"].isNull())
			fpShotJobListObject.finishTime = valueFpShotJobListFpShotJob["FinishTime"].asString();
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
		if(!fpShotConfigNode["Notary"].isNull())
			fpShotJobListObject.fpShotConfig.notary = fpShotConfigNode["Notary"].asString();
		if(!fpShotConfigNode["FpDBId"].isNull())
			fpShotJobListObject.fpShotConfig.fpDBId = fpShotConfigNode["FpDBId"].asString();
		auto fpShotResultNode = value["FpShotResult"];
		auto allFpShotsNode = fpShotResultNode["FpShots"]["FpShot"];
		for (auto fpShotResultNodeFpShotsFpShot : allFpShotsNode)
		{
			FpShotJob::FpShotResult::FpShot fpShotObject;
			if(!fpShotResultNodeFpShotsFpShot["PrimaryKey"].isNull())
				fpShotObject.primaryKey = fpShotResultNodeFpShotsFpShot["PrimaryKey"].asString();
			if(!fpShotResultNodeFpShotsFpShot["Similarity"].isNull())
				fpShotObject.similarity = fpShotResultNodeFpShotsFpShot["Similarity"].asString();
			auto allFpShotSlicesNode = allFpShotsNode["FpShotSlices"]["FpShotSlice"];
			for (auto allFpShotsNodeFpShotSlicesFpShotSlice : allFpShotSlicesNode)
			{
				FpShotJob::FpShotResult::FpShot::FpShotSlice fpShotSlicesObject;
				if(!allFpShotsNodeFpShotSlicesFpShotSlice["Similarity"].isNull())
					fpShotSlicesObject.similarity = allFpShotsNodeFpShotSlicesFpShotSlice["Similarity"].asString();
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
		auto allAudioFpShotsNode = fpShotResultNode["AudioFpShots"]["FpShot"];
		for (auto fpShotResultNodeAudioFpShotsFpShot : allAudioFpShotsNode)
		{
			FpShotJob::FpShotResult::FpShot fpShotObject;
			if(!fpShotResultNodeAudioFpShotsFpShot["PrimaryKey"].isNull())
				fpShotObject.primaryKey = fpShotResultNodeAudioFpShotsFpShot["PrimaryKey"].asString();
			if(!fpShotResultNodeAudioFpShotsFpShot["Similarity"].isNull())
				fpShotObject.similarity = fpShotResultNodeAudioFpShotsFpShot["Similarity"].asString();
			auto allFpShotSlicesNode = allAudioFpShotsNode["FpShotSlices"]["FpShotSlice"];
			for (auto allAudioFpShotsNodeFpShotSlicesFpShotSlice : allFpShotSlicesNode)
			{
				FpShotJob::FpShotResult::FpShot::FpShotSlice fpShotSlicesObject;
				if(!allAudioFpShotsNodeFpShotSlicesFpShotSlice["Similarity"].isNull())
					fpShotSlicesObject.similarity = allAudioFpShotsNodeFpShotSlicesFpShotSlice["Similarity"].asString();
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

