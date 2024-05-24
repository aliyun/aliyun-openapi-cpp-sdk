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

#include <alibabacloud/live/model/GetMessageAppResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

GetMessageAppResult::GetMessageAppResult() :
	ServiceResult()
{}

GetMessageAppResult::GetMessageAppResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMessageAppResult::~GetMessageAppResult()
{}

void GetMessageAppResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["AppConfig"].isNull())
		result_.appConfig = resultNode["AppConfig"].asString();
	if(!resultNode["AppId"].isNull())
		result_.appId = resultNode["AppId"].asString();
	if(!resultNode["AppName"].isNull())
		result_.appName = resultNode["AppName"].asString();
	if(!resultNode["CreateTime"].isNull())
		result_.createTime = std::stol(resultNode["CreateTime"].asString());
	if(!resultNode["Extension"].isNull())
		result_.extension = resultNode["Extension"].asString();
	if(!resultNode["Status"].isNull())
		result_.status = std::stoi(resultNode["Status"].asString());

}

GetMessageAppResult::Result GetMessageAppResult::getResult()const
{
	return result_;
}

