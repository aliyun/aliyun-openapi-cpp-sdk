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

#include <alibabacloud/openanalytics-open/model/CreateTableRequest.h>

using AlibabaCloud::Openanalytics_open::Model::CreateTableRequest;

CreateTableRequest::CreateTableRequest() :
	RpcServiceRequest("openanalytics-open", "2020-09-28", "CreateTable")
{
	setMethod(HttpRequest::Method::Post);
}

CreateTableRequest::~CreateTableRequest()
{}

std::string CreateTableRequest::getTableType()const
{
	return tableType_;
}

void CreateTableRequest::setTableType(const std::string& tableType)
{
	tableType_ = tableType;
	setParameter("TableType", tableType);
}

std::string CreateTableRequest::getViewOriginalText()const
{
	return viewOriginalText_;
}

void CreateTableRequest::setViewOriginalText(const std::string& viewOriginalText)
{
	viewOriginalText_ = viewOriginalText;
	setParameter("ViewOriginalText", viewOriginalText);
}

Struct CreateTableRequest::getStorageDescriptor()const
{
	return storageDescriptor_;
}

void CreateTableRequest::setStorageDescriptor(const Struct& storageDescriptor)
{
	storageDescriptor_ = storageDescriptor;
	setParameter("StorageDescriptor", std::to_string(storageDescriptor));
}

Array CreateTableRequest::getPartitionKeys()const
{
	return partitionKeys_;
}

void CreateTableRequest::setPartitionKeys(const Array& partitionKeys)
{
	partitionKeys_ = partitionKeys;
	setParameter("PartitionKeys", std::to_string(partitionKeys));
}

std::string CreateTableRequest::getDbName()const
{
	return dbName_;
}

void CreateTableRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setParameter("DbName", dbName);
}

std::string CreateTableRequest::getViewExpandedText()const
{
	return viewExpandedText_;
}

void CreateTableRequest::setViewExpandedText(const std::string& viewExpandedText)
{
	viewExpandedText_ = viewExpandedText;
	setParameter("ViewExpandedText", viewExpandedText);
}

std::string CreateTableRequest::getTableName()const
{
	return tableName_;
}

void CreateTableRequest::setTableName(const std::string& tableName)
{
	tableName_ = tableName;
	setParameter("TableName", tableName);
}

std::string CreateTableRequest::getParameters()const
{
	return parameters_;
}

void CreateTableRequest::setParameters(const std::string& parameters)
{
	parameters_ = parameters;
	setParameter("Parameters", parameters);
}

