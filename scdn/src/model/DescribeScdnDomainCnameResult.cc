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

#include <alibabacloud/scdn/model/DescribeScdnDomainCnameResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scdn;
using namespace AlibabaCloud::Scdn::Model;

DescribeScdnDomainCnameResult::DescribeScdnDomainCnameResult() :
	ServiceResult()
{}

DescribeScdnDomainCnameResult::DescribeScdnDomainCnameResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScdnDomainCnameResult::~DescribeScdnDomainCnameResult()
{}

void DescribeScdnDomainCnameResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCnameDatasNode = value["CnameDatas"]["Data"];
	for (auto valueCnameDatasData : allCnameDatasNode)
	{
		Data cnameDatasObject;
		if(!valueCnameDatasData["Status"].isNull())
			cnameDatasObject.status = std::stoi(valueCnameDatasData["Status"].asString());
		if(!valueCnameDatasData["Domain"].isNull())
			cnameDatasObject.domain = valueCnameDatasData["Domain"].asString();
		if(!valueCnameDatasData["Cname"].isNull())
			cnameDatasObject.cname = valueCnameDatasData["Cname"].asString();
		cnameDatas_.push_back(cnameDatasObject);
	}

}

std::vector<DescribeScdnDomainCnameResult::Data> DescribeScdnDomainCnameResult::getCnameDatas()const
{
	return cnameDatas_;
}

