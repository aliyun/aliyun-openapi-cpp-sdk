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

#include <alibabacloud/iot/model/DeleteUserDefineTableDataByPrimaryKeyRequest.h>

using AlibabaCloud::Iot::Model::DeleteUserDefineTableDataByPrimaryKeyRequest;

DeleteUserDefineTableDataByPrimaryKeyRequest::DeleteUserDefineTableDataByPrimaryKeyRequest() :
	RpcServiceRequest("iot", "2018-01-20", "DeleteUserDefineTableDataByPrimaryKey")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteUserDefineTableDataByPrimaryKeyRequest::~DeleteUserDefineTableDataByPrimaryKeyRequest()
{}

std::string DeleteUserDefineTableDataByPrimaryKeyRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void DeleteUserDefineTableDataByPrimaryKeyRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string DeleteUserDefineTableDataByPrimaryKeyRequest::getTableIdentifier()const
{
	return tableIdentifier_;
}

void DeleteUserDefineTableDataByPrimaryKeyRequest::setTableIdentifier(const std::string& tableIdentifier)
{
	tableIdentifier_ = tableIdentifier;
	setParameter("TableIdentifier", tableIdentifier);
}

std::string DeleteUserDefineTableDataByPrimaryKeyRequest::getApiProduct()const
{
	return apiProduct_;
}

void DeleteUserDefineTableDataByPrimaryKeyRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string DeleteUserDefineTableDataByPrimaryKeyRequest::getApiRevision()const
{
	return apiRevision_;
}

void DeleteUserDefineTableDataByPrimaryKeyRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string DeleteUserDefineTableDataByPrimaryKeyRequest::getConditions()const
{
	return conditions_;
}

void DeleteUserDefineTableDataByPrimaryKeyRequest::setConditions(const std::string& conditions)
{
	conditions_ = conditions;
	setParameter("Conditions", conditions);
}

