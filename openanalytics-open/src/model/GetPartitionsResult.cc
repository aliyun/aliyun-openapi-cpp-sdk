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

#include <alibabacloud/openanalytics-open/model/GetPartitionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Openanalytics_open;
using namespace AlibabaCloud::Openanalytics_open::Model;

GetPartitionsResult::GetPartitionsResult() :
	ServiceResult()
{}

GetPartitionsResult::GetPartitionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPartitionsResult::~GetPartitionsResult()
{}

void GetPartitionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPartitionsNode = value["Partitions"]["PartitionModel"];
	for (auto valuePartitionsPartitionModel : allPartitionsNode)
	{
		PartitionModel partitionsObject;
		if(!valuePartitionsPartitionModel["TableName"].isNull())
			partitionsObject.tableName = valuePartitionsPartitionModel["TableName"].asString();
		if(!valuePartitionsPartitionModel["Parameters"].isNull())
			partitionsObject.parameters = valuePartitionsPartitionModel["Parameters"].asString();
		if(!valuePartitionsPartitionModel["CreateTime"].isNull())
			partitionsObject.createTime = std::stol(valuePartitionsPartitionModel["CreateTime"].asString());
		if(!valuePartitionsPartitionModel["DbName"].isNull())
			partitionsObject.dbName = valuePartitionsPartitionModel["DbName"].asString();
		auto storageDescriptorModelNode = value["StorageDescriptorModel"];
		if(!storageDescriptorModelNode["Parameters"].isNull())
			partitionsObject.storageDescriptorModel.parameters = storageDescriptorModelNode["Parameters"].asString();
		if(!storageDescriptorModelNode["InputFormat"].isNull())
			partitionsObject.storageDescriptorModel.inputFormat = storageDescriptorModelNode["InputFormat"].asString();
		if(!storageDescriptorModelNode["OutputFormat"].isNull())
			partitionsObject.storageDescriptorModel.outputFormat = storageDescriptorModelNode["OutputFormat"].asString();
		if(!storageDescriptorModelNode["Location"].isNull())
			partitionsObject.storageDescriptorModel.location = storageDescriptorModelNode["Location"].asString();
		auto allColsNode = storageDescriptorModelNode["Cols"]["FieldSchemaModel"];
		for (auto storageDescriptorModelNodeColsFieldSchemaModel : allColsNode)
		{
			PartitionModel::StorageDescriptorModel::FieldSchemaModel fieldSchemaModelObject;
			if(!storageDescriptorModelNodeColsFieldSchemaModel["Comment"].isNull())
				fieldSchemaModelObject.comment = storageDescriptorModelNodeColsFieldSchemaModel["Comment"].asString();
			if(!storageDescriptorModelNodeColsFieldSchemaModel["Type"].isNull())
				fieldSchemaModelObject.type = storageDescriptorModelNodeColsFieldSchemaModel["Type"].asString();
			if(!storageDescriptorModelNodeColsFieldSchemaModel["Name"].isNull())
				fieldSchemaModelObject.name = storageDescriptorModelNodeColsFieldSchemaModel["Name"].asString();
			partitionsObject.storageDescriptorModel.cols.push_back(fieldSchemaModelObject);
		}
		auto serDeInfoModelNode = storageDescriptorModelNode["SerDeInfoModel"];
		if(!serDeInfoModelNode["SerializationLib"].isNull())
			partitionsObject.storageDescriptorModel.serDeInfoModel.serializationLib = serDeInfoModelNode["SerializationLib"].asString();
		if(!serDeInfoModelNode["Parameters"].isNull())
			partitionsObject.storageDescriptorModel.serDeInfoModel.parameters = serDeInfoModelNode["Parameters"].asString();
		if(!serDeInfoModelNode["Name"].isNull())
			partitionsObject.storageDescriptorModel.serDeInfoModel.name = serDeInfoModelNode["Name"].asString();
		auto allValues = value["Values"]["Values"];
		for (auto value : allValues)
			partitionsObject.values.push_back(value.asString());
		partitions_.push_back(partitionsObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<GetPartitionsResult::PartitionModel> GetPartitionsResult::getPartitions()const
{
	return partitions_;
}

std::string GetPartitionsResult::getMessage()const
{
	return message_;
}

std::string GetPartitionsResult::getCode()const
{
	return code_;
}

bool GetPartitionsResult::getSuccess()const
{
	return success_;
}

