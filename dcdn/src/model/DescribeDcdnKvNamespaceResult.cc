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

#include <alibabacloud/dcdn/model/DescribeDcdnKvNamespaceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnKvNamespaceResult::DescribeDcdnKvNamespaceResult() :
	ServiceResult()
{}

DescribeDcdnKvNamespaceResult::DescribeDcdnKvNamespaceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnKvNamespaceResult::~DescribeDcdnKvNamespaceResult()
{}

void DescribeDcdnKvNamespaceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Namespace"].isNull())
		_namespace_ = value["Namespace"].asString();
	if(!value["NamespaceId"].isNull())
		namespaceId_ = value["NamespaceId"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["CapacityString"].isNull())
		capacityString_ = value["CapacityString"].asString();
	if(!value["CapacityUsedString"].isNull())
		capacityUsedString_ = value["CapacityUsedString"].asString();
	if(!value["Mode"].isNull())
		mode_ = value["Mode"].asString();

}

std::string DescribeDcdnKvNamespaceResult::getStatus()const
{
	return status_;
}

std::string DescribeDcdnKvNamespaceResult::getCapacityUsedString()const
{
	return capacityUsedString_;
}

std::string DescribeDcdnKvNamespaceResult::getDescription()const
{
	return description_;
}

std::string DescribeDcdnKvNamespaceResult::getCapacityString()const
{
	return capacityString_;
}

std::string DescribeDcdnKvNamespaceResult::getMode()const
{
	return mode_;
}

std::string DescribeDcdnKvNamespaceResult::get_Namespace()const
{
	return _namespace_;
}

std::string DescribeDcdnKvNamespaceResult::getNamespaceId()const
{
	return namespaceId_;
}

