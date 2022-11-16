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

#include <alibabacloud/cloudapi/model/CreatePluginResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

CreatePluginResult::CreatePluginResult() :
	ServiceResult()
{}

CreatePluginResult::CreatePluginResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreatePluginResult::~CreatePluginResult()
{}

void CreatePluginResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["PluginId"].isNull())
		pluginId_ = value["PluginId"].asString();
	if(!value["TagStatus"].isNull())
		tagStatus_ = value["TagStatus"].asString() == "true";

}

bool CreatePluginResult::getTagStatus()const
{
	return tagStatus_;
}

std::string CreatePluginResult::getPluginId()const
{
	return pluginId_;
}

