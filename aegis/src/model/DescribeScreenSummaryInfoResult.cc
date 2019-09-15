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

#include <alibabacloud/aegis/model/DescribeScreenSummaryInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeScreenSummaryInfoResult::DescribeScreenSummaryInfoResult() :
	ServiceResult()
{}

DescribeScreenSummaryInfoResult::DescribeScreenSummaryInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScreenSummaryInfoResult::~DescribeScreenSummaryInfoResult()
{}

void DescribeScreenSummaryInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["AegisClientOfflineCount"].isNull())
		aegisClientOfflineCount_ = std::stoi(value["AegisClientOfflineCount"].asString());
	if(!value["SecurityScore"].isNull())
		securityScore_ = std::stoi(value["SecurityScore"].asString());
	if(!value["AegisClientOnlineCount"].isNull())
		aegisClientOnlineCount_ = std::stoi(value["AegisClientOnlineCount"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int DescribeScreenSummaryInfoResult::getAegisClientOnlineCount()const
{
	return aegisClientOnlineCount_;
}

int DescribeScreenSummaryInfoResult::getAegisClientOfflineCount()const
{
	return aegisClientOfflineCount_;
}

int DescribeScreenSummaryInfoResult::getSecurityScore()const
{
	return securityScore_;
}

bool DescribeScreenSummaryInfoResult::getSuccess()const
{
	return success_;
}

