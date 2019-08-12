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

#include <alibabacloud/emr/model/ListClusterServiceCustomActionSupportConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListClusterServiceCustomActionSupportConfigResult::ListClusterServiceCustomActionSupportConfigResult() :
	ServiceResult()
{}

ListClusterServiceCustomActionSupportConfigResult::ListClusterServiceCustomActionSupportConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClusterServiceCustomActionSupportConfigResult::~ListClusterServiceCustomActionSupportConfigResult()
{}

void ListClusterServiceCustomActionSupportConfigResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allSupportedConfigList = value["SupportedConfigList"]["SupportedConfig"];
	for (auto value : allSupportedConfigList)
	{
		SupportedConfig supportedConfigListObject;
		if(!value["ConfigKey"].isNull())
			supportedConfigListObject.configKey = value["ConfigKey"].asString();
		supportedConfigList_.push_back(supportedConfigListObject);
	}

}

std::vector<ListClusterServiceCustomActionSupportConfigResult::SupportedConfig> ListClusterServiceCustomActionSupportConfigResult::getSupportedConfigList()const
{
	return supportedConfigList_;
}

