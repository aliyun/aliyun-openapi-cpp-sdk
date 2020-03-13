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

#include <alibabacloud/acms-open/model/DescribeNamespaceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Acms_open;
using namespace AlibabaCloud::Acms_open::Model;

DescribeNamespaceResult::DescribeNamespaceResult() :
	ServiceResult()
{}

DescribeNamespaceResult::DescribeNamespaceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNamespaceResult::~DescribeNamespaceResult()
{}

void DescribeNamespaceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto _namespaceNode = value["Namespace"];
	if(!_namespaceNode["RegionId"].isNull())
		_namespace_.regionId = _namespaceNode["RegionId"].asString();
	if(!_namespaceNode["Endpoint"].isNull())
		_namespace_.endpoint = _namespaceNode["Endpoint"].asString();
	if(!_namespaceNode["AccessKey"].isNull())
		_namespace_.accessKey = _namespaceNode["AccessKey"].asString();
	if(!_namespaceNode["SecretKey"].isNull())
		_namespace_.secretKey = _namespaceNode["SecretKey"].asString();
	if(!_namespaceNode["Name"].isNull())
		_namespace_.name = _namespaceNode["Name"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeNamespaceResult::getMessage()const
{
	return message_;
}

DescribeNamespaceResult::_Namespace DescribeNamespaceResult::get_Namespace()const
{
	return _namespace_;
}

std::string DescribeNamespaceResult::getCode()const
{
	return code_;
}

