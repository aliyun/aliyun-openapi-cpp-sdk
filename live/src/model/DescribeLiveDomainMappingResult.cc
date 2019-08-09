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

#include <alibabacloud/live/model/DescribeLiveDomainMappingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveDomainMappingResult::DescribeLiveDomainMappingResult() :
	ServiceResult()
{}

DescribeLiveDomainMappingResult::DescribeLiveDomainMappingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveDomainMappingResult::~DescribeLiveDomainMappingResult()
{}

void DescribeLiveDomainMappingResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allLiveDomainModels = value["LiveDomainModels"]["LiveDomainModel"];
	for (auto value : allLiveDomainModels)
	{
		LiveDomainModel liveDomainModelsObject;
		if(!value["DomainName"].isNull())
			liveDomainModelsObject.domainName = value["DomainName"].asString();
		if(!value["Type"].isNull())
			liveDomainModelsObject.type = value["Type"].asString();
		liveDomainModels_.push_back(liveDomainModelsObject);
	}

}

std::vector<DescribeLiveDomainMappingResult::LiveDomainModel> DescribeLiveDomainMappingResult::getLiveDomainModels()const
{
	return liveDomainModels_;
}

