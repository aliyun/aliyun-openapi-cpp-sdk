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

#include <alibabacloud/hbase/model/DescribeColdStorageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::HBase;
using namespace AlibabaCloud::HBase::Model;

DescribeColdStorageResult::DescribeColdStorageResult() :
	ServiceResult()
{}

DescribeColdStorageResult::DescribeColdStorageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeColdStorageResult::~DescribeColdStorageResult()
{}

void DescribeColdStorageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["OpenStatus"].isNull())
		openStatus_ = value["OpenStatus"].asString();
	if(!value["PayType"].isNull())
		payType_ = value["PayType"].asString();
	if(!value["ColdStorageUsePercent"].isNull())
		coldStorageUsePercent_ = value["ColdStorageUsePercent"].asString();
	if(!value["ColdStorageUseAmount"].isNull())
		coldStorageUseAmount_ = value["ColdStorageUseAmount"].asString();
	if(!value["ColdStorageSize"].isNull())
		coldStorageSize_ = value["ColdStorageSize"].asString();
	if(!value["ColdStorageType"].isNull())
		coldStorageType_ = value["ColdStorageType"].asString();
	if(!value["ClusterId"].isNull())
		clusterId_ = value["ClusterId"].asString();

}

std::string DescribeColdStorageResult::getColdStorageUsePercent()const
{
	return coldStorageUsePercent_;
}

std::string DescribeColdStorageResult::getColdStorageSize()const
{
	return coldStorageSize_;
}

std::string DescribeColdStorageResult::getColdStorageUseAmount()const
{
	return coldStorageUseAmount_;
}

std::string DescribeColdStorageResult::getClusterId()const
{
	return clusterId_;
}

std::string DescribeColdStorageResult::getColdStorageType()const
{
	return coldStorageType_;
}

std::string DescribeColdStorageResult::getPayType()const
{
	return payType_;
}

std::string DescribeColdStorageResult::getOpenStatus()const
{
	return openStatus_;
}

