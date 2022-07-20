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

#include <alibabacloud/imm/model/UpdateDatasetResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

UpdateDatasetResult::UpdateDatasetResult() :
	ServiceResult()
{}

UpdateDatasetResult::UpdateDatasetResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateDatasetResult::~UpdateDatasetResult()
{}

void UpdateDatasetResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto datasetNode = value["Dataset"];
	if(!datasetNode["ProjectName"].isNull())
		dataset_.projectName = datasetNode["ProjectName"].asString();
	if(!datasetNode["DatasetName"].isNull())
		dataset_.datasetName = datasetNode["DatasetName"].asString();
	if(!datasetNode["TemplateId"].isNull())
		dataset_.templateId = datasetNode["TemplateId"].asString();
	if(!datasetNode["CreateTime"].isNull())
		dataset_.createTime = datasetNode["CreateTime"].asString();
	if(!datasetNode["UpdateTime"].isNull())
		dataset_.updateTime = datasetNode["UpdateTime"].asString();
	if(!datasetNode["Description"].isNull())
		dataset_.description = datasetNode["Description"].asString();
	if(!datasetNode["DatasetMaxBindCount"].isNull())
		dataset_.datasetMaxBindCount = std::stol(datasetNode["DatasetMaxBindCount"].asString());
	if(!datasetNode["DatasetMaxFileCount"].isNull())
		dataset_.datasetMaxFileCount = std::stol(datasetNode["DatasetMaxFileCount"].asString());
	if(!datasetNode["DatasetMaxEntityCount"].isNull())
		dataset_.datasetMaxEntityCount = std::stol(datasetNode["DatasetMaxEntityCount"].asString());
	if(!datasetNode["DatasetMaxRelationCount"].isNull())
		dataset_.datasetMaxRelationCount = std::stol(datasetNode["DatasetMaxRelationCount"].asString());
	if(!datasetNode["DatasetMaxTotalFileSize"].isNull())
		dataset_.datasetMaxTotalFileSize = std::stol(datasetNode["DatasetMaxTotalFileSize"].asString());
	if(!datasetNode["BindCount"].isNull())
		dataset_.bindCount = std::stol(datasetNode["BindCount"].asString());
	if(!datasetNode["FileCount"].isNull())
		dataset_.fileCount = std::stol(datasetNode["FileCount"].asString());
	if(!datasetNode["TotalFileSize"].isNull())
		dataset_.totalFileSize = std::stol(datasetNode["TotalFileSize"].asString());

}

UpdateDatasetResult::Dataset UpdateDatasetResult::getDataset()const
{
	return dataset_;
}

