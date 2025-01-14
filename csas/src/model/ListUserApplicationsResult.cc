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

#include <alibabacloud/csas/model/ListUserApplicationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

ListUserApplicationsResult::ListUserApplicationsResult() :
	ServiceResult()
{}

ListUserApplicationsResult::ListUserApplicationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUserApplicationsResult::~ListUserApplicationsResult()
{}

void ListUserApplicationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApplicationsNode = value["Applications"]["applicationsItem"];
	for (auto valueApplicationsapplicationsItem : allApplicationsNode)
	{
		ApplicationsItem applicationsObject;
		if(!valueApplicationsapplicationsItem["Name"].isNull())
			applicationsObject.name = valueApplicationsapplicationsItem["Name"].asString();
		if(!valueApplicationsapplicationsItem["ApplicationId"].isNull())
			applicationsObject.applicationId = valueApplicationsapplicationsItem["ApplicationId"].asString();
		if(!valueApplicationsapplicationsItem["Protocol"].isNull())
			applicationsObject.protocol = valueApplicationsapplicationsItem["Protocol"].asString();
		if(!valueApplicationsapplicationsItem["Action"].isNull())
			applicationsObject.action = valueApplicationsapplicationsItem["Action"].asString();
		auto allPortRangesNode = valueApplicationsapplicationsItem["PortRanges"]["portRangesItem"];
		for (auto valueApplicationsapplicationsItemPortRangesportRangesItem : allPortRangesNode)
		{
			ApplicationsItem::PortRangesItem portRangesObject;
			if(!valueApplicationsapplicationsItemPortRangesportRangesItem["Begin"].isNull())
				portRangesObject.begin = valueApplicationsapplicationsItemPortRangesportRangesItem["Begin"].asString();
			if(!valueApplicationsapplicationsItemPortRangesportRangesItem["End"].isNull())
				portRangesObject.end = valueApplicationsapplicationsItemPortRangesportRangesItem["End"].asString();
			applicationsObject.portRanges.push_back(portRangesObject);
		}
		auto allAddresses = value["Addresses"]["addresses"];
		for (auto value : allAddresses)
			applicationsObject.addresses.push_back(value.asString());
		applications_.push_back(applicationsObject);
	}
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stoi(value["TotalNum"].asString());

}

int ListUserApplicationsResult::getTotalNum()const
{
	return totalNum_;
}

std::vector<ListUserApplicationsResult::ApplicationsItem> ListUserApplicationsResult::getApplications()const
{
	return applications_;
}

