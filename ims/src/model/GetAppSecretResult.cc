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

#include <alibabacloud/ims/model/GetAppSecretResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ims;
using namespace AlibabaCloud::Ims::Model;

GetAppSecretResult::GetAppSecretResult() :
	ServiceResult()
{}

GetAppSecretResult::GetAppSecretResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAppSecretResult::~GetAppSecretResult()
{}

void GetAppSecretResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto appSecretNode = value["AppSecret"];
	if(!appSecretNode["AppSecretValue"].isNull())
		appSecret_.appSecretValue = appSecretNode["AppSecretValue"].asString();
	if(!appSecretNode["AppId"].isNull())
		appSecret_.appId = appSecretNode["AppId"].asString();
	if(!appSecretNode["AppSecretId"].isNull())
		appSecret_.appSecretId = appSecretNode["AppSecretId"].asString();
	if(!appSecretNode["CreateDate"].isNull())
		appSecret_.createDate = appSecretNode["CreateDate"].asString();

}

GetAppSecretResult::AppSecret GetAppSecretResult::getAppSecret()const
{
	return appSecret_;
}

