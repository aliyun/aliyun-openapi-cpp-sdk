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

#include <alibabacloud/arms/model/GetRetcodeAppByPidResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

GetRetcodeAppByPidResult::GetRetcodeAppByPidResult() :
	ServiceResult()
{}

GetRetcodeAppByPidResult::GetRetcodeAppByPidResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetRetcodeAppByPidResult::~GetRetcodeAppByPidResult()
{}

void GetRetcodeAppByPidResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto retcodeAppNode = value["RetcodeApp"];
	if(!retcodeAppNode["AppName"].isNull())
		retcodeApp_.appName = retcodeAppNode["AppName"].asString();
	if(!retcodeAppNode["RetcodeAppType"].isNull())
		retcodeApp_.retcodeAppType = retcodeAppNode["RetcodeAppType"].asString();
	if(!retcodeAppNode["AppId"].isNull())
		retcodeApp_.appId = retcodeAppNode["AppId"].asString();
	if(!retcodeAppNode["Pid"].isNull())
		retcodeApp_.pid = retcodeAppNode["Pid"].asString();
	if(!retcodeAppNode["ResourceGroupId"].isNull())
		retcodeApp_.resourceGroupId = retcodeAppNode["ResourceGroupId"].asString();
	auto allTagsNode = retcodeAppNode["Tags"]["TagsItem"];
	for (auto retcodeAppNodeTagsTagsItem : allTagsNode)
	{
		RetcodeApp::TagsItem tagsItemObject;
		if(!retcodeAppNodeTagsTagsItem["Key"].isNull())
			tagsItemObject.key = retcodeAppNodeTagsTagsItem["Key"].asString();
		if(!retcodeAppNodeTagsTagsItem["Value"].isNull())
			tagsItemObject.value = retcodeAppNodeTagsTagsItem["Value"].asString();
		retcodeApp_.tags.push_back(tagsItemObject);
	}

}

GetRetcodeAppByPidResult::RetcodeApp GetRetcodeAppByPidResult::getRetcodeApp()const
{
	return retcodeApp_;
}

