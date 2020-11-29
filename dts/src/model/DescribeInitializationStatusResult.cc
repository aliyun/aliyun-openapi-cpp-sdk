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

#include <alibabacloud/dts/model/DescribeInitializationStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescribeInitializationStatusResult::DescribeInitializationStatusResult() :
	ServiceResult()
{}

DescribeInitializationStatusResult::DescribeInitializationStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInitializationStatusResult::~DescribeInitializationStatusResult()
{}

void DescribeInitializationStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataInitializationDetailsNode = value["DataInitializationDetails"]["DataInitializationDetail"];
	for (auto valueDataInitializationDetailsDataInitializationDetail : allDataInitializationDetailsNode)
	{
		DataInitializationDetail dataInitializationDetailsObject;
		if(!valueDataInitializationDetailsDataInitializationDetail["DestinationOwnerDBName"].isNull())
			dataInitializationDetailsObject.destinationOwnerDBName = valueDataInitializationDetailsDataInitializationDetail["DestinationOwnerDBName"].asString();
		if(!valueDataInitializationDetailsDataInitializationDetail["ErrorMessage"].isNull())
			dataInitializationDetailsObject.errorMessage = valueDataInitializationDetailsDataInitializationDetail["ErrorMessage"].asString();
		if(!valueDataInitializationDetailsDataInitializationDetail["FinishRowNum"].isNull())
			dataInitializationDetailsObject.finishRowNum = valueDataInitializationDetailsDataInitializationDetail["FinishRowNum"].asString();
		if(!valueDataInitializationDetailsDataInitializationDetail["SourceOwnerDBName"].isNull())
			dataInitializationDetailsObject.sourceOwnerDBName = valueDataInitializationDetailsDataInitializationDetail["SourceOwnerDBName"].asString();
		if(!valueDataInitializationDetailsDataInitializationDetail["Status"].isNull())
			dataInitializationDetailsObject.status = valueDataInitializationDetailsDataInitializationDetail["Status"].asString();
		if(!valueDataInitializationDetailsDataInitializationDetail["TableName"].isNull())
			dataInitializationDetailsObject.tableName = valueDataInitializationDetailsDataInitializationDetail["TableName"].asString();
		if(!valueDataInitializationDetailsDataInitializationDetail["TotalRowNum"].isNull())
			dataInitializationDetailsObject.totalRowNum = valueDataInitializationDetailsDataInitializationDetail["TotalRowNum"].asString();
		if(!valueDataInitializationDetailsDataInitializationDetail["UsedTime"].isNull())
			dataInitializationDetailsObject.usedTime = valueDataInitializationDetailsDataInitializationDetail["UsedTime"].asString();
		dataInitializationDetails_.push_back(dataInitializationDetailsObject);
	}
	auto allDataSynchronizationDetailsNode = value["DataSynchronizationDetails"]["DataSynchronizationDetail"];
	for (auto valueDataSynchronizationDetailsDataSynchronizationDetail : allDataSynchronizationDetailsNode)
	{
		DataSynchronizationDetail dataSynchronizationDetailsObject;
		if(!valueDataSynchronizationDetailsDataSynchronizationDetail["DestinationOwnerDBName"].isNull())
			dataSynchronizationDetailsObject.destinationOwnerDBName = valueDataSynchronizationDetailsDataSynchronizationDetail["DestinationOwnerDBName"].asString();
		if(!valueDataSynchronizationDetailsDataSynchronizationDetail["ErrorMessage"].isNull())
			dataSynchronizationDetailsObject.errorMessage = valueDataSynchronizationDetailsDataSynchronizationDetail["ErrorMessage"].asString();
		if(!valueDataSynchronizationDetailsDataSynchronizationDetail["SourceOwnerDBName"].isNull())
			dataSynchronizationDetailsObject.sourceOwnerDBName = valueDataSynchronizationDetailsDataSynchronizationDetail["SourceOwnerDBName"].asString();
		if(!valueDataSynchronizationDetailsDataSynchronizationDetail["Status"].isNull())
			dataSynchronizationDetailsObject.status = valueDataSynchronizationDetailsDataSynchronizationDetail["Status"].asString();
		if(!valueDataSynchronizationDetailsDataSynchronizationDetail["TableName"].isNull())
			dataSynchronizationDetailsObject.tableName = valueDataSynchronizationDetailsDataSynchronizationDetail["TableName"].asString();
		dataSynchronizationDetails_.push_back(dataSynchronizationDetailsObject);
	}
	auto allStructureInitializationDetailsNode = value["StructureInitializationDetails"]["StructureInitializationDetail"];
	for (auto valueStructureInitializationDetailsStructureInitializationDetail : allStructureInitializationDetailsNode)
	{
		StructureInitializationDetail structureInitializationDetailsObject;
		if(!valueStructureInitializationDetailsStructureInitializationDetail["DestinationOwnerDBName"].isNull())
			structureInitializationDetailsObject.destinationOwnerDBName = valueStructureInitializationDetailsStructureInitializationDetail["DestinationOwnerDBName"].asString();
		if(!valueStructureInitializationDetailsStructureInitializationDetail["ErrorMessage"].isNull())
			structureInitializationDetailsObject.errorMessage = valueStructureInitializationDetailsStructureInitializationDetail["ErrorMessage"].asString();
		if(!valueStructureInitializationDetailsStructureInitializationDetail["ObjectDefinition"].isNull())
			structureInitializationDetailsObject.objectDefinition = valueStructureInitializationDetailsStructureInitializationDetail["ObjectDefinition"].asString();
		if(!valueStructureInitializationDetailsStructureInitializationDetail["ObjectName"].isNull())
			structureInitializationDetailsObject.objectName = valueStructureInitializationDetailsStructureInitializationDetail["ObjectName"].asString();
		if(!valueStructureInitializationDetailsStructureInitializationDetail["ObjectType"].isNull())
			structureInitializationDetailsObject.objectType = valueStructureInitializationDetailsStructureInitializationDetail["ObjectType"].asString();
		if(!valueStructureInitializationDetailsStructureInitializationDetail["SourceOwnerDBName"].isNull())
			structureInitializationDetailsObject.sourceOwnerDBName = valueStructureInitializationDetailsStructureInitializationDetail["SourceOwnerDBName"].asString();
		if(!valueStructureInitializationDetailsStructureInitializationDetail["Status"].isNull())
			structureInitializationDetailsObject.status = valueStructureInitializationDetailsStructureInitializationDetail["Status"].asString();
		auto allConstraintsNode = valueStructureInitializationDetailsStructureInitializationDetail["Constraints"]["StructureInitializationDetail"];
		for (auto valueStructureInitializationDetailsStructureInitializationDetailConstraintsStructureInitializationDetail : allConstraintsNode)
		{
			StructureInitializationDetail::StructureInitializationDetail1 constraintsObject;
			if(!valueStructureInitializationDetailsStructureInitializationDetailConstraintsStructureInitializationDetail["DestinationOwnerDBName"].isNull())
				constraintsObject.destinationOwnerDBName = valueStructureInitializationDetailsStructureInitializationDetailConstraintsStructureInitializationDetail["DestinationOwnerDBName"].asString();
			if(!valueStructureInitializationDetailsStructureInitializationDetailConstraintsStructureInitializationDetail["ErrorMessage"].isNull())
				constraintsObject.errorMessage = valueStructureInitializationDetailsStructureInitializationDetailConstraintsStructureInitializationDetail["ErrorMessage"].asString();
			if(!valueStructureInitializationDetailsStructureInitializationDetailConstraintsStructureInitializationDetail["ObjectDefinition"].isNull())
				constraintsObject.objectDefinition = valueStructureInitializationDetailsStructureInitializationDetailConstraintsStructureInitializationDetail["ObjectDefinition"].asString();
			if(!valueStructureInitializationDetailsStructureInitializationDetailConstraintsStructureInitializationDetail["ObjectName"].isNull())
				constraintsObject.objectName = valueStructureInitializationDetailsStructureInitializationDetailConstraintsStructureInitializationDetail["ObjectName"].asString();
			if(!valueStructureInitializationDetailsStructureInitializationDetailConstraintsStructureInitializationDetail["ObjectType"].isNull())
				constraintsObject.objectType = valueStructureInitializationDetailsStructureInitializationDetailConstraintsStructureInitializationDetail["ObjectType"].asString();
			if(!valueStructureInitializationDetailsStructureInitializationDetailConstraintsStructureInitializationDetail["SourceOwnerDBName"].isNull())
				constraintsObject.sourceOwnerDBName = valueStructureInitializationDetailsStructureInitializationDetailConstraintsStructureInitializationDetail["SourceOwnerDBName"].asString();
			if(!valueStructureInitializationDetailsStructureInitializationDetailConstraintsStructureInitializationDetail["Status"].isNull())
				constraintsObject.status = valueStructureInitializationDetailsStructureInitializationDetailConstraintsStructureInitializationDetail["Status"].asString();
			structureInitializationDetailsObject.constraints.push_back(constraintsObject);
		}
		structureInitializationDetails_.push_back(structureInitializationDetailsObject);
	}
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();

}

std::vector<DescribeInitializationStatusResult::StructureInitializationDetail> DescribeInitializationStatusResult::getStructureInitializationDetails()const
{
	return structureInitializationDetails_;
}

std::vector<DescribeInitializationStatusResult::DataInitializationDetail> DescribeInitializationStatusResult::getDataInitializationDetails()const
{
	return dataInitializationDetails_;
}

std::string DescribeInitializationStatusResult::getErrMessage()const
{
	return errMessage_;
}

std::string DescribeInitializationStatusResult::getSuccess()const
{
	return success_;
}

std::vector<DescribeInitializationStatusResult::DataSynchronizationDetail> DescribeInitializationStatusResult::getDataSynchronizationDetails()const
{
	return dataSynchronizationDetails_;
}

std::string DescribeInitializationStatusResult::getErrCode()const
{
	return errCode_;
}

