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

#include <alibabacloud/mts/model/QueryFpCompareJobListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryFpCompareJobListResult::QueryFpCompareJobListResult() :
	ServiceResult()
{}

QueryFpCompareJobListResult::QueryFpCompareJobListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryFpCompareJobListResult::~QueryFpCompareJobListResult()
{}

void QueryFpCompareJobListResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allFpCompareJobList = value["FpCompareJobList"]["FpCompareJob"];
	for (auto value : allFpCompareJobList)
	{
		FpCompareJob fpCompareJobListObject;
		if(!value["Id"].isNull())
			fpCompareJobListObject.id = value["Id"].asString();
		if(!value["UserData"].isNull())
			fpCompareJobListObject.userData = value["UserData"].asString();
		if(!value["PipelineId"].isNull())
			fpCompareJobListObject.pipelineId = value["PipelineId"].asString();
		if(!value["FpDBId"].isNull())
			fpCompareJobListObject.fpDBId = value["FpDBId"].asString();
		if(!value["State"].isNull())
			fpCompareJobListObject.state = value["State"].asString();
		if(!value["Code"].isNull())
			fpCompareJobListObject.code = value["Code"].asString();
		if(!value["Message"].isNull())
			fpCompareJobListObject.message = value["Message"].asString();
		if(!value["CreationTime"].isNull())
			fpCompareJobListObject.creationTime = value["CreationTime"].asString();
		if(!value["FinishTime"].isNull())
			fpCompareJobListObject.finishTime = value["FinishTime"].asString();
		auto masterFileNode = value["MasterFile"];
		if(!masterFileNode["Bucket"].isNull())
			fpCompareJobListObject.masterFile.bucket = masterFileNode["Bucket"].asString();
		if(!masterFileNode["Location"].isNull())
			fpCompareJobListObject.masterFile.location = masterFileNode["Location"].asString();
		if(!masterFileNode["Object"].isNull())
			fpCompareJobListObject.masterFile.object = masterFileNode["Object"].asString();
		auto queryFileNode = value["QueryFile"];
		if(!queryFileNode["Bucket"].isNull())
			fpCompareJobListObject.queryFile.bucket = queryFileNode["Bucket"].asString();
		if(!queryFileNode["Location"].isNull())
			fpCompareJobListObject.queryFile.location = queryFileNode["Location"].asString();
		if(!queryFileNode["Object"].isNull())
			fpCompareJobListObject.queryFile.object = queryFileNode["Object"].asString();
		auto matchFrameStorageNode = value["MatchFrameStorage"];
		auto masterMediaFramesNode = matchFrameStorageNode["MasterMediaFrames"];
		if(!masterMediaFramesNode["Bucket"].isNull())
			fpCompareJobListObject.matchFrameStorage.masterMediaFrames.bucket = masterMediaFramesNode["Bucket"].asString();
		if(!masterMediaFramesNode["Location"].isNull())
			fpCompareJobListObject.matchFrameStorage.masterMediaFrames.location = masterMediaFramesNode["Location"].asString();
		if(!masterMediaFramesNode["Object"].isNull())
			fpCompareJobListObject.matchFrameStorage.masterMediaFrames.object = masterMediaFramesNode["Object"].asString();
		auto queryMediaFramesNode = matchFrameStorageNode["QueryMediaFrames"];
		if(!queryMediaFramesNode["Bucket"].isNull())
			fpCompareJobListObject.matchFrameStorage.queryMediaFrames.bucket = queryMediaFramesNode["Bucket"].asString();
		if(!queryMediaFramesNode["Location"].isNull())
			fpCompareJobListObject.matchFrameStorage.queryMediaFrames.location = queryMediaFramesNode["Location"].asString();
		if(!queryMediaFramesNode["Object"].isNull())
			fpCompareJobListObject.matchFrameStorage.queryMediaFrames.object = queryMediaFramesNode["Object"].asString();
		auto matchedFramesDescFileNode = matchFrameStorageNode["MatchedFramesDescFile"];
		if(!matchedFramesDescFileNode["Bucket"].isNull())
			fpCompareJobListObject.matchFrameStorage.matchedFramesDescFile.bucket = matchedFramesDescFileNode["Bucket"].asString();
		if(!matchedFramesDescFileNode["Location"].isNull())
			fpCompareJobListObject.matchFrameStorage.matchedFramesDescFile.location = matchedFramesDescFileNode["Location"].asString();
		if(!matchedFramesDescFileNode["Object"].isNull())
			fpCompareJobListObject.matchFrameStorage.matchedFramesDescFile.object = matchedFramesDescFileNode["Object"].asString();
		auto fpCompareResultNode = value["FpCompareResult"];
		auto allMediaMatchSegments = value["MediaMatchSegments"]["MediaMatchSegment"];
		for (auto value : allMediaMatchSegments)
		{
			FpCompareJob::FpCompareResult::MediaMatchSegment mediaMatchSegmentObject;
			if(!value["QueryStartFrame"].isNull())
				mediaMatchSegmentObject.queryStartFrame = value["QueryStartFrame"].asString();
			if(!value["QueryEndFrame"].isNull())
				mediaMatchSegmentObject.queryEndFrame = value["QueryEndFrame"].asString();
			if(!value["MasterStartFrame"].isNull())
				mediaMatchSegmentObject.masterStartFrame = value["MasterStartFrame"].asString();
			if(!value["MasterEndFrame"].isNull())
				mediaMatchSegmentObject.masterEndFrame = value["MasterEndFrame"].asString();
			if(!value["QueryStartTime"].isNull())
				mediaMatchSegmentObject.queryStartTime = value["QueryStartTime"].asString();
			if(!value["QueryEndTime"].isNull())
				mediaMatchSegmentObject.queryEndTime = value["QueryEndTime"].asString();
			if(!value["MasterStartTime"].isNull())
				mediaMatchSegmentObject.masterStartTime = value["MasterStartTime"].asString();
			if(!value["MasterEndTime"].isNull())
				mediaMatchSegmentObject.masterEndTime = value["MasterEndTime"].asString();
			if(!value["TotalMatchFrameNum"].isNull())
				mediaMatchSegmentObject.totalMatchFrameNum = value["TotalMatchFrameNum"].asString();
			if(!value["Score"].isNull())
				mediaMatchSegmentObject.score = value["Score"].asString();
			fpCompareJobListObject.fpCompareResult.mediaMatchSegments.push_back(mediaMatchSegmentObject);
		}
		auto masterMediaInfoNode = fpCompareResultNode["MasterMediaInfo"];
		if(!masterMediaInfoNode["Duration"].isNull())
			fpCompareJobListObject.fpCompareResult.masterMediaInfo.duration = masterMediaInfoNode["Duration"].asString();
		if(!masterMediaInfoNode["FpNum"].isNull())
			fpCompareJobListObject.fpCompareResult.masterMediaInfo.fpNum = masterMediaInfoNode["FpNum"].asString();
		if(!masterMediaInfoNode["Width"].isNull())
			fpCompareJobListObject.fpCompareResult.masterMediaInfo.width = masterMediaInfoNode["Width"].asString();
		if(!masterMediaInfoNode["Height"].isNull())
			fpCompareJobListObject.fpCompareResult.masterMediaInfo.height = masterMediaInfoNode["Height"].asString();
		if(!masterMediaInfoNode["Fps"].isNull())
			fpCompareJobListObject.fpCompareResult.masterMediaInfo.fps = masterMediaInfoNode["Fps"].asString();
		if(!masterMediaInfoNode["TotalVideoFrame"].isNull())
			fpCompareJobListObject.fpCompareResult.masterMediaInfo.totalVideoFrame = masterMediaInfoNode["TotalVideoFrame"].asString();
		if(!masterMediaInfoNode["AudioBitRate"].isNull())
			fpCompareJobListObject.fpCompareResult.masterMediaInfo.audioBitRate = masterMediaInfoNode["AudioBitRate"].asString();
		if(!masterMediaInfoNode["AudioChannels"].isNull())
			fpCompareJobListObject.fpCompareResult.masterMediaInfo.audioChannels = masterMediaInfoNode["AudioChannels"].asString();
		if(!masterMediaInfoNode["AudioSampleRate"].isNull())
			fpCompareJobListObject.fpCompareResult.masterMediaInfo.audioSampleRate = masterMediaInfoNode["AudioSampleRate"].asString();
		auto queryMediaInfoNode = fpCompareResultNode["QueryMediaInfo"];
		if(!queryMediaInfoNode["Duration"].isNull())
			fpCompareJobListObject.fpCompareResult.queryMediaInfo.duration = queryMediaInfoNode["Duration"].asString();
		if(!queryMediaInfoNode["FpNum"].isNull())
			fpCompareJobListObject.fpCompareResult.queryMediaInfo.fpNum = queryMediaInfoNode["FpNum"].asString();
		if(!queryMediaInfoNode["Width"].isNull())
			fpCompareJobListObject.fpCompareResult.queryMediaInfo.width = queryMediaInfoNode["Width"].asString();
		if(!queryMediaInfoNode["Height"].isNull())
			fpCompareJobListObject.fpCompareResult.queryMediaInfo.height = queryMediaInfoNode["Height"].asString();
		if(!queryMediaInfoNode["Fps"].isNull())
			fpCompareJobListObject.fpCompareResult.queryMediaInfo.fps = queryMediaInfoNode["Fps"].asString();
		if(!queryMediaInfoNode["TotalVideoFrame"].isNull())
			fpCompareJobListObject.fpCompareResult.queryMediaInfo.totalVideoFrame = queryMediaInfoNode["TotalVideoFrame"].asString();
		if(!queryMediaInfoNode["AudioBitRate"].isNull())
			fpCompareJobListObject.fpCompareResult.queryMediaInfo.audioBitRate = queryMediaInfoNode["AudioBitRate"].asString();
		if(!queryMediaInfoNode["AudioChannels"].isNull())
			fpCompareJobListObject.fpCompareResult.queryMediaInfo.audioChannels = queryMediaInfoNode["AudioChannels"].asString();
		if(!queryMediaInfoNode["AudioSampleRate"].isNull())
			fpCompareJobListObject.fpCompareResult.queryMediaInfo.audioSampleRate = queryMediaInfoNode["AudioSampleRate"].asString();
		fpCompareJobList_.push_back(fpCompareJobListObject);
	}
	auto allNonExistIds = value["NonExistIds"]["String"];
	for (const auto &item : allNonExistIds)
		nonExistIds_.push_back(item.asString());

}

std::vector<QueryFpCompareJobListResult::FpCompareJob> QueryFpCompareJobListResult::getFpCompareJobList()const
{
	return fpCompareJobList_;
}

std::vector<std::string> QueryFpCompareJobListResult::getNonExistIds()const
{
	return nonExistIds_;
}

