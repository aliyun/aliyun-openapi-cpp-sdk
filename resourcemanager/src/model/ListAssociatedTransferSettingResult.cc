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

#include <alibabacloud/resourcemanager/model/ListAssociatedTransferSettingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceManager;
using namespace AlibabaCloud::ResourceManager::Model;

ListAssociatedTransferSettingResult::ListAssociatedTransferSettingResult() :
	ServiceResult()
{}

ListAssociatedTransferSettingResult::ListAssociatedTransferSettingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAssociatedTransferSettingResult::~ListAssociatedTransferSettingResult()
{}

void ListAssociatedTransferSettingResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto associatedTransferSettingNode = value["AssociatedTransferSetting"];
	if(!associatedTransferSettingNode["AccountId"].isNull())
		associatedTransferSetting_.accountId = associatedTransferSettingNode["AccountId"].asString();
	if(!associatedTransferSettingNode["Status"].isNull())
		associatedTransferSetting_.status = associatedTransferSettingNode["Status"].asString();
	if(!associatedTransferSettingNode["EnablePartialRule"].isNull())
		associatedTransferSetting_.enablePartialRule = associatedTransferSettingNode["EnablePartialRule"].asString();
	if(!associatedTransferSettingNode["EnableExistingResourcesTransfer"].isNull())
		associatedTransferSetting_.enableExistingResourcesTransfer = associatedTransferSettingNode["EnableExistingResourcesTransfer"].asString();
	auto allRuleSettingsNode = associatedTransferSettingNode["RuleSettings"]["RuleSetting"];
	for (auto associatedTransferSettingNodeRuleSettingsRuleSetting : allRuleSettingsNode)
	{
		AssociatedTransferSetting::RuleSetting ruleSettingObject;
		if(!associatedTransferSettingNodeRuleSettingsRuleSetting["AssociatedResourceType"].isNull())
			ruleSettingObject.associatedResourceType = associatedTransferSettingNodeRuleSettingsRuleSetting["AssociatedResourceType"].asString();
		if(!associatedTransferSettingNodeRuleSettingsRuleSetting["MasterResourceType"].isNull())
			ruleSettingObject.masterResourceType = associatedTransferSettingNodeRuleSettingsRuleSetting["MasterResourceType"].asString();
		if(!associatedTransferSettingNodeRuleSettingsRuleSetting["AssociatedService"].isNull())
			ruleSettingObject.associatedService = associatedTransferSettingNodeRuleSettingsRuleSetting["AssociatedService"].asString();
		if(!associatedTransferSettingNodeRuleSettingsRuleSetting["MasterService"].isNull())
			ruleSettingObject.masterService = associatedTransferSettingNodeRuleSettingsRuleSetting["MasterService"].asString();
		if(!associatedTransferSettingNodeRuleSettingsRuleSetting["TriggerType"].isNull())
			ruleSettingObject.triggerType = associatedTransferSettingNodeRuleSettingsRuleSetting["TriggerType"].asString();
		if(!associatedTransferSettingNodeRuleSettingsRuleSetting["RuleId"].isNull())
			ruleSettingObject.ruleId = associatedTransferSettingNodeRuleSettingsRuleSetting["RuleId"].asString();
		if(!associatedTransferSettingNodeRuleSettingsRuleSetting["Status"].isNull())
			ruleSettingObject.status = associatedTransferSettingNodeRuleSettingsRuleSetting["Status"].asString();
		associatedTransferSetting_.ruleSettings.push_back(ruleSettingObject);
	}

}

ListAssociatedTransferSettingResult::AssociatedTransferSetting ListAssociatedTransferSettingResult::getAssociatedTransferSetting()const
{
	return associatedTransferSetting_;
}

