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

#include <alibabacloud/edas/model/BindSlbResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

BindSlbResult::BindSlbResult() :
	ServiceResult()
{}

BindSlbResult::BindSlbResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BindSlbResult::~BindSlbResult()
{}

void BindSlbResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ExtSlbId"].isNull())
		data_.extSlbId = dataNode["ExtSlbId"].asString();
	if(!dataNode["ExtSlbIp"].isNull())
		data_.extSlbIp = dataNode["ExtSlbIp"].asString();
	if(!dataNode["ExtSlbName"].isNull())
		data_.extSlbName = dataNode["ExtSlbName"].asString();
	if(!dataNode["ExtVServerGroupId"].isNull())
		data_.extVServerGroupId = dataNode["ExtVServerGroupId"].asString();
	if(!dataNode["SlbId"].isNull())
		data_.slbId = dataNode["SlbId"].asString();
	if(!dataNode["SlbIp"].isNull())
		data_.slbIp = dataNode["SlbIp"].asString();
	if(!dataNode["SlbName"].isNull())
		data_.slbName = dataNode["SlbName"].asString();
	if(!dataNode["SlbPort"].isNull())
		data_.slbPort = std::stoi(dataNode["SlbPort"].asString());
	if(!dataNode["VServerGroupId"].isNull())
		data_.vServerGroupId = dataNode["VServerGroupId"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string BindSlbResult::getMessage()const
{
	return message_;
}

BindSlbResult::Data BindSlbResult::getData()const
{
	return data_;
}

int BindSlbResult::getCode()const
{
	return code_;
}

