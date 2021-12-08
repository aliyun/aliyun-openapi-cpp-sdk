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

#include <alibabacloud/dyplsapi/model/QuerySubscriptionDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dyplsapi;
using namespace AlibabaCloud::Dyplsapi::Model;

QuerySubscriptionDetailResult::QuerySubscriptionDetailResult() :
	ServiceResult()
{}

QuerySubscriptionDetailResult::QuerySubscriptionDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QuerySubscriptionDetailResult::~QuerySubscriptionDetailResult()
{}

void QuerySubscriptionDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto secretBindDetailDTONode = value["SecretBindDetailDTO"];
	if(!secretBindDetailDTONode["Status"].isNull())
		secretBindDetailDTO_.status = std::stol(secretBindDetailDTONode["Status"].asString());
	if(!secretBindDetailDTONode["Extension"].isNull())
		secretBindDetailDTO_.extension = secretBindDetailDTONode["Extension"].asString();
	if(!secretBindDetailDTONode["PhoneNoB"].isNull())
		secretBindDetailDTO_.phoneNoB = secretBindDetailDTONode["PhoneNoB"].asString();
	if(!secretBindDetailDTONode["GroupId"].isNull())
		secretBindDetailDTO_.groupId = std::stol(secretBindDetailDTONode["GroupId"].asString());
	if(!secretBindDetailDTONode["NeedRecord"].isNull())
		secretBindDetailDTO_.needRecord = secretBindDetailDTONode["NeedRecord"].asString() == "true";
	if(!secretBindDetailDTONode["ASRStatus"].isNull())
		secretBindDetailDTO_.aSRStatus = secretBindDetailDTONode["ASRStatus"].asString() == "true";
	if(!secretBindDetailDTONode["GmtCreate"].isNull())
		secretBindDetailDTO_.gmtCreate = secretBindDetailDTONode["GmtCreate"].asString();
	if(!secretBindDetailDTONode["ExpireDate"].isNull())
		secretBindDetailDTO_.expireDate = secretBindDetailDTONode["ExpireDate"].asString();
	if(!secretBindDetailDTONode["SubsId"].isNull())
		secretBindDetailDTO_.subsId = secretBindDetailDTONode["SubsId"].asString();
	if(!secretBindDetailDTONode["PhoneNoX"].isNull())
		secretBindDetailDTO_.phoneNoX = secretBindDetailDTONode["PhoneNoX"].asString();
	if(!secretBindDetailDTONode["CallRestrict"].isNull())
		secretBindDetailDTO_.callRestrict = secretBindDetailDTONode["CallRestrict"].asString();
	if(!secretBindDetailDTONode["ASRModelId"].isNull())
		secretBindDetailDTO_.aSRModelId = secretBindDetailDTONode["ASRModelId"].asString();
	if(!secretBindDetailDTONode["PhoneNoA"].isNull())
		secretBindDetailDTO_.phoneNoA = secretBindDetailDTONode["PhoneNoA"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

QuerySubscriptionDetailResult::SecretBindDetailDTO QuerySubscriptionDetailResult::getSecretBindDetailDTO()const
{
	return secretBindDetailDTO_;
}

std::string QuerySubscriptionDetailResult::getMessage()const
{
	return message_;
}

std::string QuerySubscriptionDetailResult::getCode()const
{
	return code_;
}

