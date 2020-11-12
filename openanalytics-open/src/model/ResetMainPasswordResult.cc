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

#include <alibabacloud/openanalytics-open/model/ResetMainPasswordResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Openanalytics_open;
using namespace AlibabaCloud::Openanalytics_open::Model;

ResetMainPasswordResult::ResetMainPasswordResult() :
	ServiceResult()
{}

ResetMainPasswordResult::ResetMainPasswordResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ResetMainPasswordResult::~ResetMainPasswordResult()
{}

void ResetMainPasswordResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto accountNode = value["Account"];
	if(!accountNode["UserName"].isNull())
		account_.userName = accountNode["UserName"].asString();
	if(!accountNode["Password"].isNull())
		account_.password = accountNode["Password"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();

}

ResetMainPasswordResult::Account ResetMainPasswordResult::getAccount()const
{
	return account_;
}

std::string ResetMainPasswordResult::getRegionId()const
{
	return regionId_;
}

