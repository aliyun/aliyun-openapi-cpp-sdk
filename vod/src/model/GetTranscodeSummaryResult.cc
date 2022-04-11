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
		if(!valueTranscodeSummaryListTranscodeSummary["CreationTime"].isNull())
			transcodeSummaryListObject.creationTime = valueTranscodeSummaryListTranscodeSummary["CreationTime"].asString();
		if(!valueTranscodeSummaryListTranscodeSummary["Trigger"].isNull())
			transcodeSummaryListObject.trigger = valueTranscodeSummaryListTranscodeSummary["Trigger"].asString();
		if(!valueTranscodeSummaryListTranscodeSummary["VideoId"].isNull())
			transcodeSummaryListObject.videoId = valueTranscodeSummaryListTranscodeSummary["VideoId"].asString();
		if(!valueTranscodeSummaryListTranscodeSummary["CompleteTime"].isNull())
			transcodeSummaryListObject.completeTime = valueTranscodeSummaryListTranscodeSummary["CompleteTime"].asString();
		if(!valueTranscodeSummaryListTranscodeSummary["TranscodeStatus"].isNull())
			transcodeSummaryListObject.transcodeStatus = valueTranscodeSummaryListTranscodeSummary["TranscodeStatus"].asString();
		if(!valueTranscodeSummaryListTranscodeSummary["TranscodeTemplateGroupId"].isNull())
			transcodeSummaryListObject.transcodeTemplateGroupId = valueTranscodeSummaryListTranscodeSummary["TranscodeTemplateGroupId"].asString();
		auto allTranscodeJobInfoSummaryListNode = valueTranscodeSummaryListTranscodeSummary["TranscodeJobInfoSummaryList"]["TranscodeJobInfoSummary"];
		for (auto valueTranscodeSummaryListTranscodeSummaryTranscodeJobInfoSummaryListTranscodeJobInfoSummary : allTranscodeJobInfoSummaryListNode)
		{
			TranscodeSummary::TranscodeJobInfoSummary transcodeJobInfoSummaryListObject;
			if(!valueTranscodeSummaryListTranscodeSummaryTranscodeJobInfoSummaryListTranscodeJobInfoSummary["CreationTime"].isNull())
				transcodeJobInfoSummaryListObject.creationTime = valueTranscodeSummaryListTranscodeSummaryTranscodeJobInfoSummaryListTranscodeJobInfoSummary["CreationTime"].asString();
			if(!valueTranscodeSummaryListTranscodeSummaryTranscodeJobInfoSummaryListTranscodeJobInfoSummary["ErrorMessage"].isNull())
				transcodeJobInfoSummaryListObject.errorMessage = valueTranscodeSummaryListTranscodeSummaryTranscodeJobInfoSummaryListTranscodeJobInfoSummary["ErrorMessage"].asString();
			if(!valueTranscodeSummaryListTranscodeSummaryTranscodeJobInfoSummaryListTranscodeJobInfoSummary["Encryption"].isNull())
				transcodeJobInfoSummaryListObject.encryption = valueTranscodeSummaryListTranscodeSummaryTranscodeJobInfoSummaryListTranscodeJobInfoSummary["Encryption"].asString();
			if(!valueTranscodeSummaryListTranscodeSummaryTranscodeJobInfoSummaryListTranscodeJobInfoSummary["Height"].isNull())
				transcodeJobInfoSummaryListObject.height = valueTranscodeSummaryListTranscodeSummaryTranscodeJobInfoSummaryListTranscodeJobInfoSummary["Height"].asString();
			if(!valueTranscodeSummaryListTranscodeSummaryTranscodeJobInfoSummaryListTranscodeJobInfoSummary["TranscodeProgress"].isNull())
				transcodeJobInfoSummaryListObject.transcodeProgress = std::stol(valueTranscodeSummaryListTranscodeSummaryTranscodeJobInfoSummaryListTranscodeJobInfoSummary["TranscodeProgress"].asString());
			if(!valueTranscodeSummaryListTranscodeSummaryTranscodeJobInfoSummaryListTranscodeJobInfoSummary["TranscodeTemplateId"].isNull())
				transcodeJobInfoSummaryListObject.transcodeTemplateId = valueTranscodeSummaryListTranscodeSummaryTranscodeJobInfoSummaryListTranscodeJobInfoSummary["TranscodeTemplateId"].asString();
			if(!valueTranscodeSummaryListTranscodeSummaryTranscodeJobInfoSummaryListTranscodeJobInfoSummary["Bitrate"].isNull())
				transcodeJobInfoSummaryListObject.bitrate = valueTranscodeSummaryListTranscodeSummaryTranscodeJobInfoSummaryListTranscodeJobInfoSummary["Bitrate"].asString();
			if(!valueTranscodeSummaryListTranscodeSummaryTranscodeJobInfoSummaryListTranscodeJobInfoSummary["Definition"].isNull())
				transcodeJobInfoSummaryListObject.definition = valueTranscodeSummaryListTranscodeSummaryTranscodeJobInfoSummaryListTranscodeJobInfoSummary["Definition"].asString();
			if(!valueTranscodeSummaryListTranscodeSummaryTranscodeJobInfoSummaryListTranscodeJobInfoSummary["ErrorCode"].isNull())
				transcodeJobInfoSummaryListObject.errorCode = valueTranscodeSummaryListTranscodeSummaryTranscodeJobInfoSummaryListTranscodeJobInfoSummary["ErrorCode"].asString();
			if(!valueTranscodeSummaryListTranscodeSummaryTranscodeJobInfoSummaryListTranscodeJobInfoSummary["CompleteTime"].isNull())
				transcodeJobInfoSummaryListObject.completeTime = valueTranscodeSummaryListTranscodeSummaryTranscodeJobInfoSummaryListTranscodeJobInfoSummary["CompleteTime"].asString();
			if(!valueTranscodeSummaryListTranscodeSummaryTranscodeJobInfoSummaryListTranscodeJobInfoSummary["Width"].isNull())
				transcodeJobInfoSummaryListObject.width = valueTranscodeSummaryListTranscodeSummaryTranscodeJobInfoSummaryListTranscodeJobInfoSummary["Width"].asString();
			if(!valueTranscodeSummaryListTranscodeSummaryTranscodeJobInfoSummaryListTranscodeJobInfoSummary["Duration"].isNull())
				transcodeJobInfoSummaryListObject.duration = valueTranscodeSummaryListTranscodeSummaryTranscodeJobInfoSummaryListTranscodeJobInfoSummary["Duration"].asString();
			if(!valueTranscodeSummaryListTranscodeSummaryTranscodeJobInfoSummaryListTranscodeJobInfoSummary["Fps"].isNull())
				transcodeJobInfoSummaryListObject.fps = valueTranscodeSummaryListTranscodeSummaryTranscodeJobInfoSummaryListTranscodeJobInfoSummary["Fps"].asString();
			if(!valueTranscodeSummaryListTranscodeSummaryTranscodeJobInfoSummaryListTranscodeJobInfoSummary["TranscodeJobStatus"].isNull())
				transcodeJobInfoSummaryListObject.transcodeJobStatus = valueTranscodeSummaryListTranscodeSummaryTranscodeJobInfoSummaryListTranscodeJobInfoSummary["TranscodeJobStatus"].asString();
			if(!valueTranscodeSummaryListTranscodeSummaryTranscodeJobInfoSummaryListTranscodeJobInfoSummary["Filesize"].isNull())
				transcodeJobInfoSummaryListObject.filesize = std::stol(valueTranscodeSummaryListTranscodeSummaryTranscodeJobInfoSummaryListTranscodeJobInfoSummary["Filesize"].asString());
			if(!valueTranscodeSummaryListTranscodeSummaryTranscodeJobInfoSummaryListTranscodeJobInfoSummary["Format"].isNull())
				transcodeJobInfoSummaryListObject.format = valueTranscodeSummaryListTranscodeSummaryTranscodeJobInfoSummaryListTranscodeJobInfoSummary["Format"].asString();
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

