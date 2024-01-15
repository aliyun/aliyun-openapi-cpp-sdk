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

#include <alibabacloud/iot/model/QueryCustomTimelineTableStatusRequest.h>

using AlibabaCloud::Iot::Model::QueryCustomTimelineTableStatusRequest;

QueryCustomTimelineTableStatusRequest::QueryCustomTimelineTableStatusRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryCustomTimelineTableStatus")
{
	setMethod(HttpRequest::Method::Post);
}

QueryCustomTimelineTableStatusRequest::~QueryCustomTimelineTableStatusRequest()
{}

std::string QueryCustomTimelineTableStatusRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryCustomTimelineTableStatusRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string QueryCustomTimelineTableStatusRequest::getTableName()const
{
	return tableName_;
}

void QueryCustomTimelineTableStatusRequest::setTableName(const std::string& tableName)
{
	tableName_ = tableName;
	setParameter("TableName", tableName);
}

std::string QueryCustomTimelineTableStatusRequest::getApiProduct()const
{
	return apiProduct_;
}

void QueryCustomTimelineTableStatusRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QueryCustomTimelineTableStatusRequest::getApiRevision()const
{
	return apiRevision_;
}

void QueryCustomTimelineTableStatusRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

