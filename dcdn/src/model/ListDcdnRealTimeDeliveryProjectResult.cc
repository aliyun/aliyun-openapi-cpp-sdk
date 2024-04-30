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

#include <alibabacloud/dcdn/model/ListDcdnRealTimeDeliveryProjectResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

ListDcdnRealTimeDeliveryProjectResult::ListDcdnRealTimeDeliveryProjectResult() :
	ServiceResult()
{}

ListDcdnRealTimeDeliveryProjectResult::ListDcdnRealTimeDeliveryProjectResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDcdnRealTimeDeliveryProjectResult::~ListDcdnRealTimeDeliveryProjectResult()
{}

void ListDcdnRealTimeDeliveryProjectResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allContentNode = value["Content"]["Projects"];
	for (auto valueContentProjects : allContentNode)
	{
		Projects contentObject;
		if(!valueContentProjects["Type"].isNull())
			contentObject.type = valueContentProjects["Type"].asString();
		if(!valueContentProjects["SLSLogStore"].isNull())
			contentObject.sLSLogStore = valueContentProjects["SLSLogStore"].asString();
		if(!valueContentProjects["DataCenter"].isNull())
			contentObject.dataCenter = valueContentProjects["DataCenter"].asString();
		if(!valueContentProjects["FieldName"].isNull())
			contentObject.fieldName = valueContentProjects["FieldName"].asString();
		if(!valueContentProjects["ProjectName"].isNull())
			contentObject.projectName = valueContentProjects["ProjectName"].asString();
		if(!valueContentProjects["SamplingRate"].isNull())
			contentObject.samplingRate = std::stof(valueContentProjects["SamplingRate"].asString());
		if(!valueContentProjects["SLSProject"].isNull())
			contentObject.sLSProject = valueContentProjects["SLSProject"].asString();
		if(!valueContentProjects["DomainName"].isNull())
			contentObject.domainName = valueContentProjects["DomainName"].asString();
		if(!valueContentProjects["BusinessType"].isNull())
			contentObject.businessType = valueContentProjects["BusinessType"].asString();
		if(!valueContentProjects["SLSRegion"].isNull())
			contentObject.sLSRegion = valueContentProjects["SLSRegion"].asString();
		content_.push_back(contentObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListDcdnRealTimeDeliveryProjectResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListDcdnRealTimeDeliveryProjectResult::Projects> ListDcdnRealTimeDeliveryProjectResult::getContent()const
{
	return content_;
}

