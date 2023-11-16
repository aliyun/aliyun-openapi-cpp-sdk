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

#include <alibabacloud/csas/model/ListRegistrationPoliciesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

ListRegistrationPoliciesResult::ListRegistrationPoliciesResult() :
	ServiceResult()
{}

ListRegistrationPoliciesResult::ListRegistrationPoliciesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRegistrationPoliciesResult::~ListRegistrationPoliciesResult()
{}

void ListRegistrationPoliciesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPoliciesNode = value["Policies"]["dataList"];
	for (auto valuePoliciesdataList : allPoliciesNode)
	{
		DataList policiesObject;
		if(!valuePoliciesdataList["Name"].isNull())
			policiesObject.name = valuePoliciesdataList["Name"].asString();
		if(!valuePoliciesdataList["PolicyId"].isNull())
			policiesObject.policyId = valuePoliciesdataList["PolicyId"].asString();
		if(!valuePoliciesdataList["Description"].isNull())
			policiesObject.description = valuePoliciesdataList["Description"].asString();
		if(!valuePoliciesdataList["Priority"].isNull())
			policiesObject.priority = std::stol(valuePoliciesdataList["Priority"].asString());
		if(!valuePoliciesdataList["Status"].isNull())
			policiesObject.status = valuePoliciesdataList["Status"].asString();
		if(!valuePoliciesdataList["MatchMode"].isNull())
			policiesObject.matchMode = valuePoliciesdataList["MatchMode"].asString();
		if(!valuePoliciesdataList["CreateTime"].isNull())
			policiesObject.createTime = valuePoliciesdataList["CreateTime"].asString();
		auto allLimitDetailNode = valuePoliciesdataList["LimitDetail"]["limitDetailItem"];
		for (auto valuePoliciesdataListLimitDetaillimitDetailItem : allLimitDetailNode)
		{
			DataList::LimitDetailItem limitDetailObject;
			if(!valuePoliciesdataListLimitDetaillimitDetailItem["DeviceBelong"].isNull())
				limitDetailObject.deviceBelong = valuePoliciesdataListLimitDetaillimitDetailItem["DeviceBelong"].asString();
			if(!valuePoliciesdataListLimitDetaillimitDetailItem["LimitType"].isNull())
				limitDetailObject.limitType = valuePoliciesdataListLimitDetaillimitDetailItem["LimitType"].asString();
			auto limitCountNode = value["LimitCount"];
			if(!limitCountNode["All"].isNull())
				limitDetailObject.limitCount.all = std::stoi(limitCountNode["All"].asString());
			if(!limitCountNode["PC"].isNull())
				limitDetailObject.limitCount.pC = std::stoi(limitCountNode["PC"].asString());
			if(!limitCountNode["Mobile"].isNull())
				limitDetailObject.limitCount.mobile = std::stoi(limitCountNode["Mobile"].asString());
			policiesObject.limitDetail.push_back(limitDetailObject);
		}
		auto allWhitelist = value["Whitelist"]["whitelist"];
		for (auto value : allWhitelist)
			policiesObject.whitelist.push_back(value.asString());
		auto allUserGroupIds = value["UserGroupIds"]["userGroupIds"];
		for (auto value : allUserGroupIds)
			policiesObject.userGroupIds.push_back(value.asString());
		policies_.push_back(policiesObject);
	}
	if(!value["TotalNum"].isNull())
		totalNum_ = value["TotalNum"].asString();

}

std::vector<ListRegistrationPoliciesResult::DataList> ListRegistrationPoliciesResult::getPolicies()const
{
	return policies_;
}

std::string ListRegistrationPoliciesResult::getTotalNum()const
{
	return totalNum_;
}

