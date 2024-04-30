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

#include <alibabacloud/dcdn/model/DescribeDcdnUserRealTimeDeliveryFieldResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnUserRealTimeDeliveryFieldResult::DescribeDcdnUserRealTimeDeliveryFieldResult() :
	ServiceResult()
{}

DescribeDcdnUserRealTimeDeliveryFieldResult::DescribeDcdnUserRealTimeDeliveryFieldResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnUserRealTimeDeliveryFieldResult::~DescribeDcdnUserRealTimeDeliveryFieldResult()
{}

void DescribeDcdnUserRealTimeDeliveryFieldResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allContentNode = value["Content"]["Fields"];
	for (auto valueContentFields : allContentNode)
	{
		Fields contentObject;
		if(!valueContentFields["Description"].isNull())
			contentObject.description = valueContentFields["Description"].asString();
		if(!valueContentFields["Selected"].isNull())
			contentObject.selected = valueContentFields["Selected"].asString() == "true";
		if(!valueContentFields["FieldName"].isNull())
			contentObject.fieldName = valueContentFields["FieldName"].asString();
		content_.push_back(contentObject);
	}

}

std::vector<DescribeDcdnUserRealTimeDeliveryFieldResult::Fields> DescribeDcdnUserRealTimeDeliveryFieldResult::getContent()const
{
	return content_;
}

