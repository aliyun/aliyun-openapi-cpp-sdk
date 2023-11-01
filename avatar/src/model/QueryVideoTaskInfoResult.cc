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

#include <alibabacloud/avatar/model/QueryVideoTaskInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Avatar;
using namespace AlibabaCloud::Avatar::Model;

QueryVideoTaskInfoResult::QueryVideoTaskInfoResult() :
	ServiceResult()
{}

QueryVideoTaskInfoResult::QueryVideoTaskInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryVideoTaskInfoResult::~QueryVideoTaskInfoResult()
{}

void QueryVideoTaskInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNo"].isNull())
		data_.pageNo = std::stoi(dataNode["PageNo"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	auto allListNode = dataNode["List"]["listItem"];
	for (auto dataNodeListlistItem : allListNode)
	{
		Data::ListItem listItemObject;
		if(!dataNodeListlistItem["TaskUuid"].isNull())
			listItemObject.taskUuid = dataNodeListlistItem["TaskUuid"].asString();
		if(!dataNodeListlistItem["Title"].isNull())
			listItemObject.title = dataNodeListlistItem["Title"].asString();
		if(!dataNodeListlistItem["Type"].isNull())
			listItemObject.type = std::stoi(dataNodeListlistItem["Type"].asString());
		if(!dataNodeListlistItem["Status"].isNull())
			listItemObject.status = std::stoi(dataNodeListlistItem["Status"].asString());
		auto taskResultNode = value["TaskResult"];
		if(!taskResultNode["VideoUrl"].isNull())
			listItemObject.taskResult.videoUrl = taskResultNode["VideoUrl"].asString();
		if(!taskResultNode["SubtitlesUrl"].isNull())
			listItemObject.taskResult.subtitlesUrl = taskResultNode["SubtitlesUrl"].asString();
		if(!taskResultNode["WordSubtitlesUrl"].isNull())
			listItemObject.taskResult.wordSubtitlesUrl = taskResultNode["WordSubtitlesUrl"].asString();
		if(!taskResultNode["VideoDuration"].isNull())
			listItemObject.taskResult.videoDuration = std::stoi(taskResultNode["VideoDuration"].asString());
		if(!taskResultNode["FailReason"].isNull())
			listItemObject.taskResult.failReason = taskResultNode["FailReason"].asString();
		if(!taskResultNode["FailCode"].isNull())
			listItemObject.taskResult.failCode = taskResultNode["FailCode"].asString();
		if(!taskResultNode["AlphaUrl"].isNull())
			listItemObject.taskResult.alphaUrl = taskResultNode["AlphaUrl"].asString();
		if(!taskResultNode["PreviewPic"].isNull())
			listItemObject.taskResult.previewPic = taskResultNode["PreviewPic"].asString();
		if(!taskResultNode["AttachmentUrl"].isNull())
			listItemObject.taskResult.attachmentUrl = taskResultNode["AttachmentUrl"].asString();
		data_.list.push_back(listItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryVideoTaskInfoResult::getMessage()const
{
	return message_;
}

QueryVideoTaskInfoResult::Data QueryVideoTaskInfoResult::getData()const
{
	return data_;
}

std::string QueryVideoTaskInfoResult::getCode()const
{
	return code_;
}

bool QueryVideoTaskInfoResult::getSuccess()const
{
	return success_;
}

