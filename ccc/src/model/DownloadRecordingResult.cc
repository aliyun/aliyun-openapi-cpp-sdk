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

#include <alibabacloud/ccc/model/DownloadRecordingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

DownloadRecordingResult::DownloadRecordingResult() :
	ServiceResult()
{}

DownloadRecordingResult::DownloadRecordingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DownloadRecordingResult::~DownloadRecordingResult()
{}

void DownloadRecordingResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto mediaDownloadParamNode = value["MediaDownloadParam"];
	if(!mediaDownloadParamNode["SignatureUrl"].isNull())
		mediaDownloadParam_.signatureUrl = mediaDownloadParamNode["SignatureUrl"].asString();
	if(!mediaDownloadParamNode["FileName"].isNull())
		mediaDownloadParam_.fileName = mediaDownloadParamNode["FileName"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

DownloadRecordingResult::MediaDownloadParam DownloadRecordingResult::getMediaDownloadParam()const
{
	return mediaDownloadParam_;
}

std::string DownloadRecordingResult::getMessage()const
{
	return message_;
}

int DownloadRecordingResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DownloadRecordingResult::getCode()const
{
	return code_;
}

bool DownloadRecordingResult::getSuccess()const
{
	return success_;
}

