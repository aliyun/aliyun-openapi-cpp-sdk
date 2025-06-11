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

#include <alibabacloud/oceanbasepro/model/ModifyInstanceSSLResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

ModifyInstanceSSLResult::ModifyInstanceSSLResult() :
	ServiceResult()
{}

ModifyInstanceSSLResult::ModifyInstanceSSLResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyInstanceSSLResult::~ModifyInstanceSSLResult()
{}

void ModifyInstanceSSLResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto instanceSSLNode = value["InstanceSSL"];
	if(!instanceSSLNode["InstanceId"].isNull())
		instanceSSL_.instanceId = instanceSSLNode["InstanceId"].asString();
	if(!instanceSSLNode["EnableSSL"].isNull())
		instanceSSL_.enableSSL = instanceSSLNode["EnableSSL"].asString();
	if(!instanceSSLNode["TenantId"].isNull())
		instanceSSL_.tenantId = instanceSSLNode["TenantId"].asString();

}

ModifyInstanceSSLResult::InstanceSSL ModifyInstanceSSLResult::getInstanceSSL()const
{
	return instanceSSL_;
}

