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

#include <alibabacloud/sas/model/GetServiceTrailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

GetServiceTrailResult::GetServiceTrailResult() :
	ServiceResult()
{}

GetServiceTrailResult::GetServiceTrailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetServiceTrailResult::~GetServiceTrailResult()
{}

void GetServiceTrailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto serviceTrailNode = value["ServiceTrail"];
	if(!serviceTrailNode["Config"].isNull())
		serviceTrail_.config = serviceTrailNode["Config"].asString();
	if(!serviceTrailNode["CreateTime"].isNull())
		serviceTrail_.createTime = std::stol(serviceTrailNode["CreateTime"].asString());
	if(!serviceTrailNode["UpdateTime"].isNull())
		serviceTrail_.updateTime = std::stol(serviceTrailNode["UpdateTime"].asString());

}

GetServiceTrailResult::ServiceTrail GetServiceTrailResult::getServiceTrail()const
{
	return serviceTrail_;
}

