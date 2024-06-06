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

#include <alibabacloud/csas/model/GetIdpConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

GetIdpConfigResult::GetIdpConfigResult() :
	ServiceResult()
{}

GetIdpConfigResult::GetIdpConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetIdpConfigResult::~GetIdpConfigResult()
{}

void GetIdpConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Id"].isNull())
		data_.id = dataNode["Id"].asString();
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["Type"].isNull())
		data_.type = dataNode["Type"].asString();
	if(!dataNode["IdpMetadata"].isNull())
		data_.idpMetadata = dataNode["IdpMetadata"].asString();
	if(!dataNode["AccessKey"].isNull())
		data_.accessKey = dataNode["AccessKey"].asString();
	if(!dataNode["AccessKeySecret"].isNull())
		data_.accessKeySecret = dataNode["AccessKeySecret"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["MfaConfigType"].isNull())
		data_.mfaConfigType = dataNode["MfaConfigType"].asString();
	if(!dataNode["UpdateTime"].isNull())
		data_.updateTime = dataNode["UpdateTime"].asString();
	if(!dataNode["GetGroupUrl"].isNull())
		data_.getGroupUrl = dataNode["GetGroupUrl"].asString();
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["MultiIdpInfo"].isNull())
		data_.multiIdpInfo = dataNode["MultiIdpInfo"].asString();
	if(!dataNode["PcLoginType"].isNull())
		data_.pcLoginType = dataNode["PcLoginType"].asString();
	if(!dataNode["MobileLoginType"].isNull())
		data_.mobileLoginType = dataNode["MobileLoginType"].asString();
	if(!dataNode["MobileMfaConfigType"].isNull())
		data_.mobileMfaConfigType = dataNode["MobileMfaConfigType"].asString();
	if(!dataNode["VerifyToken"].isNull())
		data_.verifyToken = dataNode["VerifyToken"].asString();
	if(!dataNode["VerifyAesKey"].isNull())
		data_.verifyAesKey = dataNode["VerifyAesKey"].asString();
	if(!dataNode["VerifyUrl"].isNull())
		data_.verifyUrl = dataNode["VerifyUrl"].asString();

}

GetIdpConfigResult::Data GetIdpConfigResult::getData()const
{
	return data_;
}

