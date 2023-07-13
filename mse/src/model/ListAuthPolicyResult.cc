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

#include <alibabacloud/mse/model/ListAuthPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ListAuthPolicyResult::ListAuthPolicyResult() :
	ServiceResult()
{}

ListAuthPolicyResult::ListAuthPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAuthPolicyResult::~ListAuthPolicyResult()
{}

void ListAuthPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalSize"].isNull())
		data_.totalSize = std::stoi(dataNode["TotalSize"].asString());
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	auto allResultNode = dataNode["Result"]["Policy"];
	for (auto dataNodeResultPolicy : allResultNode)
	{
		Data::Policy policyObject;
		if(!dataNodeResultPolicy["Status"].isNull())
			policyObject.status = std::stoi(dataNodeResultPolicy["Status"].asString());
		if(!dataNodeResultPolicy["NamespaceId"].isNull())
			policyObject.namespaceId = dataNodeResultPolicy["NamespaceId"].asString();
		if(!dataNodeResultPolicy["Protocol"].isNull())
			policyObject.protocol = dataNodeResultPolicy["Protocol"].asString();
		if(!dataNodeResultPolicy["AccountId"].isNull())
			policyObject.accountId = dataNodeResultPolicy["AccountId"].asString();
		if(!dataNodeResultPolicy["Source"].isNull())
			policyObject.source = dataNodeResultPolicy["Source"].asString();
		if(!dataNodeResultPolicy["RegionId"].isNull())
			policyObject.regionId = dataNodeResultPolicy["RegionId"].asString();
		if(!dataNodeResultPolicy["AppName"].isNull())
			policyObject.appName = dataNodeResultPolicy["AppName"].asString();
		if(!dataNodeResultPolicy["AppId"].isNull())
			policyObject.appId = dataNodeResultPolicy["AppId"].asString();
		if(!dataNodeResultPolicy["Name"].isNull())
			policyObject.name = dataNodeResultPolicy["Name"].asString();
		if(!dataNodeResultPolicy["Id"].isNull())
			policyObject.id = std::stoi(dataNodeResultPolicy["Id"].asString());
		if(!dataNodeResultPolicy["Enable"].isNull())
			policyObject.enable = dataNodeResultPolicy["Enable"].asString() == "true";
		if(!dataNodeResultPolicy["AuthType"].isNull())
			policyObject.authType = std::stoi(dataNodeResultPolicy["AuthType"].asString());
		if(!dataNodeResultPolicy["K8sNamespace"].isNull())
			policyObject.k8sNamespace = dataNodeResultPolicy["K8sNamespace"].asString();
		auto allAuthRuleNode = dataNodeResultPolicy["AuthRule"]["AuthRuleItem"];
		for (auto dataNodeResultPolicyAuthRuleAuthRuleItem : allAuthRuleNode)
		{
			Data::Policy::AuthRuleItem authRuleObject;
			if(!dataNodeResultPolicyAuthRuleAuthRuleItem["Black"].isNull())
				authRuleObject.black = dataNodeResultPolicyAuthRuleAuthRuleItem["Black"].asString() == "true";
			if(!dataNodeResultPolicyAuthRuleAuthRuleItem["Path"].isNull())
				authRuleObject.path = dataNodeResultPolicyAuthRuleAuthRuleItem["Path"].asString();
			if(!dataNodeResultPolicyAuthRuleAuthRuleItem["AuthType"].isNull())
				authRuleObject.authType = std::stoi(dataNodeResultPolicyAuthRuleAuthRuleItem["AuthType"].asString());
			auto methodNode = value["Method"];
			if(!methodNode["Version"].isNull())
				authRuleObject.method.version = methodNode["Version"].asString();
			if(!methodNode["ServiceName"].isNull())
				authRuleObject.method.serviceName = methodNode["ServiceName"].asString();
			if(!methodNode["Name"].isNull())
				authRuleObject.method.name = methodNode["Name"].asString();
			if(!methodNode["Group"].isNull())
				authRuleObject.method.group = methodNode["Group"].asString();
			if(!methodNode["ReturnType"].isNull())
				authRuleObject.method.returnType = methodNode["ReturnType"].asString();
				auto allParameterTypes = methodNode["ParameterTypes"]["ParameterTypes"];
				for (auto value : allParameterTypes)
					authRuleObject.method.parameterTypes.push_back(value.asString());
			auto allAppIds = value["AppIds"]["AppIds"];
			for (auto value : allAppIds)
				authRuleObject.appIds.push_back(value.asString());
			auto allK8sNamespaces = value["K8sNamespaces"]["K8sNamespaces"];
			for (auto value : allK8sNamespaces)
				authRuleObject.k8sNamespaces.push_back(value.asString());
			policyObject.authRule.push_back(authRuleObject);
		}
		data_.result.push_back(policyObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListAuthPolicyResult::getMessage()const
{
	return message_;
}

int ListAuthPolicyResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListAuthPolicyResult::Data ListAuthPolicyResult::getData()const
{
	return data_;
}

int ListAuthPolicyResult::getCode()const
{
	return code_;
}

bool ListAuthPolicyResult::getSuccess()const
{
	return success_;
}

