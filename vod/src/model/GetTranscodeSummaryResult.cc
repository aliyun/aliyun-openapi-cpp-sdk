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
	auto allTranscodeSummaryList = value["TranscodeSummaryList"]["TranscodeSummary"];
	for (auto value : allTranscodeSummaryList)
	{
		TranscodeSummary transcodeSummaryListObject;
		if(!value["VideoId"].isNull())
			transcodeSummaryListObject.videoId = value["VideoId"].asString();
		if(!value["TranscodeStatus"].isNull())
			transcodeSummaryListObject.transcodeStatus = value["TranscodeStatus"].asString();
		if(!value["CreationTime"].isNull())
			transcodeSummaryListObject.creationTime = value["CreationTime"].asString();
		if(!value["CompleteTime"].isNull())
			transcodeSummaryListObject.completeTime = value["CompleteTime"].asString();
		if(!value["Trigger"].isNull())
			transcodeSummaryListObject.trigger = value["Trigger"].asString();
		if(!value["TranscodeTemplateGroupId"].isNull())
			transcodeSummaryListObject.transcodeTemplateGroupId = value["TranscodeTemplateGroupId"].asString();
		auto allTranscodeJobInfoSummaryList = value["TranscodeJobInfoSummaryList"]["TranscodeJobInfoSummary"];
		for (auto value : allTranscodeJobInfoSummaryList)
		{
			TranscodeSummary::TranscodeJobInfoSummary transcodeJobInfoSummaryListObject;
			if(!value["TranscodeTemplateId"].isNull())
				transcodeJobInfoSummaryListObject.transcodeTemplateId = value["TranscodeTemplateId"].asString();
			if(!value["TranscodeJobStatus"].isNull())
				transcodeJobInfoSummaryListObject.transcodeJobStatus = value["TranscodeJobStatus"].asString();
			if(!value["CreationTime"].isNull())
				transcodeJobInfoSummaryListObject.creationTime = value["CreationTime"].asString();
			if(!value["CompleteTime"].isNull())
				transcodeJobInfoSummaryListObject.completeTime = value["CompleteTime"].asString();
			if(!value["TranscodeProgress"].isNull())
				transcodeJobInfoSummaryListObject.transcodeProgress = std::stol(value["TranscodeProgress"].asString());
			if(!value["ErrorCode"].isNull())
				transcodeJobInfoSummaryListObject.errorCode = value["ErrorCode"].asString();
			if(!value["ErrorMessage"].isNull())
				transcodeJobInfoSummaryListObject.errorMessage = value["ErrorMessage"].asString();
			if(!value["Definition"].isNull())
				transcodeJobInfoSummaryListObject.definition = value["Definition"].asString();
			if(!value["Encryption"].isNull())
				transcodeJobInfoSummaryListObject.encryption = value["Encryption"].asString();
			if(!value["Width"].isNull())
				transcodeJobInfoSummaryListObject.width = value["Width"].asString();
			if(!value["Height"].isNull())
				transcodeJobInfoSummaryListObject.height = value["Height"].asString();
			if(!value["Bitrate"].isNull())
				transcodeJobInfoSummaryListObject.bitrate = value["Bitrate"].asString();
			if(!value["Fps"].isNull())
				transcodeJobInfoSummaryListObject.fps = value["Fps"].asString();
			if(!value["Format"].isNull())
				transcodeJobInfoSummaryListObject.format = value["Format"].asString();
			if(!value["Duration"].isNull())
				transcodeJobInfoSummaryListObject.duration = value["Duration"].asString();
			if(!value["Filesize"].isNull())
				transcodeJobInfoSummaryListObject.filesize = std::stol(value["Filesize"].asString());
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

