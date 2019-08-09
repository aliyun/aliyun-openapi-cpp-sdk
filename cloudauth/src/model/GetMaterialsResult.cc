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

#include <alibabacloud/cloudauth/model/GetMaterialsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudauth;
using namespace AlibabaCloud::Cloudauth::Model;

GetMaterialsResult::GetMaterialsResult() :
	ServiceResult()
{}

GetMaterialsResult::GetMaterialsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMaterialsResult::~GetMaterialsResult()
{}

void GetMaterialsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["IdentificationNumber"].isNull())
		data_.identificationNumber = dataNode["IdentificationNumber"].asString();
	if(!dataNode["IdCardType"].isNull())
		data_.idCardType = dataNode["IdCardType"].asString();
	if(!dataNode["IdCardStartDate"].isNull())
		data_.idCardStartDate = dataNode["IdCardStartDate"].asString();
	if(!dataNode["IdCardExpiry"].isNull())
		data_.idCardExpiry = dataNode["IdCardExpiry"].asString();
	if(!dataNode["Address"].isNull())
		data_.address = dataNode["Address"].asString();
	if(!dataNode["Sex"].isNull())
		data_.sex = dataNode["Sex"].asString();
	if(!dataNode["IdCardFrontPic"].isNull())
		data_.idCardFrontPic = dataNode["IdCardFrontPic"].asString();
	if(!dataNode["IdCardBackPic"].isNull())
		data_.idCardBackPic = dataNode["IdCardBackPic"].asString();
	if(!dataNode["FacePic"].isNull())
		data_.facePic = dataNode["FacePic"].asString();
	if(!dataNode["EthnicGroup"].isNull())
		data_.ethnicGroup = dataNode["EthnicGroup"].asString();
	if(!dataNode["Authority"].isNull())
		data_.authority = dataNode["Authority"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetMaterialsResult::getMessage()const
{
	return message_;
}

GetMaterialsResult::Data GetMaterialsResult::getData()const
{
	return data_;
}

std::string GetMaterialsResult::getCode()const
{
	return code_;
}

bool GetMaterialsResult::getSuccess()const
{
	return success_;
}

