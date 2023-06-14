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

#include <alibabacloud/ga/model/GetAclResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

GetAclResult::GetAclResult() :
	ServiceResult()
{}

GetAclResult::GetAclResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAclResult::~GetAclResult()
{}

void GetAclResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAclEntriesNode = value["AclEntries"]["AclEntriesItem"];
	for (auto valueAclEntriesAclEntriesItem : allAclEntriesNode)
	{
		AclEntriesItem aclEntriesObject;
		if(!valueAclEntriesAclEntriesItem["Entry"].isNull())
			aclEntriesObject.entry = valueAclEntriesAclEntriesItem["Entry"].asString();
		if(!valueAclEntriesAclEntriesItem["EntryDescription"].isNull())
			aclEntriesObject.entryDescription = valueAclEntriesAclEntriesItem["EntryDescription"].asString();
		aclEntries_.push_back(aclEntriesObject);
	}
	auto allRelatedListenersNode = value["RelatedListeners"]["RelatedListenersItem"];
	for (auto valueRelatedListenersRelatedListenersItem : allRelatedListenersNode)
	{
		RelatedListenersItem relatedListenersObject;
		if(!valueRelatedListenersRelatedListenersItem["ListenerId"].isNull())
			relatedListenersObject.listenerId = valueRelatedListenersRelatedListenersItem["ListenerId"].asString();
		if(!valueRelatedListenersRelatedListenersItem["AclType"].isNull())
			relatedListenersObject.aclType = valueRelatedListenersRelatedListenersItem["AclType"].asString();
		if(!valueRelatedListenersRelatedListenersItem["AcceleratorId"].isNull())
			relatedListenersObject.acceleratorId = valueRelatedListenersRelatedListenersItem["AcceleratorId"].asString();
		relatedListeners_.push_back(relatedListenersObject);
	}
	auto allTagsNode = value["Tags"]["TagsItem"];
	for (auto valueTagsTagsItem : allTagsNode)
	{
		TagsItem tagsObject;
		if(!valueTagsTagsItem["Key"].isNull())
			tagsObject.key = valueTagsTagsItem["Key"].asString();
		if(!valueTagsTagsItem["Value"].isNull())
			tagsObject.value = valueTagsTagsItem["Value"].asString();
		tags_.push_back(tagsObject);
	}
	if(!value["AclId"].isNull())
		aclId_ = value["AclId"].asString();
	if(!value["AddressIPVersion"].isNull())
		addressIPVersion_ = value["AddressIPVersion"].asString();
	if(!value["AclStatus"].isNull())
		aclStatus_ = value["AclStatus"].asString();
	if(!value["AclName"].isNull())
		aclName_ = value["AclName"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();

}

std::vector<GetAclResult::AclEntriesItem> GetAclResult::getAclEntries()const
{
	return aclEntries_;
}

std::string GetAclResult::getAclStatus()const
{
	return aclStatus_;
}

std::string GetAclResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::string GetAclResult::getAclId()const
{
	return aclId_;
}

std::string GetAclResult::getAddressIPVersion()const
{
	return addressIPVersion_;
}

std::vector<GetAclResult::RelatedListenersItem> GetAclResult::getRelatedListeners()const
{
	return relatedListeners_;
}

std::vector<GetAclResult::TagsItem> GetAclResult::getTags()const
{
	return tags_;
}

std::string GetAclResult::getAclName()const
{
	return aclName_;
}

