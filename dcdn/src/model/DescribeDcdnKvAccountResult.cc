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

#include <alibabacloud/dcdn/model/DescribeDcdnKvAccountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnKvAccountResult::DescribeDcdnKvAccountResult() :
	ServiceResult()
{}

DescribeDcdnKvAccountResult::DescribeDcdnKvAccountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnKvAccountResult::~DescribeDcdnKvAccountResult()
{}

void DescribeDcdnKvAccountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNamespaceListNode = value["NamespaceList"]["namespaces"];
	for (auto valueNamespaceListnamespaces : allNamespaceListNode)
	{
		Namespaces namespaceListObject;
		if(!valueNamespaceListnamespaces["Status"].isNull())
			namespaceListObject.status = valueNamespaceListnamespaces["Status"].asString();
		if(!valueNamespaceListnamespaces["Namespace"].isNull())
			namespaceListObject._namespace = valueNamespaceListnamespaces["Namespace"].asString();
		if(!valueNamespaceListnamespaces["NamespaceId"].isNull())
			namespaceListObject.namespaceId = valueNamespaceListnamespaces["NamespaceId"].asString();
		if(!valueNamespaceListnamespaces["Description"].isNull())
			namespaceListObject.description = valueNamespaceListnamespaces["Description"].asString();
		if(!valueNamespaceListnamespaces["CapacityString"].isNull())
			namespaceListObject.capacityString = valueNamespaceListnamespaces["CapacityString"].asString();
		if(!valueNamespaceListnamespaces["CapacityUsedString"].isNull())
			namespaceListObject.capacityUsedString = valueNamespaceListnamespaces["CapacityUsedString"].asString();
		namespaceList_.push_back(namespaceListObject);
	}
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["NamespaceUsed"].isNull())
		namespaceUsed_ = std::stoi(value["NamespaceUsed"].asString());
	if(!value["NamespaceQuota"].isNull())
		namespaceQuota_ = std::stoi(value["NamespaceQuota"].asString());
	if(!value["CapacityString"].isNull())
		capacityString_ = value["CapacityString"].asString();
	if(!value["CapacityUsedString"].isNull())
		capacityUsedString_ = value["CapacityUsedString"].asString();

}

std::string DescribeDcdnKvAccountResult::getStatus()const
{
	return status_;
}

int DescribeDcdnKvAccountResult::getNamespaceUsed()const
{
	return namespaceUsed_;
}

std::string DescribeDcdnKvAccountResult::getCapacityUsedString()const
{
	return capacityUsedString_;
}

std::string DescribeDcdnKvAccountResult::getCapacityString()const
{
	return capacityString_;
}

int DescribeDcdnKvAccountResult::getNamespaceQuota()const
{
	return namespaceQuota_;
}

std::vector<DescribeDcdnKvAccountResult::Namespaces> DescribeDcdnKvAccountResult::getNamespaceList()const
{
	return namespaceList_;
}

