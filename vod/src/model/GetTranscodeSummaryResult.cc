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

#include <alibabacloud/vod/model/GetTranscodeSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

GetTranscodeSummaryResult::GetTranscodeSummaryResult() :
	ServiceResult()
{}

GetTranscodeSummaryResult::GetTranscodeSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTranscodeSummaryResult::~GetTranscodeSummaryResult()
{}

void GetTranscodeSummaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTranscodeSummaryListNode = value["TranscodeSummaryList"]["TranscodeSummary"];
	for (auto valueTranscodeSummaryListTranscodeSummary : allTranscodeSummaryListNode)
	{
		TranscodeSummary transcodeSummaryListObject;
		if(!valueTranscodeSummaryListTranscodeSummary["VideoId"].isNull())
			transcodeSummaryListObject.videoId = valueTranscodeSummaryListTranscodeSummary["VideoId"].asString();
		if(!valueTranscodeSummaryListTranscodeSummary["TranscodeStatus"].isNull())
			transcodeSummaryListObject.transcodeStatus = valueTranscodeSummaryListTranscodeSummary["TranscodeStatus"].asString();
		if(!valueTranscodeSummaryListTranscodeSummary["CreationTime"].isNull())
			transcodeSummaryListObject.creationTime = valueTranscodeSummaryListTranscodeSummary["CreationTime"].asString();
		if(!valueTranscodeSummaryListTranscodeSummary["CompleteTime"].isNull())
			transcodeSummaryListObject.completeTime = valueTranscodeSummaryListTranscodeSummary["CompleteTime"].asString();
		if(!valueTranscodeSummaryListTranscodeSummary["Trigger"].isNull())
			transcodeSummaryListObject.trigger = valueTranscodeSummaryListTranscodeSummary["Trigger"].asString();
		if(!valueTranscodeSummaryListTranscodeSummary["TranscodeTemplateGroupId"].isNull())
			transcodeSummaryListObject.transcodeTemplateGroupId = valueTranscodeSummaryListTranscodeSummary["TranscodeTemplateGroupId"].asString();
		auto allTranscodeJobInfoSummaryListNode = allTranscodeSummaryListNode["TranscodeJobInfoSummaryList"]["TranscodeJobInfoSummary"];
		for (auto allTranscodeSummaryListNodeTranscodeJobInfoSummaryListTranscodeJobInfoSummary : allTranscodeJobInfoSummaryListNode)
		{
			TranscodeSummary::TranscodeJobInfoSummary transcodeJobInfoSummaryListObject;
			if(!allTranscodeSummaryListNodeTranscodeJobInfoSummaryListTranscodeJobInfoSummary["TranscodeTemplateId"].isNull())
				transcodeJobInfoSummaryListObject.transcodeTemplateId = allTranscodeSummaryListNodeTranscodeJobInfoSummaryListTranscodeJobInfoSummary["TranscodeTemplateId"].asString();
			if(!allTranscodeSummaryListNodeTranscodeJobInfoSummaryListTranscodeJobInfoSummary["TranscodeJobStatus"].isNull())
				transcodeJobInfoSummaryListObject.transcodeJobStatus = allTranscodeSummaryListNodeTranscodeJobInfoSummaryListTranscodeJobInfoSummary["TranscodeJobStatus"].asString();
			if(!allTranscodeSummaryListNodeTranscodeJobInfoSummaryListTranscodeJobInfoSummary["CreationTime"].isNull())
				transcodeJobInfoSummaryListObject.creationTime = allTranscodeSummaryListNodeTranscodeJobInfoSummaryListTranscodeJobInfoSummary["CreationTime"].asString();
			if(!allTranscodeSummaryListNodeTranscodeJobInfoSummaryListTranscodeJobInfoSummary["CompleteTime"].isNull())
				transcodeJobInfoSummaryListObject.completeTime = allTranscodeSummaryListNodeTranscodeJobInfoSummaryListTranscodeJobInfoSummary["CompleteTime"].asString();
			if(!allTranscodeSummaryListNodeTranscodeJobInfoSummaryListTranscodeJobInfoSummary["TranscodeProgress"].isNull())
				transcodeJobInfoSummaryListObject.transcodeProgress = std::stol(allTranscodeSummaryListNodeTranscodeJobInfoSummaryListTranscodeJobInfoSummary["TranscodeProgress"].asString());
			if(!allTranscodeSummaryListNodeTranscodeJobInfoSummaryListTranscodeJobInfoSummary["ErrorCode"].isNull())
				transcodeJobInfoSummaryListObject.errorCode = allTranscodeSummaryListNodeTranscodeJobInfoSummaryListTranscodeJobInfoSummary["ErrorCode"].asString();
			if(!allTranscodeSummaryListNodeTranscodeJobInfoSummaryListTranscodeJobInfoSummary["ErrorMessage"].isNull())
				transcodeJobInfoSummaryListObject.errorMessage = allTranscodeSummaryListNodeTranscodeJobInfoSummaryListTranscodeJobInfoSummary["ErrorMessage"].asString();
			if(!allTranscodeSummaryListNodeTranscodeJobInfoSummaryListTranscodeJobInfoSummary["Definition"].isNull())
				transcodeJobInfoSummaryListObject.definition = allTranscodeSummaryListNodeTranscodeJobInfoSummaryListTranscodeJobInfoSummary["Definition"].asString();
			if(!allTranscodeSummaryListNodeTranscodeJobInfoSummaryListTranscodeJobInfoSummary["Encryption"].isNull())
				transcodeJobInfoSummaryListObject.encryption = allTranscodeSummaryListNodeTranscodeJobInfoSummaryListTranscodeJobInfoSummary["Encryption"].asString();
			if(!allTranscodeSummaryListNodeTranscodeJobInfoSummaryListTranscodeJobInfoSummary["Width"].isNull())
				transcodeJobInfoSummaryListObject.width = allTranscodeSummaryListNodeTranscodeJobInfoSummaryListTranscodeJobInfoSummary["Width"].asString();
			if(!allTranscodeSummaryListNodeTranscodeJobInfoSummaryListTranscodeJobInfoSummary["Height"].isNull())
				transcodeJobInfoSummaryListObject.height = allTranscodeSummaryListNodeTranscodeJobInfoSummaryListTranscodeJobInfoSummary["Height"].asString();
			if(!allTranscodeSummaryListNodeTranscodeJobInfoSummaryListTranscodeJobInfoSummary["Bitrate"].isNull())
				transcodeJobInfoSummaryListObject.bitrate = allTranscodeSummaryListNodeTranscodeJobInfoSummaryListTranscodeJobInfoSummary["Bitrate"].asString();
			if(!allTranscodeSummaryListNodeTranscodeJobInfoSummaryListTranscodeJobInfoSummary["Fps"].isNull())
				transcodeJobInfoSummaryListObject.fps = allTranscodeSummaryListNodeTranscodeJobInfoSummaryListTranscodeJobInfoSummary["Fps"].asString();
			if(!allTranscodeSummaryListNodeTranscodeJobInfoSummaryListTranscodeJobInfoSummary["Format"].isNull())
				transcodeJobInfoSummaryListObject.format = allTranscodeSummaryListNodeTranscodeJobInfoSummaryListTranscodeJobInfoSummary["Format"].asString();
			if(!allTranscodeSummaryListNodeTranscodeJobInfoSummaryListTranscodeJobInfoSummary["Duration"].isNull())
				transcodeJobInfoSummaryListObject.duration = allTranscodeSummaryListNodeTranscodeJobInfoSummaryListTranscodeJobInfoSummary["Duration"].asString();
			if(!allTranscodeSummaryListNodeTranscodeJobInfoSummaryListTranscodeJobInfoSummary["Filesize"].isNull())
				transcodeJobInfoSummaryListObject.filesize = std::stol(allTranscodeSummaryListNodeTranscodeJobInfoSummaryListTranscodeJobInfoSummary["Filesize"].asString());
			auto allWatermarkIdList = value["WatermarkIdList"]["WatermarkId"];
			for (auto value : allWatermarkIdList)
				transcodeJobInfoSummaryListObject.watermarkIdList.push_back(value.asString());
			transcodeSummaryListObject.transcodeJobInfoSummaryList.push_back(transcodeJobInfoSummaryListObject);
		}
		transcodeSummaryList_.push_back(transcodeSummaryListObject);
	}
	auto allNonExistVideoIds = value["NonExistVideoIds"]["VideoId"];
	for (const auto &item : allNonExistVideoIds)
		nonExistVideoIds_.push_back(item.asString());

}

std::vector<GetTranscodeSummaryResult::TranscodeSummary> GetTranscodeSummaryResult::getTranscodeSummaryList()const
{
	return transcodeSummaryList_;
}

std::vector<std::string> GetTranscodeSummaryResult::getNonExistVideoIds()const
{
	return nonExistVideoIds_;
}

