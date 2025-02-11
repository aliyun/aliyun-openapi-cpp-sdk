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

#include <alibabacloud/cloudauth/model/CredentialVerifyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudauth;
using namespace AlibabaCloud::Cloudauth::Model;

CredentialVerifyResult::CredentialVerifyResult() :
	ServiceResult()
{}

CredentialVerifyResult::CredentialVerifyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CredentialVerifyResult::~CredentialVerifyResult()
{}

void CredentialVerifyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultObjectNode = value["ResultObject"];
	if(!resultObjectNode["Result"].isNull())
		resultObject_.result = resultObjectNode["Result"].asString();
	if(!resultObjectNode["RiskTag"].isNull())
		resultObject_.riskTag = resultObjectNode["RiskTag"].asString();
	if(!resultObjectNode["RiskScore"].isNull())
		resultObject_.riskScore = resultObjectNode["RiskScore"].asString();
	if(!resultObjectNode["OcrInfo"].isNull())
		resultObject_.ocrInfo = resultObjectNode["OcrInfo"].asString();
	if(!resultObjectNode["VerifyResult"].isNull())
		resultObject_.verifyResult = resultObjectNode["VerifyResult"].asString();
	if(!resultObjectNode["VerifyDetail"].isNull())
		resultObject_.verifyDetail = resultObjectNode["VerifyDetail"].asString();
	if(!resultObjectNode["MaterialInfo"].isNull())
		resultObject_.materialInfo = resultObjectNode["MaterialInfo"].asString();
	auto vlResultNode = resultObjectNode["VlResult"];
	if(!vlResultNode["Success"].isNull())
		resultObject_.vlResult.success = vlResultNode["Success"].asString() == "true";
	if(!vlResultNode["VlContent"].isNull())
		resultObject_.vlResult.vlContent = vlResultNode["VlContent"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

CredentialVerifyResult::ResultObject CredentialVerifyResult::getResultObject()const
{
	return resultObject_;
}

std::string CredentialVerifyResult::getMessage()const
{
	return message_;
}

std::string CredentialVerifyResult::getCode()const
{
	return code_;
}

