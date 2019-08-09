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

#include <alibabacloud/cloudauth/model/SubmitMaterialsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudauth;
using namespace AlibabaCloud::Cloudauth::Model;

SubmitMaterialsResult::SubmitMaterialsResult() :
	ServiceResult()
{}

SubmitMaterialsResult::SubmitMaterialsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SubmitMaterialsResult::~SubmitMaterialsResult()
{}

void SubmitMaterialsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto dataNode = value["Data"];
	auto verifyStatusNode = dataNode["VerifyStatus"];
	if(!verifyStatusNode["StatusCode"].isNull())
		data_.verifyStatus.statusCode = std::stoi(verifyStatusNode["StatusCode"].asString());
	if(!verifyStatusNode["TrustedScore"].isNull())
		data_.verifyStatus.trustedScore = std::stof(verifyStatusNode["TrustedScore"].asString());
	if(!verifyStatusNode["SimilarityScore"].isNull())
		data_.verifyStatus.similarityScore = std::stof(verifyStatusNode["SimilarityScore"].asString());
	if(!verifyStatusNode["AuditConclusions"].isNull())
		data_.verifyStatus.auditConclusions = verifyStatusNode["AuditConclusions"].asString();
	if(!verifyStatusNode["AuthorityComparisonScore"].isNull())
		data_.verifyStatus.authorityComparisonScore = std::stof(verifyStatusNode["AuthorityComparisonScore"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string SubmitMaterialsResult::getMessage()const
{
	return message_;
}

SubmitMaterialsResult::Data SubmitMaterialsResult::getData()const
{
	return data_;
}

std::string SubmitMaterialsResult::getCode()const
{
	return code_;
}

bool SubmitMaterialsResult::getSuccess()const
{
	return success_;
}

