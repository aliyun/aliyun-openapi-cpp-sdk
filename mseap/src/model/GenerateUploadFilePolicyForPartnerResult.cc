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

#include <alibabacloud/mseap/model/GenerateUploadFilePolicyForPartnerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mseap;
using namespace AlibabaCloud::Mseap::Model;

GenerateUploadFilePolicyForPartnerResult::GenerateUploadFilePolicyForPartnerResult() :
	ServiceResult()
{}

GenerateUploadFilePolicyForPartnerResult::GenerateUploadFilePolicyForPartnerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GenerateUploadFilePolicyForPartnerResult::~GenerateUploadFilePolicyForPartnerResult()
{}

void GenerateUploadFilePolicyForPartnerResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto moduleNode = value["Module"];
	if(!moduleNode["AccessId"].isNull())
		module_.accessId = moduleNode["AccessId"].asString();
	if(!moduleNode["EncodedPolicy"].isNull())
		module_.encodedPolicy = moduleNode["EncodedPolicy"].asString();
	if(!moduleNode["Signature"].isNull())
		module_.signature = moduleNode["Signature"].asString();
	if(!moduleNode["FileDir"].isNull())
		module_.fileDir = moduleNode["FileDir"].asString();
	if(!moduleNode["Host"].isNull())
		module_.host = moduleNode["Host"].asString();
	if(!moduleNode["ExpireTime"].isNull())
		module_.expireTime = std::stol(moduleNode["ExpireTime"].asString());
	if(!moduleNode["OssUrl"].isNull())
		module_.ossUrl = moduleNode["OssUrl"].asString();
	auto allErrorArgs = value["ErrorArgs"]["ErrorArg"];
	for (const auto &item : allErrorArgs)
		errorArgs_.push_back(item.asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["AllowRetry"].isNull())
		allowRetry_ = value["AllowRetry"].asString() == "true";
	if(!value["AppName"].isNull())
		appName_ = value["AppName"].asString();

}

bool GenerateUploadFilePolicyForPartnerResult::getAllowRetry()const
{
	return allowRetry_;
}

std::vector<std::string> GenerateUploadFilePolicyForPartnerResult::getErrorArgs()const
{
	return errorArgs_;
}

int GenerateUploadFilePolicyForPartnerResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GenerateUploadFilePolicyForPartnerResult::getErrorMsg()const
{
	return errorMsg_;
}

std::string GenerateUploadFilePolicyForPartnerResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string GenerateUploadFilePolicyForPartnerResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string GenerateUploadFilePolicyForPartnerResult::getErrorCode()const
{
	return errorCode_;
}

GenerateUploadFilePolicyForPartnerResult::Module GenerateUploadFilePolicyForPartnerResult::getModule()const
{
	return module_;
}

bool GenerateUploadFilePolicyForPartnerResult::getSuccess()const
{
	return success_;
}

std::string GenerateUploadFilePolicyForPartnerResult::getAppName()const
{
	return appName_;
}

