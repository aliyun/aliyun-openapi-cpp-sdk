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

#include <alibabacloud/dyplsapi/model/QuerySecretNoDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dyplsapi;
using namespace AlibabaCloud::Dyplsapi::Model;

QuerySecretNoDetailResult::QuerySecretNoDetailResult() :
	ServiceResult()
{}

QuerySecretNoDetailResult::QuerySecretNoDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QuerySecretNoDetailResult::~QuerySecretNoDetailResult()
{}

void QuerySecretNoDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto secretNoInfoDTONode = value["SecretNoInfoDTO"];
	if(!secretNoInfoDTONode["PurchaseTime"].isNull())
		secretNoInfoDTO_.purchaseTime = secretNoInfoDTONode["PurchaseTime"].asString();
	if(!secretNoInfoDTONode["Vendor"].isNull())
		secretNoInfoDTO_.vendor = std::stol(secretNoInfoDTONode["Vendor"].asString());
	if(!secretNoInfoDTONode["Province"].isNull())
		secretNoInfoDTO_.province = secretNoInfoDTONode["Province"].asString();
	if(!secretNoInfoDTONode["City"].isNull())
		secretNoInfoDTO_.city = secretNoInfoDTONode["City"].asString();
	if(!secretNoInfoDTONode["SecretStatus"].isNull())
		secretNoInfoDTO_.secretStatus = std::stol(secretNoInfoDTONode["SecretStatus"].asString());
	if(!secretNoInfoDTONode["CertifyStatus"].isNull())
		secretNoInfoDTO_.certifyStatus = std::stoi(secretNoInfoDTONode["CertifyStatus"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QuerySecretNoDetailResult::getMessage()const
{
	return message_;
}

QuerySecretNoDetailResult::SecretNoInfoDTO QuerySecretNoDetailResult::getSecretNoInfoDTO()const
{
	return secretNoInfoDTO_;
}

std::string QuerySecretNoDetailResult::getCode()const
{
	return code_;
}

