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

#include <alibabacloud/sae/model/DescribeNamespacesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

DescribeNamespacesResult::DescribeNamespacesResult() :
	ServiceResult()
{}

DescribeNamespacesResult::DescribeNamespacesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNamespacesResult::~DescribeNamespacesResult()
{}

void DescribeNamespacesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CurrentPage"].isNull())
		data_.currentPage = std::stoi(dataNode["CurrentPage"].asString());
	if(!dataNode["TotalSize"].isNull())
		data_.totalSize = std::stoi(dataNode["TotalSize"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	auto allNamespacesNode = dataNode["Namespaces"]["Namespace"];
	for (auto dataNodeNamespacesNamespace : allNamespacesNode)
	{
		Data::_Namespace _namespaceObject;
		if(!dataNodeNamespacesNamespace["NamespaceDescription"].isNull())
			_namespaceObject.namespaceDescription = dataNodeNamespacesNamespace["NamespaceDescription"].asString();
		if(!dataNodeNamespacesNamespace["AccessKey"].isNull())
			_namespaceObject.accessKey = dataNodeNamespacesNamespace["AccessKey"].asString();
		if(!dataNodeNamespacesNamespace["SecretKey"].isNull())
			_namespaceObject.secretKey = dataNodeNamespacesNamespace["SecretKey"].asString();
		if(!dataNodeNamespacesNamespace["NamespaceId"].isNull())
			_namespaceObject.namespaceId = dataNodeNamespacesNamespace["NamespaceId"].asString();
		if(!dataNodeNamespacesNamespace["AddressServerHost"].isNull())
			_namespaceObject.addressServerHost = dataNodeNamespacesNamespace["AddressServerHost"].asString();
		if(!dataNodeNamespacesNamespace["NamespaceName"].isNull())
			_namespaceObject.namespaceName = dataNodeNamespacesNamespace["NamespaceName"].asString();
		if(!dataNodeNamespacesNamespace["TenantId"].isNull())
			_namespaceObject.tenantId = dataNodeNamespacesNamespace["TenantId"].asString();
		if(!dataNodeNamespacesNamespace["RegionId"].isNull())
			_namespaceObject.regionId = dataNodeNamespacesNamespace["RegionId"].asString();
		if(!dataNodeNamespacesNamespace["NameSpaceShortId"].isNull())
			_namespaceObject.nameSpaceShortId = dataNodeNamespacesNamespace["NameSpaceShortId"].asString();
		data_.namespaces.push_back(_namespaceObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeNamespacesResult::getMessage()const
{
	return message_;
}

std::string DescribeNamespacesResult::getTraceId()const
{
	return traceId_;
}

DescribeNamespacesResult::Data DescribeNamespacesResult::getData()const
{
	return data_;
}

std::string DescribeNamespacesResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeNamespacesResult::getCode()const
{
	return code_;
}

bool DescribeNamespacesResult::getSuccess()const
{
	return success_;
}

