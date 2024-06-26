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

#include <alibabacloud/dcdn/model/PutDcdnKvNamespaceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

PutDcdnKvNamespaceResult::PutDcdnKvNamespaceResult() :
	ServiceResult()
{}

PutDcdnKvNamespaceResult::PutDcdnKvNamespaceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PutDcdnKvNamespaceResult::~PutDcdnKvNamespaceResult()
{}

void PutDcdnKvNamespaceResult::parse(const std::string &payload)
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

}

std::string PutDcdnKvNamespaceResult::getStatus()const
{
	return status_;
}

std::string PutDcdnKvNamespaceResult::getDescription()const
{
	return description_;
}

std::string PutDcdnKvNamespaceResult::get_Namespace()const
{
	return _namespace_;
}

std::string PutDcdnKvNamespaceResult::getNamespaceId()const
{
	return namespaceId_;
}

