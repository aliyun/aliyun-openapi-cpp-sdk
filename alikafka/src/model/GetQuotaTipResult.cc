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

#include <alibabacloud/alikafka/model/GetQuotaTipResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alikafka;
using namespace AlibabaCloud::Alikafka::Model;

GetQuotaTipResult::GetQuotaTipResult() :
	ServiceResult()
{}

GetQuotaTipResult::GetQuotaTipResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetQuotaTipResult::~GetQuotaTipResult()
{}

void GetQuotaTipResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto quotaDataNode = value["QuotaData"];
	if(!quotaDataNode["TopicNumOfBuy"].isNull())
		quotaData_.topicNumOfBuy = std::stoi(quotaDataNode["TopicNumOfBuy"].asString());
	if(!quotaDataNode["TopicQuota"].isNull())
		quotaData_.topicQuota = std::stoi(quotaDataNode["TopicQuota"].asString());
	if(!quotaDataNode["TopicLeft"].isNull())
		quotaData_.topicLeft = std::stoi(quotaDataNode["TopicLeft"].asString());
	if(!quotaDataNode["TopicUsed"].isNull())
		quotaData_.topicUsed = std::stoi(quotaDataNode["TopicUsed"].asString());
	if(!quotaDataNode["PartitionNumOfBuy"].isNull())
		quotaData_.partitionNumOfBuy = std::stoi(quotaDataNode["PartitionNumOfBuy"].asString());
	if(!quotaDataNode["PartitionQuata"].isNull())
		quotaData_.partitionQuata = std::stoi(quotaDataNode["PartitionQuata"].asString());
	if(!quotaDataNode["PartitionLeft"].isNull())
		quotaData_.partitionLeft = std::stoi(quotaDataNode["PartitionLeft"].asString());
	if(!quotaDataNode["PartitionUsed"].isNull())
		quotaData_.partitionUsed = std::stoi(quotaDataNode["PartitionUsed"].asString());
	if(!quotaDataNode["GroupLeft"].isNull())
		quotaData_.groupLeft = std::stoi(quotaDataNode["GroupLeft"].asString());
	if(!quotaDataNode["GroupUsed"].isNull())
		quotaData_.groupUsed = std::stoi(quotaDataNode["GroupUsed"].asString());
	if(!quotaDataNode["IsPartitionBuy"].isNull())
		quotaData_.isPartitionBuy = std::stoi(quotaDataNode["IsPartitionBuy"].asString());
	if(!quotaDataNode["PartitionQuota"].isNull())
		quotaData_.partitionQuota = std::stoi(quotaDataNode["PartitionQuota"].asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetQuotaTipResult::getMessage()const
{
	return message_;
}

int GetQuotaTipResult::getCode()const
{
	return code_;
}

bool GetQuotaTipResult::getSuccess()const
{
	return success_;
}

GetQuotaTipResult::QuotaData GetQuotaTipResult::getQuotaData()const
{
	return quotaData_;
}

