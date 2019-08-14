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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allProfileList = value["ProfileList"]["ProfileItem"];
	for (auto value : allProfileList)
	{
		ProfileItem profileListObject;
		if(!value["AliyunId"].isNull())
			profileListObject.aliyunId = value["AliyunId"].asString();
		if(!value["AliyunPk"].isNull())
			profileListObject.aliyunPk = value["AliyunPk"].asString();
		profileList_.push_back(profileListObject);
	}

}

std::vector<BatchGetAliyunIdByAliyunPkResult::ProfileItem> BatchGetAliyunIdByAliyunPkResult::getProfileList()const
{
	return profileList_;
}

