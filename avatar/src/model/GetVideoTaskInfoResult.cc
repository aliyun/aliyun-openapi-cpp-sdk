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

#include <alibabacloud/avatar/model/GetVideoTaskInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Avatar;
using namespace AlibabaCloud::Avatar::Model;

GetVideoTaskInfoResult::GetVideoTaskInfoResult() :
	ServiceResult()
{}

GetVideoTaskInfoResult::GetVideoTaskInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetVideoTaskInfoResult::~GetVideoTaskInfoResult()
{}

void GetVideoTaskInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TaskUuid"].isNull())
		data_.taskUuid = dataNode["TaskUuid"].asString();
	if(!dataNode["Type"].isNull())
		data_.type = dataNode["Type"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["Process"].isNull())
		data_.process = dataNode["Process"].asString();
	auto taskResultNode = dataNode["TaskResult"];
	if(!taskResultNode["VideoUrl"].isNull())
		data_.taskResult.videoUrl = taskResultNode["VideoUrl"].asString();
	if(!taskResultNode["SubtitlesUrl"].isNull())
		data_.taskResult.subtitlesUrl = taskResultNode["SubtitlesUrl"].asString();
	if(!taskResultNode["WordSubtitlesUrl"].isNull())
		data_.taskResult.wordSubtitlesUrl = taskResultNode["WordSubtitlesUrl"].asString();
	if(!taskResultNode["FailReason"].isNull())
		data_.taskResult.failReason = taskResultNode["FailReason"].asString();
	if(!taskResultNode["FailCode"].isNull())
		data_.taskResult.failCode = taskResultNode["FailCode"].asString();
	if(!taskResultNode["VideoDuration"].isNull())
		data_.taskResult.videoDuration = std::stoi(taskResultNode["VideoDuration"].asString());
	if(!taskResultNode["AlphaUrl"].isNull())
		data_.taskResult.alphaUrl = taskResultNode["AlphaUrl"].asString();
	if(!taskResultNode["PreviewPic"].isNull())
		data_.taskResult.previewPic = taskResultNode["PreviewPic"].asString();
	if(!taskResultNode["AttachmentUrl"].isNull())
		data_.taskResult.attachmentUrl = taskResultNode["AttachmentUrl"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetVideoTaskInfoResult::getMessage()const
{
	return message_;
}

GetVideoTaskInfoResult::Data GetVideoTaskInfoResult::getData()const
{
	return data_;
}

std::string GetVideoTaskInfoResult::getCode()const
{
	return code_;
}

bool GetVideoTaskInfoResult::getSuccess()const
{
	return success_;
}

