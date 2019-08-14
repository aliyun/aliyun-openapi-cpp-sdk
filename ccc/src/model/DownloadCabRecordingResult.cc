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

#include <alibabacloud/ccc/model/DownloadCabRecordingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

DownloadCabRecordingResult::DownloadCabRecordingResult() :
	ServiceResult()
{}

DownloadCabRecordingResult::DownloadCabRecordingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DownloadCabRecordingResult::~DownloadCabRecordingResult()
{}

void DownloadCabRecordingResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
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

DownloadCabRecordingResult::MediaDownloadParam DownloadCabRecordingResult::getMediaDownloadParam()const
{
	return mediaDownloadParam_;
}

std::string DownloadCabRecordingResult::getMessage()const
{
	return message_;
}

int DownloadCabRecordingResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DownloadCabRecordingResult::getCode()const
{
	return code_;
}

bool DownloadCabRecordingResult::getSuccess()const
{
	return success_;
}

