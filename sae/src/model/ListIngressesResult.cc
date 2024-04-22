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

#include <alibabacloud/sae/model/ListIngressesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

ListIngressesResult::ListIngressesResult() :
	ServiceResult()
{}

ListIngressesResult::ListIngressesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListIngressesResult::~ListIngressesResult()
{}

void ListIngressesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allIngressListNode = dataNode["IngressList"]["Ingress"];
	for (auto dataNodeIngressListIngress : allIngressListNode)
	{
		Data::Ingress ingressObject;
		if(!dataNodeIngressListIngress["SlbId"].isNull())
			ingressObject.slbId = dataNodeIngressListIngress["SlbId"].asString();
		if(!dataNodeIngressListIngress["NamespaceId"].isNull())
			ingressObject.namespaceId = dataNodeIngressListIngress["NamespaceId"].asString();
		if(!dataNodeIngressListIngress["Description"].isNull())
			ingressObject.description = dataNodeIngressListIngress["Description"].asString();
		if(!dataNodeIngressListIngress["ListenerPort"].isNull())
			ingressObject.listenerPort = dataNodeIngressListIngress["ListenerPort"].asString();
		if(!dataNodeIngressListIngress["SlbType"].isNull())
			ingressObject.slbType = dataNodeIngressListIngress["SlbType"].asString();
		if(!dataNodeIngressListIngress["CertId"].isNull())
			ingressObject.certId = dataNodeIngressListIngress["CertId"].asString();
		if(!dataNodeIngressListIngress["CertIds"].isNull())
			ingressObject.certIds = dataNodeIngressListIngress["CertIds"].asString();
		if(!dataNodeIngressListIngress["Name"].isNull())
			ingressObject.name = dataNodeIngressListIngress["Name"].asString();
		if(!dataNodeIngressListIngress["Id"].isNull())
			ingressObject.id = std::stol(dataNodeIngressListIngress["Id"].asString());
		if(!dataNodeIngressListIngress["LoadBalanceType"].isNull())
			ingressObject.loadBalanceType = dataNodeIngressListIngress["LoadBalanceType"].asString();
		if(!dataNodeIngressListIngress["ListenerProtocol"].isNull())
			ingressObject.listenerProtocol = dataNodeIngressListIngress["ListenerProtocol"].asString();
		if(!dataNodeIngressListIngress["MseGatewayId"].isNull())
			ingressObject.mseGatewayId = dataNodeIngressListIngress["MseGatewayId"].asString();
		if(!dataNodeIngressListIngress["MseGatewayPort"].isNull())
			ingressObject.mseGatewayPort = dataNodeIngressListIngress["MseGatewayPort"].asString();
		if(!dataNodeIngressListIngress["MseGatewayProtocol"].isNull())
			ingressObject.mseGatewayProtocol = dataNodeIngressListIngress["MseGatewayProtocol"].asString();
		data_.ingressList.push_back(ingressObject);
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

std::string ListIngressesResult::getMessage()const
{
	return message_;
}

std::string ListIngressesResult::getTraceId()const
{
	return traceId_;
}

ListIngressesResult::Data ListIngressesResult::getData()const
{
	return data_;
}

std::string ListIngressesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListIngressesResult::getCode()const
{
	return code_;
}

bool ListIngressesResult::getSuccess()const
{
	return success_;
}

