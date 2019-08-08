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

#include <alibabacloud/ccc/model/PreCreateMediaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

PreCreateMediaResult::PreCreateMediaResult() :
	ServiceResult()
{}

PreCreateMediaResult::PreCreateMediaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PreCreateMediaResult::~PreCreateMediaResult()
{}

void PreCreateMediaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto preCreateMediaParamNode = value["PreCreateMediaParam"];
	if(!preCreateMediaParamNode["OssFile"].isNull())
		preCreateMediaParam_.ossFile = preCreateMediaParamNode["OssFile"].asString();
	if(!preCreateMediaParamNode["OssFilePath"].isNull())
		preCreateMediaParam_.ossFilePath = preCreateMediaParamNode["OssFilePath"].asString();
	if(!preCreateMediaParamNode["OssBucket"].isNull())
		preCreateMediaParam_.ossBucket = preCreateMediaParamNode["OssBucket"].asString();
	if(!preCreateMediaParamNode["SignatureUrl"].isNull())
		preCreateMediaParam_.signatureUrl = preCreateMediaParamNode["SignatureUrl"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string PreCreateMediaResult::getMessage()const
{
	return message_;
}

int PreCreateMediaResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

PreCreateMediaResult::PreCreateMediaParam PreCreateMediaResult::getPreCreateMediaParam()const
{
	return preCreateMediaParam_;
}

std::string PreCreateMediaResult::getCode()const
{
	return code_;
}

bool PreCreateMediaResult::getSuccess()const
{
	return success_;
}

