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

#include <alibabacloud/openanalytics-open/model/GetPartitionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Openanalytics_open;
using namespace AlibabaCloud::Openanalytics_open::Model;

GetPartitionResult::GetPartitionResult() :
	ServiceResult()
{}

GetPartitionResult::GetPartitionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPartitionResult::~GetPartitionResult()
{}

void GetPartitionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto partitionModelNode = value["PartitionModel"];
	if(!partitionModelNode["TableName"].isNull())
		partitionModel_.tableName = partitionModelNode["TableName"].asString();
	if(!partitionModelNode["Parameters"].isNull())
		partitionModel_.parameters = partitionModelNode["Parameters"].asString();
	if(!partitionModelNode["CreateTime"].isNull())
		partitionModel_.createTime = std::stol(partitionModelNode["CreateTime"].asString());
	if(!partitionModelNode["DbName"].isNull())
		partitionModel_.dbName = partitionModelNode["DbName"].asString();
	auto storageDescriptorModelNode = partitionModelNode["StorageDescriptorModel"];
	if(!storageDescriptorModelNode["Parameters"].isNull())
		partitionModel_.storageDescriptorModel.parameters = storageDescriptorModelNode["Parameters"].asString();
	if(!storageDescriptorModelNode["InputFormat"].isNull())
		partitionModel_.storageDescriptorModel.inputFormat = storageDescriptorModelNode["InputFormat"].asString();
	if(!storageDescriptorModelNode["OutputFormat"].isNull())
		partitionModel_.storageDescriptorModel.outputFormat = storageDescriptorModelNode["OutputFormat"].asString();
	if(!storageDescriptorModelNode["Location"].isNull())
		partitionModel_.storageDescriptorModel.location = storageDescriptorModelNode["Location"].asString();
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
		partitionModel_.storageDescriptorModel.cols.push_back(fieldSchemaModelObject);
	}
	auto serDeInfoModelNode = storageDescriptorModelNode["SerDeInfoModel"];
	if(!serDeInfoModelNode["SerializationLib"].isNull())
		partitionModel_.storageDescriptorModel.serDeInfoModel.serializationLib = serDeInfoModelNode["SerializationLib"].asString();
	if(!serDeInfoModelNode["Parameters"].isNull())
		partitionModel_.storageDescriptorModel.serDeInfoModel.parameters = serDeInfoModelNode["Parameters"].asString();
	if(!serDeInfoModelNode["Name"].isNull())
		partitionModel_.storageDescriptorModel.serDeInfoModel.name = serDeInfoModelNode["Name"].asString();
		auto allValues = partitionModelNode["Values"]["Values"];
		for (auto value : allValues)
			partitionModel_.values.push_back(value.asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetPartitionResult::getMessage()const
{
	return message_;
}

GetPartitionResult::PartitionModel GetPartitionResult::getPartitionModel()const
{
	return partitionModel_;
}

std::string GetPartitionResult::getCode()const
{
	return code_;
}

bool GetPartitionResult::getSuccess()const
{
	return success_;
}

