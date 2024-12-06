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
	auto allTranscodeJobInfoListNode = value["TranscodeJobInfoList"]["TranscodeJobInfo"];
	for (auto valueTranscodeJobInfoListTranscodeJobInfo : allTranscodeJobInfoListNode)
	{
		TranscodeJobInfo transcodeJobInfoListObject;
		if(!valueTranscodeJobInfoListTranscodeJobInfo["Definition"].isNull())
			transcodeJobInfoListObject.definition = valueTranscodeJobInfoListTranscodeJobInfo["Definition"].asString();
		if(!valueTranscodeJobInfoListTranscodeJobInfo["CreationTime"].isNull())
			transcodeJobInfoListObject.creationTime = valueTranscodeJobInfoListTranscodeJobInfo["CreationTime"].asString();
		if(!valueTranscodeJobInfoListTranscodeJobInfo["InputFileUrl"].isNull())
			transcodeJobInfoListObject.inputFileUrl = valueTranscodeJobInfoListTranscodeJobInfo["InputFileUrl"].asString();
		if(!valueTranscodeJobInfoListTranscodeJobInfo["ErrorMessage"].isNull())
			transcodeJobInfoListObject.errorMessage = valueTranscodeJobInfoListTranscodeJobInfo["ErrorMessage"].asString();
		if(!valueTranscodeJobInfoListTranscodeJobInfo["ErrorCode"].isNull())
			transcodeJobInfoListObject.errorCode = valueTranscodeJobInfoListTranscodeJobInfo["ErrorCode"].asString();
		if(!valueTranscodeJobInfoListTranscodeJobInfo["CompleteTime"].isNull())
			transcodeJobInfoListObject.completeTime = valueTranscodeJobInfoListTranscodeJobInfo["CompleteTime"].asString();
		if(!valueTranscodeJobInfoListTranscodeJobInfo["TranscodeProgress"].isNull())
			transcodeJobInfoListObject.transcodeProgress = std::stol(valueTranscodeJobInfoListTranscodeJobInfo["TranscodeProgress"].asString());
		if(!valueTranscodeJobInfoListTranscodeJobInfo["Priority"].isNull())
			transcodeJobInfoListObject.priority = valueTranscodeJobInfoListTranscodeJobInfo["Priority"].asString();
		if(!valueTranscodeJobInfoListTranscodeJobInfo["TranscodeJobStatus"].isNull())
			transcodeJobInfoListObject.transcodeJobStatus = valueTranscodeJobInfoListTranscodeJobInfo["TranscodeJobStatus"].asString();
		if(!valueTranscodeJobInfoListTranscodeJobInfo["TranscodeTemplateId"].isNull())
			transcodeJobInfoListObject.transcodeTemplateId = valueTranscodeJobInfoListTranscodeJobInfo["TranscodeTemplateId"].asString();
		if(!valueTranscodeJobInfoListTranscodeJobInfo["TranscodeJobId"].isNull())
			transcodeJobInfoListObject.transcodeJobId = valueTranscodeJobInfoListTranscodeJobInfo["TranscodeJobId"].asString();
		auto outputFileNode = value["OutputFile"];
		if(!outputFileNode["VideoStreamList"].isNull())
			transcodeJobInfoListObject.outputFile.videoStreamList = outputFileNode["VideoStreamList"].asString();
		if(!outputFileNode["OutputFileUrl"].isNull())
			transcodeJobInfoListObject.outputFile.outputFileUrl = outputFileNode["OutputFileUrl"].asString();
		if(!outputFileNode["Encryption"].isNull())
			transcodeJobInfoListObject.outputFile.encryption = outputFileNode["Encryption"].asString();
		if(!outputFileNode["Height"].isNull())
			transcodeJobInfoListObject.outputFile.height = outputFileNode["Height"].asString();
		if(!outputFileNode["SubtitleStreamList"].isNull())
			transcodeJobInfoListObject.outputFile.subtitleStreamList = outputFileNode["SubtitleStreamList"].asString();
		if(!outputFileNode["Bitrate"].isNull())
			transcodeJobInfoListObject.outputFile.bitrate = outputFileNode["Bitrate"].asString();
		if(!outputFileNode["AudioStreamList"].isNull())
			transcodeJobInfoListObject.outputFile.audioStreamList = outputFileNode["AudioStreamList"].asString();
		if(!outputFileNode["Width"].isNull())
			transcodeJobInfoListObject.outputFile.width = outputFileNode["Width"].asString();
		if(!outputFileNode["Fps"].isNull())
			transcodeJobInfoListObject.outputFile.fps = outputFileNode["Fps"].asString();
		if(!outputFileNode["Duration"].isNull())
			transcodeJobInfoListObject.outputFile.duration = outputFileNode["Duration"].asString();
		if(!outputFileNode["Format"].isNull())
			transcodeJobInfoListObject.outputFile.format = outputFileNode["Format"].asString();
		if(!outputFileNode["Filesize"].isNull())
			transcodeJobInfoListObject.outputFile.filesize = std::stol(outputFileNode["Filesize"].asString());
			auto allWatermarkIdList = outputFileNode["WatermarkIdList"]["WatermarkId"];
			for (auto value : allWatermarkIdList)
				transcodeJobInfoListObject.outputFile.watermarkIdList.push_back(value.asString());
		transcodeJobInfoList_.push_back(transcodeJobInfoListObject);
	}
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
	auto allTranscodeJobInfoList1Node = transcodeTaskNode["TranscodeJobInfoList"]["TranscodeJobInfo"];
	for (auto transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo : allTranscodeJobInfoList1Node)
	{
		TranscodeTask::TranscodeJobInfo2 transcodeJobInfo2Object;
		if(!transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["Definition"].isNull())
			transcodeJobInfo2Object.definition = transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["Definition"].asString();
		if(!transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["CreationTime"].isNull())
			transcodeJobInfo2Object.creationTime = transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["CreationTime"].asString();
		if(!transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["InputFileUrl"].isNull())
			transcodeJobInfo2Object.inputFileUrl = transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["InputFileUrl"].asString();
		if(!transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["ErrorMessage"].isNull())
			transcodeJobInfo2Object.errorMessage = transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["ErrorMessage"].asString();
		if(!transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["ErrorCode"].isNull())
			transcodeJobInfo2Object.errorCode = transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["ErrorCode"].asString();
		if(!transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["CompleteTime"].isNull())
			transcodeJobInfo2Object.completeTime = transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["CompleteTime"].asString();
		if(!transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["TranscodeProgress"].isNull())
			transcodeJobInfo2Object.transcodeProgress = std::stol(transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["TranscodeProgress"].asString());
		if(!transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["Priority"].isNull())
			transcodeJobInfo2Object.priority = transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["Priority"].asString();
		if(!transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["TranscodeJobStatus"].isNull())
			transcodeJobInfo2Object.transcodeJobStatus = transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["TranscodeJobStatus"].asString();
		if(!transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["TranscodeTemplateId"].isNull())
			transcodeJobInfo2Object.transcodeTemplateId = transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["TranscodeTemplateId"].asString();
		if(!transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["TranscodeJobId"].isNull())
			transcodeJobInfo2Object.transcodeJobId = transcodeTaskNodeTranscodeJobInfoListTranscodeJobInfo["TranscodeJobId"].asString();
		auto outputFile3Node = value["OutputFile"];
		if(!outputFile3Node["VideoStreamList"].isNull())
			transcodeJobInfo2Object.outputFile3.videoStreamList = outputFile3Node["VideoStreamList"].asString();
		if(!outputFile3Node["OutputFileUrl"].isNull())
			transcodeJobInfo2Object.outputFile3.outputFileUrl = outputFile3Node["OutputFileUrl"].asString();
		if(!outputFile3Node["Encryption"].isNull())
			transcodeJobInfo2Object.outputFile3.encryption = outputFile3Node["Encryption"].asString();
		if(!outputFile3Node["Height"].isNull())
			transcodeJobInfo2Object.outputFile3.height = outputFile3Node["Height"].asString();
		if(!outputFile3Node["SubtitleStreamList"].isNull())
			transcodeJobInfo2Object.outputFile3.subtitleStreamList = outputFile3Node["SubtitleStreamList"].asString();
		if(!outputFile3Node["Bitrate"].isNull())
			transcodeJobInfo2Object.outputFile3.bitrate = outputFile3Node["Bitrate"].asString();
		if(!outputFile3Node["AudioStreamList"].isNull())
			transcodeJobInfo2Object.outputFile3.audioStreamList = outputFile3Node["AudioStreamList"].asString();
		if(!outputFile3Node["Width"].isNull())
			transcodeJobInfo2Object.outputFile3.width = outputFile3Node["Width"].asString();
		if(!outputFile3Node["Fps"].isNull())
			transcodeJobInfo2Object.outputFile3.fps = outputFile3Node["Fps"].asString();
		if(!outputFile3Node["Duration"].isNull())
			transcodeJobInfo2Object.outputFile3.duration = outputFile3Node["Duration"].asString();
		if(!outputFile3Node["Format"].isNull())
			transcodeJobInfo2Object.outputFile3.format = outputFile3Node["Format"].asString();
		if(!outputFile3Node["Filesize"].isNull())
			transcodeJobInfo2Object.outputFile3.filesize = std::stol(outputFile3Node["Filesize"].asString());
			auto allWatermarkIdList4 = outputFile3Node["WatermarkIdList"]["WatermarkId"];
			for (auto value : allWatermarkIdList4)
				transcodeJobInfo2Object.outputFile3.watermarkIdList4.push_back(value.asString());
		transcodeTask_.transcodeJobInfoList1.push_back(transcodeJobInfo2Object);
	}
	auto allNonExistJobIds = value["NonExistJobIds"]["JobId"];
	for (const auto &item : allNonExistJobIds)
		nonExistJobIds_.push_back(item.asString());

}

std::vector<std::string> GetTranscodeTaskResult::getNonExistJobIds()const
{
	return nonExistJobIds_;
}

std::vector<GetTranscodeTaskResult::TranscodeJobInfo> GetTranscodeTaskResult::getTranscodeJobInfoList()const
{
	return transcodeJobInfoList_;
}

GetTranscodeTaskResult::TranscodeTask GetTranscodeTaskResult::getTranscodeTask()const
{
	return transcodeTask_;
}

