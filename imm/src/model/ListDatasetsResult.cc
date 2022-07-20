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

#include <alibabacloud/imm/model/ListDatasetsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

ListDatasetsResult::ListDatasetsResult() :
	ServiceResult()
{}

ListDatasetsResult::ListDatasetsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDatasetsResult::~ListDatasetsResult()
{}

void ListDatasetsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDatasetsNode = value["Datasets"]["DatasetsItem"];
	for (auto valueDatasetsDatasetsItem : allDatasetsNode)
	{
		DatasetsItem datasetsObject;
		if(!valueDatasetsDatasetsItem["ProjectName"].isNull())
			datasetsObject.projectName = valueDatasetsDatasetsItem["ProjectName"].asString();
		if(!valueDatasetsDatasetsItem["DatasetName"].isNull())
			datasetsObject.datasetName = valueDatasetsDatasetsItem["DatasetName"].asString();
		if(!valueDatasetsDatasetsItem["TemplateId"].isNull())
			datasetsObject.templateId = valueDatasetsDatasetsItem["TemplateId"].asString();
		if(!valueDatasetsDatasetsItem["CreateTime"].isNull())
			datasetsObject.createTime = valueDatasetsDatasetsItem["CreateTime"].asString();
		if(!valueDatasetsDatasetsItem["UpdateTime"].isNull())
			datasetsObject.updateTime = valueDatasetsDatasetsItem["UpdateTime"].asString();
		if(!valueDatasetsDatasetsItem["Description"].isNull())
			datasetsObject.description = valueDatasetsDatasetsItem["Description"].asString();
		if(!valueDatasetsDatasetsItem["DatasetMaxBindCount"].isNull())
			datasetsObject.datasetMaxBindCount = std::stol(valueDatasetsDatasetsItem["DatasetMaxBindCount"].asString());
		if(!valueDatasetsDatasetsItem["DatasetMaxFileCount"].isNull())
			datasetsObject.datasetMaxFileCount = std::stol(valueDatasetsDatasetsItem["DatasetMaxFileCount"].asString());
		if(!valueDatasetsDatasetsItem["DatasetMaxEntityCount"].isNull())
			datasetsObject.datasetMaxEntityCount = std::stol(valueDatasetsDatasetsItem["DatasetMaxEntityCount"].asString());
		if(!valueDatasetsDatasetsItem["DatasetMaxRelationCount"].isNull())
			datasetsObject.datasetMaxRelationCount = std::stol(valueDatasetsDatasetsItem["DatasetMaxRelationCount"].asString());
		if(!valueDatasetsDatasetsItem["DatasetMaxTotalFileSize"].isNull())
			datasetsObject.datasetMaxTotalFileSize = std::stol(valueDatasetsDatasetsItem["DatasetMaxTotalFileSize"].asString());
		if(!valueDatasetsDatasetsItem["BindCount"].isNull())
			datasetsObject.bindCount = std::stol(valueDatasetsDatasetsItem["BindCount"].asString());
		if(!valueDatasetsDatasetsItem["FileCount"].isNull())
			datasetsObject.fileCount = std::stol(valueDatasetsDatasetsItem["FileCount"].asString());
		if(!valueDatasetsDatasetsItem["TotalFileSize"].isNull())
			datasetsObject.totalFileSize = std::stol(valueDatasetsDatasetsItem["TotalFileSize"].asString());
		datasets_.push_back(datasetsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::vector<ListDatasetsResult::DatasetsItem> ListDatasetsResult::getDatasets()const
{
	return datasets_;
}

std::string ListDatasetsResult::getNextToken()const
{
	return nextToken_;
}

