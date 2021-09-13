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

#include <alibabacloud/linkwan/model/ListGatewaysPacketStatRequest.h>

using AlibabaCloud::LinkWAN::Model::ListGatewaysPacketStatRequest;

ListGatewaysPacketStatRequest::ListGatewaysPacketStatRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "ListGatewaysPacketStat")
{
	setMethod(HttpRequest::Method::Post);
}

ListGatewaysPacketStatRequest::~ListGatewaysPacketStatRequest()
{}

long ListGatewaysPacketStatRequest::getEndMillis()const
{
	return endMillis_;
}

void ListGatewaysPacketStatRequest::setEndMillis(long endMillis)
{
	endMillis_ = endMillis;
	setParameter("EndMillis", std::to_string(endMillis));
}

std::vector<std::string> ListGatewaysPacketStatRequest::getGwEuiList()const
{
	return gwEuiList_;
}

void ListGatewaysPacketStatRequest::setGwEuiList(const std::vector<std::string>& gwEuiList)
{
	gwEuiList_ = gwEuiList;
	for(int dep1 = 0; dep1!= gwEuiList.size(); dep1++) {
		setParameter("GwEuiList."+ std::to_string(dep1), gwEuiList.at(dep1));
	}
}

std::string ListGatewaysPacketStatRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ListGatewaysPacketStatRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string ListGatewaysPacketStatRequest::getApiProduct()const
{
	return apiProduct_;
}

void ListGatewaysPacketStatRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ListGatewaysPacketStatRequest::getApiRevision()const
{
	return apiRevision_;
}

void ListGatewaysPacketStatRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

long ListGatewaysPacketStatRequest::getBeginMillis()const
{
	return beginMillis_;
}

void ListGatewaysPacketStatRequest::setBeginMillis(long beginMillis)
{
	beginMillis_ = beginMillis;
	setParameter("BeginMillis", std::to_string(beginMillis));
}

