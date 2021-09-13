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

#include <alibabacloud/linkwan/model/ListNodeGroupsPacketStatRequest.h>

using AlibabaCloud::LinkWAN::Model::ListNodeGroupsPacketStatRequest;

ListNodeGroupsPacketStatRequest::ListNodeGroupsPacketStatRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "ListNodeGroupsPacketStat")
{
	setMethod(HttpRequest::Method::Post);
}

ListNodeGroupsPacketStatRequest::~ListNodeGroupsPacketStatRequest()
{}

long ListNodeGroupsPacketStatRequest::getEndMillis()const
{
	return endMillis_;
}

void ListNodeGroupsPacketStatRequest::setEndMillis(long endMillis)
{
	endMillis_ = endMillis;
	setParameter("EndMillis", std::to_string(endMillis));
}

std::string ListNodeGroupsPacketStatRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ListNodeGroupsPacketStatRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::vector<std::string> ListNodeGroupsPacketStatRequest::getNodeGroupIdList()const
{
	return nodeGroupIdList_;
}

void ListNodeGroupsPacketStatRequest::setNodeGroupIdList(const std::vector<std::string>& nodeGroupIdList)
{
	nodeGroupIdList_ = nodeGroupIdList;
	for(int dep1 = 0; dep1!= nodeGroupIdList.size(); dep1++) {
		setParameter("NodeGroupIdList."+ std::to_string(dep1), nodeGroupIdList.at(dep1));
	}
}

std::string ListNodeGroupsPacketStatRequest::getApiProduct()const
{
	return apiProduct_;
}

void ListNodeGroupsPacketStatRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ListNodeGroupsPacketStatRequest::getApiRevision()const
{
	return apiRevision_;
}

void ListNodeGroupsPacketStatRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

long ListNodeGroupsPacketStatRequest::getBeginMillis()const
{
	return beginMillis_;
}

void ListNodeGroupsPacketStatRequest::setBeginMillis(long beginMillis)
{
	beginMillis_ = beginMillis;
	setParameter("BeginMillis", std::to_string(beginMillis));
}

