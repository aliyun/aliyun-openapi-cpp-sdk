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

#include <alibabacloud/dts/model/DescribeSynchronizationObjectModifyStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescribeSynchronizationObjectModifyStatusResult::DescribeSynchronizationObjectModifyStatusResult() :
	ServiceResult()
{}

DescribeSynchronizationObjectModifyStatusResult::DescribeSynchronizationObjectModifyStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSynchronizationObjectModifyStatusResult::~DescribeSynchronizationObjectModifyStatusResult()
{}

void DescribeSynchronizationObjectModifyStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataInitializationStatusNode = value["DataInitializationStatus"];
	if(!dataInitializationStatusNode["Status"].isNull())
		dataInitializationStatus_.status = dataInitializationStatusNode["Status"].asString();
	if(!dataInitializationStatusNode["Percent"].isNull())
		dataInitializationStatus_.percent = dataInitializationStatusNode["Percent"].asString();
	if(!dataInitializationStatusNode["ErrorMessage"].isNull())
		dataInitializationStatus_.errorMessage = dataInitializationStatusNode["ErrorMessage"].asString();
	if(!dataInitializationStatusNode["Progress"].isNull())
		dataInitializationStatus_.progress = dataInitializationStatusNode["Progress"].asString();
	auto dataSynchronizationStatusNode = value["DataSynchronizationStatus"];
	if(!dataSynchronizationStatusNode["Status"].isNull())
		dataSynchronizationStatus_.status = dataSynchronizationStatusNode["Status"].asString();
	if(!dataSynchronizationStatusNode["Delay"].isNull())
		dataSynchronizationStatus_.delay = dataSynchronizationStatusNode["Delay"].asString();
	if(!dataSynchronizationStatusNode["Percent"].isNull())
		dataSynchronizationStatus_.percent = dataSynchronizationStatusNode["Percent"].asString();
	if(!dataSynchronizationStatusNode["ErrorMessage"].isNull())
		dataSynchronizationStatus_.errorMessage = dataSynchronizationStatusNode["ErrorMessage"].asString();
	auto precheckStatusNode = value["PrecheckStatus"];
	if(!precheckStatusNode["Status"].isNull())
		precheckStatus_.status = precheckStatusNode["Status"].asString();
	if(!precheckStatusNode["Percent"].isNull())
		precheckStatus_.percent = precheckStatusNode["Percent"].asString();
	auto allDetailNode = precheckStatusNode["Detail"]["CheckItem"];
	for (auto precheckStatusNodeDetailCheckItem : allDetailNode)
	{
		PrecheckStatus::CheckItem checkItemObject;
		if(!precheckStatusNodeDetailCheckItem["CheckStatus"].isNull())
			checkItemObject.checkStatus = precheckStatusNodeDetailCheckItem["CheckStatus"].asString();
		if(!precheckStatusNodeDetailCheckItem["ErrorMessage"].isNull())
			checkItemObject.errorMessage = precheckStatusNodeDetailCheckItem["ErrorMessage"].asString();
		if(!precheckStatusNodeDetailCheckItem["ItemName"].isNull())
			checkItemObject.itemName = precheckStatusNodeDetailCheckItem["ItemName"].asString();
		if(!precheckStatusNodeDetailCheckItem["RepairMethod"].isNull())
			checkItemObject.repairMethod = precheckStatusNodeDetailCheckItem["RepairMethod"].asString();
		precheckStatus_.detail.push_back(checkItemObject);
	}
	auto structureInitializationStatusNode = value["StructureInitializationStatus"];
	if(!structureInitializationStatusNode["Status"].isNull())
		structureInitializationStatus_.status = structureInitializationStatusNode["Status"].asString();
	if(!structureInitializationStatusNode["Percent"].isNull())
		structureInitializationStatus_.percent = structureInitializationStatusNode["Percent"].asString();
	if(!structureInitializationStatusNode["ErrorMessage"].isNull())
		structureInitializationStatus_.errorMessage = structureInitializationStatusNode["ErrorMessage"].asString();
	if(!structureInitializationStatusNode["Progress"].isNull())
		structureInitializationStatus_.progress = structureInitializationStatusNode["Progress"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();

}

std::string DescribeSynchronizationObjectModifyStatusResult::getStatus()const
{
	return status_;
}

DescribeSynchronizationObjectModifyStatusResult::PrecheckStatus DescribeSynchronizationObjectModifyStatusResult::getPrecheckStatus()const
{
	return precheckStatus_;
}

DescribeSynchronizationObjectModifyStatusResult::DataInitializationStatus DescribeSynchronizationObjectModifyStatusResult::getDataInitializationStatus()const
{
	return dataInitializationStatus_;
}

std::string DescribeSynchronizationObjectModifyStatusResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DescribeSynchronizationObjectModifyStatusResult::getErrMessage()const
{
	return errMessage_;
}

std::string DescribeSynchronizationObjectModifyStatusResult::getSuccess()const
{
	return success_;
}

DescribeSynchronizationObjectModifyStatusResult::DataSynchronizationStatus DescribeSynchronizationObjectModifyStatusResult::getDataSynchronizationStatus()const
{
	return dataSynchronizationStatus_;
}

DescribeSynchronizationObjectModifyStatusResult::StructureInitializationStatus DescribeSynchronizationObjectModifyStatusResult::getStructureInitializationStatus()const
{
	return structureInitializationStatus_;
}

std::string DescribeSynchronizationObjectModifyStatusResult::getErrCode()const
{
	return errCode_;
}

