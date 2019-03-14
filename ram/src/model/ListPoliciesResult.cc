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

#include <alibabacloud/ram/model/ListPoliciesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ram;
using namespace AlibabaCloud::Ram::Model;

ListPoliciesResult::ListPoliciesResult() :
	ServiceResult()
{}

ListPoliciesResult::ListPoliciesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPoliciesResult::~ListPoliciesResult()
{}

void ListPoliciesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allPolicies = value["Policies"]["Policy"];
	for (auto value : allPolicies)
	{
		Policy policiesObject;
		if(!value["PolicyName"].isNull())
			policiesObject.policyName = value["PolicyName"].asString();
		if(!value["PolicyType"].isNull())
			policiesObject.policyType = value["PolicyType"].asString();
		if(!value["Description"].isNull())
			policiesObject.description = value["Description"].asString();
		if(!value["DefaultVersion"].isNull())
			policiesObject.defaultVersion = value["DefaultVersion"].asString();
		if(!value["CreateDate"].isNull())
			policiesObject.createDate = value["CreateDate"].asString();
		if(!value["UpdateDate"].isNull())
			policiesObject.updateDate = value["UpdateDate"].asString();
		if(!value["AttachmentCount"].isNull())
			policiesObject.attachmentCount = std::stoi(value["AttachmentCount"].asString());
		policies_.push_back(policiesObject);
	}
	if(!value["IsTruncated"].isNull())
		isTruncated_ = value["IsTruncated"].asString() == "true";
	if(!value["Marker"].isNull())
		marker_ = value["Marker"].asString();

}

std::vector<ListPoliciesResult::Policy> ListPoliciesResult::getPolicies()const
{
	return policies_;
}

bool ListPoliciesResult::getIsTruncated()const
{
	return isTruncated_;
}

std::string ListPoliciesResult::getMarker()const
{
	return marker_;
}

