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

#include <alibabacloud/drds/model/DescribeDrdsSqlAuditStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeDrdsSqlAuditStatusResult::DescribeDrdsSqlAuditStatusResult() :
	ServiceResult()
{}

DescribeDrdsSqlAuditStatusResult::DescribeDrdsSqlAuditStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDrdsSqlAuditStatusResult::~DescribeDrdsSqlAuditStatusResult()
{}

void DescribeDrdsSqlAuditStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["ExtraSlsLogStore"].isNull())
			dataObject.extraSlsLogStore = valueDataDataItem["ExtraSlsLogStore"].asString();
		if(!valueDataDataItem["DbName"].isNull())
			dataObject.dbName = valueDataDataItem["DbName"].asString();
		if(!valueDataDataItem["Detailed"].isNull())
			dataObject.detailed = valueDataDataItem["Detailed"].asString();
		if(!valueDataDataItem["ExtraWriteEnabled"].isNull())
			dataObject.extraWriteEnabled = valueDataDataItem["ExtraWriteEnabled"].asString() == "true";
		if(!valueDataDataItem["Enabled"].isNull())
			dataObject.enabled = valueDataDataItem["Enabled"].asString();
		if(!valueDataDataItem["ExtraAliUid"].isNull())
			dataObject.extraAliUid = std::stol(valueDataDataItem["ExtraAliUid"].asString());
		if(!valueDataDataItem["ExtraSlsProject"].isNull())
			dataObject.extraSlsProject = valueDataDataItem["ExtraSlsProject"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeDrdsSqlAuditStatusResult::DataItem> DescribeDrdsSqlAuditStatusResult::getData()const
{
	return data_;
}

bool DescribeDrdsSqlAuditStatusResult::getSuccess()const
{
	return success_;
}

