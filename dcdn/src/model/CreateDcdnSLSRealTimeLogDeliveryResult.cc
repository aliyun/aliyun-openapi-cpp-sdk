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

#include <alibabacloud/dcdn/model/CreateDcdnSLSRealTimeLogDeliveryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

CreateDcdnSLSRealTimeLogDeliveryResult::CreateDcdnSLSRealTimeLogDeliveryResult() :
	ServiceResult()
{}

CreateDcdnSLSRealTimeLogDeliveryResult::CreateDcdnSLSRealTimeLogDeliveryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateDcdnSLSRealTimeLogDeliveryResult::~CreateDcdnSLSRealTimeLogDeliveryResult()
{}

void CreateDcdnSLSRealTimeLogDeliveryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allContentNode = value["Content"]["Domains"];
	for (auto valueContentDomains : allContentNode)
	{
		Domains contentObject;
		if(!valueContentDomains["Status"].isNull())
			contentObject.status = valueContentDomains["Status"].asString();
		if(!valueContentDomains["DomainName"].isNull())
			contentObject.domainName = valueContentDomains["DomainName"].asString();
		if(!valueContentDomains["Region"].isNull())
			contentObject.region = valueContentDomains["Region"].asString();
		if(!valueContentDomains["Desc"].isNull())
			contentObject.desc = valueContentDomains["Desc"].asString();
		content_.push_back(contentObject);
	}

}

std::vector<CreateDcdnSLSRealTimeLogDeliveryResult::Domains> CreateDcdnSLSRealTimeLogDeliveryResult::getContent()const
{
	return content_;
}

