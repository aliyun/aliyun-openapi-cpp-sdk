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

#include <alibabacloud/crm/model/BatchGetAliyunIdByAliyunPkResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Crm;
using namespace AlibabaCloud::Crm::Model;

BatchGetAliyunIdByAliyunPkResult::BatchGetAliyunIdByAliyunPkResult() :
	ServiceResult()
{}

BatchGetAliyunIdByAliyunPkResult::BatchGetAliyunIdByAliyunPkResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BatchGetAliyunIdByAliyunPkResult::~BatchGetAliyunIdByAliyunPkResult()
{}

void BatchGetAliyunIdByAliyunPkResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allProfileListNode = value["ProfileList"]["ProfileItem"];
	for (auto valueProfileListProfileItem : allProfileListNode)
	{
		ProfileItem profileListObject;
		if(!valueProfileListProfileItem["AliyunId"].isNull())
			profileListObject.aliyunId = valueProfileListProfileItem["AliyunId"].asString();
		if(!valueProfileListProfileItem["AliyunPk"].isNull())
			profileListObject.aliyunPk = valueProfileListProfileItem["AliyunPk"].asString();
		profileList_.push_back(profileListObject);
	}

}

std::vector<BatchGetAliyunIdByAliyunPkResult::ProfileItem> BatchGetAliyunIdByAliyunPkResult::getProfileList()const
{
	return profileList_;
}

