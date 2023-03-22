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

#include <alibabacloud/appstream-center/model/ListTenantConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Appstream_center;
using namespace AlibabaCloud::Appstream_center::Model;

ListTenantConfigResult::ListTenantConfigResult() :
	ServiceResult()
{}

ListTenantConfigResult::ListTenantConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTenantConfigResult::~ListTenantConfigResult()
{}

void ListTenantConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto tenantConfigModelNode = value["TenantConfigModel"];
	if(!tenantConfigModelNode["AppInstanceGroupExpireRemind"].isNull())
		tenantConfigModel_.appInstanceGroupExpireRemind = tenantConfigModelNode["AppInstanceGroupExpireRemind"].asString() == "true";

}

ListTenantConfigResult::TenantConfigModel ListTenantConfigResult::getTenantConfigModel()const
{
	return tenantConfigModel_;
}

