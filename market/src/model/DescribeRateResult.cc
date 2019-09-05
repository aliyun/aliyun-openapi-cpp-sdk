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

#include <alibabacloud/market/model/DescribeRateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Market;
using namespace AlibabaCloud::Market::Model;

DescribeRateResult::DescribeRateResult() :
	ServiceResult()
{}

DescribeRateResult::DescribeRateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRateResult::~DescribeRateResult()
{}

void DescribeRateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Id"].isNull())
		id_ = std::stol(value["Id"].asString());
	if(!value["OrderId"].isNull())
		orderId_ = value["OrderId"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["AliUid"].isNull())
		aliUid_ = std::stol(value["AliUid"].asString());
	if(!value["ProductId"].isNull())
		productId_ = value["ProductId"].asString();
	if(!value["Score"].isNull())
		score_ = value["Score"].asString();
	if(!value["Content"].isNull())
		content_ = value["Content"].asString();
	if(!value["GmtCreated"].isNull())
		gmtCreated_ = std::stol(value["GmtCreated"].asString());
	if(!value["Explaintion"].isNull())
		explaintion_ = value["Explaintion"].asString();
	if(!value["GmtExplaintion"].isNull())
		gmtExplaintion_ = std::stol(value["GmtExplaintion"].asString());
	if(!value["AdditionalContent"].isNull())
		additionalContent_ = value["AdditionalContent"].asString();
	if(!value["GmtAdditional"].isNull())
		gmtAdditional_ = std::stol(value["GmtAdditional"].asString());
	if(!value["AdditionalExplaintion"].isNull())
		additionalExplaintion_ = value["AdditionalExplaintion"].asString();
	if(!value["GmtAdditionalExplaintion"].isNull())
		gmtAdditionalExplaintion_ = std::stol(value["GmtAdditionalExplaintion"].asString());
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();

}

std::string DescribeRateResult::getInstanceId()const
{
	return instanceId_;
}

std::string DescribeRateResult::getExplaintion()const
{
	return explaintion_;
}

long DescribeRateResult::getGmtExplaintion()const
{
	return gmtExplaintion_;
}

std::string DescribeRateResult::getProductId()const
{
	return productId_;
}

long DescribeRateResult::getGmtCreated()const
{
	return gmtCreated_;
}

std::string DescribeRateResult::getAdditionalContent()const
{
	return additionalContent_;
}

std::string DescribeRateResult::getOrderId()const
{
	return orderId_;
}

long DescribeRateResult::getGmtAdditionalExplaintion()const
{
	return gmtAdditionalExplaintion_;
}

std::string DescribeRateResult::getScore()const
{
	return score_;
}

std::string DescribeRateResult::getType()const
{
	return type_;
}

std::string DescribeRateResult::getContent()const
{
	return content_;
}

std::string DescribeRateResult::getAdditionalExplaintion()const
{
	return additionalExplaintion_;
}

long DescribeRateResult::getId()const
{
	return id_;
}

long DescribeRateResult::getGmtAdditional()const
{
	return gmtAdditional_;
}

long DescribeRateResult::getAliUid()const
{
	return aliUid_;
}

