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

#include <alibabacloud/dcdn/model/DescribeDcdnOriginSiteHealthStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnOriginSiteHealthStatusResult::DescribeDcdnOriginSiteHealthStatusResult() :
	ServiceResult()
{}

DescribeDcdnOriginSiteHealthStatusResult::DescribeDcdnOriginSiteHealthStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnOriginSiteHealthStatusResult::~DescribeDcdnOriginSiteHealthStatusResult()
{}

void DescribeDcdnOriginSiteHealthStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOriginSiteStatusNode = value["OriginSiteStatus"]["OriginSiteStatusItem"];
	for (auto valueOriginSiteStatusOriginSiteStatusItem : allOriginSiteStatusNode)
	{
		OriginSiteStatusItem originSiteStatusObject;
		if(!valueOriginSiteStatusOriginSiteStatusItem["Host"].isNull())
			originSiteStatusObject.host = valueOriginSiteStatusOriginSiteStatusItem["Host"].asString();
		if(!valueOriginSiteStatusOriginSiteStatusItem["HealthStatus"].isNull())
			originSiteStatusObject.healthStatus = valueOriginSiteStatusOriginSiteStatusItem["HealthStatus"].asString();
		originSiteStatus_.push_back(originSiteStatusObject);
	}

}

std::vector<DescribeDcdnOriginSiteHealthStatusResult::OriginSiteStatusItem> DescribeDcdnOriginSiteHealthStatusResult::getOriginSiteStatus()const
{
	return originSiteStatus_;
}

