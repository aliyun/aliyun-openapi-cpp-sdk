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

#include <alibabacloud/dts/model/DescribeMigrationJobDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescribeMigrationJobDetailResult::DescribeMigrationJobDetailResult() :
	ServiceResult()
{}

DescribeMigrationJobDetailResult::DescribeMigrationJobDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMigrationJobDetailResult::~DescribeMigrationJobDetailResult()
{}

void DescribeMigrationJobDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStructureInitializationDetailListNode = value["StructureInitializationDetailList"]["StructureInitializationDetail"];
	for (auto valueStructureInitializationDetailListStructureInitializationDetail : allStructureInitializationDetailListNode)
	{
		StructureInitializationDetail structureInitializationDetailListObject;
		if(!valueStructureInitializationDetailListStructureInitializationDetail["SourceOwnerDBName"].isNull())
			structureInitializationDetailListObject.sourceOwnerDBName = valueStructureInitializationDetailListStructureInitializationDetail["SourceOwnerDBName"].asString();
		if(!valueStructureInitializationDetailListStructureInitializationDetail["Status"].isNull())
			structureInitializationDetailListObject.status = valueStructureInitializationDetailListStructureInitializationDetail["Status"].asString();
		if(!valueStructureInitializationDetailListStructureInitializationDetail["ObjectDefinition"].isNull())
			structureInitializationDetailListObject.objectDefinition = valueStructureInitializationDetailListStructureInitializationDetail["ObjectDefinition"].asString();
		if(!valueStructureInitializationDetailListStructureInitializationDetail["ObjectType"].isNull())
			structureInitializationDetailListObject.objectType = valueStructureInitializationDetailListStructureInitializationDetail["ObjectType"].asString();
		if(!valueStructureInitializationDetailListStructureInitializationDetail["ErrorMessage"].isNull())
			structureInitializationDetailListObject.errorMessage = valueStructureInitializationDetailListStructureInitializationDetail["ErrorMessage"].asString();
		if(!valueStructureInitializationDetailListStructureInitializationDetail["DestinationOwnerDBName"].isNull())
			structureInitializationDetailListObject.destinationOwnerDBName = valueStructureInitializationDetailListStructureInitializationDetail["DestinationOwnerDBName"].asString();
		if(!valueStructureInitializationDetailListStructureInitializationDetail["ObjectName"].isNull())
			structureInitializationDetailListObject.objectName = valueStructureInitializationDetailListStructureInitializationDetail["ObjectName"].asString();
		auto allConstraintListNode = valueStructureInitializationDetailListStructureInitializationDetail["ConstraintList"]["StructureInitializationDetail"];
		for (auto valueStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail : allConstraintListNode)
		{
			StructureInitializationDetail::StructureInitializationDetail1 constraintListObject;
			if(!valueStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail["SourceOwnerDBName"].isNull())
				constraintListObject.sourceOwnerDBName = valueStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail["SourceOwnerDBName"].asString();
			if(!valueStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail["Status"].isNull())
				constraintListObject.status = valueStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail["Status"].asString();
			if(!valueStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail["ObjectDefinition"].isNull())
				constraintListObject.objectDefinition = valueStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail["ObjectDefinition"].asString();
			if(!valueStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail["ObjectType"].isNull())
				constraintListObject.objectType = valueStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail["ObjectType"].asString();
			if(!valueStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail["ErrorMessage"].isNull())
				constraintListObject.errorMessage = valueStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail["ErrorMessage"].asString();
			if(!valueStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail["DestinationOwnerDBName"].isNull())
				constraintListObject.destinationOwnerDBName = valueStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail["DestinationOwnerDBName"].asString();
			if(!valueStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail["ObjectName"].isNull())
				constraintListObject.objectName = valueStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail["ObjectName"].asString();
			structureInitializationDetailListObject.constraintList.push_back(constraintListObject);
		}
		structureInitializationDetailList_.push_back(structureInitializationDetailListObject);
	}
	auto allDataInitializationDetailListNode = value["DataInitializationDetailList"]["DataInitializationDetail"];
	for (auto valueDataInitializationDetailListDataInitializationDetail : allDataInitializationDetailListNode)
	{
		DataInitializationDetail dataInitializationDetailListObject;
		if(!valueDataInitializationDetailListDataInitializationDetail["SourceOwnerDBName"].isNull())
			dataInitializationDetailListObject.sourceOwnerDBName = valueDataInitializationDetailListDataInitializationDetail["SourceOwnerDBName"].asString();
		if(!valueDataInitializationDetailListDataInitializationDetail["Status"].isNull())
			dataInitializationDetailListObject.status = valueDataInitializationDetailListDataInitializationDetail["Status"].asString();
		if(!valueDataInitializationDetailListDataInitializationDetail["TableName"].isNull())
			dataInitializationDetailListObject.tableName = valueDataInitializationDetailListDataInitializationDetail["TableName"].asString();
		if(!valueDataInitializationDetailListDataInitializationDetail["FinishRowNum"].isNull())
			dataInitializationDetailListObject.finishRowNum = valueDataInitializationDetailListDataInitializationDetail["FinishRowNum"].asString();
		if(!valueDataInitializationDetailListDataInitializationDetail["ErrorMessage"].isNull())
			dataInitializationDetailListObject.errorMessage = valueDataInitializationDetailListDataInitializationDetail["ErrorMessage"].asString();
		if(!valueDataInitializationDetailListDataInitializationDetail["MigrationTime"].isNull())
			dataInitializationDetailListObject.migrationTime = valueDataInitializationDetailListDataInitializationDetail["MigrationTime"].asString();
		if(!valueDataInitializationDetailListDataInitializationDetail["DestinationOwnerDBName"].isNull())
			dataInitializationDetailListObject.destinationOwnerDBName = valueDataInitializationDetailListDataInitializationDetail["DestinationOwnerDBName"].asString();
		if(!valueDataInitializationDetailListDataInitializationDetail["TotalRowNum"].isNull())
			dataInitializationDetailListObject.totalRowNum = valueDataInitializationDetailListDataInitializationDetail["TotalRowNum"].asString();
		dataInitializationDetailList_.push_back(dataInitializationDetailListObject);
	}
	auto allDataSynchronizationDetailListNode = value["DataSynchronizationDetailList"]["DataSynchronizationDetail"];
	for (auto valueDataSynchronizationDetailListDataSynchronizationDetail : allDataSynchronizationDetailListNode)
	{
		DataSynchronizationDetail dataSynchronizationDetailListObject;
		if(!valueDataSynchronizationDetailListDataSynchronizationDetail["Status"].isNull())
			dataSynchronizationDetailListObject.status = valueDataSynchronizationDetailListDataSynchronizationDetail["Status"].asString();
		if(!valueDataSynchronizationDetailListDataSynchronizationDetail["SourceOwnerDBName"].isNull())
			dataSynchronizationDetailListObject.sourceOwnerDBName = valueDataSynchronizationDetailListDataSynchronizationDetail["SourceOwnerDBName"].asString();
		if(!valueDataSynchronizationDetailListDataSynchronizationDetail["TableName"].isNull())
			dataSynchronizationDetailListObject.tableName = valueDataSynchronizationDetailListDataSynchronizationDetail["TableName"].asString();
		if(!valueDataSynchronizationDetailListDataSynchronizationDetail["ErrorMessage"].isNull())
			dataSynchronizationDetailListObject.errorMessage = valueDataSynchronizationDetailListDataSynchronizationDetail["ErrorMessage"].asString();
		if(!valueDataSynchronizationDetailListDataSynchronizationDetail["DestinationOwnerDBName"].isNull())
			dataSynchronizationDetailListObject.destinationOwnerDBName = valueDataSynchronizationDetailListDataSynchronizationDetail["DestinationOwnerDBName"].asString();
		dataSynchronizationDetailList_.push_back(dataSynchronizationDetailListObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stol(value["TotalRecordCount"].asString());

}

long DescribeMigrationJobDetailResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

std::vector<DescribeMigrationJobDetailResult::DataSynchronizationDetail> DescribeMigrationJobDetailResult::getDataSynchronizationDetailList()const
{
	return dataSynchronizationDetailList_;
}

int DescribeMigrationJobDetailResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeMigrationJobDetailResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeMigrationJobDetailResult::DataInitializationDetail> DescribeMigrationJobDetailResult::getDataInitializationDetailList()const
{
	return dataInitializationDetailList_;
}

std::vector<DescribeMigrationJobDetailResult::StructureInitializationDetail> DescribeMigrationJobDetailResult::getStructureInitializationDetailList()const
{
	return structureInitializationDetailList_;
}

