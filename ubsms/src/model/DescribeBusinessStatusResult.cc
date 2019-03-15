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

#include <alibabacloud/ubsms/model/DescribeBusinessStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ubsms;
using namespace AlibabaCloud::Ubsms::Model;

DescribeBusinessStatusResult::DescribeBusinessStatusResult() :
	ServiceResult()
{}

DescribeBusinessStatusResult::DescribeBusinessStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBusinessStatusResult::~DescribeBusinessStatusResult()
{}

void DescribeBusinessStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allUserBusinessStatusList = value["UserBusinessStatusList"]["UserBusinessStatus"];
	for (auto value : allUserBusinessStatusList)
	{
		UserBusinessStatus userBusinessStatusListObject;
		if(!value["Uid"].isNull())
			userBusinessStatusListObject.uid = value["Uid"].asString();
		if(!value["ServiceCode"].isNull())
			userBusinessStatusListObject.serviceCode = value["ServiceCode"].asString();
		auto allStatuses = value["Statuses"]["Status"];
		for (auto value : allStatuses)
		{
			UserBusinessStatus::Status statusesObject;
			if(!value["StatusKey"].isNull())
				statusesObject.statusKey = value["StatusKey"].asString();
			if(!value["StatusValue"].isNull())
				statusesObject.statusValue = value["StatusValue"].asString();
			userBusinessStatusListObject.statuses.push_back(statusesObject);
		}
		userBusinessStatusList_.push_back(userBusinessStatusListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeBusinessStatusResult::UserBusinessStatus> DescribeBusinessStatusResult::getUserBusinessStatusList()const
{
	return userBusinessStatusList_;
}

bool DescribeBusinessStatusResult::getSuccess()const
{
	return success_;
}

