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

#include <alibabacloud/trademark/model/QueryIntentionDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Trademark;
using namespace AlibabaCloud::Trademark::Model;

QueryIntentionDetailResult::QueryIntentionDetailResult() :
	ServiceResult()
{}

QueryIntentionDetailResult::QueryIntentionDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryIntentionDetailResult::~QueryIntentionDetailResult()
{}

void QueryIntentionDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["UserId"].isNull())
		userId_ = value["UserId"].asString();
	if(!value["RegisterNumber"].isNull())
		registerNumber_ = value["RegisterNumber"].asString();
	if(!value["Classification"].isNull())
		classification_ = value["Classification"].asString();
	if(!value["Type"].isNull())
		type_ = std::stoi(value["Type"].asString());
	if(!value["BizId"].isNull())
		bizId_ = value["BizId"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["Status"].isNull())
		status_ = std::stoi(value["Status"].asString());
	if(!value["UpdateTime"].isNull())
		updateTime_ = std::stol(value["UpdateTime"].asString());
	if(!value["CreateTime"].isNull())
		createTime_ = std::stol(value["CreateTime"].asString());
	if(!value["Mobile"].isNull())
		mobile_ = value["Mobile"].asString();
	if(!value["UserName"].isNull())
		userName_ = value["UserName"].asString();
	if(!value["RelationBizId"].isNull())
		relationBizId_ = value["RelationBizId"].asString();
	if(!value["PartnerMobile"].isNull())
		partnerMobile_ = value["PartnerMobile"].asString();

}

int QueryIntentionDetailResult::getStatus()const
{
	return status_;
}

std::string QueryIntentionDetailResult::getDescription()const
{
	return description_;
}

std::string QueryIntentionDetailResult::getUserName()const
{
	return userName_;
}

std::string QueryIntentionDetailResult::getRelationBizId()const
{
	return relationBizId_;
}

long QueryIntentionDetailResult::getCreateTime()const
{
	return createTime_;
}

std::string QueryIntentionDetailResult::getMobile()const
{
	return mobile_;
}

std::string QueryIntentionDetailResult::getRegisterNumber()const
{
	return registerNumber_;
}

int QueryIntentionDetailResult::getType()const
{
	return type_;
}

std::string QueryIntentionDetailResult::getUserId()const
{
	return userId_;
}

std::string QueryIntentionDetailResult::getClassification()const
{
	return classification_;
}

long QueryIntentionDetailResult::getUpdateTime()const
{
	return updateTime_;
}

std::string QueryIntentionDetailResult::getBizId()const
{
	return bizId_;
}

std::string QueryIntentionDetailResult::getPartnerMobile()const
{
	return partnerMobile_;
}

