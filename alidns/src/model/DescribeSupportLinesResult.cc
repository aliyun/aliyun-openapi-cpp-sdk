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

#include <alibabacloud/alidns/model/DescribeSupportLinesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeSupportLinesResult::DescribeSupportLinesResult() :
	ServiceResult()
{}

DescribeSupportLinesResult::DescribeSupportLinesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSupportLinesResult::~DescribeSupportLinesResult()
{}

void DescribeSupportLinesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRecordLinesNode = value["RecordLines"]["RecordLine"];
	for (auto valueRecordLinesRecordLine : allRecordLinesNode)
	{
		RecordLine recordLinesObject;
		if(!valueRecordLinesRecordLine["FatherCode"].isNull())
			recordLinesObject.fatherCode = valueRecordLinesRecordLine["FatherCode"].asString();
		if(!valueRecordLinesRecordLine["LineDisplayName"].isNull())
			recordLinesObject.lineDisplayName = valueRecordLinesRecordLine["LineDisplayName"].asString();
		if(!valueRecordLinesRecordLine["LineCode"].isNull())
			recordLinesObject.lineCode = valueRecordLinesRecordLine["LineCode"].asString();
		if(!valueRecordLinesRecordLine["LineName"].isNull())
			recordLinesObject.lineName = valueRecordLinesRecordLine["LineName"].asString();
		recordLines_.push_back(recordLinesObject);
	}

}

std::vector<DescribeSupportLinesResult::RecordLine> DescribeSupportLinesResult::getRecordLines()const
{
	return recordLines_;
}

