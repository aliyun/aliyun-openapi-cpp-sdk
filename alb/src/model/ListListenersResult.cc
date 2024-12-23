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

#include <alibabacloud/alb/model/ListListenersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alb;
using namespace AlibabaCloud::Alb::Model;

ListListenersResult::ListListenersResult() :
	ServiceResult()
{}

ListListenersResult::ListListenersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListListenersResult::~ListListenersResult()
{}

void ListListenersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allListenersNode = value["Listeners"]["listener"];
	for (auto valueListenerslistener : allListenersNode)
	{
		Listener listenersObject;
		if(!valueListenerslistener["GzipEnabled"].isNull())
			listenersObject.gzipEnabled = valueListenerslistener["GzipEnabled"].asString() == "true";
		if(!valueListenerslistener["Http2Enabled"].isNull())
			listenersObject.http2Enabled = valueListenerslistener["Http2Enabled"].asString() == "true";
		if(!valueListenerslistener["IdleTimeout"].isNull())
			listenersObject.idleTimeout = std::stoi(valueListenerslistener["IdleTimeout"].asString());
		if(!valueListenerslistener["ListenerDescription"].isNull())
			listenersObject.listenerDescription = valueListenerslistener["ListenerDescription"].asString();
		if(!valueListenerslistener["ListenerId"].isNull())
			listenersObject.listenerId = valueListenerslistener["ListenerId"].asString();
		if(!valueListenerslistener["ListenerPort"].isNull())
			listenersObject.listenerPort = std::stoi(valueListenerslistener["ListenerPort"].asString());
		if(!valueListenerslistener["ListenerProtocol"].isNull())
			listenersObject.listenerProtocol = valueListenerslistener["ListenerProtocol"].asString();
		if(!valueListenerslistener["ListenerStatus"].isNull())
			listenersObject.listenerStatus = valueListenerslistener["ListenerStatus"].asString();
		if(!valueListenerslistener["LoadBalancerId"].isNull())
			listenersObject.loadBalancerId = valueListenerslistener["LoadBalancerId"].asString();
		if(!valueListenerslistener["ServiceManagedEnabled"].isNull())
			listenersObject.serviceManagedEnabled = valueListenerslistener["ServiceManagedEnabled"].asString() == "true";
		if(!valueListenerslistener["ServiceManagedMode"].isNull())
			listenersObject.serviceManagedMode = valueListenerslistener["ServiceManagedMode"].asString();
		if(!valueListenerslistener["RequestTimeout"].isNull())
			listenersObject.requestTimeout = std::stoi(valueListenerslistener["RequestTimeout"].asString());
		if(!valueListenerslistener["SecurityPolicyId"].isNull())
			listenersObject.securityPolicyId = valueListenerslistener["SecurityPolicyId"].asString();
		auto allDefaultActionsNode = valueListenerslistener["DefaultActions"]["defaultAction"];
		for (auto valueListenerslistenerDefaultActionsdefaultAction : allDefaultActionsNode)
		{
			Listener::DefaultAction defaultActionsObject;
			if(!valueListenerslistenerDefaultActionsdefaultAction["Type"].isNull())
				defaultActionsObject.type = valueListenerslistenerDefaultActionsdefaultAction["Type"].asString();
			auto forwardGroupConfigNode = value["ForwardGroupConfig"];
			auto allServerGroupTuplesNode = forwardGroupConfigNode["ServerGroupTuples"]["serverGroupTuple"];
			for (auto forwardGroupConfigNodeServerGroupTuplesserverGroupTuple : allServerGroupTuplesNode)
			{
				Listener::DefaultAction::ForwardGroupConfig::ServerGroupTuple serverGroupTupleObject;
				if(!forwardGroupConfigNodeServerGroupTuplesserverGroupTuple["ServerGroupId"].isNull())
					serverGroupTupleObject.serverGroupId = forwardGroupConfigNodeServerGroupTuplesserverGroupTuple["ServerGroupId"].asString();
				defaultActionsObject.forwardGroupConfig.serverGroupTuples.push_back(serverGroupTupleObject);
			}
			listenersObject.defaultActions.push_back(defaultActionsObject);
		}
		auto allTagsNode = valueListenerslistener["Tags"]["Tag"];
		for (auto valueListenerslistenerTagsTag : allTagsNode)
		{
			Listener::Tag tagsObject;
			if(!valueListenerslistenerTagsTag["Key"].isNull())
				tagsObject.key = valueListenerslistenerTagsTag["Key"].asString();
			if(!valueListenerslistenerTagsTag["Value"].isNull())
				tagsObject.value = valueListenerslistenerTagsTag["Value"].asString();
			listenersObject.tags.push_back(tagsObject);
		}
		auto allAssociatedResourcesNode = valueListenerslistener["AssociatedResources"]["AssociatedResource"];
		for (auto valueListenerslistenerAssociatedResourcesAssociatedResource : allAssociatedResourcesNode)
		{
			Listener::AssociatedResource associatedResourcesObject;
			if(!valueListenerslistenerAssociatedResourcesAssociatedResource["AssociatedResourceType"].isNull())
				associatedResourcesObject.associatedResourceType = valueListenerslistenerAssociatedResourcesAssociatedResource["AssociatedResourceType"].asString();
			if(!valueListenerslistenerAssociatedResourcesAssociatedResource["AssociatedResourceId"].isNull())
				associatedResourcesObject.associatedResourceId = valueListenerslistenerAssociatedResourcesAssociatedResource["AssociatedResourceId"].asString();
			if(!valueListenerslistenerAssociatedResourcesAssociatedResource["PolicyId"].isNull())
				associatedResourcesObject.policyId = valueListenerslistenerAssociatedResourcesAssociatedResource["PolicyId"].asString();
			if(!valueListenerslistenerAssociatedResourcesAssociatedResource["Status"].isNull())
				associatedResourcesObject.status = valueListenerslistenerAssociatedResourcesAssociatedResource["Status"].asString();
			if(!valueListenerslistenerAssociatedResourcesAssociatedResource["AssociatedMode"].isNull())
				associatedResourcesObject.associatedMode = valueListenerslistenerAssociatedResourcesAssociatedResource["AssociatedMode"].asString();
			listenersObject.associatedResources.push_back(associatedResourcesObject);
		}
		auto logConfigNode = value["LogConfig"];
		if(!logConfigNode["AccessLogRecordCustomizedHeadersEnabled"].isNull())
			listenersObject.logConfig.accessLogRecordCustomizedHeadersEnabled = logConfigNode["AccessLogRecordCustomizedHeadersEnabled"].asString() == "true";
		auto accessLogTracingConfigNode = logConfigNode["AccessLogTracingConfig"];
		if(!accessLogTracingConfigNode["TracingEnabled"].isNull())
			listenersObject.logConfig.accessLogTracingConfig.tracingEnabled = accessLogTracingConfigNode["TracingEnabled"].asString() == "true";
		if(!accessLogTracingConfigNode["TracingSample"].isNull())
			listenersObject.logConfig.accessLogTracingConfig.tracingSample = std::stoi(accessLogTracingConfigNode["TracingSample"].asString());
		if(!accessLogTracingConfigNode["TracingType"].isNull())
			listenersObject.logConfig.accessLogTracingConfig.tracingType = accessLogTracingConfigNode["TracingType"].asString();
		auto quicConfigNode = value["QuicConfig"];
		if(!quicConfigNode["QuicListenerId"].isNull())
			listenersObject.quicConfig.quicListenerId = quicConfigNode["QuicListenerId"].asString();
		if(!quicConfigNode["QuicUpgradeEnabled"].isNull())
			listenersObject.quicConfig.quicUpgradeEnabled = quicConfigNode["QuicUpgradeEnabled"].asString() == "true";
		auto xForwardedForConfigNode = value["XForwardedForConfig"];
		if(!xForwardedForConfigNode["XForwardedForClientCertClientVerifyAlias"].isNull())
			listenersObject.xForwardedForConfig.xForwardedForClientCertClientVerifyAlias = xForwardedForConfigNode["XForwardedForClientCertClientVerifyAlias"].asString();
		if(!xForwardedForConfigNode["XForwardedForClientCertClientVerifyEnabled"].isNull())
			listenersObject.xForwardedForConfig.xForwardedForClientCertClientVerifyEnabled = xForwardedForConfigNode["XForwardedForClientCertClientVerifyEnabled"].asString() == "true";
		if(!xForwardedForConfigNode["XForwardedForClientCertFingerprintAlias"].isNull())
			listenersObject.xForwardedForConfig.xForwardedForClientCertFingerprintAlias = xForwardedForConfigNode["XForwardedForClientCertFingerprintAlias"].asString();
		if(!xForwardedForConfigNode["XForwardedForClientCertFingerprintEnabled"].isNull())
			listenersObject.xForwardedForConfig.xForwardedForClientCertFingerprintEnabled = xForwardedForConfigNode["XForwardedForClientCertFingerprintEnabled"].asString() == "true";
		if(!xForwardedForConfigNode["XForwardedForClientCertIssuerDNAlias"].isNull())
			listenersObject.xForwardedForConfig.xForwardedForClientCertIssuerDNAlias = xForwardedForConfigNode["XForwardedForClientCertIssuerDNAlias"].asString();
		if(!xForwardedForConfigNode["XForwardedForClientCertIssuerDNEnabled"].isNull())
			listenersObject.xForwardedForConfig.xForwardedForClientCertIssuerDNEnabled = xForwardedForConfigNode["XForwardedForClientCertIssuerDNEnabled"].asString() == "true";
		if(!xForwardedForConfigNode["XForwardedForClientCertSubjectDNAlias"].isNull())
			listenersObject.xForwardedForConfig.xForwardedForClientCertSubjectDNAlias = xForwardedForConfigNode["XForwardedForClientCertSubjectDNAlias"].asString();
		if(!xForwardedForConfigNode["XForwardedForClientCertSubjectDNEnabled"].isNull())
			listenersObject.xForwardedForConfig.xForwardedForClientCertSubjectDNEnabled = xForwardedForConfigNode["XForwardedForClientCertSubjectDNEnabled"].asString() == "true";
		if(!xForwardedForConfigNode["XForwardedForClientSrcPortEnabled"].isNull())
			listenersObject.xForwardedForConfig.xForwardedForClientSrcPortEnabled = xForwardedForConfigNode["XForwardedForClientSrcPortEnabled"].asString() == "true";
		if(!xForwardedForConfigNode["XForwardedForEnabled"].isNull())
			listenersObject.xForwardedForConfig.xForwardedForEnabled = xForwardedForConfigNode["XForwardedForEnabled"].asString() == "true";
		if(!xForwardedForConfigNode["XForwardedForProcessingMode"].isNull())
			listenersObject.xForwardedForConfig.xForwardedForProcessingMode = xForwardedForConfigNode["XForwardedForProcessingMode"].asString();
		if(!xForwardedForConfigNode["XForwardedForProtoEnabled"].isNull())
			listenersObject.xForwardedForConfig.xForwardedForProtoEnabled = xForwardedForConfigNode["XForwardedForProtoEnabled"].asString() == "true";
		if(!xForwardedForConfigNode["XForwardedForSLBIdEnabled"].isNull())
			listenersObject.xForwardedForConfig.xForwardedForSLBIdEnabled = xForwardedForConfigNode["XForwardedForSLBIdEnabled"].asString() == "true";
		if(!xForwardedForConfigNode["XForwardedForSLBPortEnabled"].isNull())
			listenersObject.xForwardedForConfig.xForwardedForSLBPortEnabled = xForwardedForConfigNode["XForwardedForSLBPortEnabled"].asString() == "true";
		if(!xForwardedForConfigNode["XForwardedForClientSourceIpsEnabled"].isNull())
			listenersObject.xForwardedForConfig.xForwardedForClientSourceIpsEnabled = xForwardedForConfigNode["XForwardedForClientSourceIpsEnabled"].asString() == "true";
		if(!xForwardedForConfigNode["XForwardedForClientSourceIpsTrusted"].isNull())
			listenersObject.xForwardedForConfig.xForwardedForClientSourceIpsTrusted = xForwardedForConfigNode["XForwardedForClientSourceIpsTrusted"].asString();
		if(!xForwardedForConfigNode["XForwardedForHostEnabled"].isNull())
			listenersObject.xForwardedForConfig.xForwardedForHostEnabled = xForwardedForConfigNode["XForwardedForHostEnabled"].asString() == "true";
		listeners_.push_back(listenersObject);
	}
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<ListListenersResult::Listener> ListListenersResult::getListeners()const
{
	return listeners_;
}

int ListListenersResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListListenersResult::getNextToken()const
{
	return nextToken_;
}

int ListListenersResult::getMaxResults()const
{
	return maxResults_;
}

