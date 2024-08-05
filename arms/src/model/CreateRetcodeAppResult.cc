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

#include <alibabacloud/arms/model/CreateRetcodeAppResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

CreateRetcodeAppResult::CreateRetcodeAppResult() :
	ServiceResult()
{}

CreateRetcodeAppResult::CreateRetcodeAppResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateRetcodeAppResult::~CreateRetcodeAppResult()
{}

void CreateRetcodeAppResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto retcodeAppDataBeanNode = value["RetcodeAppDataBean"];
	if(!retcodeAppDataBeanNode["Pid"].isNull())
		retcodeAppDataBean_.pid = retcodeAppDataBeanNode["Pid"].asString();
	if(!retcodeAppDataBeanNode["AppId"].isNull())
		retcodeAppDataBean_.appId = std::stol(retcodeAppDataBeanNode["AppId"].asString());
	if(!retcodeAppDataBeanNode["ResourceGroupId"].isNull())
		retcodeAppDataBean_.resourceGroupId = retcodeAppDataBeanNode["ResourceGroupId"].asString();
	auto allTagsNode = retcodeAppDataBeanNode["Tags"]["TagsItem"];
	for (auto retcodeAppDataBeanNodeTagsTagsItem : allTagsNode)
	{
		RetcodeAppDataBean::TagsItem tagsItemObject;
		if(!retcodeAppDataBeanNodeTagsTagsItem["Key"].isNull())
			tagsItemObject.key = retcodeAppDataBeanNodeTagsTagsItem["Key"].asString();
		if(!retcodeAppDataBeanNodeTagsTagsItem["Value"].isNull())
			tagsItemObject.value = retcodeAppDataBeanNodeTagsTagsItem["Value"].asString();
		retcodeAppDataBean_.tags.push_back(tagsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Data"].isNull())
		data_ = value["Data"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

CreateRetcodeAppResult::RetcodeAppDataBean CreateRetcodeAppResult::getRetcodeAppDataBean()const
{
	return retcodeAppDataBean_;
}

std::string CreateRetcodeAppResult::getMessage()const
{
	return message_;
}

std::string CreateRetcodeAppResult::getData()const
{
	return data_;
}

int CreateRetcodeAppResult::getCode()const
{
	return code_;
}

bool CreateRetcodeAppResult::getSuccess()const
{
	return success_;
}

