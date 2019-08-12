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

#include <alibabacloud/sddp/model/DescribeAccountsRequest.h>

using AlibabaCloud::Sddp::Model::DescribeAccountsRequest;

DescribeAccountsRequest::DescribeAccountsRequest() :
	RpcServiceRequest("sddp", "2019-01-03", "DescribeAccounts")
{}

DescribeAccountsRequest::~DescribeAccountsRequest()
{}

std::string DescribeAccountsRequest::getProductCode()const
{
	return productCode_;
}

void DescribeAccountsRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setCoreParameter("ProductCode", std::to_string(productCode));
}

std::string DescribeAccountsRequest::getLoginName()const
{
	return loginName_;
}

void DescribeAccountsRequest::setLoginName(const std::string& loginName)
{
	loginName_ = loginName;
	setCoreParameter("LoginName", std::to_string(loginName));
}

int DescribeAccountsRequest::getFeatureType()const
{
	return featureType_;
}

void DescribeAccountsRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setCoreParameter("FeatureType", featureType);
}

std::string DescribeAccountsRequest::getColumnId()const
{
	return columnId_;
}

void DescribeAccountsRequest::setColumnId(const std::string& columnId)
{
	columnId_ = columnId;
	setCoreParameter("ColumnId", std::to_string(columnId));
}

std::string DescribeAccountsRequest::getPackageId()const
{
	return packageId_;
}

void DescribeAccountsRequest::setPackageId(const std::string& packageId)
{
	packageId_ = packageId;
	setCoreParameter("PackageId", std::to_string(packageId));
}

int DescribeAccountsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeAccountsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", currentPage);
}

std::string DescribeAccountsRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeAccountsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string DescribeAccountsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeAccountsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

int DescribeAccountsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAccountsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

long DescribeAccountsRequest::getDepartId()const
{
	return departId_;
}

void DescribeAccountsRequest::setDepartId(long departId)
{
	departId_ = departId;
	setCoreParameter("DepartId", departId);
}

int DescribeAccountsRequest::getOperationId()const
{
	return operationId_;
}

void DescribeAccountsRequest::setOperationId(int operationId)
{
	operationId_ = operationId;
	setCoreParameter("OperationId", operationId);
}

std::string DescribeAccountsRequest::getTableId()const
{
	return tableId_;
}

void DescribeAccountsRequest::setTableId(const std::string& tableId)
{
	tableId_ = tableId;
	setCoreParameter("TableId", std::to_string(tableId));
}

std::string DescribeAccountsRequest::getLang()const
{
	return lang_;
}

void DescribeAccountsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

std::string DescribeAccountsRequest::getKey()const
{
	return key_;
}

void DescribeAccountsRequest::setKey(const std::string& key)
{
	key_ = key;
	setCoreParameter("Key", std::to_string(key));
}

int DescribeAccountsRequest::getQueryType()const
{
	return queryType_;
}

void DescribeAccountsRequest::setQueryType(int queryType)
{
	queryType_ = queryType;
	setCoreParameter("QueryType", queryType);
}

