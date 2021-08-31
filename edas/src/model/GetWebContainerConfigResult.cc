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

#include <alibabacloud/edas/model/GetWebContainerConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

GetWebContainerConfigResult::GetWebContainerConfigResult() :
	ServiceResult()
{}

GetWebContainerConfigResult::GetWebContainerConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetWebContainerConfigResult::~GetWebContainerConfigResult()
{}

void GetWebContainerConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto webContainerConfigNode = value["WebContainerConfig"];
	if(!webContainerConfigNode["ContextInputType"].isNull())
		webContainerConfig_.contextInputType = webContainerConfigNode["ContextInputType"].asString();
	if(!webContainerConfigNode["ContextPath"].isNull())
		webContainerConfig_.contextPath = webContainerConfigNode["ContextPath"].asString();
	if(!webContainerConfigNode["HttpPort"].isNull())
		webContainerConfig_.httpPort = std::stoi(webContainerConfigNode["HttpPort"].asString());
	if(!webContainerConfigNode["MaxThreads"].isNull())
		webContainerConfig_.maxThreads = std::stoi(webContainerConfigNode["MaxThreads"].asString());
	if(!webContainerConfigNode["ServerXml"].isNull())
		webContainerConfig_.serverXml = webContainerConfigNode["ServerXml"].asString();
	if(!webContainerConfigNode["UriEncoding"].isNull())
		webContainerConfig_.uriEncoding = webContainerConfigNode["UriEncoding"].asString();
	if(!webContainerConfigNode["UseAdvancedServerXml"].isNull())
		webContainerConfig_.useAdvancedServerXml = webContainerConfigNode["UseAdvancedServerXml"].asString() == "true";
	if(!webContainerConfigNode["UseBodyEncoding"].isNull())
		webContainerConfig_.useBodyEncoding = webContainerConfigNode["UseBodyEncoding"].asString() == "true";
	if(!webContainerConfigNode["UseDefaultConfig"].isNull())
		webContainerConfig_.useDefaultConfig = webContainerConfigNode["UseDefaultConfig"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());

}

std::string GetWebContainerConfigResult::getMessage()const
{
	return message_;
}

GetWebContainerConfigResult::WebContainerConfig GetWebContainerConfigResult::getWebContainerConfig()const
{
	return webContainerConfig_;
}

int GetWebContainerConfigResult::getCode()const
{
	return code_;
}

