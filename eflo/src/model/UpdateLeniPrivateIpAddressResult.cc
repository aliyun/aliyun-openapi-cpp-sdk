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

#include <alibabacloud/eflo/model/UpdateLeniPrivateIpAddressResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eflo;
using namespace AlibabaCloud::Eflo::Model;

UpdateLeniPrivateIpAddressResult::UpdateLeniPrivateIpAddressResult() :
	ServiceResult()
{}

UpdateLeniPrivateIpAddressResult::UpdateLeniPrivateIpAddressResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateLeniPrivateIpAddressResult::~UpdateLeniPrivateIpAddressResult()
{}

void UpdateLeniPrivateIpAddressResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto contentNode = value["Content"];
	if(!contentNode["ElasticNetworkInterfaceId"].isNull())
		content_.elasticNetworkInterfaceId = contentNode["ElasticNetworkInterfaceId"].asString();
	if(!contentNode["IpName"].isNull())
		content_.ipName = contentNode["IpName"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string UpdateLeniPrivateIpAddressResult::getMessage()const
{
	return message_;
}

UpdateLeniPrivateIpAddressResult::Content UpdateLeniPrivateIpAddressResult::getContent()const
{
	return content_;
}

int UpdateLeniPrivateIpAddressResult::getCode()const
{
	return code_;
}

