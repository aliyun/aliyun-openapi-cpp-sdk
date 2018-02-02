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

#include <alibabacloud/afs/model/ConfigurationStyleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Afs;
using namespace AlibabaCloud::Afs::Model;

ConfigurationStyleResult::ConfigurationStyleResult() :
	ServiceResult()
{}

ConfigurationStyleResult::ConfigurationStyleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ConfigurationStyleResult::~ConfigurationStyleResult()
{}

void ConfigurationStyleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allCodeData = value["CodeData"];
	for (auto value : allCodeData)
	{
		CodeData codeDataObject;
		if(!value["Html"].isNull())
			codeDataObject.html = value["Html"].asString();
		if(!value["Net"].isNull())
			codeDataObject.net = value["Net"].asString();
		if(!value["Php"].isNull())
			codeDataObject.php = value["Php"].asString();
		if(!value["Python"].isNull())
			codeDataObject.python = value["Python"].asString();
		if(!value["Java"].isNull())
			codeDataObject.java = value["Java"].asString();
		if(!value["NodeJs"].isNull())
			codeDataObject.nodeJs = value["NodeJs"].asString();
		codeData_.push_back(codeDataObject);
	}
	if(!value["BizCode"].isNull())
		bizCode_ = value["BizCode"].asString();

}

std::vector<ConfigurationStyleResult::CodeData> ConfigurationStyleResult::getCodeData()const
{
	return codeData_;
}

std::string ConfigurationStyleResult::getBizCode()const
{
	return bizCode_;
}

