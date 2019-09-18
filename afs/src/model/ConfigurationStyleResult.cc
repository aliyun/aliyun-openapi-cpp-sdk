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
	auto codeDataNode = value["CodeData"];
	if(!codeDataNode["Html"].isNull())
		codeData_.html = codeDataNode["Html"].asString();
	if(!codeDataNode["Net"].isNull())
		codeData_.net = codeDataNode["Net"].asString();
	if(!codeDataNode["Php"].isNull())
		codeData_.php = codeDataNode["Php"].asString();
	if(!codeDataNode["Python"].isNull())
		codeData_.python = codeDataNode["Python"].asString();
	if(!codeDataNode["Java"].isNull())
		codeData_.java = codeDataNode["Java"].asString();
	if(!codeDataNode["NodeJs"].isNull())
		codeData_.nodeJs = codeDataNode["NodeJs"].asString();
	if(!codeDataNode["NetUrl"].isNull())
		codeData_.netUrl = codeDataNode["NetUrl"].asString();
	if(!codeDataNode["PhpUrl"].isNull())
		codeData_.phpUrl = codeDataNode["PhpUrl"].asString();
	if(!codeDataNode["PythonUrl"].isNull())
		codeData_.pythonUrl = codeDataNode["PythonUrl"].asString();
	if(!codeDataNode["JavaUrl"].isNull())
		codeData_.javaUrl = codeDataNode["JavaUrl"].asString();
	if(!codeDataNode["NodeJsUrl"].isNull())
		codeData_.nodeJsUrl = codeDataNode["NodeJsUrl"].asString();
	if(!value["BizCode"].isNull())
		bizCode_ = value["BizCode"].asString();

}

ConfigurationStyleResult::CodeData ConfigurationStyleResult::getCodeData()const
{
	return codeData_;
}

std::string ConfigurationStyleResult::getBizCode()const
{
	return bizCode_;
}

