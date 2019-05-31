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

#include <alibabacloud/cloudauth/model/GetStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudauth;
using namespace AlibabaCloud::Cloudauth::Model;

GetStatusResult::GetStatusResult() :
	ServiceResult()
{}

GetStatusResult::GetStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetStatusResult::~GetStatusResult()
{}

void GetStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["StatusCode"].isNull())
		data_.statusCode = std::stoi(dataNode["StatusCode"].asString());
	if(!dataNode["TrustedScore"].isNull())
		data_.trustedScore = std::stof(dataNode["TrustedScore"].asString());
	if(!dataNode["SimilarityScore"].isNull())
		data_.similarityScore = std::stof(dataNode["SimilarityScore"].asString());
	if(!dataNode["AuditConclusions"].isNull())
		data_.auditConclusions = dataNode["AuditConclusions"].asString();
	if(!dataNode["AuthorityComparisonScore"].isNull())
		data_.authorityComparisonScore = std::stof(dataNode["AuthorityComparisonScore"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetStatusResult::getMessage()const
{
	return message_;
}

GetStatusResult::Data GetStatusResult::getData()const
{
	return data_;
}

std::string GetStatusResult::getCode()const
{
	return code_;
}

bool GetStatusResult::getSuccess()const
{
	return success_;
}

