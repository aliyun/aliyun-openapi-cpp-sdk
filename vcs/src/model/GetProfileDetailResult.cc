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

#include <alibabacloud/vcs/model/GetProfileDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vcs;
using namespace AlibabaCloud::Vcs::Model;

GetProfileDetailResult::GetProfileDetailResult() :
	ServiceResult()
{}

GetProfileDetailResult::GetProfileDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetProfileDetailResult::~GetProfileDetailResult()
{}

void GetProfileDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["LiveAddress"].isNull())
		data_.liveAddress = dataNode["LiveAddress"].asString();
	if(!dataNode["SceneType"].isNull())
		data_.sceneType = dataNode["SceneType"].asString();
	if(!dataNode["BizId"].isNull())
		data_.bizId = dataNode["BizId"].asString();
	if(!dataNode["FaceUrl"].isNull())
		data_.faceUrl = dataNode["FaceUrl"].asString();
	if(!dataNode["Gender"].isNull())
		data_.gender = dataNode["Gender"].asString();
	if(!dataNode["IdNumber"].isNull())
		data_.idNumber = dataNode["IdNumber"].asString();
	if(!dataNode["IsvSubId"].isNull())
		data_.isvSubId = dataNode["IsvSubId"].asString();
	if(!dataNode["PhoneNo"].isNull())
		data_.phoneNo = dataNode["PhoneNo"].asString();
	if(!dataNode["PlateNo"].isNull())
		data_.plateNo = dataNode["PlateNo"].asString();
	if(!dataNode["CatalogId"].isNull())
		data_.catalogId = std::stoi(dataNode["CatalogId"].asString());
	if(!dataNode["ProfileId"].isNull())
		data_.profileId = std::stoi(dataNode["ProfileId"].asString());
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["PersonId"].isNull())
		data_.personId = dataNode["PersonId"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetProfileDetailResult::getMessage()const
{
	return message_;
}

GetProfileDetailResult::Data GetProfileDetailResult::getData()const
{
	return data_;
}

std::string GetProfileDetailResult::getCode()const
{
	return code_;
}

