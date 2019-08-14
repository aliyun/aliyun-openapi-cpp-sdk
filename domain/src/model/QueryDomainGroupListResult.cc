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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["DomainGroup"];
	for (auto value : allData)
	{
		DomainGroup dataObject;
		if(!value["DomainGroupId"].isNull())
			dataObject.domainGroupId = value["DomainGroupId"].asString();
		if(!value["DomainGroupName"].isNull())
			dataObject.domainGroupName = value["DomainGroupName"].asString();
		if(!value["TotalNumber"].isNull())
			dataObject.totalNumber = std::stoi(value["TotalNumber"].asString());
		if(!value["CreationDate"].isNull())
			dataObject.creationDate = value["CreationDate"].asString();
		if(!value["ModificationDate"].isNull())
			dataObject.modificationDate = value["ModificationDate"].asString();
		if(!value["DomainGroupStatus"].isNull())
			dataObject.domainGroupStatus = value["DomainGroupStatus"].asString();
		if(!value["BeingDeleted"].isNull())
			dataObject.beingDeleted = value["BeingDeleted"].asString() == "true";
		data_.push_back(dataObject);
	}

}

std::vector<QueryDomainGroupListResult::DomainGroup> QueryDomainGroupListResult::getData()const
{
	return data_;
}

