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

#include <alibabacloud/vod/model/GetTranscodeTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

GetTranscodeTaskResult::GetTranscodeTaskResult() :
	ServiceResult()
{}

GetTranscodeTaskResult::GetTranscodeTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTranscodeTaskResult::~GetTranscodeTaskResult()
{}

void GetTranscodeTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto transcodeTaskNode = value["TranscodeTask"];
	if(!transcodeTaskNode["CreationTime"].isNull())
		transcodeTask_.creationTime = transcodeTaskNode["CreationTime"].asString();
	if(!transcodeTaskNode["Trigger"].isNull())
		transcodeTask_.trigger = transcodeTaskNode["Trigger"].asString();
	if(!transcodeTaskNode["TaskStatus"].isNull())
		transcodeTask_.taskStatus = transcodeTaskNode["TaskStatus"].asString();
	if(!transcodeTaskNode["VideoId"].isNull())
		transcodeTask_.videoId = transcodeTaskNode["VideoId"].asString();
	if(!transcodeTaskNode["CompleteTime"].isNull())
		transcodeTask_.completeTime = transcodeTaskNode["CompleteTime"].asString();
	if(!transcodeTaskNode["TranscodeTemplateGroupId"].isNull())
		transcodeTask_.transcodeTemplateGroupId = transcodeTaskNode["TranscodeTemplateGroupId"].asString();
	if(!transcodeTaskNode["TranscodeTaskId"].isNull())
		transcodeTask_.transcodeTaskId = transcodeTaskNode["TranscodeTaskId"].asString();
	auto allTranscodeJobInfoListNode = transcodeTaskNode["TranscodeJobInfoList"]["TranscodeJobInfo"];
	for (auto transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo : allTranscodeJobInfoListNode)
	{
		TranscodeTask::TranscodeJobInfo transcodeJobInfoObject;
		if(!transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["Definition"].isNull())
			transcodeJobInfoObject.definition = transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["Definition"].asString();
		if(!transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["CreationTime"].isNull())
			transcodeJobInfoObject.creationTime = transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["CreationTime"].asString();
		if(!transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["InputFileUrl"].isNull())
			transcodeJobInfoObject.inputFileUrl = transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["InputFileUrl"].asString();
		if(!transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["ErrorMessage"].isNull())
			transcodeJobInfoObject.errorMessage = transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["ErrorMessage"].asString();
		if(!transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["ErrorCode"].isNull())
			transcodeJobInfoObject.errorCode = transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["ErrorCode"].asString();
		if(!transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["CompleteTime"].isNull())
			transcodeJobInfoObject.completeTime = transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["CompleteTime"].asString();
		if(!transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["TranscodeProgress"].isNull())
			transcodeJobInfoObject.transcodeProgress = std::stol(transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["TranscodeProgress"].asString());
		if(!transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["Priority"].isNull())
			transcodeJobInfoObject.priority = transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["Priority"].asString();
		if(!transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["TranscodeJobStatus"].isNull())
			transcodeJobInfoObject.transcodeJobStatus = transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["TranscodeJobStatus"].asString();
		if(!transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["TranscodeTemplateId"].isNull())
			transcodeJobInfoObject.transcodeTemplateId = transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["TranscodeTemplateId"].asString();
		if(!transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["TranscodeJobId"].isNull())
			transcodeJobInfoObject.transcodeJobId = transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["TranscodeJobId"].asString();
		auto outputFileNode = value["OutputFile"];
		if(!outputFileNode["VideoStreamList"].isNull())
			transcodeJobInfoObject.outputFile.videoStreamList = outputFileNode["VideoStreamList"].asString();
		if(!outputFileNode["OutputFileUrl"].isNull())
			transcodeJobInfoObject.outputFile.outputFileUrl = outputFileNode["OutputFileUrl"].asString();
		if(!outputFileNode["Encryption"].isNull())
			transcodeJobInfoObject.outputFile.encryption = outputFileNode["Encryption"].asString();
		if(!outputFileNode["Height"].isNull())
			transcodeJobInfoObject.outputFile.height = outputFileNode["Height"].asString();
		if(!outputFileNode["SubtitleStreamList"].isNull())
			transcodeJobInfoObject.outputFile.subtitleStreamList = outputFileNode["SubtitleStreamList"].asString();
		if(!outputFileNode["Bitrate"].isNull())
			transcodeJobInfoObject.outputFile.bitrate = outputFileNode["Bitrate"].asString();
		if(!outputFileNode["AudioStreamList"].isNull())
			transcodeJobInfoObject.outputFile.audioStreamList = outputFileNode["AudioStreamList"].asString();
		if(!outputFileNode["Width"].isNull())
			transcodeJobInfoObject.outputFile.width = outputFileNode["Width"].asString();
		if(!outputFileNode["Fps"].isNull())
			transcodeJobInfoObject.outputFile.fps = outputFileNode["Fps"].asString();
		if(!outputFileNode["Duration"].isNull())
			transcodeJobInfoObject.outputFile.duration = outputFileNode["Duration"].asString();
		if(!outputFileNode["Format"].isNull())
			transcodeJobInfoObject.outputFile.format = outputFileNode["Format"].asString();
		if(!outputFileNode["Filesize"].isNull())
			transcodeJobInfoObject.outputFile.filesize = std::stol(outputFileNode["Filesize"].asString());
			auto allWatermarkIdList = outputFileNode["WatermarkIdList"]["WatermarkId"];
			for (auto value : allWatermarkIdList)
				transcodeJobInfoObject.outputFile.watermarkIdList.push_back(value.asString());
		transcodeTask_.transcodeJobInfoList.push_back(transcodeJobInfoObject);
	}

}

GetTranscodeTaskResult::TranscodeTask GetTranscodeTaskResult::getTranscodeTask()const
{
	return transcodeTask_;
}

