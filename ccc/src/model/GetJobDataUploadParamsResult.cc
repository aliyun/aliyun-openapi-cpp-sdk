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

#include <alibabacloud/ccc/model/GetJobDataUploadParamsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

GetJobDataUploadParamsResult::GetJobDataUploadParamsResult() :
	ServiceResult()
{}

GetJobDataUploadParamsResult::GetJobDataUploadParamsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetJobDataUploadParamsResult::~GetJobDataUploadParamsResult()
{}

void GetJobDataUploadParamsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto uploadParamsNode = value["UploadParams"];
	if(!uploadParamsNode["AccessId"].isNull())
		uploadParams_.accessId = uploadParamsNode["AccessId"].asString();
	if(!uploadParamsNode["Policy"].isNull())
		uploadParams_.policy = uploadParamsNode["Policy"].asString();
	if(!uploadParamsNode["Signature"].isNull())
		uploadParams_.signature = uploadParamsNode["Signature"].asString();
	if(!uploadParamsNode["Folder"].isNull())
		uploadParams_.folder = uploadParamsNode["Folder"].asString();
	if(!uploadParamsNode["Host"].isNull())
		uploadParams_.host = uploadParamsNode["Host"].asString();
	if(!uploadParamsNode["Expire"].isNull())
		uploadParams_.expire = std::stoi(uploadParamsNode["Expire"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

GetJobDataUploadParamsResult::UploadParams GetJobDataUploadParamsResult::getUploadParams()const
{
	return uploadParams_;
}

std::string GetJobDataUploadParamsResult::getMessage()const
{
	return message_;
}

int GetJobDataUploadParamsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GetJobDataUploadParamsResult::getCode()const
{
	return code_;
}

bool GetJobDataUploadParamsResult::getSuccess()const
{
	return success_;
}

