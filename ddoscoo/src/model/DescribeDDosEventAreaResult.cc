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

#include <alibabacloud/ddoscoo/model/DescribeDDosEventAreaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeDDosEventAreaResult::DescribeDDosEventAreaResult() :
	ServiceResult()
{}

DescribeDDosEventAreaResult::DescribeDDosEventAreaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDDosEventAreaResult::~DescribeDDosEventAreaResult()
{}

void DescribeDDosEventAreaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAreasNode = value["Areas"]["EventArea"];
	for (auto valueAreasEventArea : allAreasNode)
	{
		EventArea areasObject;
		if(!valueAreasEventArea["InPkts"].isNull())
			areasObject.inPkts = std::stol(valueAreasEventArea["InPkts"].asString());
		if(!valueAreasEventArea["Area"].isNull())
			areasObject.area = valueAreasEventArea["Area"].asString();
		areas_.push_back(areasObject);
	}

}

std::vector<DescribeDDosEventAreaResult::EventArea> DescribeDDosEventAreaResult::getAreas()const
{
	return areas_;
}

