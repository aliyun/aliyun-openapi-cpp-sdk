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

#include <alibabacloud/iot/model/ListOTAModuleVersionsByDeviceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

ListOTAModuleVersionsByDeviceResult::ListOTAModuleVersionsByDeviceResult() :
	ServiceResult()
{}

ListOTAModuleVersionsByDeviceResult::ListOTAModuleVersionsByDeviceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListOTAModuleVersionsByDeviceResult::~ListOTAModuleVersionsByDeviceResult()
{}

void ListOTAModuleVersionsByDeviceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["SimpleOTAModuleInfo"];
	for (auto valueDataSimpleOTAModuleInfo : allDataNode)
	{
		SimpleOTAModuleInfo dataObject;
		if(!valueDataSimpleOTAModuleInfo["ProductKey"].isNull())
			dataObject.productKey = valueDataSimpleOTAModuleInfo["ProductKey"].asString();
		if(!valueDataSimpleOTAModuleInfo["DeviceName"].isNull())
			dataObject.deviceName = valueDataSimpleOTAModuleInfo["DeviceName"].asString();
		if(!valueDataSimpleOTAModuleInfo["IotId"].isNull())
			dataObject.iotId = valueDataSimpleOTAModuleInfo["IotId"].asString();
		if(!valueDataSimpleOTAModuleInfo["ModuleVersion"].isNull())
			dataObject.moduleVersion = valueDataSimpleOTAModuleInfo["ModuleVersion"].asString();
		if(!valueDataSimpleOTAModuleInfo["ModuleName"].isNull())
			dataObject.moduleName = valueDataSimpleOTAModuleInfo["ModuleName"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageCount"].isNull())
		pageCount_ = std::stoi(value["PageCount"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());

}

int ListOTAModuleVersionsByDeviceResult::getPageSize()const
{
	return pageSize_;
}

int ListOTAModuleVersionsByDeviceResult::getPageCount()const
{
	return pageCount_;
}

int ListOTAModuleVersionsByDeviceResult::getCurrentPage()const
{
	return currentPage_;
}

int ListOTAModuleVersionsByDeviceResult::getTotal()const
{
	return total_;
}

std::vector<ListOTAModuleVersionsByDeviceResult::SimpleOTAModuleInfo> ListOTAModuleVersionsByDeviceResult::getData()const
{
	return data_;
}

std::string ListOTAModuleVersionsByDeviceResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string ListOTAModuleVersionsByDeviceResult::getCode()const
{
	return code_;
}

bool ListOTAModuleVersionsByDeviceResult::getSuccess()const
{
	return success_;
}

