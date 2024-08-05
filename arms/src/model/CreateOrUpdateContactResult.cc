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

#include <alibabacloud/arms/model/CreateOrUpdateContactResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

CreateOrUpdateContactResult::CreateOrUpdateContactResult() :
	ServiceResult()
{}

CreateOrUpdateContactResult::CreateOrUpdateContactResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateOrUpdateContactResult::~CreateOrUpdateContactResult()
{}

void CreateOrUpdateContactResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto alertContactNode = value["AlertContact"];
	if(!alertContactNode["ContactId"].isNull())
		alertContact_.contactId = std::stof(alertContactNode["ContactId"].asString());
	if(!alertContactNode["ContactName"].isNull())
		alertContact_.contactName = alertContactNode["ContactName"].asString();
	if(!alertContactNode["Phone"].isNull())
		alertContact_.phone = alertContactNode["Phone"].asString();
	if(!alertContactNode["Email"].isNull())
		alertContact_.email = alertContactNode["Email"].asString();
	if(!alertContactNode["IsVerify"].isNull())
		alertContact_.isVerify = alertContactNode["IsVerify"].asString() == "true";
	if(!alertContactNode["ReissueSendNotice"].isNull())
		alertContact_.reissueSendNotice = std::stol(alertContactNode["ReissueSendNotice"].asString());
	if(!alertContactNode["isEmailVerify"].isNull())
		alertContact_.isEmailVerify = alertContactNode["isEmailVerify"].asString() == "true";
	if(!alertContactNode["DingRobotUrl"].isNull())
		alertContact_.dingRobotUrl = alertContactNode["DingRobotUrl"].asString();

}

CreateOrUpdateContactResult::AlertContact CreateOrUpdateContactResult::getAlertContact()const
{
	return alertContact_;
}

