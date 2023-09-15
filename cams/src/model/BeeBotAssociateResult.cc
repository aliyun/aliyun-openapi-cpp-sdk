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

#include <alibabacloud/cams/model/BeeBotAssociateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cams;
using namespace AlibabaCloud::Cams::Model;

BeeBotAssociateResult::BeeBotAssociateResult() :
	ServiceResult()
{}

BeeBotAssociateResult::BeeBotAssociateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BeeBotAssociateResult::~BeeBotAssociateResult()
{}

void BeeBotAssociateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["MessageId"].isNull())
		data_.messageId = dataNode["MessageId"].asString();
	if(!dataNode["SessionId"].isNull())
		data_.sessionId = dataNode["SessionId"].asString();
	auto allAssociateNode = dataNode["Associate"]["联想的列表"];
	for (auto dataNodeAssociate联想的列表 : allAssociateNode)
	{
		Data::联想的列表 联想的列表Object;
		if(!dataNodeAssociate联想的列表["Meta"].isNull())
			联想的列表Object.meta = dataNodeAssociate联想的列表["Meta"].asString();
		if(!dataNodeAssociate联想的列表["Title"].isNull())
			联想的列表Object.title = dataNodeAssociate联想的列表["Title"].asString();
		data_.associate.push_back(联想的列表Object);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["AccessDeniedDetail"].isNull())
		accessDeniedDetail_ = value["AccessDeniedDetail"].asString();

}

std::string BeeBotAssociateResult::getAccessDeniedDetail()const
{
	return accessDeniedDetail_;
}

std::string BeeBotAssociateResult::getMessage()const
{
	return message_;
}

BeeBotAssociateResult::Data BeeBotAssociateResult::getData()const
{
	return data_;
}

std::string BeeBotAssociateResult::getCode()const
{
	return code_;
}

