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

#include <alibabacloud/sas/model/ChangeCheckCustomConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

ChangeCheckCustomConfigResult::ChangeCheckCustomConfigResult() :
	ServiceResult()
{}

ChangeCheckCustomConfigResult::ChangeCheckCustomConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ChangeCheckCustomConfigResult::~ChangeCheckCustomConfigResult()
{}

void ChangeCheckCustomConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIllegalCustomConfigsNode = value["IllegalCustomConfigs"]["IllegalCustomConfigsItem"];
	for (auto valueIllegalCustomConfigsIllegalCustomConfigsItem : allIllegalCustomConfigsNode)
	{
		IllegalCustomConfigsItem illegalCustomConfigsObject;
		if(!valueIllegalCustomConfigsIllegalCustomConfigsItem["Name"].isNull())
			illegalCustomConfigsObject.name = valueIllegalCustomConfigsIllegalCustomConfigsItem["Name"].asString();
		illegalCustomConfigs_.push_back(illegalCustomConfigsObject);
	}

}

std::vector<ChangeCheckCustomConfigResult::IllegalCustomConfigsItem> ChangeCheckCustomConfigResult::getIllegalCustomConfigs()const
{
	return illegalCustomConfigs_;
}

