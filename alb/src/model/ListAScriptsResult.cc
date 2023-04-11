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

#include <alibabacloud/alb/model/ListAScriptsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alb;
using namespace AlibabaCloud::Alb::Model;

ListAScriptsResult::ListAScriptsResult() :
	ServiceResult()
{}

ListAScriptsResult::ListAScriptsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAScriptsResult::~ListAScriptsResult()
{}

void ListAScriptsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAScriptsNode = value["AScripts"]["AScript"];
	for (auto valueAScriptsAScript : allAScriptsNode)
	{
		AScript aScriptsObject;
		if(!valueAScriptsAScript["AScriptId"].isNull())
			aScriptsObject.aScriptId = valueAScriptsAScript["AScriptId"].asString();
		if(!valueAScriptsAScript["AScriptName"].isNull())
			aScriptsObject.aScriptName = valueAScriptsAScript["AScriptName"].asString();
		if(!valueAScriptsAScript["Priority"].isNull())
			aScriptsObject.priority = std::stol(valueAScriptsAScript["Priority"].asString());
		if(!valueAScriptsAScript["Position"].isNull())
			aScriptsObject.position = valueAScriptsAScript["Position"].asString();
		if(!valueAScriptsAScript["Enabled"].isNull())
			aScriptsObject.enabled = valueAScriptsAScript["Enabled"].asString() == "true";
		if(!valueAScriptsAScript["ScriptContent"].isNull())
			aScriptsObject.scriptContent = valueAScriptsAScript["ScriptContent"].asString();
		if(!valueAScriptsAScript["AScriptStatus"].isNull())
			aScriptsObject.aScriptStatus = valueAScriptsAScript["AScriptStatus"].asString();
		if(!valueAScriptsAScript["ListenerId"].isNull())
			aScriptsObject.listenerId = valueAScriptsAScript["ListenerId"].asString();
		if(!valueAScriptsAScript["LoadBalancerId"].isNull())
			aScriptsObject.loadBalancerId = valueAScriptsAScript["LoadBalancerId"].asString();
		if(!valueAScriptsAScript["ExtAttributeEnabled"].isNull())
			aScriptsObject.extAttributeEnabled = valueAScriptsAScript["ExtAttributeEnabled"].asString() == "true";
		auto allExtAttributesNode = valueAScriptsAScript["ExtAttributes"]["ExtAttribute"];
		for (auto valueAScriptsAScriptExtAttributesExtAttribute : allExtAttributesNode)
		{
			AScript::ExtAttribute extAttributesObject;
			if(!valueAScriptsAScriptExtAttributesExtAttribute["AttributeKey"].isNull())
				extAttributesObject.attributeKey = valueAScriptsAScriptExtAttributesExtAttribute["AttributeKey"].asString();
			if(!valueAScriptsAScriptExtAttributesExtAttribute["AttributeValue"].isNull())
				extAttributesObject.attributeValue = valueAScriptsAScriptExtAttributesExtAttribute["AttributeValue"].asString();
			aScriptsObject.extAttributes.push_back(extAttributesObject);
		}
		aScripts_.push_back(aScriptsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

int ListAScriptsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListAScriptsResult::getNextToken()const
{
	return nextToken_;
}

int ListAScriptsResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListAScriptsResult::AScript> ListAScriptsResult::getAScripts()const
{
	return aScripts_;
}

