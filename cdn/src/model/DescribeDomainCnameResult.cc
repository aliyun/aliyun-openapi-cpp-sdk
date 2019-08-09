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

#include <alibabacloud/cdn/model/DescribeDomainCnameResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainCnameResult::DescribeDomainCnameResult() :
	ServiceResult()
{}

DescribeDomainCnameResult::DescribeDomainCnameResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainCnameResult::~DescribeDomainCnameResult()
{}

void DescribeDomainCnameResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allCnameDatas = value["CnameDatas"]["Data"];
	for (auto value : allCnameDatas)
	{
		Data cnameDatasObject;
		if(!value["Domain"].isNull())
			cnameDatasObject.domain = value["Domain"].asString();
		if(!value["Cname"].isNull())
			cnameDatasObject.cname = value["Cname"].asString();
		if(!value["Status"].isNull())
			cnameDatasObject.status = std::stoi(value["Status"].asString());
		cnameDatas_.push_back(cnameDatasObject);
	}

}

std::vector<DescribeDomainCnameResult::Data> DescribeDomainCnameResult::getCnameDatas()const
{
	return cnameDatas_;
}

