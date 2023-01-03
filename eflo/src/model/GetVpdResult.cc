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

#include <alibabacloud/eflo/model/GetVpdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eflo;
using namespace AlibabaCloud::Eflo::Model;

GetVpdResult::GetVpdResult() :
	ServiceResult()
{}

GetVpdResult::GetVpdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetVpdResult::~GetVpdResult()
{}

void GetVpdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto contentNode = value["Content"];
	if(!contentNode["RegionId"].isNull())
		content_.regionId = contentNode["RegionId"].asString();
	if(!contentNode["VpdId"].isNull())
		content_.vpdId = contentNode["VpdId"].asString();
	if(!contentNode["Name"].isNull())
		content_.name = contentNode["Name"].asString();
	if(!contentNode["Cidr"].isNull())
		content_.cidr = contentNode["Cidr"].asString();
	if(!contentNode["ServiceCidr"].isNull())
		content_.serviceCidr = contentNode["ServiceCidr"].asString();
	if(!contentNode["Status"].isNull())
		content_.status = contentNode["Status"].asString();
	if(!contentNode["Description"].isNull())
		content_.description = contentNode["Description"].asString();
	if(!contentNode["Message"].isNull())
		content_.message = contentNode["Message"].asString();
	if(!contentNode["Route"].isNull())
		content_.route = std::stoi(contentNode["Route"].asString());
	if(!contentNode["NcCount"].isNull())
		content_.ncCount = std::stol(contentNode["NcCount"].asString());
	if(!contentNode["SubnetCount"].isNull())
		content_.subnetCount = std::stol(contentNode["SubnetCount"].asString());
	if(!contentNode["LbCount"].isNull())
		content_.lbCount = std::stol(contentNode["LbCount"].asString());
	if(!contentNode["VccCount"].isNull())
		content_.vccCount = std::stol(contentNode["VccCount"].asString());
	if(!contentNode["GmtCreate"].isNull())
		content_.gmtCreate = contentNode["GmtCreate"].asString();
	if(!contentNode["GmtModified"].isNull())
		content_.gmtModified = contentNode["GmtModified"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetVpdResult::getMessage()const
{
	return message_;
}

GetVpdResult::Content GetVpdResult::getContent()const
{
	return content_;
}

int GetVpdResult::getCode()const
{
	return code_;
}

