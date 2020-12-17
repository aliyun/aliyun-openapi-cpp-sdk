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

#include <alibabacloud/dcdn/model/DescribeDcdnOfflineLogDeliveryFieldResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnOfflineLogDeliveryFieldResult::DescribeDcdnOfflineLogDeliveryFieldResult() :
	ServiceResult()
{}

DescribeDcdnOfflineLogDeliveryFieldResult::DescribeDcdnOfflineLogDeliveryFieldResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnOfflineLogDeliveryFieldResult::~DescribeDcdnOfflineLogDeliveryFieldResult()
{}

void DescribeDcdnOfflineLogDeliveryFieldResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFieldsNode = value["Fields"]["Field"];
	for (auto valueFieldsField : allFieldsNode)
	{
		Field fieldsObject;
		if(!valueFieldsField["FieldId"].isNull())
			fieldsObject.fieldId = valueFieldsField["FieldId"].asString();
		if(!valueFieldsField["FieldName"].isNull())
			fieldsObject.fieldName = valueFieldsField["FieldName"].asString();
		if(!valueFieldsField["Description"].isNull())
			fieldsObject.description = valueFieldsField["Description"].asString();
		fields_.push_back(fieldsObject);
	}

}

std::vector<DescribeDcdnOfflineLogDeliveryFieldResult::Field> DescribeDcdnOfflineLogDeliveryFieldResult::getFields()const
{
	return fields_;
}

