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

#include <alibabacloud/edas/model/UpdateContainerConfigurationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

UpdateContainerConfigurationResult::UpdateContainerConfigurationResult() :
	ServiceResult()
{}

UpdateContainerConfigurationResult::UpdateContainerConfigurationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateContainerConfigurationResult::~UpdateContainerConfigurationResult()
{}

void UpdateContainerConfigurationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto containerConfigurationNode = value["ContainerConfiguration"];
	if(!containerConfigurationNode["ContextPath"].isNull())
		containerConfiguration_.contextPath = containerConfigurationNode["ContextPath"].asString();
	if(!containerConfigurationNode["HttpPort"].isNull())
		containerConfiguration_.httpPort = std::stoi(containerConfigurationNode["HttpPort"].asString());
	if(!containerConfigurationNode["MaxThreads"].isNull())
		containerConfiguration_.maxThreads = std::stoi(containerConfigurationNode["MaxThreads"].asString());
	if(!containerConfigurationNode["URIEncoding"].isNull())
		containerConfiguration_.uRIEncoding = containerConfigurationNode["URIEncoding"].asString();
	if(!containerConfigurationNode["UseBodyEncoding"].isNull())
		containerConfiguration_.useBodyEncoding = containerConfigurationNode["UseBodyEncoding"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string UpdateContainerConfigurationResult::getMessage()const
{
	return message_;
}

UpdateContainerConfigurationResult::ContainerConfiguration UpdateContainerConfigurationResult::getContainerConfiguration()const
{
	return containerConfiguration_;
}

int UpdateContainerConfigurationResult::getCode()const
{
	return code_;
}

