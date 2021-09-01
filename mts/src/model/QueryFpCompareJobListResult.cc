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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFpCompareJobListNode = value["FpCompareJobList"]["FpCompareJob"];
	for (auto valueFpCompareJobListFpCompareJob : allFpCompareJobListNode)
	{
		FpCompareJob fpCompareJobListObject;
		if(!valueFpCompareJobListFpCompareJob["CreationTime"].isNull())
			fpCompareJobListObject.creationTime = valueFpCompareJobListFpCompareJob["CreationTime"].asString();
		if(!valueFpCompareJobListFpCompareJob["FinishTime"].isNull())
			fpCompareJobListObject.finishTime = valueFpCompareJobListFpCompareJob["FinishTime"].asString();
		if(!valueFpCompareJobListFpCompareJob["State"].isNull())
			fpCompareJobListObject.state = valueFpCompareJobListFpCompareJob["State"].asString();
		if(!valueFpCompareJobListFpCompareJob["Message"].isNull())
			fpCompareJobListObject.message = valueFpCompareJobListFpCompareJob["Message"].asString();
		if(!valueFpCompareJobListFpCompareJob["FpDBId"].isNull())
			fpCompareJobListObject.fpDBId = valueFpCompareJobListFpCompareJob["FpDBId"].asString();
		if(!valueFpCompareJobListFpCompareJob["UserData"].isNull())
			fpCompareJobListObject.userData = valueFpCompareJobListFpCompareJob["UserData"].asString();
		if(!valueFpCompareJobListFpCompareJob["Code"].isNull())
			fpCompareJobListObject.code = valueFpCompareJobListFpCompareJob["Code"].asString();
		if(!valueFpCompareJobListFpCompareJob["PipelineId"].isNull())
			fpCompareJobListObject.pipelineId = valueFpCompareJobListFpCompareJob["PipelineId"].asString();
		if(!valueFpCompareJobListFpCompareJob["Id"].isNull())
			fpCompareJobListObject.id = valueFpCompareJobListFpCompareJob["Id"].asString();
		auto masterFileNode = value["MasterFile"];
		if(!masterFileNode["Object"].isNull())
			fpCompareJobListObject.masterFile.object = masterFileNode["Object"].asString();
		if(!masterFileNode["Location"].isNull())
			fpCompareJobListObject.masterFile.location = masterFileNode["Location"].asString();
		if(!masterFileNode["Bucket"].isNull())
			fpCompareJobListObject.masterFile.bucket = masterFileNode["Bucket"].asString();
		auto queryFileNode = value["QueryFile"];
		if(!queryFileNode["Object"].isNull())
			fpCompareJobListObject.queryFile.object = queryFileNode["Object"].asString();
		if(!queryFileNode["Location"].isNull())
			fpCompareJobListObject.queryFile.location = queryFileNode["Location"].asString();
		if(!queryFileNode["Bucket"].isNull())
			fpCompareJobListObject.queryFile.bucket = queryFileNode["Bucket"].asString();
		auto matchFrameStorageNode = value["MatchFrameStorage"];
		auto masterMediaFramesNode = matchFrameStorageNode["MasterMediaFrames"];
		if(!masterMediaFramesNode["Object"].isNull())
			fpCompareJobListObject.matchFrameStorage.masterMediaFrames.object = masterMediaFramesNode["Object"].asString();
		if(!masterMediaFramesNode["Location"].isNull())
			fpCompareJobListObject.matchFrameStorage.masterMediaFrames.location = masterMediaFramesNode["Location"].asString();
		if(!masterMediaFramesNode["Bucket"].isNull())
			fpCompareJobListObject.matchFrameStorage.masterMediaFrames.bucket = masterMediaFramesNode["Bucket"].asString();
		auto matchedFramesDescFileNode = matchFrameStorageNode["MatchedFramesDescFile"];
		if(!matchedFramesDescFileNode["Object"].isNull())
			fpCompareJobListObject.matchFrameStorage.matchedFramesDescFile.object = matchedFramesDescFileNode["Object"].asString();
		if(!matchedFramesDescFileNode["Location"].isNull())
			fpCompareJobListObject.matchFrameStorage.matchedFramesDescFile.location = matchedFramesDescFileNode["Location"].asString();
		if(!matchedFramesDescFileNode["Bucket"].isNull())
			fpCompareJobListObject.matchFrameStorage.matchedFramesDescFile.bucket = matchedFramesDescFileNode["Bucket"].asString();
		auto queryMediaFramesNode = matchFrameStorageNode["QueryMediaFrames"];
		if(!queryMediaFramesNode["Object"].isNull())
			fpCompareJobListObject.matchFrameStorage.queryMediaFrames.object = queryMediaFramesNode["Object"].asString();
		if(!queryMediaFramesNode["Location"].isNull())
			fpCompareJobListObject.matchFrameStorage.queryMediaFrames.location = queryMediaFramesNode["Location"].asString();
		if(!queryMediaFramesNode["Bucket"].isNull())
			fpCompareJobListObject.matchFrameStorage.queryMediaFrames.bucket = queryMediaFramesNode["Bucket"].asString();
		auto fpCompareResultNode = value["FpCompareResult"];
		auto allMediaMatchSegmentsNode = fpCompareResultNode["MediaMatchSegments"]["MediaMatchSegment"];
		for (auto fpCompareResultNodeMediaMatchSegmentsMediaMatchSegment : allMediaMatchSegmentsNode)
		{
			FpCompareJob::FpCompareResult::MediaMatchSegment mediaMatchSegmentObject;
			if(!fpCompareResultNodeMediaMatchSegmentsMediaMatchSegment["QueryStartTime"].isNull())
				mediaMatchSegmentObject.queryStartTime = fpCompareResultNodeMediaMatchSegmentsMediaMatchSegment["QueryStartTime"].asString();
			if(!fpCompareResultNodeMediaMatchSegmentsMediaMatchSegment["QueryEndFrame"].isNull())
				mediaMatchSegmentObject.queryEndFrame = fpCompareResultNodeMediaMatchSegmentsMediaMatchSegment["QueryEndFrame"].asString();
			if(!fpCompareResultNodeMediaMatchSegmentsMediaMatchSegment["Score"].isNull())
				mediaMatchSegmentObject.score = fpCompareResultNodeMediaMatchSegmentsMediaMatchSegment["Score"].asString();
			if(!fpCompareResultNodeMediaMatchSegmentsMediaMatchSegment["TotalMatchFrameNum"].isNull())
				mediaMatchSegmentObject.totalMatchFrameNum = fpCompareResultNodeMediaMatchSegmentsMediaMatchSegment["TotalMatchFrameNum"].asString();
			if(!fpCompareResultNodeMediaMatchSegmentsMediaMatchSegment["MasterEndTime"].isNull())
				mediaMatchSegmentObject.masterEndTime = fpCompareResultNodeMediaMatchSegmentsMediaMatchSegment["MasterEndTime"].asString();
			if(!fpCompareResultNodeMediaMatchSegmentsMediaMatchSegment["MasterStartTime"].isNull())
				mediaMatchSegmentObject.masterStartTime = fpCompareResultNodeMediaMatchSegmentsMediaMatchSegment["MasterStartTime"].asString();
			if(!fpCompareResultNodeMediaMatchSegmentsMediaMatchSegment["QueryStartFrame"].isNull())
				mediaMatchSegmentObject.queryStartFrame = fpCompareResultNodeMediaMatchSegmentsMediaMatchSegment["QueryStartFrame"].asString();
			if(!fpCompareResultNodeMediaMatchSegmentsMediaMatchSegment["MasterEndFrame"].isNull())
				mediaMatchSegmentObject.masterEndFrame = fpCompareResultNodeMediaMatchSegmentsMediaMatchSegment["MasterEndFrame"].asString();
			if(!fpCompareResultNodeMediaMatchSegmentsMediaMatchSegment["MasterStartFrame"].isNull())
				mediaMatchSegmentObject.masterStartFrame = fpCompareResultNodeMediaMatchSegmentsMediaMatchSegment["MasterStartFrame"].asString();
			if(!fpCompareResultNodeMediaMatchSegmentsMediaMatchSegment["QueryEndTime"].isNull())
				mediaMatchSegmentObject.queryEndTime = fpCompareResultNodeMediaMatchSegmentsMediaMatchSegment["QueryEndTime"].asString();
			fpCompareJobListObject.fpCompareResult.mediaMatchSegments.push_back(mediaMatchSegmentObject);
		}
		auto queryMediaInfoNode = fpCompareResultNode["QueryMediaInfo"];
		if(!queryMediaInfoNode["AudioSampleRate"].isNull())
			fpCompareJobListObject.fpCompareResult.queryMediaInfo.audioSampleRate = queryMediaInfoNode["AudioSampleRate"].asString();
		if(!queryMediaInfoNode["AudioBitRate"].isNull())
			fpCompareJobListObject.fpCompareResult.queryMediaInfo.audioBitRate = queryMediaInfoNode["AudioBitRate"].asString();
		if(!queryMediaInfoNode["FpNum"].isNull())
			fpCompareJobListObject.fpCompareResult.queryMediaInfo.fpNum = queryMediaInfoNode["FpNum"].asString();
		if(!queryMediaInfoNode["Width"].isNull())
			fpCompareJobListObject.fpCompareResult.queryMediaInfo.width = queryMediaInfoNode["Width"].asString();
		if(!queryMediaInfoNode["Height"].isNull())
			fpCompareJobListObject.fpCompareResult.queryMediaInfo.height = queryMediaInfoNode["Height"].asString();
		if(!queryMediaInfoNode["TotalVideoFrame"].isNull())
			fpCompareJobListObject.fpCompareResult.queryMediaInfo.totalVideoFrame = queryMediaInfoNode["TotalVideoFrame"].asString();
		if(!queryMediaInfoNode["Fps"].isNull())
			fpCompareJobListObject.fpCompareResult.queryMediaInfo.fps = queryMediaInfoNode["Fps"].asString();
		if(!queryMediaInfoNode["Duration"].isNull())
			fpCompareJobListObject.fpCompareResult.queryMediaInfo.duration = queryMediaInfoNode["Duration"].asString();
		if(!queryMediaInfoNode["AudioChannels"].isNull())
			fpCompareJobListObject.fpCompareResult.queryMediaInfo.audioChannels = queryMediaInfoNode["AudioChannels"].asString();
		auto masterMediaInfoNode = fpCompareResultNode["MasterMediaInfo"];
		if(!masterMediaInfoNode["AudioSampleRate"].isNull())
			fpCompareJobListObject.fpCompareResult.masterMediaInfo.audioSampleRate = masterMediaInfoNode["AudioSampleRate"].asString();
		if(!masterMediaInfoNode["AudioBitRate"].isNull())
			fpCompareJobListObject.fpCompareResult.masterMediaInfo.audioBitRate = masterMediaInfoNode["AudioBitRate"].asString();
		if(!masterMediaInfoNode["FpNum"].isNull())
			fpCompareJobListObject.fpCompareResult.masterMediaInfo.fpNum = masterMediaInfoNode["FpNum"].asString();
		if(!masterMediaInfoNode["Width"].isNull())
			fpCompareJobListObject.fpCompareResult.masterMediaInfo.width = masterMediaInfoNode["Width"].asString();
		if(!masterMediaInfoNode["Height"].isNull())
			fpCompareJobListObject.fpCompareResult.masterMediaInfo.height = masterMediaInfoNode["Height"].asString();
		if(!masterMediaInfoNode["TotalVideoFrame"].isNull())
			fpCompareJobListObject.fpCompareResult.masterMediaInfo.totalVideoFrame = masterMediaInfoNode["TotalVideoFrame"].asString();
		if(!masterMediaInfoNode["Fps"].isNull())
			fpCompareJobListObject.fpCompareResult.masterMediaInfo.fps = masterMediaInfoNode["Fps"].asString();
		if(!masterMediaInfoNode["Duration"].isNull())
			fpCompareJobListObject.fpCompareResult.masterMediaInfo.duration = masterMediaInfoNode["Duration"].asString();
		if(!masterMediaInfoNode["AudioChannels"].isNull())
			fpCompareJobListObject.fpCompareResult.masterMediaInfo.audioChannels = masterMediaInfoNode["AudioChannels"].asString();
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

