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

#include <alibabacloud/csb/model/FindInstanceNodeListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CSB;
using namespace AlibabaCloud::CSB::Model;

FindInstanceNodeListResult::FindInstanceNodeListResult() :
	ServiceResult()
{}

FindInstanceNodeListResult::FindInstanceNodeListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

FindInstanceNodeListResult::~FindInstanceNodeListResult()
{}

void FindInstanceNodeListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CurrentPage"].isNull())
		data_.currentPage = std::stoi(dataNode["CurrentPage"].asString());
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	auto allInstanceNodeListNode = dataNode["InstanceNodeList"]["InstanceNode"];
	for (auto dataNodeInstanceNodeListInstanceNode : allInstanceNodeListNode)
	{
		Data::InstanceNode instanceNodeObject;
		if(!dataNodeInstanceNodeListInstanceNode["Id"].isNull())
			instanceNodeObject.id = std::stol(dataNodeInstanceNodeListInstanceNode["Id"].asString());
		if(!dataNodeInstanceNodeListInstanceNode["InstanceName"].isNull())
			instanceNodeObject.instanceName = dataNodeInstanceNodeListInstanceNode["InstanceName"].asString();
		if(!dataNodeInstanceNodeListInstanceNode["IsImported"].isNull())
			instanceNodeObject.isImported = dataNodeInstanceNodeListInstanceNode["IsImported"].asString() == "true";
		if(!dataNodeInstanceNodeListInstanceNode["GroupAddress"].isNull())
			instanceNodeObject.groupAddress = dataNodeInstanceNodeListInstanceNode["GroupAddress"].asString();
		if(!dataNodeInstanceNodeListInstanceNode["BrokerAddress"].isNull())
			instanceNodeObject.brokerAddress = dataNodeInstanceNodeListInstanceNode["BrokerAddress"].asString();
		if(!dataNodeInstanceNodeListInstanceNode["EdasTenantInfo"].isNull())
			instanceNodeObject.edasTenantInfo = dataNodeInstanceNodeListInstanceNode["EdasTenantInfo"].asString();
		if(!dataNodeInstanceNodeListInstanceNode["ImportedName"].isNull())
			instanceNodeObject.importedName = dataNodeInstanceNodeListInstanceNode["ImportedName"].asString();
		if(!dataNodeInstanceNodeListInstanceNode["CsbId"].isNull())
			instanceNodeObject.csbId = std::stol(dataNodeInstanceNodeListInstanceNode["CsbId"].asString());
		if(!dataNodeInstanceNodeListInstanceNode["Deleted"].isNull())
			instanceNodeObject.deleted = std::stoi(dataNodeInstanceNodeListInstanceNode["Deleted"].asString());
		if(!dataNodeInstanceNodeListInstanceNode["OwnerId"].isNull())
			instanceNodeObject.ownerId = dataNodeInstanceNodeListInstanceNode["OwnerId"].asString();
		if(!dataNodeInstanceNodeListInstanceNode["BrokerCmdAddress"].isNull())
			instanceNodeObject.brokerCmdAddress = dataNodeInstanceNodeListInstanceNode["BrokerCmdAddress"].asString();
		data_.instanceNodeList.push_back(instanceNodeObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string FindInstanceNodeListResult::getMessage()const
{
	return message_;
}

FindInstanceNodeListResult::Data FindInstanceNodeListResult::getData()const
{
	return data_;
}

int FindInstanceNodeListResult::getCode()const
{
	return code_;
}

