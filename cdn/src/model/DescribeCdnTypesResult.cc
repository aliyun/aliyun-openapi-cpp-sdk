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

#include <alibabacloud/cdn/model/DescribeCdnTypesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeCdnTypesResult::DescribeCdnTypesResult() :
	ServiceResult()
{}

DescribeCdnTypesResult::DescribeCdnTypesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCdnTypesResult::~DescribeCdnTypesResult()
{}

void DescribeCdnTypesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allCdnTypes = value["CdnTypes"]["CdnType"];
	for (auto value : allCdnTypes)
	{
		CdnType cdnTypesObject;
		if(!value["Type"].isNull())
			cdnTypesObject.type = value["Type"].asString();
		if(!value["Desc"].isNull())
			cdnTypesObject.desc = value["Desc"].asString();
		cdnTypes_.push_back(cdnTypesObject);
	}

}

std::vector<DescribeCdnTypesResult::CdnType> DescribeCdnTypesResult::getCdnTypes()const
{
	return cdnTypes_;
}

