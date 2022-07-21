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

#include <alibabacloud/domain/model/QueryDomainGroupListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

QueryDomainGroupListResult::QueryDomainGroupListResult() :
	ServiceResult()
{}

QueryDomainGroupListResult::QueryDomainGroupListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDomainGroupListResult::~QueryDomainGroupListResult()
{}

void QueryDomainGroupListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DomainGroup"];
	for (auto valueDataDomainGroup : allDataNode)
	{
		DomainGroup dataObject;
		if(!valueDataDomainGroup["BeingDeleted"].isNull())
			dataObject.beingDeleted = valueDataDomainGroup["BeingDeleted"].asString() == "true";
		if(!valueDataDomainGroup["DomainGroupStatus"].isNull())
			dataObject.domainGroupStatus = valueDataDomainGroup["DomainGroupStatus"].asString();
		if(!valueDataDomainGroup["DomainGroupId"].isNull())
			dataObject.domainGroupId = valueDataDomainGroup["DomainGroupId"].asString();
		if(!valueDataDomainGroup["DomainGroupName"].isNull())
			dataObject.domainGroupName = valueDataDomainGroup["DomainGroupName"].asString();
		if(!valueDataDomainGroup["ModificationDate"].isNull())
			dataObject.modificationDate = valueDataDomainGroup["ModificationDate"].asString();
		if(!valueDataDomainGroup["TotalNumber"].isNull())
			dataObject.totalNumber = std::stoi(valueDataDomainGroup["TotalNumber"].asString());
		if(!valueDataDomainGroup["CreationDate"].isNull())
			dataObject.creationDate = valueDataDomainGroup["CreationDate"].asString();
		data_.push_back(dataObject);
	}

}

std::vector<QueryDomainGroupListResult::DomainGroup> QueryDomainGroupListResult::getData()const
{
	return data_;
}

