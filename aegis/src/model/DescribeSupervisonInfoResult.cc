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

#include <alibabacloud/aegis/model/DescribeSupervisonInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeSupervisonInfoResult::DescribeSupervisonInfoResult() :
	ServiceResult()
{}

DescribeSupervisonInfoResult::DescribeSupervisonInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSupervisonInfoResult::~DescribeSupervisonInfoResult()
{}

void DescribeSupervisonInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["LatestScanTime"].isNull())
		latestScanTime_ = std::stol(value["LatestScanTime"].asString());
	if(!value["VirusDatabaseUpdateTime"].isNull())
		virusDatabaseUpdateTime_ = std::stol(value["VirusDatabaseUpdateTime"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

long DescribeSupervisonInfoResult::getVirusDatabaseUpdateTime()const
{
	return virusDatabaseUpdateTime_;
}

long DescribeSupervisonInfoResult::getLatestScanTime()const
{
	return latestScanTime_;
}

bool DescribeSupervisonInfoResult::getSuccess()const
{
	return success_;
}

