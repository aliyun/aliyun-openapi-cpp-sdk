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

#include <alibabacloud/dysmsapi/model/QuerySendStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dysmsapi;
using namespace AlibabaCloud::Dysmsapi::Model;

QuerySendStatisticsResult::QuerySendStatisticsResult() :
	ServiceResult()
{}

QuerySendStatisticsResult::QuerySendStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QuerySendStatisticsResult::~QuerySendStatisticsResult()
{}

void QuerySendStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalSize"].isNull())
		data_.totalSize = std::stol(dataNode["TotalSize"].asString());
	auto allTargetListNode = dataNode["TargetList"]["SmsStatisticsDTO"];
	for (auto dataNodeTargetListSmsStatisticsDTO : allTargetListNode)
	{
		Data::SmsStatisticsDTO smsStatisticsDTOObject;
		if(!dataNodeTargetListSmsStatisticsDTO["TotalCount"].isNull())
			smsStatisticsDTOObject.totalCount = std::stol(dataNodeTargetListSmsStatisticsDTO["TotalCount"].asString());
		if(!dataNodeTargetListSmsStatisticsDTO["RespondedSuccessCount"].isNull())
			smsStatisticsDTOObject.respondedSuccessCount = std::stol(dataNodeTargetListSmsStatisticsDTO["RespondedSuccessCount"].asString());
		if(!dataNodeTargetListSmsStatisticsDTO["RespondedFailCount"].isNull())
			smsStatisticsDTOObject.respondedFailCount = std::stol(dataNodeTargetListSmsStatisticsDTO["RespondedFailCount"].asString());
		if(!dataNodeTargetListSmsStatisticsDTO["NoRespondedCount"].isNull())
			smsStatisticsDTOObject.noRespondedCount = std::stol(dataNodeTargetListSmsStatisticsDTO["NoRespondedCount"].asString());
		if(!dataNodeTargetListSmsStatisticsDTO["SendDate"].isNull())
			smsStatisticsDTOObject.sendDate = dataNodeTargetListSmsStatisticsDTO["SendDate"].asString();
		data_.targetList.push_back(smsStatisticsDTOObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QuerySendStatisticsResult::getMessage()const
{
	return message_;
}

QuerySendStatisticsResult::Data QuerySendStatisticsResult::getData()const
{
	return data_;
}

std::string QuerySendStatisticsResult::getCode()const
{
	return code_;
}

