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

#include <alibabacloud/sas/model/GetCloudAssetCriteriaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

GetCloudAssetCriteriaResult::GetCloudAssetCriteriaResult() :
	ServiceResult()
{}

GetCloudAssetCriteriaResult::GetCloudAssetCriteriaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCloudAssetCriteriaResult::~GetCloudAssetCriteriaResult()
{}

void GetCloudAssetCriteriaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCriteriaListNode = value["CriteriaList"]["Criteria"];
	for (auto valueCriteriaListCriteria : allCriteriaListNode)
	{
		Criteria criteriaListObject;
		if(!valueCriteriaListCriteria["Type"].isNull())
			criteriaListObject.type = valueCriteriaListCriteria["Type"].asString();
		if(!valueCriteriaListCriteria["Name"].isNull())
			criteriaListObject.name = valueCriteriaListCriteria["Name"].asString();
		if(!valueCriteriaListCriteria["Values"].isNull())
			criteriaListObject.values = valueCriteriaListCriteria["Values"].asString();
		if(!valueCriteriaListCriteria["MultiValues"].isNull())
			criteriaListObject.multiValues = valueCriteriaListCriteria["MultiValues"].asString();
		criteriaList_.push_back(criteriaListObject);
	}

}

std::vector<GetCloudAssetCriteriaResult::Criteria> GetCloudAssetCriteriaResult::getCriteriaList()const
{
	return criteriaList_;
}

