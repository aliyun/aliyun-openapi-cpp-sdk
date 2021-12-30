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

#include <alibabacloud/ccc/model/GetRecordOssUploadParamResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

GetRecordOssUploadParamResult::GetRecordOssUploadParamResult() :
	ServiceResult()
{}

GetRecordOssUploadParamResult::GetRecordOssUploadParamResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetRecordOssUploadParamResult::~GetRecordOssUploadParamResult()
{}

void GetRecordOssUploadParamResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["OssAccessKeyId"].isNull())
		ossAccessKeyId_ = value["OssAccessKeyId"].asString();
	if(!value["Policy"].isNull())
		policy_ = value["Policy"].asString();
	if(!value["Signature"].isNull())
		signature_ = value["Signature"].asString();
	if(!value["Expires"].isNull())
		expires_ = value["Expires"].asString();
	if(!value["Dir"].isNull())
		dir_ = value["Dir"].asString();
	if(!value["Host"].isNull())
		host_ = value["Host"].asString();
	if(!value["OssFileName"].isNull())
		ossFileName_ = value["OssFileName"].asString();

}

std::string GetRecordOssUploadParamResult::getPolicy()const
{
	return policy_;
}

std::string GetRecordOssUploadParamResult::getMessage()const
{
	return message_;
}

std::string GetRecordOssUploadParamResult::getSignature()const
{
	return signature_;
}

int GetRecordOssUploadParamResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GetRecordOssUploadParamResult::getOssFileName()const
{
	return ossFileName_;
}

std::string GetRecordOssUploadParamResult::getHost()const
{
	return host_;
}

std::string GetRecordOssUploadParamResult::getExpires()const
{
	return expires_;
}

std::string GetRecordOssUploadParamResult::getDir()const
{
	return dir_;
}

std::string GetRecordOssUploadParamResult::getCode()const
{
	return code_;
}

std::string GetRecordOssUploadParamResult::getOssAccessKeyId()const
{
	return ossAccessKeyId_;
}

bool GetRecordOssUploadParamResult::getSuccess()const
{
	return success_;
}

