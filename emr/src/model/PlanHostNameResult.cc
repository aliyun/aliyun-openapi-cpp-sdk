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

#include <alibabacloud/emr/model/PlanHostNameResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

PlanHostNameResult::PlanHostNameResult() :
	ServiceResult()
{}

PlanHostNameResult::PlanHostNameResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PlanHostNameResult::~PlanHostNameResult()
{}

void PlanHostNameResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allHostInfoList = value["HostInfoList"]["HostInfo"];
	for (auto value : allHostInfoList)
	{
		HostInfo hostInfoListObject;
		if(!value["HpHostBizId"].isNull())
			hostInfoListObject.hpHostBizId = value["HpHostBizId"].asString();
		if(!value["HostName"].isNull())
			hostInfoListObject.hostName = value["HostName"].asString();
		hostInfoList_.push_back(hostInfoListObject);
	}

}

std::vector<PlanHostNameResult::HostInfo> PlanHostNameResult::getHostInfoList()const
{
	return hostInfoList_;
}

