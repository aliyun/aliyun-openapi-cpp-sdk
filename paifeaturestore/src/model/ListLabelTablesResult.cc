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

#include <alibabacloud/paifeaturestore/model/ListLabelTablesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PaiFeatureStore;
using namespace AlibabaCloud::PaiFeatureStore::Model;

ListLabelTablesResult::ListLabelTablesResult() :
	ServiceResult()
{}

ListLabelTablesResult::ListLabelTablesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLabelTablesResult::~ListLabelTablesResult()
{}

void ListLabelTablesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLabelTablesNode = value["LabelTables"]["LabelTable"];
	for (auto valueLabelTablesLabelTable : allLabelTablesNode)
	{
		LabelTable labelTablesObject;
		if(!valueLabelTablesLabelTable["LabelTableId"].isNull())
			labelTablesObject.labelTableId = valueLabelTablesLabelTable["LabelTableId"].asString();
		if(!valueLabelTablesLabelTable["ProjectId"].isNull())
			labelTablesObject.projectId = valueLabelTablesLabelTable["ProjectId"].asString();
		if(!valueLabelTablesLabelTable["ProjectName"].isNull())
			labelTablesObject.projectName = valueLabelTablesLabelTable["ProjectName"].asString();
		if(!valueLabelTablesLabelTable["DatasourceId"].isNull())
			labelTablesObject.datasourceId = valueLabelTablesLabelTable["DatasourceId"].asString();
		if(!valueLabelTablesLabelTable["Name"].isNull())
			labelTablesObject.name = valueLabelTablesLabelTable["Name"].asString();
		if(!valueLabelTablesLabelTable["DatasourceName"].isNull())
			labelTablesObject.datasourceName = valueLabelTablesLabelTable["DatasourceName"].asString();
		if(!valueLabelTablesLabelTable["Owner"].isNull())
			labelTablesObject.owner = valueLabelTablesLabelTable["Owner"].asString();
		if(!valueLabelTablesLabelTable["GmtCreateTime"].isNull())
			labelTablesObject.gmtCreateTime = valueLabelTablesLabelTable["GmtCreateTime"].asString();
		if(!valueLabelTablesLabelTable["GmtModifiedTime"].isNull())
			labelTablesObject.gmtModifiedTime = valueLabelTablesLabelTable["GmtModifiedTime"].asString();
		labelTables_.push_back(labelTablesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListLabelTablesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListLabelTablesResult::LabelTable> ListLabelTablesResult::getLabelTables()const
{
	return labelTables_;
}

